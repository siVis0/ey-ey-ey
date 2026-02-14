
void FUN_140509dc0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_48 [7];
  longlong *local_10;
  
  *(longlong *)(param_1 + 0x4000) = *(longlong *)(param_1 + 0x4000) + 1;
  param_1 = *(longlong *)(param_1 + 0x4000) * 0x80 + param_1;
  local_10 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    local_10 = (longlong *)(**(code **)*puVar1)(puVar1,local_48);
  }
  FUN_14024b980(local_48,param_1 + -0x80);
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x20))
              (local_10,CONCAT71((int7)((ulonglong)local_48 >> 8),local_10 != local_48));
  }
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_1 + -0x40) != lVar2) {
    uVar3 = FUN_142229230();
    FUN_142229160(uVar3,lVar2,param_1 + -0x40);
  }
  lVar2 = *(longlong *)(param_2 + 0x58);
  if (*(longlong *)(param_1 + -0x28) != lVar2) {
    uVar3 = FUN_142229230();
    FUN_142229160(uVar3,lVar2,param_1 + -0x28);
  }
  *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + 0x78);
  return;
}

