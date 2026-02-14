
void FUN_141fb55e0(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_res8;
  undefined **local_18;
  longlong *local_10;
  
  *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) | 2;
  *(undefined4 *)((longlong)param_1 + 0x1d04) = 3;
  if (param_1[0x39b] != 0) {
    (**(code **)(*param_1 + 0x1d0))(param_1,param_1[0x39b],1);
  }
  bVar1 = false;
  plVar3 = (longlong *)0x0;
  if ((int)param_1[0x398] == *(int *)(DAT_1451c4640 + 0x147ac)) {
LAB_141fb565a:
    plVar4 = plVar3;
    plVar2 = plVar3;
    if (param_1[0x26e] != 0) {
      plVar4 = param_1 + 0x8e + param_1[0x26e] * 5;
      plVar2 = param_1 + 0x8e;
    }
    if (plVar2 != plVar4) {
      do {
        if (plVar2[1] != 0) {
          *(undefined1 *)(plVar2[1] + 0x171) = 0;
          bVar1 = true;
        }
        if (*plVar2 != 0) {
          bVar1 = true;
        }
        plVar2 = plVar2 + 5;
      } while (plVar2 != plVar4);
      if (bVar1) {
        FUN_141ae9820(DAT_1451c4640,0);
      }
    }
  }
  else {
    plVar2 = plVar3;
    if ((longlong *)param_1[0x41b] != (longlong *)0x0) {
      do {
        if (*(int *)((longlong)param_1 + (longlong)plVar2 * 4 + 0x20b8) ==
            *(int *)(DAT_1451c4640 + 0x147ac)) goto LAB_141fb565a;
        plVar2 = (longlong *)(ulonglong)((int)plVar2 + 1);
      } while (plVar2 < (longlong *)param_1[0x41b]);
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1);
  if ((*(uint *)(param_1 + 0x453) >> 7 & 1) != 0) {
    FUN_141ae4730(DAT_1451c4640,param_1 + 0x3a5,param_1,(int)param_1[0x3a8],0);
  }
  *(uint *)(param_1 + 0x453) = *(uint *)(param_1 + 0x453) & 0xffffffdf | 0x80;
  if ((((*(uint *)((longlong)param_1 + 0x229c) >> 0xb & 1) != 0) &&
      (plVar2 = (longlong *)param_1[0x420], plVar2 != (longlong *)0x0)) &&
     ((*(byte *)((longlong)plVar2 + 0xc) & 0xe) != 0)) {
    local_18 = &PTR_FUN_143499310;
    local_10 = param_1;
    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_18);
  }
  if (param_1[0x3d5] != 0) {
    do {
      plVar2 = (longlong *)param_1[((longlong)plVar3 + 1) * 8 + 0x3d5];
      local_res8 = param_1;
      if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14273d36c();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
      plVar3 = (longlong *)(ulonglong)((int)plVar3 + 1);
    } while (plVar3 < (longlong *)param_1[0x3d5]);
  }
  return;
}

