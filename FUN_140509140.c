
void FUN_140509140(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong local_98 [7];
  undefined1 local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined ***local_20;
  
  iVar1 = *(int *)(param_1 + 0x2938);
  iVar4 = *(int *)(param_1 + 0x293c) + -1;
  iVar2 = *(int *)(param_1 + 0x30d0);
  iVar7 = 0;
  if (-1 < iVar4) {
    iVar7 = iVar4;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x28f0) + 0x1d8);
  if ((param_2 ^ 1) == 0) {
    iVar6 = iVar1 + -1;
    *(int *)(param_1 + 0x2938) = iVar6;
    if (iVar6 < 0) {
      *(int *)(param_1 + 0x2938) = iVar7;
      iVar6 = iVar7;
    }
  }
  else {
    iVar6 = iVar1 + 1;
    *(int *)(param_1 + 0x2938) = iVar6;
    if (iVar6 == *(int *)(param_1 + 0x293c)) {
      *(undefined4 *)(param_1 + 0x2938) = 0;
      iVar6 = 0;
    }
  }
  if (iVar1 == iVar6) {
    return;
  }
  FUN_140509a10(param_1);
  lVar3 = DAT_1451c4640;
  if ((*(int *)(param_1 + 0x2938) == iVar7) && ((param_2 ^ 1) == 0)) {
    if ((*(byte *)(param_1 + 0xc) & 0xe) == 0) goto LAB_14050938a;
    if ((*(char *)(DAT_1451c4640 + 0x30) != '\0') || (DAT_1451c4108 != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_1451c4640 + 8));
    }
    local_a0 = (longlong *)0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_60 = 0;
    uVar5 = FUN_140508560(lVar3);
    FUN_141ae9150(local_d8,param_1,uVar5);
    local_58 = &PTR_LAB_142fa5ad0;
    uStack_e0 = (iVar2 - iVar4 * iVar7) - 1;
  }
  else {
    uStack_e0 = CONCAT31(uStack_e0._1_3_,param_2) ^ 1;
    if ((*(byte *)(param_1 + 0xc) & 0xe) == 0) goto LAB_14050938a;
    if ((*(char *)(DAT_1451c4640 + 0x30) != '\0') || (DAT_1451c4108 != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_1451c4640 + 8));
    }
    local_a0 = (longlong *)0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_60 = 0;
    uVar5 = FUN_140508560(lVar3);
    FUN_141ae9150(local_d8,param_1,uVar5);
    local_58 = &PTR_LAB_142fa5b00;
    iStack_dc = iVar4 + -1;
  }
  local_e8 = (undefined4)param_1;
  uStack_e4 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_20 = &local_58;
  local_50 = local_e8;
  uStack_4c = uStack_e4;
  uStack_48 = uStack_e0;
  iStack_44 = iStack_dc;
  FUN_14024b980(&local_58,local_d8);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])
              (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
  }
  FUN_140509dc0(lVar3 + 0x4f60,local_d8);
  if (local_98[3] != 0) {
    uVar5 = FUN_142229230();
    FUN_1422291d0(uVar5,local_98 + 3);
  }
  if (local_98[0] != 0) {
    uVar5 = FUN_142229230();
    FUN_1422291d0(uVar5,local_98);
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x20))
              (local_a0,CONCAT71((int7)((ulonglong)local_d8 >> 8),local_a0 != local_d8));
    local_a0 = (longlong *)0x0;
  }
  FUN_140246100(lVar3);
LAB_14050938a:
  FUN_14050a970(param_1);
  return;
}

