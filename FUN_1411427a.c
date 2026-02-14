
void FUN_1411427a0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_c8 [7];
  longlong *local_90;
  longlong local_88 [7];
  undefined1 local_50;
  undefined **local_48;
  longlong local_40;
  undefined ***local_10;
  
  lVar2 = DAT_1451c4640;
  if (((*param_3 == 0) && (lVar1 = *(longlong *)(param_1 + 8), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 0xc) & 0xe) != 0)) {
    if ((*(char *)(DAT_1451c4640 + 0x30) != '\0') || (DAT_1451c4108 != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_1451c4640 + 8));
    }
    local_90 = (longlong *)0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_50 = 0;
    uVar3 = FUN_141031d90(lVar2);
    FUN_141ae9150(local_c8,lVar1,uVar3);
    local_48 = &PTR_LAB_143226640;
    local_10 = &local_48;
    local_40 = lVar1;
    FUN_14024b980(&local_48,local_c8);
    if (local_10 != (undefined ***)0x0) {
      (*(code *)(*local_10)[4])
                (local_10,CONCAT71((int7)((ulonglong)&local_48 >> 8),local_10 != &local_48));
    }
    FUN_140509dc0(lVar2 + 0x4f60,local_c8);
    if (local_88[3] != 0) {
      uVar3 = FUN_142229230();
      FUN_1422291d0(uVar3,local_88 + 3);
    }
    if (local_88[0] != 0) {
      uVar3 = FUN_142229230();
      FUN_1422291d0(uVar3,local_88);
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x20))
                (local_90,CONCAT71((int7)((ulonglong)local_c8 >> 8),local_90 != local_c8));
      local_90 = (longlong *)0x0;
    }
    FUN_140246100(lVar2);
  }
  return;
}

