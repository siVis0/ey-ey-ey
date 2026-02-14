
void QuestSession_PostQuestRequest(longlong param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2298) & 0xffffff7f | 0x20;
  if (param_2 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x2298) | 0xa0;
  }
  *(uint *)(param_1 + 0x2298) = uVar1;
  return;
}

