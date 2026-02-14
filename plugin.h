#pragma once

#ifdef __cplusplus
extern "C" {
#endif

__declspec(dllexport) void* plugin_init(const char* gameDir, void* reserved);
__declspec(dllexport) void plugin_fini(void);

#ifdef __cplusplus
}
#endif
