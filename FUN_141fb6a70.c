
void FUN_141fb6a70(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  bool bVar12;
  
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)((longlong)param_1 + 0x1d04);
  cVar4 = FUN_1413270f0(param_1 + 0x41c);
  if (cVar4 != '\0') {
    return;
  }
  cVar4 = '\x01';
  bVar12 = false;
  _guard_check_icall(param_1);
  iVar6 = *(int *)((longlong)param_1 + 0x1d04);
  if (iVar6 == 0) {
    *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xfffffffe | 2;
    (**(code **)(*param_1 + 0x278))(param_1);
    uVar8 = *(uint *)(param_1 + 0x453);
    uVar9 = (ulonglong)uVar8;
    if ((uVar8 & 0x1000000) != 0) {
      uVar9 = (ulonglong)(uVar8 | 0x10);
      *(uint *)(param_1 + 0x453) = uVar8 | 0x10;
      if (param_1[0x420] != 0) {
        uVar7 = FUN_142229230();
        FUN_142229160(uVar7,0);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x453);
      }
    }
    if (((uVar9 >> 0x1e & 1) != 0) && (*(char *)(DAT_14500ded0 + 0x204) == '\x01'))
    goto LAB_141fb712f;
    cVar4 = FUN_141adf9d0(DAT_1451c4640,param_1 + 0x3ac);
    if ((cVar4 == '\0') ||
       ((((byte)((uint)(int)param_1[0x453] >> 0x19) & 1) != 0 &&
        (cVar4 = FUN_141adfa40(DAT_1451c4640), cVar4 != '\0')))) {
      bVar2 = false;
      if (((*(uint *)(param_1 + 0x453) >> 10 & 1) == 0) &&
         (((*(uint *)(param_1 + 0x453) & 0x100) != 0 &&
          (cVar4 = FUN_141adf560(DAT_1451c4640), cVar4 == '\0')))) {
        bVar2 = true;
      }
      uVar8 = *(uint *)(param_1 + 0x453);
      if (((uVar8 & 0xa00) == 0xa00) && (*(char *)(DAT_1451c42b8 + 0xd2ee) == '\0')) {
        bVar2 = true;
      }
      if (((uVar8 & 0x30000) == 0x30000) && (*(char *)(DAT_1451c4640 + 0x146c9) == '\0')) {
        bVar2 = true;
      }
      if ((((byte)(uVar8 >> 0x1b) & 1) != 0) &&
         ((cVar4 = FUN_141adf9d0(DAT_1451c4640,param_1 + 0x3ac), cVar4 == '\0' ||
          ((((byte)((uint)(int)param_1[0x453] >> 0x19) & 1) != 0 &&
           (cVar4 = FUN_141adfa40(DAT_1451c4640), cVar4 != '\0')))))) {
        bVar2 = true;
      }
      if (bVar2) {
        *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xf7fdfcff;
      }
      else if (((*(uint *)(param_1 + 0x453) & 0x8020300) != 0) ||
              ((*(uint *)(param_1 + 0x453) >> 4 & 1) == 0)) goto LAB_141fb712b;
      FUN_141fb79b0(param_1);
      bVar12 = true;
      cVar4 = FUN_141fb5aa0(param_1);
    }
    else {
LAB_141fb712b:
      cVar4 = '\x01';
    }
    goto LAB_141fb712f;
  }
  if (iVar6 == 1) {
    *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xfffffffd | 1;
    iVar6 = FUN_141fb4d10(param_1);
    bVar12 = iVar6 != 3;
    if (!bVar12) {
      *(undefined1 *)((longlong)param_1 + 0x22c1) = 0;
      FUN_141fb4b10(param_1,0);
    }
    (**(code **)(*param_1 + 0x280))(param_1);
    cVar4 = FUN_141fb5aa0(param_1);
    if (cVar4 != '\0') {
      if (((param_1[0x399] == 0) || ((*(uint *)(param_1 + 0x453) >> 0x13 & 1) != 0)) ||
         ((cVar5 = FUN_142353a70(param_1), cVar5 != '\0' &&
          (cVar5 = FUN_142353c00(param_1), cVar5 != '\0')))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      bVar3 = false;
      if ((*(uint *)(param_1 + 0x453) >> 0xe & 1) == 0) {
        bVar3 = bVar2;
      }
      if (bVar3) {
        *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xfff7ffff;
        if (param_1[0x39a] != 0) {
          (**(code **)(*param_1 + 0x1d0))(param_1);
        }
        (**(code **)(*param_1 + 0x2b0))(param_1);
        *(undefined4 *)((longlong)param_1 + 0x1d04) = 2;
      }
    }
    uVar8 = *(uint *)(param_1 + 0x453) >> 5;
    if (iVar6 == 1) {
      if ((uVar8 & 1) != 0) goto LAB_141fb6f62;
    }
    else {
      if ((uVar8 & 1) == 0) goto LAB_141fb712f;
LAB_141fb6f62:
      *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xf7fdfcff;
    }
    FUN_141fb55e0(param_1);
    goto LAB_141fb712f;
  }
  if (iVar6 != 2) {
    if (iVar6 == 3) {
      iVar6 = FUN_141fb4d10(param_1);
      bVar12 = iVar6 != 3;
      if (!bVar12) {
        *(undefined1 *)((longlong)param_1 + 0x22c1) = 0;
      }
      (**(code **)(*param_1 + 0x2a0))(param_1);
      uVar8 = *(uint *)(param_1 + 0x453);
      *(uint *)(param_1 + 0x453) = uVar8 | 3;
      if (((param_1[0x39b] == 0) || ((uVar8 >> 0x14 & 1) != 0)) ||
         ((cVar5 = FUN_142353a70(param_1), cVar5 != '\0' &&
          (cVar5 = FUN_142353c00(param_1,0), cVar5 != '\0')))) {
        *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xffefffff;
        (**(code **)(*param_1 + 0x2b8))(param_1);
        bVar12 = false;
        *(undefined1 *)((longlong)param_1 + 0x22c1) = 0;
      }
    }
    goto LAB_141fb712f;
  }
  FUN_140b72050(param_1 + 0x408,param_1);
  iVar6 = FUN_141fb4d10(param_1);
  bVar12 = iVar6 != 3;
  if (!bVar12) {
    *(undefined1 *)((longlong)param_1 + 0x22c1) = 0;
    FUN_141fb4b10(param_1,0);
  }
  uVar9 = 0;
  bVar2 = false;
  if (param_1[0x26e] == 0) {
LAB_141fb6c25:
    if ((int)param_1[0x3a0] == 1) goto LAB_141fb6c2e;
  }
  else {
    uVar10 = uVar9;
    do {
      cVar4 = *(char *)((longlong)param_1 + uVar10 * 0x28 + 0x494);
      cVar5 = FUN_140b87020(param_1[uVar10 * 5 + 0x8e]);
      *(char *)((longlong)param_1 + uVar10 * 0x28 + 0x494) = cVar5;
      if (cVar4 != cVar5) {
        bVar2 = true;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while (uVar10 < (ulonglong)param_1[0x26e]);
    if (!bVar2) goto LAB_141fb6c25;
LAB_141fb6c2e:
    *(undefined4 *)(param_1 + 0x452) = *(undefined4 *)((longlong)param_1 + 0x2294);
    *(undefined4 *)((longlong)param_1 + 0x2294) = 0xffffffff;
    uVar10 = uVar9;
    if (param_1[0x26e] != 0) {
      do {
        if ((*(int *)((longlong)param_1 + 0x2294) < (int)param_1[uVar10 * 5 + 0x92]) &&
           (cVar4 = FUN_140b87020(param_1[uVar10 * 5 + 0x8e]), cVar4 != '\0')) {
          *(int *)((longlong)param_1 + 0x2294) = (int)param_1[uVar10 * 5 + 0x92];
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
      } while (uVar10 < (ulonglong)param_1[0x26e]);
    }
    FUN_141fb4b60(param_1);
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  if ((*(char *)((longlong)param_1 + 0x22c1) == '\0') ||
     ((*(uint *)(param_1 + 0x453) >> 3 & 1) == 0)) {
LAB_141fb6d31:
    (**(code **)(*param_1 + 0x298))(param_1);
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0x204c) & 0xfffffffd) != 0) {
      if (param_1[0x26e] != 0) {
        do {
          lVar1 = param_1[uVar9 * 5 + 0x8e];
          if (((lVar1 == param_1[0x40b]) &&
              ((int)param_1[uVar9 * 5 + 0x92] == *(int *)((longlong)param_1 + 0x2294))) &&
             (*(char *)(lVar1 + 0x170) != '\0')) {
            *(undefined1 *)(lVar1 + 0x176) = 1;
            *(undefined1 *)(param_1[uVar9 * 5 + 0x8e] + 0x171) = 1;
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < (ulonglong)param_1[0x26e]);
      }
      goto LAB_141fb6d31;
    }
    cVar4 = FUN_142353c00(param_1,0);
    if (cVar4 == '\0') goto LAB_141fb6d31;
    if (param_1[0x26e] != 0) {
      do {
        if (((int)param_1[uVar9 * 5 + 0x92] == *(int *)((longlong)param_1 + 0x2294)) &&
           (*(char *)(param_1[uVar9 * 5 + 0x8e] + 0x170) != '\0')) {
          *(undefined1 *)(param_1[uVar9 * 5 + 0x8e] + 0x171) = 1;
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while (uVar9 < (ulonglong)param_1[0x26e]);
    }
    if ((iVar6 != 0) || ((*(uint *)(param_1 + 0x453) >> 5 & 1) != 0)) goto LAB_141fb6d31;
    (**(code **)(*param_1 + 0x290))(param_1);
  }
  cVar4 = FUN_141adf9a0(DAT_1451c4640);
  if ((((cVar4 != *(char *)((longlong)param_1 + 0x28e9)) ||
       (*(char *)((longlong)param_1 + 0x28ea) != '\0')) || ((char)param_1[0x45a] != '\0')) ||
     (cVar4 = FUN_1403125e0(param_1 + 0x459), cVar4 != '\0')) {
    FUN_140312a70(param_1 + 0x459);
  }
  uVar8 = *(uint *)(param_1 + 0x453);
  *(uint *)(param_1 + 0x453) = uVar8 & 0xfffffffd | 1;
  if ((iVar6 == 1) || ((uVar8 >> 5 & 1) != 0)) {
    if ((uVar8 >> 5 & 1) != 0) {
      *(uint *)(param_1 + 0x453) = uVar8 & 0xf7fdfcfd | 1;
    }
    FUN_141fb55e0(param_1);
  }
  cVar4 = '\x01';
LAB_141fb712f:
  cVar5 = *(char *)((longlong)param_1 + 0x22c1);
  if ((*(int *)((longlong)param_1 + 0x1d04) != 3) &&
     (*(char *)((longlong)param_1 + 0x22c2) != cVar5)) {
    FUN_141fb4b60(param_1);
  }
  *(char *)((longlong)param_1 + 0x22c2) = cVar5;
  *(undefined1 *)((longlong)param_1 + 0x22c1) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  uVar8 = *(uint *)(param_1 + 0x453);
  bVar11 = 0;
  if ((uVar8 >> 0xe & 1) != 0) {
    bVar12 = false;
    bVar11 = (byte)(uVar8 >> 0xf) & 1;
    uVar8 = uVar8 & 0xffff3fff;
    *(uint *)(param_1 + 0x453) = uVar8;
  }
  if ((uVar8 >> 0xd & 1) != 0) {
    bVar12 = true;
  }
  uVar8 = *(uint *)((longlong)param_1 + 0x14) | 0x10;
  if (!bVar12) {
    uVar8 = *(uint *)((longlong)param_1 + 0x14) & 0xffffffef;
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar8;
  if ((!bVar12) || (cVar4 == '\0')) {
    if ((bVar11 != 0) || (cVar4 == '\0')) {
      FUN_142355990(param_1);
    }
  }
  else {
    FUN_1423545f0(param_1);
  }
  if ((*(byte *)(param_1 + 0x453) & 1) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x229c) & 1) != 0) {
      *(undefined1 *)(DAT_1451c4640 + 0x1477d) = 1;
    }
    if (*(int *)((longlong)param_1 + 0x1d04) != 3) {
      uVar8 = *(uint *)(param_1 + 0x453);
      if ((uVar8 >> 0x15 & 1) != 0) {
        *(undefined1 *)(DAT_1451c4640 + 0x1476c) = 1;
        uVar8 = *(uint *)(param_1 + 0x453);
      }
      if ((uVar8 >> 0x1c & 1) != 0) {
        *(undefined1 *)(DAT_1451c4640 + 0x1476d) = 1;
        uVar8 = *(uint *)(param_1 + 0x453);
      }
      if ((uVar8 >> 0x16 & 1) != 0) {
        *(undefined1 *)(DAT_1451c4640 + 0x1476e) = 1;
        uVar8 = *(uint *)(param_1 + 0x453);
      }
      if ((uVar8 >> 0x17 & 1) != 0) {
        *(undefined1 *)(DAT_1451c4640 + 0x1476f) = 1;
      }
      if ((*(uint *)((longlong)param_1 + 0x229c) >> 0xc & 1) != 0) {
        *(undefined1 *)(DAT_1451c4640 + 0x1477f) = 1;
      }
    }
  }
  *(uint *)((longlong)param_1 + 0x229c) = *(uint *)((longlong)param_1 + 0x229c) & 0xfffffbff;
  return;
}

