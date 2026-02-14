
void FUN_14114fa30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_c8 [7];
  longlong *local_90;
  longlong local_88 [7];
  undefined1 local_50;
  undefined **local_48 [7];
  undefined ***local_10;
  
  lVar1 = DAT_1451c4640;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xc) & 0xe) != 0)) {
    if ((*(char *)(DAT_1451c4640 + 0x30) != '\0') || (DAT_1451c4108 != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_1451c4640 + 8));
    }
    local_90 = (longlong *)0x0;
    uVar6 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[6] = 0;
    local_50 = 0;
    if (*(int *)(lVar1 + 0x268) != 0) {
      do {
        plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x278) + uVar6 * 8);
        lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (*(int *)(lVar2 + 0x34) == DAT_14502be94) goto LAB_14114faeb;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar1 + 0x268));
    }
    plVar4 = (longlong *)0x0;
LAB_14114faeb:
    FUN_141ae9150(local_c8,param_1,plVar4);
    local_48[0] = &PTR_LAB_1432267f0;
    local_10 = local_48;
    FUN_14024b980(local_48,local_c8);
    if (local_10 != (undefined ***)0x0) {
      (*(code *)(*local_10)[4])
                (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
    }
    FUN_140509dc0(lVar1 + 0x4f60,local_c8);
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
    FUN_140246100(lVar1);
  }
  FUN_141adb4e0(DAT_1451c4640);
  return;
}

