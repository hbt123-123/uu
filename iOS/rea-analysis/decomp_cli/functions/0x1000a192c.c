// rea decompile_all
// name: FUN_1000a192c
// address: 0x1000a192c
// body: available
// range: 0x1000a192c-0x1000a1acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a192c(undefined8 *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_308 [280];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_bridgeObjectRetain();
  FUN_1000a0cbc(&local_120);
  puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (local_d0 != (undefined *)0x0) {
    puVar1 = local_d0;
  }
  puVar2 = &DAT_100104480;
  FUN_10000eb08(&DAT_100104480,&DAT_1000d4920);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar3 = &DAT_100103f10;
  FUN_10000eb08(&DAT_100103f10,&DAT_1000d4b90);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = puVar3;
  FUN_100095718();
  *(undefined **)(puVar3 + 0x20) = &DAT_1000fae00;
  *(undefined **)(puVar3 + 0x28) = puVar4;
  local_188 = param_2;
  _swift_bridgeObjectRetain(local_d0);
  FUN_10006d728(puVar3);
  FUN_1000a0cbc(&local_c0,local_188);
  *(undefined8 *)(puVar2 + 0x48) = uStack_98;
  *(undefined8 *)(puVar2 + 0x40) = local_a0;
  *(undefined8 *)(puVar2 + 0x58) = uStack_88;
  *(undefined8 *)(puVar2 + 0x50) = uStack_90;
  *(undefined8 *)(puVar2 + 0x68) = uStack_78;
  *(undefined8 *)(puVar2 + 0x60) = local_80;
  *(undefined8 *)(puVar2 + 0x78) = uStack_68;
  *(undefined8 *)(puVar2 + 0x70) = uStack_70;
  *(undefined8 *)(puVar2 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x20) = local_c0;
  *(undefined8 *)(puVar2 + 0x38) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x30) = uStack_b0;
  local_188 = puVar1;
  FUN_10006d810(puVar2);
  puVar1 = local_188;
  _swift_bridgeObjectRelease(local_d0);
  uStack_1d0 = uStack_108;
  local_1d8 = uStack_110;
  uStack_1c0 = uStack_f8;
  local_1c8 = local_100;
  uStack_1b0 = uStack_e8;
  local_1b8 = uStack_f0;
  uStack_1a0 = uStack_d8;
  local_1a8 = local_e0;
  uStack_1e0 = uStack_118;
  uStack_1e8 = local_120;
  local_1f0 = 0;
  local_198 = puVar1;
  local_190 = local_c8;
  uStack_148 = uStack_e8;
  local_150 = uStack_f0;
  uStack_138 = uStack_d8;
  uStack_140 = local_e0;
  uStack_168 = uStack_108;
  local_170 = uStack_110;
  uStack_158 = uStack_f8;
  uStack_160 = local_100;
  uStack_178 = uStack_118;
  local_180 = local_120;
  local_188 = (undefined *)0x0;
  local_130 = puVar1;
  uStack_128 = local_c8;
  FUN_1000a1acc(&local_1f0,auStack_308);
  FUN_100054630(&local_188);
  param_1[9] = local_1a8;
  param_1[8] = uStack_1b0;
  param_1[0xb] = local_198;
  param_1[10] = uStack_1a0;
  param_1[0xc] = local_190;
  param_1[1] = uStack_1e8;
  *param_1 = local_1f0;
  param_1[3] = local_1d8;
  param_1[2] = uStack_1e0;
  param_1[5] = local_1c8;
  param_1[4] = uStack_1d0;
  param_1[7] = local_1b8;
  param_1[6] = uStack_1c0;
  return;
}

