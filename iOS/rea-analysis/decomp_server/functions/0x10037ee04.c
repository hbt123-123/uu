// rea decompile_all
// name: FUN_10037ee04
// address: 0x10037ee04
// body: available
// range: 0x10037ee04-0x10037f0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_10037ee04(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,long param_6)

{
  ulong uVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(param_1 + 3,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    param_1[5] = param_2[2];
    param_1[4] = uVar9;
    param_1[3] = uVar8;
  }
  *(undefined4 *)(param_1 + 6) = param_3;
  FUN_10037f1a0(param_1 + 7,param_1 + 3);
  FUN_10037f388(param_1 + 10,param_1 + 3);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = 0;
  if (DAT_100b366f8 != 0) {
    uVar1 = ((param_6 + DAT_100b366f8) - 1) / DAT_100b366f8;
  }
  uVar7 = DAT_100b366f8;
  if (DAT_100b366f8 <= uVar1 * DAT_100b366f8) {
    uVar7 = uVar1 * DAT_100b366f8;
  }
  param_1[0xf] = uVar7;
  pvVar3 = operator_new(0x38);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    FUN_100384eb8(&local_60,param_1[7],param_1[8]);
    uVar7 = param_1[0xf];
  }
  else {
    uStack_58 = param_1[8];
    local_60 = (void *)param_1[7];
    local_50 = param_1[9];
  }
  thunk_FUN_10038fa08(pvVar3,&local_60,uVar7,*(uint *)(param_1 + 6) >> 5 & 1);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  param_1[0x10] = pvVar3;
  pvVar3 = operator_new(0x38);
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    FUN_100384eb8(&local_80,param_1[10],param_1[0xb]);
  }
  else {
    uStack_78 = param_1[0xb];
    local_80 = (void *)param_1[10];
    local_70 = param_1[0xc];
  }
  thunk_FUN_10038fa08(pvVar3,&local_80,0,*(uint *)(param_1 + 6) >> 5 & 1);
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  param_1[0x14] = pvVar3;
  puVar4 = operator_new(0x70);
  *puVar4 = 0;
  *(undefined4 *)((long)puVar4 + 4) = 1;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xd] = 0;
  param_1[0x15] = puVar4;
  param_1[0x16] = 0;
  pvVar3 = operator_new(0x40);
  thunk_FUN_1003928d4();
  param_1[0x17] = pvVar3;
  puVar5 = operator_new(0x18);
  *puVar5 = *(undefined4 *)(param_1[0x14] + 0x18);
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  param_1[0x18] = puVar5;
  puVar4 = operator_new(0x10);
  *puVar4 = puVar5;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined1 *)((long)puVar4 + 0xc) = 1;
  param_1[0x19] = puVar4;
  puVar4 = operator_new(0x10);
  *puVar4 = puVar5;
  *(undefined4 *)(puVar4 + 1) = 1;
  *(undefined1 *)((long)puVar4 + 0xc) = 1;
  param_1[0x1a] = puVar4;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_4 == (undefined8 *)0x0) {
LAB_10037f094:
    puVar4 = operator_new(0x28);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    param_1[0xd] = puVar4;
  }
  else {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      if (param_4[1] == 0) goto LAB_10037f094;
    }
    else if (*(char *)((long)param_4 + 0x17) == '\0') goto LAB_10037f094;
    puVar4 = operator_new(0x28);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    param_1[0xe] = puVar4;
    pvVar3 = operator_new(0x38);
    lVar6 = (long)*(char *)((long)param_4 + 0x17);
    puVar4 = param_4;
    if (lVar6 < 0) {
      puVar4 = (undefined8 *)*param_4;
      lVar6 = param_4[1];
    }
    thunk_FUN_100392ad4(pvVar3,puVar4,lVar6,0,0);
    param_1[0x16] = pvVar3;
    pvVar3 = (void *)param_1[0x17];
  }
  *(undefined2 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  FUN_100392a80(pvVar3);
  bVar2 = *(byte *)(param_1 + 6) >> 1 & 1;
  lVar6 = param_1[0x1a];
  *(byte *)(param_1[0x19] + 0xc) = bVar2;
  *(byte *)(lVar6 + 0xc) = bVar2;
  return param_1;
}

