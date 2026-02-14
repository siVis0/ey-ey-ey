
void FUN_141d984e0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1418a65c0(*(undefined4 *)(param_1 + 0x2d38));
  lVar4 = FUN_1418a6d40(*(undefined4 *)(param_1 + 0x2d38));
  iVar1 = *(int *)(param_1 + 0x2d40);
  if (iVar1 != param_2) {
    if (iVar1 != -1) {
      FUN_140b73110(*(undefined8 *)
                     (param_1 + 0x2d48 + (longlong)*(int *)(lVar4 + (longlong)iVar1 * 0x18) * 0x10),
                    7);
    }
    if (param_2 != -1) {
      FUN_140b73110(*(undefined8 *)
                     (param_1 + 0x2d48 + (longlong)*(int *)(lVar4 + (longlong)param_2 * 0x18) * 0x10
                     ),5);
    }
    *(int *)(param_1 + 0x2d40) = param_2;
  }
  if (param_2 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)
             (lVar3 + (ulonglong)*(uint *)(lVar4 + 8 + (longlong)param_2 * 0x18) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x28f0) = uVar2;
  FUN_141d96880(param_1);
  return;
}

