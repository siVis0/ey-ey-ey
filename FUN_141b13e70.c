
ulonglong FUN_141b13e70(ulonglong param_1,longlong param_2,char param_3,char param_4,int param_5,
                       undefined1 param_6,char param_7)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  char *_Dest;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong local_res8;
  longlong local_res10;
  char local_res18;
  char local_res20;
  uint in_stack_fffffffffffffda8;
  undefined8 *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  char local_220;
  undefined1 local_21c [8];
  undefined4 local_214;
  undefined1 local_210;
  undefined1 local_20f;
  undefined1 local_20e;
  char *local_208;
  undefined1 local_200 [22];
  char local_1ea;
  undefined4 local_1e8;
  uint local_1e4;
  undefined1 local_1e0;
  undefined1 local_1d8 [104];
  undefined1 local_170;
  undefined4 local_c4;
  int local_c0;
  undefined1 local_7c [6];
  undefined1 local_76 [6];
  undefined1 local_70 [6];
  undefined1 local_6a;
  undefined4 local_68;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_141b00990(DAT_1451c46b8,0,param_2);
  if (*(char *)(DAT_14500ed30 + 0xae9a) == '\0') {
    iVar5 = FUN_141b57a10();
    if (iVar5 == -1) {
      iVar5 = -1;
      if (*(int *)(DAT_14500ed30 + 0xae8c) != -1) {
        iVar5 = *(int *)(DAT_14500ed30 + 0xae8c);
      }
    }
  }
  else {
    iVar5 = -1;
  }
  *(int *)(param_2 + 0x110) = iVar5;
  *(undefined1 *)(param_2 + 0x128) = *(undefined1 *)(DAT_14500ed30 + 0x17374);
  lVar7 = DAT_14500ed30;
  if (*(char *)(DAT_14500ed30 + 0xae3b) == '\0') {
    uVar17 = 0;
    cVar2 = FUN_141b58a00(DAT_14500ed30);
    if (cVar2 == '\0') {
      uVar6 = *(undefined4 *)(lVar7 + 0x291b4);
    }
    else {
      uVar6 = *(undefined4 *)(lVar7 + 0x291b0);
    }
    lVar7 = FUN_1418a6d40(uVar6);
    uVar13 = 0;
    puVar15 = (undefined4 *)(lVar7 + 0x14);
    do {
      if (puVar15[-2] != -1) {
        iVar5 = FUN_141a8b580(DAT_14500df10,*puVar15,1,uVar6);
        if (iVar5 == 2) {
          uVar17 = uVar17 & 0xff | 1 << (uVar13 & 0x1f);
        }
      }
      uVar4 = (undefined1)uVar17;
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 6;
    } while (uVar13 < 5);
    *(undefined1 *)(param_2 + 0x129) = uVar4;
    uVar20 = local_res8;
  }
  else {
    uVar17 = 0;
    cVar2 = FUN_141b58a00(DAT_14500ed30);
    if (cVar2 == '\0') {
      uVar6 = *(undefined4 *)(lVar7 + 0x291b4);
    }
    else {
      uVar6 = *(undefined4 *)(lVar7 + 0x291b0);
    }
    lVar7 = FUN_1418a6d40(uVar6);
    uVar14 = 0;
    puVar15 = (undefined4 *)(lVar7 + 0x14);
    uVar13 = uVar14;
    do {
      if (puVar15[-2] != -1) {
        iVar5 = FUN_141a8b5c0(DAT_14500df10,*puVar15,1,uVar6);
        if (iVar5 == 2) {
          uVar17 = uVar17 & 0xff | 1 << (uVar13 & 0x1f);
        }
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + 6;
    } while (uVar13 < 5);
    *(char *)(param_2 + 0x129) = (char)uVar17;
    uVar17 = 0;
    uVar6 = *(undefined4 *)(DAT_1451c42b8 + 0xd328);
    lVar7 = FUN_1418a6d40(uVar6);
    uVar20 = local_res8;
    puVar15 = (undefined4 *)(lVar7 + 0x14);
    do {
      if (puVar15[-2] != -1) {
        iVar5 = FUN_141a8b580(DAT_14500df10,*puVar15,1,uVar6);
        if (iVar5 == 2) {
          uVar17 = uVar17 & 0xff | 1 << (uVar14 & 0x1f);
        }
      }
      uVar4 = (undefined1)uVar17;
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 6;
      param_2 = local_res10;
    } while (uVar14 < 5);
  }
  uVar16 = 0;
  *(undefined1 *)(param_2 + 0x12a) = uVar4;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = '\0';
  lVar7 = FUN_1422ad750(DAT_1451c46b8);
  if (lVar7 != 0) {
    local_res8 = 0;
    plVar8 = (longlong *)FUN_1422ad750(DAT_1451c46b8);
    local_220 = (**(code **)(*plVar8 + 0xc0))(plVar8,&local_res8);
    if (local_220 == '\0') {
      local_228 = 0xffffffff;
    }
    else {
      local_228 = local_res8;
      _gmtime64(&local_228);
    }
  }
  uVar1 = local_228;
  if (*(char *)(DAT_14500ed30 + 0xae3b) == '\0') {
    uVar17 = *(int *)(DAT_14500ed30 + 0x78) * 0x3c -
             *(int *)(DAT_14500ed30 + 0x13180) / (int)*(float *)(DAT_1451c4148 + 0x58);
    uVar19 = (ulonglong)uVar17;
    iVar5 = *(int *)(DAT_14500ed30 + 0x13190) / (int)*(float *)(DAT_1451c4148 + 0x58) +
            *(int *)(DAT_14500ed30 + 0x78) * -0x3c + uVar17;
    local_res8 = CONCAT71(local_res8._1_7_,iVar5 < 600);
  }
  else {
    cVar2 = FUN_141b593b0(DAT_14500ed30);
    local_res8 = CONCAT71(local_res8._1_7_,1);
    if (cVar2 == '\0') {
      iVar5 = 0;
      uVar19 = uVar16;
    }
    else {
      uVar19 = (longlong)*(int *)(DAT_14500ed30 + 0x13184) /
               (longlong)(int)*(float *)(DAT_1451c4148 + 0x58);
      iVar5 = (int)uVar19;
      uVar19 = uVar19 & 0xffffffff;
    }
  }
  *(ulonglong *)(param_2 + 0x120) = uVar1 - (longlong)iVar5;
  *(ulonglong *)(param_2 + 0x118) = uVar1 - (longlong)(int)uVar19;
  lVar7 = DAT_1451c46b8;
  if (param_7 == '\0') {
    FUN_141313560(local_1d8);
    FUN_141315650(local_1d8,lVar7 + 0x53760);
  }
  else {
    local_c4 = (undefined4)local_228;
  }
  *(undefined4 *)(param_2 + 0x114) = local_c4;
  FUN_1418d7030(uVar20 + 0x532d5,param_6);
  cVar2 = local_res18;
  local_248 = (undefined8 *)(uVar20 + 0x5a3038);
  local_208 = (char *)(uVar20 + 0x53359);
  _Dest = (char *)(param_2 + 0x10);
  do {
    if (*local_208 == '\0') {
      _Dest[0x28] = '\0';
      _Dest[0x29] = '\0';
      _Dest[0x2a] = '\0';
      _Dest[0x2b] = '\0';
      _Dest[0x2c] = '\0';
      _Dest[0x2d] = '\0';
      _Dest[0x2e] = '\0';
      _Dest[0x2f] = '\0';
      pcVar11 = (char *)(uVar20 + 0x532d5 + uVar16 * 0x21);
      if (_Dest != pcVar11) {
        strncpy(_Dest,pcVar11,0x20);
      }
    }
    else {
      uVar10 = FUN_141b417c0(DAT_14500eca0,uVar16,0);
      cVar3 = FUN_141b42cf0(DAT_14500eca0,uVar10);
      if ((((cVar3 != '\0') && (cVar3 = FUN_141b42d40(DAT_14500eca0,uVar10), cVar3 != '\0')) &&
          (lVar7 = FUN_141b42070(DAT_14500eca0,uVar10), lVar7 != 0)) &&
         (lVar9 = FUN_141b42300(DAT_14500eca0,uVar10), lVar9 != 0)) {
        pcVar11 = (char *)(uVar16 * 0x21 + 0x532d5 + uVar20);
        if (_Dest != pcVar11) {
          strncpy(_Dest,pcVar11,0x20);
        }
        *(undefined8 *)(_Dest + 0x28) = uVar10;
        *(undefined2 *)(_Dest + 0x30) = *(undefined2 *)(lVar7 + 0x48);
        *(undefined2 *)(_Dest + 0x32) = *(undefined2 *)(lVar7 + 0x54);
        *(undefined2 *)(_Dest + 0x34) = *(undefined2 *)(lVar9 + 0x1d4);
        _Dest[0x36] = *(char *)(lVar9 + 0x1d0);
        if (((cVar2 != '\0') && (cVar3 = FUN_141b593b0(DAT_14500ed30), cVar3 != '\0')) &&
           (*(char *)(uVar20 + 0x53a24) != '\0')) {
          *local_248 = uVar10;
        }
      }
    }
    local_248 = local_248 + 1;
    local_208 = local_208 + 1;
    uVar17 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar17;
    _Dest = _Dest + 0x40;
  } while ((int)uVar17 < 4);
  uVar6 = FUN_141b57a10(DAT_14500ed30);
  iVar5 = FUN_1419751b0(uVar6,0);
  lVar9 = local_res10;
  lVar7 = DAT_14500ed30;
  if (iVar5 == 2) {
    *(undefined1 *)(local_res10 + 0x147) = *(undefined1 *)(DAT_14500ed30 + 0x130e8);
    *(undefined1 *)(local_res10 + 0x149) = *(undefined1 *)(lVar7 + 0x130e9);
    *(undefined4 *)(local_res10 + 0x138) = *(undefined4 *)(lVar7 + 0x130ec);
    *(undefined1 *)(local_res10 + 0x144) = *(undefined1 *)(lVar7 + 0x130f8);
    *(undefined4 *)(local_res10 + 0x13c) = *(undefined4 *)(lVar7 + 0x130f0);
    *(undefined1 *)(local_res10 + 0x145) = *(undefined1 *)(lVar7 + 0x130f9);
    *(undefined4 *)(local_res10 + 0x140) = *(undefined4 *)(lVar7 + 0x130f4);
    *(undefined1 *)(local_res10 + 0x146) = *(undefined1 *)(lVar7 + 0x130fa);
    *(undefined1 *)(local_res10 + 0x14a) = *(undefined1 *)(lVar7 + 0x130fb);
    *(undefined1 *)(local_res10 + 0x14b) = *(undefined1 *)(lVar7 + 0x130fc);
    *(undefined1 *)(local_res10 + 0x14c) = *(undefined1 *)(lVar7 + 0x130fd);
    *(undefined1 *)(local_res10 + 0x14d) = *(undefined1 *)(lVar7 + 0x130fe);
    *(undefined1 *)(local_res10 + 0x14e) = *(undefined1 *)(lVar7 + 0x130ff);
    *(undefined1 *)(local_res10 + 0x148) = *(undefined1 *)(lVar7 + 0x13100);
    *(undefined1 *)(local_res10 + 0x14f) = *(undefined1 *)(lVar7 + 0x13101);
    *(undefined1 *)(local_res10 + 0x150) = *(undefined1 *)(lVar7 + 0x13102);
    *(undefined1 *)(local_res10 + 0x151) = *(undefined1 *)(lVar7 + 0x13103);
    *(undefined1 *)(local_res10 + 0x152) = *(undefined1 *)(lVar7 + 0x13104);
    *(undefined1 *)(local_res10 + 0x153) = *(undefined1 *)(lVar7 + 0x13105);
    *(undefined1 *)(local_res10 + 0x154) = *(undefined1 *)(lVar7 + 0x13106);
  }
  PostQuestPayload_Init(local_200);
  FUN_141b00350(DAT_1451c46b8,local_200);
  cVar2 = local_res18;
  if (local_1ea == '\0') {
    *(undefined1 *)(lVar9 + 0x180) = 0;
  }
  else if (*(char *)(uVar20 + 0x53a24) != '\0') {
    FUN_141b6dc80(DAT_14500ed30,0x6d,0,local_1e4);
    *(undefined1 *)(lVar9 + 0x180) = 1;
    puVar12 = (undefined1 *)(lVar9 + 0x166);
    uVar17 = 0;
    do {
      uVar10 = FUN_141b8dbb0(DAT_145013950);
      uVar4 = FUN_141353d50(uVar10,uVar17);
      puVar12[-6] = uVar4;
      uVar10 = FUN_141b8dbb0(DAT_145013950);
      uVar4 = FUN_141353f90(uVar10,uVar17,0);
      *puVar12 = uVar4;
      uVar10 = FUN_141b8dbb0(DAT_145013950);
      uVar4 = FUN_141353f90(uVar10,uVar17);
      uVar17 = uVar17 + 1;
      puVar12[6] = uVar4;
      puVar12 = puVar12 + 1;
    } while (uVar17 < 6);
    *(undefined4 *)(lVar9 + 0x174) = local_1e8;
    if (*(char *)(DAT_14500ed30 + 0xae9a) == '\0') {
      iVar5 = FUN_141b57a10();
      if (iVar5 == -1) {
        iVar5 = -1;
        if (*(int *)(DAT_14500ed30 + 0xae8c) != -1) {
          iVar5 = *(int *)(DAT_14500ed30 + 0xae8c);
        }
      }
    }
    else {
      iVar5 = -1;
    }
    *(int *)(lVar9 + 0x110) = iVar5;
    if (((*(longlong *)(DAT_1451c46b8 + 0x260) != 0) &&
        (lVar7 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 0x260) + 0x10), lVar7 != 0)) &&
       ((*(byte *)(lVar7 + 0xbff0) & 1) != 0)) {
      FUN_141a9c170(local_1d8);
      if ((*(longlong *)(DAT_1451c46b8 + 0x260) == 0) ||
         (lVar7 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 0x260) + 0x10), lVar7 == 0)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(lVar7 + 0xbfec);
      }
      FUN_141b4fce0(DAT_14500ed30,local_1d8,uVar6);
      if (*(char *)(DAT_14500ed30 + 0xae9a) == '\0') {
        local_c0 = FUN_141b57a10();
        if (local_c0 == -1) {
          local_c0 = -1;
          if (*(int *)(DAT_14500ed30 + 0xae8c) != -1) {
            local_c0 = *(int *)(DAT_14500ed30 + 0xae8c);
          }
        }
      }
      else {
        local_c0 = -1;
      }
      puVar12 = local_76;
      local_170 = 1;
      uVar17 = 0;
      do {
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353d50(uVar10,uVar17);
        puVar12[-6] = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17,0);
        *puVar12 = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17);
        uVar17 = uVar17 + 1;
        puVar12[6] = uVar4;
        puVar12 = puVar12 + 1;
      } while (uVar17 < 6);
      local_68 = local_1e8;
      local_6a = local_1e0;
      if ((*(longlong *)(DAT_1451c46b8 + 0x260) == 0) ||
         (lVar7 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 0x260) + 0x10), lVar7 == 0)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(lVar7 + 0xbfec);
      }
      FUN_141b6f4b0(DAT_14500ed30,uVar6,local_1d8);
      FUN_142358570(local_1d8);
    }
    cVar2 = local_res18;
    if (local_res18 == '\x01') {
      FUN_14045f380(&local_240);
      uVar17 = 0;
      puVar12 = (undefined1 *)((longlong)&local_228 + 6);
      do {
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353d50(uVar10,uVar17);
        puVar12[-6] = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17,0);
        *puVar12 = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17);
        uVar17 = uVar17 + 1;
        puVar12[6] = uVar4;
        puVar12 = puVar12 + 1;
      } while (uVar17 < 6);
      local_214 = local_1e8;
      local_20f = (undefined1)local_1e4;
      local_210 = local_1e0;
      local_20e = *(undefined1 *)(uVar20 + 0x53a24);
      if ((*(longlong *)(DAT_1451c46b8 + 600) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 600) + 0x10), lVar7 != 0)) {
        in_stack_fffffffffffffda8 = 0;
        uVar17 = *(uint *)((longlong)*(int *)(lVar7 + 0xbfec) * 0x130 + 0x667c + lVar7);
        if (uVar17 < 0x100) {
          uVar17 = 0xc0;
        }
        else {
          uVar17 = uVar17 & 0xffffff40 | 0x40;
        }
        FUN_141b0df00(uVar20,&local_240,uVar17,0x10,0);
      }
      uVar17 = 0;
      puVar12 = (undefined1 *)(uVar20 + 0x5a301e);
      do {
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353d50(uVar10,uVar17);
        puVar12[-6] = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17,0);
        *puVar12 = uVar4;
        uVar10 = FUN_141b8dbb0(DAT_145013950);
        uVar4 = FUN_141353f90(uVar10,uVar17);
        uVar17 = uVar17 + 1;
        puVar12[6] = uVar4;
        puVar12 = puVar12 + 1;
      } while (uVar17 < 6);
      puVar18 = (undefined8 *)(uVar20 + 0x5a3058);
      *(undefined4 *)(uVar20 + 0x5a302c) = local_1e8;
      lVar7 = 4;
      *(uint *)(uVar20 + 0x5a3030) = local_1e4 & 0xff;
      *(undefined1 *)(uVar20 + 0x5a302a) = local_1e0;
      if (puVar18 <= (undefined8 *)(uVar20 + 0x5a3078)) {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar18 = 0;
          puVar18 = puVar18 + 1;
        }
      }
    }
  }
  if ((*(longlong *)(DAT_1451c46b8 + 600) == 0) ||
     (lVar7 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 600) + 0x10), lVar7 == 0)) {
    uVar4 = 0xff;
  }
  else {
    uVar4 = (undefined1)*(undefined4 *)(lVar7 + 0xbfe8);
  }
  *(undefined1 *)(lVar9 + 0x17b) = uVar4;
  *(undefined1 *)(lVar9 + 0x17c) = *(undefined1 *)(uVar20 + 0x53368);
  PostQuestPayload_Init(&local_240);
  FUN_141b00350(uVar20,&local_240);
  uVar4 = local_230._4_1_;
  if (-1 < param_5) {
    uVar4 = (char)param_5;
  }
  *(undefined1 *)(lVar9 + 0x17a) = uVar4;
  *(undefined2 *)(lVar9 + 0x178) = *(undefined2 *)(uVar20 + 0x58379c);
  *(undefined1 *)(lVar9 + 0x17e) = *(undefined1 *)(uVar20 + 0x58379e);
  cVar3 = (char)((ulonglong)uStack_238 >> 0x20);
  if (local_res20 != -1) {
    cVar3 = local_res20;
  }
  *(char *)(lVar9 + 0x17d) = cVar3;
  *(undefined1 *)(lVar9 + 0x17f) = *(undefined1 *)(DAT_14500ed30 + 0x2948c);
  FUN_141b10850(uVar20,0,lVar9,cVar2,in_stack_fffffffffffffda8 & 0xffffff00);
  return local_res8 & 0xff;
}

