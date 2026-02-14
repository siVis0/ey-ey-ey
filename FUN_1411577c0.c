
void FUN_1411577c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_res18;
  
  if (param_3 != 0) {
    *(undefined1 *)(*(longlong *)(param_3 + 0x29c8) + 0x173) = 0;
    if (((*(uint *)(param_3 + 0x2298) & 0x80000011) != 0) &&
       ((*(uint *)(param_3 + 0x2298) & 0x22) == 0)) {
      iVar3 = FUN_14115f130(param_3);
      iVar9 = 0;
      lVar8 = (longlong)*(int *)(DAT_14500ed30 + 0xcea8);
      if (0 < lVar8) {
        lVar7 = 0xaea8;
        do {
          lVar5 = FUN_14030f150(*(undefined8 *)(lVar7 + DAT_14500ed30));
          if (lVar5 != 0) {
            uVar1 = *(undefined4 *)(lVar5 + 0x30);
            iVar4 = FUN_1419751b0(uVar1,0);
            if (iVar3 == iVar4) {
              iVar4 = FUN_141976110(uVar1);
              if (*(int *)(param_3 + 0x28fc) == 0) {
                bVar10 = iVar4 == 1;
              }
              else {
                bVar10 = iVar4 == 0;
              }
              if (bVar10) {
                iVar9 = iVar9 + 1;
              }
            }
          }
          lVar7 = lVar7 + 8;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        if (iVar9 != 0) {
          FUN_1411602e0(param_3);
          return;
        }
      }
      uVar2 = DAT_1451c4640;
      local_res18 = 0;
      uVar6 = FUN_142244930(DAT_145012de0,0x1f9);
      FUN_14025b1c0(uVar2,1,1,uVar6,&local_res18);
    }
  }
  return;
}

