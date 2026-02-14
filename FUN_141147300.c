
void FUN_141ad9d20(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined8 *local_res8;
  undefined8 local_res10;
  
  puVar10 = (undefined8 *)0x0;
  uVar7 = 0;
  puVar14 = puVar10;
  if (*(longlong *)(param_1 + 0xbd68) != 0) {
    do {
      lVar11 = (longlong)puVar14 * 0xb8 + param_1;
      puVar1 = (ulonglong *)(lVar11 + 0x8f68);
      puVar9 = (undefined8 *)*puVar1;
      if (((puVar9 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar9 + 0xc) & 0xe) != 0)) &&
         ((plVar2 = *(longlong **)(lVar11 + 0x9018), plVar2 == (longlong *)0x0 ||
          (local_res8 = puVar9, cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8),
          cVar3 != '\0')))) {
        if (((*(byte *)(lVar11 + 0x8f98) & 1) == 0) ||
           ((*(uint *)(*puVar1 + 0x2298) & 0x80000011) != 0)) {
          if (((*(uint *)(lVar11 + 0x8f98) >> 1 & 1) != 0) &&
             ((*(uint *)(*puVar1 + 0x2298) & 0x80000011) != 0)) {
            FUN_141fb7cc0(*puVar1,1);
          }
        }
        else {
          puVar9 = *(undefined8 **)(lVar11 + 0x8f80);
          if ((puVar9 == (undefined8 *)0x0) || ((*(byte *)((longlong)puVar9 + 0xc) & 0xe) == 0)) {
            puVar9 = puVar10;
          }
          FUN_141fb7cf0(*puVar1,puVar9);
        }
        plVar2 = *(longlong **)(lVar11 + 0x8fd8);
        if (plVar2 != (longlong *)0x0) {
          local_res8 = (undefined8 *)*puVar1;
          if ((local_res8 == (undefined8 *)0x0) ||
             ((*(byte *)((longlong)local_res8 + 0xc) & 0xe) == 0)) {
            local_res8 = puVar10;
          }
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
        }
        if (*puVar1 != 0) {
          uVar8 = FUN_142229230();
          FUN_142229160(uVar8,0,puVar1);
        }
      }
      puVar14 = (undefined8 *)(ulonglong)((int)puVar14 + 1);
    } while (puVar14 < *(undefined8 **)(param_1 + 0xbd68));
  }
  *(undefined8 *)(param_1 + 0xbd68) = 0;
  if (*(int *)(param_1 + 0x1438) != 0) {
    uVar6 = *(int *)(param_1 + 0x1438) - 1;
    lVar12 = param_1 + 0x438 + (ulonglong)uVar6 * 0x80;
    lVar11 = *(longlong *)(lVar12 + 0x58);
    if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0xc) & 0xe) != 0)) {
      if ((*(int *)(lVar11 + 0x1d04) != 3) || (*(int *)(lVar11 + 0x1d00) == 3)) goto LAB_141ad9ece;
      if (((*(char *)(lVar12 + 0x78) == '\0') ||
          ((*(longlong *)(lVar12 + 0x40) != 0 &&
           ((*(byte *)(*(longlong *)(lVar12 + 0x40) + 0xc) & 0xe) != 0)))) &&
         (*(longlong *)(lVar12 + 0x38) != 0)) {
        FUN_141ad3d20(lVar12,*(undefined8 *)(lVar12 + 0x70));
      }
      FUN_141adafa0(lVar12);
    }
    FUN_141add9e0(param_1 + 0x438,uVar6);
  }
LAB_141ad9ece:
  FUN_141add060(param_1);
  if (*(int *)(param_1 + 0x8f60) != 0) {
    puVar14 = puVar10;
    if (*(longlong *)(param_1 + 0x8f60) != 0) {
      do {
        lVar11 = (longlong)puVar14 * 0x80;
        if (((*(char *)(lVar11 + 0x4fd8 + param_1) == '\0') ||
            ((lVar12 = *(longlong *)(lVar11 + 0x4fa0 + param_1), lVar12 != 0 &&
             ((*(byte *)(lVar12 + 0xc) & 0xe) != 0)))) &&
           (plVar2 = *(longlong **)(lVar11 + 0x4f98 + param_1), plVar2 != (longlong *)0x0)) {
          local_res8 = *(undefined8 **)(lVar11 + 0x4fb8 + param_1);
          if ((local_res8 == (undefined8 *)0x0) ||
             ((*(byte *)((longlong)local_res8 + 0xc) & 0xe) == 0)) {
            local_res8 = puVar10;
          }
          local_res10 = *(undefined8 *)(lVar11 + 0x4fd0 + param_1);
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_res10,&local_res8);
        }
        plVar13 = (longlong *)(lVar11 + 0x4f60 + param_1);
        plVar2 = (longlong *)plVar13[7];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar13);
          plVar13[7] = 0;
        }
        if (plVar13[8] != 0) {
          uVar8 = FUN_142229230();
          FUN_142229160(uVar8,0,plVar13 + 8);
        }
        if (plVar13[0xb] != 0) {
          uVar8 = FUN_142229230();
          FUN_142229160(uVar8,0,plVar13 + 0xb);
        }
        puVar14 = (undefined8 *)(ulonglong)((int)puVar14 + 1);
        plVar13[0xe] = 0;
        *(undefined1 *)(plVar13 + 0xf) = 0;
      } while (puVar14 < *(undefined8 **)(param_1 + 0x8f60));
    }
    *(undefined8 *)(param_1 + 0x8f60) = 0;
  }
  if (*(int *)(param_1 + 0x13d50) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x13d78);
    if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0xc) & 0xe) != 0)) {
      FUN_141113ff0(lVar11,param_1 + 0x11550);
    }
    plVar2 = *(longlong **)(param_1 + 0x115d0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_1 + 0x11598));
      *(undefined8 *)(param_1 + 0x115d0) = 0;
    }
    FUN_141add7b0(param_1 + 0x11550,0);
  }
  lVar11 = *(longlong *)(param_1 + 0x13d60);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(longlong *)(lVar11 + 0x2c38) == 0 && ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146c0) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13d78);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146c1) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13d90);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146c2) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13da8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(longlong *)(lVar11 + 0x2c68) == 0 && ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146c4) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13dc0);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(longlong *)(lVar11 + 0x2c68) == 0 && ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146c5) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13dd8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146c6) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13df0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146c7) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13e98);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146c9) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13fd0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(int *)(lVar11 + 0x28f0) - 6U & 0xfffffffd) != 0;
  }
  *(bool *)(param_1 + 0x146ca) = bVar15;
  if ((*(longlong *)(param_1 + 0x13fd0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x13fd0) + 0xc) & 0xe) != 0)) {
    uVar7 = FUN_141d7da70();
  }
  *(undefined4 *)(param_1 + 0x14768) = uVar7;
  lVar11 = *(longlong *)(param_1 + 0x13fe8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146cb) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14000);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146cc) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14018);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146cd) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14030);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146ce) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x141e0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146cf) = bVar15;
  if ((*(longlong *)(param_1 + 0x14078) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x14078) + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_141e44780();
  }
  *(undefined1 *)(param_1 + 0x146d8) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13f70);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (*(char *)(lVar11 + 0x29bc) == '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146d0) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13f70);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar11 + 0x29bc);
  }
  *(undefined1 *)(param_1 + 0x146d1) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14090);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (*(longlong *)(lVar11 + 0x3588) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146d2) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x140a8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (cVar3 = FUN_141e61eb0(), cVar3 == '\0'))))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146d3) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13e20);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (*(longlong *)(lVar11 + 0x3320) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146c8) = uVar4;
  if ((*(longlong *)(param_1 + 0x13e08) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x13e08) + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_141e3b010();
  }
  *(undefined1 *)(param_1 + 0x146d7) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13eb0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146d4) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x140c0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar11 + 0x2900);
  }
  *(undefined1 *)(param_1 + 0x146d5) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14108);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146d9) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13fa0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146d6) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13f28);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146db) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13f40);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146dc) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x141f8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146dd) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13fb8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (cVar3 = FUN_141f2f0d0(), cVar3 == '\0'))))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146de) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13fb8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = *(int *)(lVar11 + 0x1d04) == 0;
  }
  *(bool *)(param_1 + 0x146df) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13fb8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e1) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x13f10);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = *(int *)(lVar11 + 0x1d04) == 0;
  }
  *(bool *)(param_1 + 0x146e0) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14120);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    *(undefined1 *)(param_1 + 0x146da) = 0;
  }
  else {
    if (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0) &&
       ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    *(char *)(param_1 + 0x146da) = cVar3;
    if ((cVar3 == '\0') && (*(char *)(param_1 + 0x146de) != '\0')) {
      *(bool *)(param_1 + 0x146da) = *(int *)(*(longlong *)(param_1 + 0x13fb8) + 0x2968) == 0x17;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x14228);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e2) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14270);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e3) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14288);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e4) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x142a0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e5) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14210);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e6) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14258);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e7) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x142d0);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 && (cVar3 = FUN_1410a0a50(), cVar3 == '\0'))))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146e8) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x142e8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146e9) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14318);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (*(char *)(lVar11 + 0x2900) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146eb) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14300);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (*(char *)(lVar11 + 0x4450) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146ec) = uVar4;
  if ((((lVar11 == 0) ||
       (lVar11 = *(longlong *)(param_1 + 0x14300), (*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
      ((lVar11 == 0 || (*(char *)(lVar11 + 0x2900) == '\0')))) &&
     (((lVar11 = *(longlong *)(param_1 + 0x14318), lVar11 == 0 ||
       ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) || (*(char *)(lVar11 + 0x2900) == '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146ea) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14330);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146ed) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14348);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146ee) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14048);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14708) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14060);
  if ((((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
      ((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0)) || (*(char *)(lVar11 + 0x2960) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14710) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13eb0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (byte)(*(uint *)(lVar11 + 0x370) >> 1) & 1;
  }
  *(byte *)(param_1 + 0x14711) = bVar5;
  lVar11 = *(longlong *)(param_1 + 0x143d8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 || (cVar3 = FUN_14113c4c0(), cVar3 != '\0'))))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146f4) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x143f0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146f5) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14408);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146f6) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14420);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146f7) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14378);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146f0) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14390);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146f1) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x141b0);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146f2) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x143c0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146f3) = bVar15;
  lVar11 = *(longlong *)(param_1 + 83000);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146fb) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x143a8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146fc) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14468);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146fd) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14450);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146ff) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14480);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x146fe) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14588);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14713) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x145a0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14714) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x144e0);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14700) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x144e0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar11 + 0x2b04);
  }
  *(undefined1 *)(param_1 + 0x14701) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x144f8);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14702) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14510);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14703) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14528);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14704) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14540);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14705) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x13e20);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar11 + 0x3f24);
  }
  *(undefined1 *)(param_1 + 0x14712) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14570);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0 &&
      ((*(uint *)(lVar11 + 0x2298) >> 4 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x14706) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14570);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(lVar11 + 0x2b04);
  }
  *(undefined1 *)(param_1 + 0x14707) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x145d0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14715) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14498);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14716) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x144b0);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x1471b) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x144c8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x1471c) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x145e8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14717) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x140f0);
  if (((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) ||
     (((*(int *)(lVar11 + 0x1d04) == 3 || ((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0)) &&
      (*(char *)(lVar11 + 0x6464) == '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x146f8) = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x14618);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14718) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14630);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x14719) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14678);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x1471a) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x14690);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x1471d) = bVar15;
  lVar11 = *(longlong *)(param_1 + 0x146a8);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0xc) & 0xe) == 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = (*(uint *)(lVar11 + 0x2298) & 0x80000011) != 0;
  }
  *(bool *)(param_1 + 0x1471e) = bVar15;
  *(bool *)(param_1 + 0x146ef) = *(longlong *)(param_1 + 0x4c48) != 0;
  lVar11 = *(longlong *)(param_1 + 0x140f0);
  if (((lVar11 != 0) && ((*(byte *)(lVar11 + 0xc) & 0xe) != 0)) && (*(int *)(lVar11 + 0x1d04) != 3))
  {
    if (((*(uint *)(lVar11 + 0x2298) & 0x80000011) == 0) || (uVar6 = FUN_141e38a20(), uVar6 < 2)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x146f9) = uVar4;
  }
  lVar11 = *(longlong *)(param_1 + 0x140f0);
  if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0xc) & 0xe) != 0)) {
    *(bool *)(param_1 + 0x146fa) = *(int *)(lVar11 + 0x6448) == 0xe9;
  }
  return;
}

