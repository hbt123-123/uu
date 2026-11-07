// rea decompile_all
// name: FUN_100069908
// address: 0x100069908
// body: available
// range: 0x100069908-0x100069b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100069908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  long lStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  long lStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar5 = param_5[2];
  uVar11 = param_5[3];
  uVar10 = param_5[4];
  uVar6 = param_5[5];
  uVar8 = *(undefined1 *)(param_5 + 6);
  uVar1 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  lVar7 = param_5[1];
  if (lVar7 == 0) {
    uVar8 = 0;
    uVar10 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar11 = 0;
    uVar9 = 0;
    lVar7 = -0x2000000000000000;
  }
  else {
    uVar9 = *param_5;
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(uVar11);
  }
  uVar2 = 0;
  __sSaMa(0,param_11);
  local_1d8 = param_11;
  local_1d0 = param_12;
  local_190 = param_11;
  uStack_188 = param_12;
  local_210 = uVar9;
  lStack_208 = lVar7;
  local_200 = uVar5;
  uStack_1f8 = uVar11;
  local_1f0 = uVar10;
  uStack_1e8 = uVar6;
  local_1e0 = uVar8;
  local_1c8 = uVar9;
  lStack_1c0 = lVar7;
  local_1b8 = uVar5;
  uStack_1b0 = uVar11;
  local_1a8 = uVar10;
  uStack_1a0 = uVar6;
  local_198 = uVar8;
  FUN_10005fcbc(&local_210,&local_180);
  FUN_10005fcf0(&local_1c8);
  uStack_80 = CONCAT71(uStack_1df,local_1e0);
  uStack_88 = uStack_1e8;
  local_90 = local_1f0;
  uStack_78 = local_1d8;
  local_70 = local_1d0;
  lStack_a8 = lStack_208;
  local_b0 = local_210;
  uStack_98 = uStack_1f8;
  uStack_a0 = local_200;
  local_218 = 0;
  FUN_10005f520(param_7,param_8,param_9);
  local_220 = param_12;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d5510,uVar2,&local_220);
  FUN_100086c1c(&local_180,uVar2,param_1,param_2,param_3,uVar1,&local_b0,param_6,&local_218,param_7,
                param_8,param_9);
  puVar3 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar5 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0xb8) = uStack_e8;
  *(undefined8 *)(puVar3 + 0xb0) = uStack_f0;
  *(undefined8 *)(puVar3 + 200) = uStack_d8;
  *(undefined8 *)(puVar3 + 0xc0) = local_e0;
  *(undefined8 *)(puVar3 + 0xd8) = uStack_c8;
  *(undefined8 *)(puVar3 + 0xd0) = uStack_d0;
  *(undefined8 *)(puVar3 + 0xe8) = uStack_b8;
  *(undefined8 *)(puVar3 + 0xe0) = local_c0;
  *(undefined8 *)(puVar3 + 0x78) = uStack_128;
  *(undefined8 *)(puVar3 + 0x70) = uStack_130;
  *(undefined8 *)(puVar3 + 0x88) = uStack_118;
  *(undefined8 *)(puVar3 + 0x80) = local_120;
  *(undefined8 *)(puVar3 + 0x98) = uStack_108;
  *(undefined8 *)(puVar3 + 0x90) = uStack_110;
  *(undefined8 *)(puVar3 + 0xa8) = uStack_f8;
  *(undefined8 *)(puVar3 + 0xa0) = local_100;
  *(undefined8 *)(puVar3 + 0x38) = uStack_168;
  *(undefined8 *)(puVar3 + 0x30) = uStack_170;
  *(undefined8 *)(puVar3 + 0x48) = uStack_158;
  *(undefined8 *)(puVar3 + 0x40) = local_160;
  *(undefined8 *)(puVar3 + 0x58) = uStack_148;
  *(undefined8 *)(puVar3 + 0x50) = uStack_150;
  *(undefined8 *)(puVar3 + 0x68) = uStack_138;
  *(undefined8 *)(puVar3 + 0x60) = local_140;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x28) = uStack_178;
  *(undefined8 *)(puVar3 + 0x20) = local_180;
  puVar4 = puVar3;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar3);
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = puVar4;
  return auVar12;
}

