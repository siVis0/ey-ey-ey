
void FUN_141ae9150(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0x70) = param_2;
  if (*(longlong *)(param_1 + 0x40) != param_2) {
    uVar1 = FUN_142229230();
    FUN_142229160(uVar1,param_2,param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x58) != param_3) {
    uVar1 = FUN_142229230();
    FUN_142229160(uVar1,param_3,param_1 + 0x58);
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}

