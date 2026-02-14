
undefined8 FUN_141afb9b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x790));
  uVar4 = 0;
  plVar1 = (longlong *)(param_1 + 0x4050);
  while ((plVar1[-1] != 0 || (*plVar1 != 0))) {
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    plVar1 = plVar1 + 2;
    if (3 < uVar3) {
      uVar2 = 0;
LAB_141afba04:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x790));
      return uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x4048 + uVar4 * 0x10) = param_2;
  *(undefined8 *)(param_1 + (uVar4 + 0x405) * 0x10) = param_3;
  uVar2 = 1;
  goto LAB_141afba04;
}

