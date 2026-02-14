
undefined4
FUN_1427fa300(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  ulonglong uVar1;
  char cVar2;
  
  param_1[2] = param_2;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x30) + 0x590);
    param_1[0x33] = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
    if (uVar1 < uVar1 + 0x4000) {
      FUN_142c3d790(uVar1,0,0x4000);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    param_2 = param_1[2];
  }
  param_1[0x3c] = *(longlong *)(param_2 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 1;
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_1[2] + 0x40);
  cVar2 = FUN_1427fbc10(param_1,param_4,param_5,param_3,param_6,param_7);
  if (cVar2 != '\0') {
    FUN_1427fa3e0(param_1);
  }
  return *(undefined4 *)(*param_1 + 0x34);
}

