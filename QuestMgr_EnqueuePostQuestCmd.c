
void QuestMgr_EnqueuePostQuestCmd
               (longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 local_198 [400];
  
  *(undefined4 *)(DAT_1451c46b8 + 0x53368) = *(undefined4 *)(param_2 + 0x10);
  if ((((*(longlong *)(DAT_1451c46b8 + 600) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_1451c46b8 + 600) + 0x10), lVar1 != 0)) &&
      ((*(byte *)(lVar1 + 0xbff0) & 1) != 0)) &&
     (*(int *)(lVar1 + 0xbfe8) == *(int *)(lVar1 + 0xbfec))) {
    FUN_141afd5a0(DAT_1451c46b8,0);
  }
  *(undefined1 *)(param_1 + 0x58379e) = *(undefined1 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x58379c) = *(undefined2 *)(param_2 + 8);
  FUN_141b13550(param_1,param_2);
  FUN_141313560(local_198);
  uVar2 = FUN_141aff860(DAT_1451c46b8);
  FUN_141b13e70(param_1,local_198,param_3,uVar2,0xffffffff,0,param_4);
  return;
}

