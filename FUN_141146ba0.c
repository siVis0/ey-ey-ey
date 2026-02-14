
void FUN_141146ba0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_1418caa10(&local_38);
  local_38 = *(int *)(param_1 + 0x292c);
  if ((*(int *)(param_1 + 0x2920) == 2) && (*(uint *)(param_1 + 0x2930) < 0x4b)) {
    local_38 = *(uint *)(param_1 + 0x2930) + local_38;
  }
  uStack_34 = CONCAT31(uStack_34._1_3_,*(int *)(*(longlong *)(param_1 + 0x3590) + 0x240) != 0);
  iStack_30 = FID_conflict_atoi((char *)(param_1 + 0x36b8));
  local_28 = *(int *)(*(longlong *)(param_1 + 0x3588) + 0x240);
  *(undefined8 *)(param_1 + 0x1268c) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_1 + 0x12694) = CONCAT44(uStack_2c,iStack_30);
  local_28 = local_28 + 1;
  *(int *)(param_1 + 0x3668) = local_28;
  *(int *)(param_1 + 0x1269c) = local_28;
  *(undefined4 *)(param_1 + 0x126a0) = uStack_24;
  *(undefined4 *)(param_1 + 0x126a4) = uStack_20;
  *(undefined4 *)(param_1 + 0x126a8) = uStack_1c;
  *(undefined8 *)(param_1 + 0x126ac) = local_18;
  if (*(char *)(DAT_14500ed30 + 0xae3b) == '\0') {
    FUN_141b10600(DAT_1451c46b8,(undefined8 *)(param_1 + 0x1268c),0,1);
    lVar2 = DAT_14500ed30;
    uVar1 = *(undefined4 *)(param_1 + 0x3668);
    *(undefined4 *)(DAT_14500ed30 + 0x29eb8) = *(undefined4 *)(DAT_14500ed30 + 0x29eb4);
    *(undefined4 *)(lVar2 + 0x29eb4) = uVar1;
  }
  cVar3 = FUN_14114ffe0(param_1,*(undefined4 *)(param_1 + 0x28fc));
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x2918) == 0) {
      FUN_141143e20();
    }
    else {
      FUN_141143fb0(param_1,0xffffffff);
    }
    FUN_141144920(param_1,*(undefined4 *)(param_1 + 0x28fc));
    return;
  }
  return;
}

