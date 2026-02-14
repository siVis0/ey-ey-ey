
void FUN_141b09290(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_c8 [160];
  
  uVar11 = (ulonglong)param_2;
  uVar13 = param_2;
  if (param_2 == 0x80) {
    uVar13 = *(uint *)(DAT_1451c46b8 + 0x549bc);
  }
  if (uVar13 < 2) {
    uVar12 = 0;
    uVar8 = uVar12;
    if (*(longlong *)(DAT_1451c46b8 + 600) != 0) {
      uVar8 = *(ulonglong *)(*(longlong *)(DAT_1451c46b8 + 600) + 0x10);
    }
    uVar7 = uVar12;
    if (*(longlong *)(DAT_1451c46b8 + 0x260) != 0) {
      uVar7 = *(ulonglong *)(*(longlong *)(DAT_1451c46b8 + 0x260) + 0x10);
    }
    if (uVar13 == 1) {
      if (uVar7 == 0) {
        return;
      }
      bVar1 = *(byte *)(uVar7 + 0xbff0);
    }
    else {
      if (uVar7 == 0) {
        return;
      }
      if (uVar8 == 0) {
        return;
      }
      if ((*(byte *)(uVar8 + 0xbff0) & 1) == 0) {
        return;
      }
      bVar1 = *(byte *)(uVar7 + 0xbff0);
    }
    if ((bVar1 & 1) != 0) {
      uVar8 = uVar11;
      if (param_2 == 0x80) {
        uVar8 = (ulonglong)*(uint *)(DAT_1451c46b8 + 0x549bc);
      }
      lVar10 = *(longlong *)(DAT_1451c46b8 + 600 + uVar8 * 8);
      if (((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 != 0)) &&
         (uVar13 = *(uint *)(lVar10 + 0xbfec), uVar8 = (ulonglong)uVar13, uVar13 != 0xffffffff)) {
        iVar6 = FUN_141328930(DAT_145013950 + 0xe0,0xc);
        bVar14 = iVar6 == 1;
        cVar4 = *(char *)(param_1 + 0x5837d0);
        if (bVar14 != (bool)*(char *)(param_1 + 0x5837d0)) {
          *(bool *)(param_1 + 0x5837d0) = bVar14;
          *(undefined1 *)(param_1 + 0x5837d1) = 1;
          cVar4 = bVar14;
        }
        if ((cVar4 != '\0') || (*(char *)(param_1 + 0x5837d1) != '\0')) {
          lVar10 = DAT_1451c46b8;
          uVar7 = uVar12;
          uVar13 = 0x10;
          if (param_2 == 0) {
            uVar7 = 0;
            uVar13 = 4;
          }
          do {
            bVar1 = *(byte *)(param_1 + 0x5837d0);
            uVar9 = uVar11;
            if (param_2 == 0x80) {
              uVar9 = (ulonglong)*(uint *)(lVar10 + 0x549bc);
            }
            lVar3 = *(longlong *)(lVar10 + 600 + uVar9 * 8);
            iVar6 = (int)uVar7;
            if (((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)) &&
               (cVar4 = FUN_1424bcac0(lVar3,uVar7), lVar10 = DAT_1451c46b8, cVar4 != '\0')) {
              lVar3 = *(longlong *)(DAT_1451c46b8 + 600 + uVar11 * 8);
              if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x10) == 0)) {
                bVar5 = 0;
              }
              else {
                bVar5 = (byte)(*(uint *)((longlong)iVar6 * 0x130 + 0x667c +
                                        *(longlong *)(lVar3 + 0x10)) >> 4) & 1;
              }
              if (bVar1 != bVar5) {
                uVar7 = uVar12;
                if (lVar3 != 0) {
                  uVar7 = *(ulonglong *)(lVar3 + 0x10);
                }
                lVar3 = *(longlong *)(DAT_1451c46b8 + 0x280);
                if ((uVar7 != 0) && (lVar3 != 0)) {
                  FUN_142198000(local_c8,(longlong)iVar6 * 0x130 + uVar7 + 0x66d8);
                  FUN_14255b0c0(lVar3,local_c8,bVar1);
                  FUN_142198100(local_c8);
                  lVar10 = DAT_1451c46b8;
                }
              }
            }
            uVar7 = (ulonglong)(iVar6 + 1U);
          } while (iVar6 + 1U < uVar13);
        }
        if (param_2 == 1) {
          uVar2 = *(undefined4 *)(param_1 + 0x54930 + uVar8 * 4);
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x54920 + uVar8 * 4);
        }
        lVar10 = FUN_141b7ff20(DAT_145013530,uVar2);
        uVar11 = uVar12;
        if (lVar10 != 0) {
          uVar11 = *(ulonglong *)(lVar10 + 0x48);
        }
        if (uVar11 != 0) {
          bVar1 = *(byte *)(uVar11 + 0x48);
          bVar5 = 0;
          if (*(longlong *)(DAT_1451c46b8 + 0x280) != 0) {
            cVar4 = FUN_14255a580();
            bVar5 = cVar4 != '\0';
            if (*(int *)(*(longlong *)(DAT_1451c46b8 + 0x280) + 0x24) == 1) {
              bVar5 = bVar5 | 2;
            }
          }
          if (bVar1 != bVar5) {
            if (param_2 == 1) {
              uVar2 = *(undefined4 *)(param_1 + 0x54930 + uVar8 * 4);
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0x54920 + uVar8 * 4);
            }
            lVar10 = FUN_141b7ff20(DAT_145013530,uVar2);
            if (lVar10 != 0) {
              if ((*(char *)(lVar10 + 0x40) == '\0') && (*(char *)(lVar10 + 0xc) == '\0')) {
                FUN_141318f10(lVar10);
              }
              uVar12 = *(ulonglong *)(lVar10 + 0x50);
              *(undefined1 *)(lVar10 + 0x40) = 1;
            }
            *(byte *)(uVar12 + 0x48) = bVar5;
          }
        }
      }
    }
  }
  return;
}

