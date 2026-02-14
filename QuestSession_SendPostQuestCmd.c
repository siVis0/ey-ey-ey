
void QuestSession_SendPostQuestCmd(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_d8 [7];
  longlong *local_a0;
  longlong local_98 [7];
  undefined1 local_60;
  undefined **local_58;
  longlong local_50;
  undefined ***local_20;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3318));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3320));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3328));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3340));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3348));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3320));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3330));
  FUN_140b741f0(*(undefined8 *)(param_1 + 0x3338));
  local_res8 = 0;
  local_res10 = 0;
  FUN_14113fa00(DAT_1451c4640,&local_res10,&local_res8);
  lVar1 = DAT_1451c4640;
  if ((*(byte *)(param_1 + 0xc) & 0xe) != 0) {
    if ((*(char *)(DAT_1451c4640 + 0x30) != '\0') || (DAT_1451c4108 != '\0')) {
      EnterCriticalSection((LPCRITICAL_SECTION)(DAT_1451c4640 + 8));
    }
    local_a0 = (longlong *)0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_60 = 0;
    uVar2 = FUN_14113fbf0(lVar1);
    FUN_141ae9150(local_d8,param_1,uVar2);
    local_58 = &vtbl_PostQuestCmd;
    local_20 = &local_58;
    local_50 = param_1;
    FUN_14024b980(&local_58,local_d8);
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])
                (local_20,CONCAT71((int7)((ulonglong)&local_58 >> 8),local_20 != &local_58));
    }
    QuestCmdQueue_Push(lVar1 + 0x4f60,local_d8);
    if (local_98[3] != 0) {
      uVar2 = FUN_142229230();
      FUN_1422291d0(uVar2,local_98 + 3);
    }
    if (local_98[0] != 0) {
      uVar2 = FUN_142229230();
      FUN_1422291d0(uVar2,local_98);
    }
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x20))
                (local_a0,CONCAT71((int7)((ulonglong)local_d8 >> 8),local_a0 != local_d8));
      local_a0 = (longlong *)0x0;
    }
    FUN_140246100(lVar1);
  }
  *(uint *)(param_1 + 0x2298) = *(uint *)(param_1 + 0x2298) & 0xfffffff7;
  FUN_141adb5d0(DAT_1451c4640,param_1);
  FUN_141adb830(DAT_1451c4640,param_1);
  *(undefined1 *)(DAT_14500ed30 + 0xae9a) = 0;
  FUN_14063eb00(param_1 + 0x3940);
  FUN_14063e520(param_1 + 0x3940);
  *(undefined8 *)(param_1 + 0x28f0) = 0;
  *(undefined2 *)(param_1 + 0x35a8) = 0;
  *(undefined1 *)(param_1 + 0x393d) = 0;
  return;
}

