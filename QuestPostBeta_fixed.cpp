// QuestPostBeta_fixed.cpp
// MHW x64 plugin: captures QuestSession* at MHW.exe+1AFBA2C and posts quest on F10 without UI.
//
// Notes:
// - Mid-function hook at +1AFBA2C is implemented with a tiny trampoline patch.
// - F10 only arms a request from a worker thread; actual post runs on game thread from capture hook.
// - Update RVAs below for game version changes.

#include <windows.h>
#include <cstdint>
#include <cstdio>
#include <cstdarg>
#include <cstring>
#include <string>
#include <atomic>

#include "plugin.h"

static HMODULE gModule = nullptr;
static FILE* gLog = nullptr;
static HANDLE gInputThread = nullptr;
static std::atomic<bool> gRun{ false };
static std::atomic<bool> gPendingPost{ false };
static std::atomic_uintptr_t gQuestSession{ 0 };

struct Config {
    int questId = 0;
    int players = 1;
    int passEnabled = 0;
    int passcode = 0;
    int verbose = 1;
    uint32_t rvaBuildPost = 0x1146BA0;
    uint32_t rvaSendPost = 0;          // set from decompile if unknown
    uint32_t rvaGlobalBase = 0;        // DAT_Global base; gate reads base + 0xAE3B
};
static Config gCfg;

static uintptr_t ExeBase() {
    return reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
}

static void Log(const char* fmt, ...) {
    if (!gLog) return;
    char buf[1024]{};
    va_list ap;
    va_start(ap, fmt);
    std::vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    std::fprintf(gLog, "%s\n", buf);
    std::fflush(gLog);
}

static std::string DllDir() {
    char path[MAX_PATH]{};
    GetModuleFileNameA(gModule, path, MAX_PATH);
    std::string s = path;
    const auto p = s.find_last_of("\\/");
    if (p != std::string::npos) s.resize(p);
    return s;
}

static std::string IniPath() { return DllDir() + "\\QuestPostBeta.ini"; }
static std::string LogPath() { return DllDir() + "\\QuestPostBeta.log"; }

static uint32_t ReadIniHex(const char* section, const char* key, uint32_t defVal, const char* iniPath) {
    char tmp[64]{};
    GetPrivateProfileStringA(section, key, "", tmp, static_cast<DWORD>(sizeof(tmp)), iniPath);
    if (tmp[0] == '\0') return defVal;
    uint32_t v = defVal;
    if (std::sscanf(tmp, "%x", &v) == 1) return v;
    if (std::sscanf(tmp, "0x%x", &v) == 1) return v;
    return defVal;
}

static bool IsCanonicalUserPtr(uintptr_t p) {
    if (p < 0x10000ull) return false;
    if (p > 0x00007FFFFFFFFFFFull) return false;
    return true;
}

static void LoadConfig() {
    const auto ini = IniPath();
    gCfg.questId = GetPrivateProfileIntA("QuestPost", "QuestId", gCfg.questId, ini.c_str());
    gCfg.players = GetPrivateProfileIntA("QuestPost", "Players", gCfg.players, ini.c_str());
    gCfg.passEnabled = GetPrivateProfileIntA("QuestPost", "PassEnabled", gCfg.passEnabled, ini.c_str());
    gCfg.passcode = GetPrivateProfileIntA("QuestPost", "Passcode", gCfg.passcode, ini.c_str());
    gCfg.verbose = GetPrivateProfileIntA("QuestPost", "Verbose", gCfg.verbose, ini.c_str());

    gCfg.rvaBuildPost = ReadIniHex("Addresses", "BuildPostRva", gCfg.rvaBuildPost, ini.c_str());
    gCfg.rvaSendPost = ReadIniHex("Addresses", "SendPostRva", gCfg.rvaSendPost, ini.c_str());
    gCfg.rvaGlobalBase = ReadIniHex("Addresses", "GlobalBaseRva", gCfg.rvaGlobalBase, ini.c_str());

    if (gCfg.players < 1) gCfg.players = 1;
    if (gCfg.players > 4) gCfg.players = 4;

    Log("[CFG] QuestId=%d Players=%d PassEnabled=%d Passcode=%d Verbose=%d", gCfg.questId, gCfg.players, gCfg.passEnabled, gCfg.passcode, gCfg.verbose);
    Log("[CFG] RVA Build=0x%X Send=0x%X GlobalBase=0x%X", gCfg.rvaBuildPost, gCfg.rvaSendPost, gCfg.rvaGlobalBase);
}

// session layout offsets from reversing notes
static constexpr uintptr_t OFF_QuestId = 0x292C;
static constexpr uintptr_t OFF_PlayerSelPtr = 0x3588; // -> +0x240 (selector)
static constexpr uintptr_t OFF_PassStr = 0x36B8;      // ASCII password buffer used by atoi in builder
static constexpr uintptr_t OFF_GateInExpedition = 0xAE3B; // DAT_Global + 0xAE3B

using BuildPostFn = void(__fastcall*)(void* sess);
using SendPostFn = void(__fastcall*)(void* sess);

static bool WriteQuestFields(uintptr_t sess) {
    *reinterpret_cast<uint32_t*>(sess + OFF_QuestId) = static_cast<uint32_t>(gCfg.questId);

    uintptr_t playerSel = *reinterpret_cast<uintptr_t*>(sess + OFF_PlayerSelPtr);
    if (!playerSel) {
        Log("[POST] player selector null @ session+0x%llX", static_cast<unsigned long long>(OFF_PlayerSelPtr));
        return false;
    }
    *reinterpret_cast<uint32_t*>(playerSel + 0x240) = static_cast<uint32_t>(gCfg.players - 1);

    char passBuf[32]{};
    if (gCfg.passEnabled) {
        std::snprintf(passBuf, sizeof(passBuf), "%d", gCfg.passcode);
    } else {
        std::snprintf(passBuf, sizeof(passBuf), "0");
    }
    std::strncpy(reinterpret_cast<char*>(sess + OFF_PassStr), passBuf, 31);
    reinterpret_cast<char*>(sess + OFF_PassStr)[31] = '\0';
    return true;
}

static void TryPostNowOnGameThread(uintptr_t sess) {
    if (!IsCanonicalUserPtr(sess)) {
        Log("[POST] Invalid session pointer: 0x%p", reinterpret_cast<void*>(sess));
        return;
    }
    if (gCfg.questId <= 0) {
        Log("[POST] QuestId invalid/zero.");
        return;
    }
    if (!gCfg.rvaBuildPost || !gCfg.rvaSendPost || !gCfg.rvaGlobalBase) {
        Log("[POST] Missing address config. Need BuildPostRva, SendPostRva, GlobalBaseRva in INI.");
        return;
    }

    const uintptr_t base = ExeBase();
    auto* gate = reinterpret_cast<uint8_t*>(base + gCfg.rvaGlobalBase + OFF_GateInExpedition);
    if (*gate != 0) {
        Log("[POST] Not in hub (gate=1), refusing post.");
        return;
    }

    if (!WriteQuestFields(sess)) {
        Log("[POST] Failed writing quest fields.");
        return;
    }

    auto Build = reinterpret_cast<BuildPostFn>(base + gCfg.rvaBuildPost);
    auto Send = reinterpret_cast<SendPostFn>(base + gCfg.rvaSendPost);

    Build(reinterpret_cast<void*>(sess));
    Send(reinterpret_cast<void*>(sess));

    Log("[POST] Success. sess=%p questId=%d players=%d passEnabled=%d", reinterpret_cast<void*>(sess), gCfg.questId, gCfg.players, gCfg.passEnabled);
}

// -------- Mid-hook @ MHW.exe+1AFBA2C --------
struct MidHook {
    uint8_t* target = nullptr;
    uint8_t original[15]{};
    uint8_t* stub = nullptr;
    bool installed = false;
} gMid;

static bool WriteMem(void* dst, const void* src, size_t len) {
    DWORD old = 0;
    if (!VirtualProtect(dst, len, PAGE_EXECUTE_READWRITE, &old)) return false;
    std::memcpy(dst, src, len);
    FlushInstructionCache(GetCurrentProcess(), dst, len);
    DWORD dummy = 0;
    VirtualProtect(dst, len, old, &dummy);
    return true;
}

static void __fastcall OnCaptureGameThread(uintptr_t sessFromRbp) {
    if (!IsCanonicalUserPtr(sessFromRbp)) return;

    const uintptr_t prev = gQuestSession.exchange(sessFromRbp, std::memory_order_acq_rel);
    if (prev != sessFromRbp && gCfg.verbose) {
        Log("[CAP] QuestSession changed: %p -> %p", reinterpret_cast<void*>(prev), reinterpret_cast<void*>(sessFromRbp));
    }

    if (gPendingPost.exchange(false, std::memory_order_acq_rel)) {
        TryPostNowOnGameThread(sessFromRbp);
    }
}

static bool InstallMidHook() {
    if (gMid.installed) return true;

    static const uint8_t expected[15] = {
        0x48,0x89,0xAC,0xC7,0x48,0x40,0x00,0x00,
        0x49,0x8D,0x81,0x05,0x04,0x00,0x00
    };

    const uintptr_t base = ExeBase();
    gMid.target = reinterpret_cast<uint8_t*>(base + 0x1AFBA2C);
    std::memcpy(gMid.original, gMid.target, sizeof(gMid.original));
    if (std::memcmp(gMid.original, expected, sizeof(expected)) != 0) {
        Log("[HOOK] Signature mismatch at %p (version mismatch).", gMid.target);
        return false;
    }

    gMid.stub = reinterpret_cast<uint8_t*>(VirtualAlloc(nullptr, 256, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!gMid.stub) return false;

    uint8_t* p = gMid.stub;

    // mov r10, rax
    *p++ = 0x49; *p++ = 0x89; *p++ = 0xC2;
    // sub rsp, 0x28
    *p++ = 0x48; *p++ = 0x83; *p++ = 0xEC; *p++ = 0x28;
    // mov rcx, rbp
    *p++ = 0x48; *p++ = 0x89; *p++ = 0xE9;
    // mov rax, imm64 (&OnCaptureGameThread)
    *p++ = 0x48; *p++ = 0xB8;
    {
        uintptr_t fn = reinterpret_cast<uintptr_t>(&OnCaptureGameThread);
        std::memcpy(p, &fn, 8);
        p += 8;
    }
    // call rax
    *p++ = 0xFF; *p++ = 0xD0;
    // add rsp, 0x28
    *p++ = 0x48; *p++ = 0x83; *p++ = 0xC4; *p++ = 0x28;
    // mov rax, r10
    *p++ = 0x4C; *p++ = 0x89; *p++ = 0xD0;

    // original bytes
    std::memcpy(p, expected, sizeof(expected));
    p += sizeof(expected);

    // mov rax, ret
    *p++ = 0x48; *p++ = 0xB8;
    {
        uintptr_t ret = reinterpret_cast<uintptr_t>(gMid.target) + 15;
        std::memcpy(p, &ret, 8);
        p += 8;
    }
    // jmp rax
    *p++ = 0xFF; *p++ = 0xE0;

    // target patch: mov rax, stub ; jmp rax ; nop nop nop
    uint8_t patch[15]{};
    patch[0] = 0x48; patch[1] = 0xB8;
    {
        uintptr_t s = reinterpret_cast<uintptr_t>(gMid.stub);
        std::memcpy(&patch[2], &s, 8);
    }
    patch[10] = 0xFF; patch[11] = 0xE0;
    patch[12] = 0x90; patch[13] = 0x90; patch[14] = 0x90;

    if (!WriteMem(gMid.target, patch, sizeof(patch))) {
        Log("[HOOK] WriteMem failed.");
        return false;
    }

    gMid.installed = true;
    Log("[HOOK] Installed mid-hook at %p (stub=%p)", gMid.target, gMid.stub);
    return true;
}

static void RemoveMidHook() {
    if (!gMid.installed) return;
    WriteMem(gMid.target, gMid.original, sizeof(gMid.original));
    gMid.installed = false;
    Log("[HOOK] Removed.");
}

static DWORD WINAPI InputThreadProc(LPVOID) {
    Log("[TH] Input thread running. Press F10 to queue post.");
    while (gRun.load(std::memory_order_relaxed)) {
        if (GetAsyncKeyState(VK_F10) & 1) {
            gPendingPost.store(true, std::memory_order_release);
            Log("[TH] F10 pressed, queued post request.");
        }
        Sleep(15);
    }
    return 0;
}

extern "C" __declspec(dllexport) void* plugin_init(const char* gameDir, void* reserved) {
    (void)reserved;

    fopen_s(&gLog, LogPath().c_str(), "w");
    if (gLog) {
        Log("[INIT] gameDir=%s", gameDir ? gameDir : "(null)");
    }

    LoadConfig();

    if (!InstallMidHook()) {
        Log("[INIT] mid-hook install failed.");
        return nullptr;
    }

    gRun.store(true, std::memory_order_relaxed);
    gInputThread = CreateThread(nullptr, 0, InputThreadProc, nullptr, 0, nullptr);
    Log("[INIT] OK");
    return nullptr;
}

extern "C" __declspec(dllexport) void plugin_fini(void) {
    Log("[FINI] begin");
    gRun.store(false, std::memory_order_relaxed);

    if (gInputThread) {
        WaitForSingleObject(gInputThread, 2000);
        CloseHandle(gInputThread);
        gInputThread = nullptr;
    }

    RemoveMidHook();

    if (gLog) {
        Log("[FINI] end");
        std::fclose(gLog);
        gLog = nullptr;
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) gModule = hModule;
    return TRUE;
}
