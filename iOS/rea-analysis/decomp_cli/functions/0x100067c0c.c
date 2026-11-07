// rea decompile_all
// name: FUN_100067c0c
// address: 0x100067c0c
// body: available
// range: 0x100067c0c-0x100067ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100067c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             byte param_9,undefined4 param_10,long param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_2d0 [2];
  undefined1 auStack_2c0 [8];
  undefined8 auStack_2b8 [3];
  undefined1 auStack_2a0 [8];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 *local_278;
  long local_270;
  uint local_264;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  long lStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long lStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  
  local_288 = param_12;
  local_264 = (uint)param_9;
  local_298 = param_5[2];
  uVar10 = param_5[3];
  uStack_290 = param_5[4];
  uVar11 = param_5[5];
  uVar13 = *(undefined1 *)(param_5 + 6);
  lVar5 = 0;
  local_248 = param_8;
  uStack_240 = param_7;
  local_238 = param_3;
  local_22c = param_6;
  __sSqMa(0,param_11);
  local_270 = *(long *)(lVar5 + -8);
  lVar1 = -(*(long *)(local_270 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_278 = auStack_2a0 + lVar1;
  local_260 = lVar5;
  local_258 = param_1;
  local_250 = param_2;
  FUN_100067074(param_1,param_2,param_4);
  lVar5 = param_5[1];
  local_280 = param_1;
  if (lVar5 == 0) {
    uVar13 = 0;
    local_200 = 0;
    uVar11 = 0;
    local_210 = 0;
    uVar10 = 0;
    uVar12 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar12 = *param_5;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar10);
    local_210 = local_298;
    local_200 = uStack_290;
  }
  uVar6 = 0;
  FUN_1000872e8(0,param_11);
  uVar2 = local_288;
  local_1e8 = param_11;
  local_1e0 = local_288;
  local_1a0 = param_11;
  uStack_198 = local_288;
  local_220 = uVar12;
  lStack_218 = lVar5;
  uStack_208 = uVar10;
  uStack_1f8 = uVar11;
  local_1f0 = uVar13;
  local_1d8 = uVar12;
  lStack_1d0 = lVar5;
  local_1c8 = local_210;
  uStack_1c0 = uVar10;
  local_1b8 = local_200;
  uStack_1b0 = uVar11;
  local_1a8 = uVar13;
  FUN_10005fcbc(&local_220,&local_190);
  FUN_10005fcf0(&local_1d8);
  puVar3 = local_278;
  uStack_90 = CONCAT71(uStack_1ef,local_1f0);
  uStack_98 = uStack_1f8;
  local_a0 = local_200;
  lStack_88 = local_1e8;
  local_80 = local_1e0;
  lStack_b8 = lStack_218;
  local_c0 = local_220;
  uStack_a8 = uStack_208;
  uStack_b0 = local_210;
  (**(code **)(*(long *)(param_11 + -8) + 0x38))(local_278,1,1,param_11);
  uVar12 = uStack_240;
  uVar11 = local_248;
  uVar4 = local_264;
  FUN_10005f520(uStack_240,local_248,local_264);
  uVar10 = local_250;
  local_228 = uVar2;
  _swift_bridgeObjectRetain(local_250);
  uVar2 = local_238;
  _swift_bridgeObjectRetain(local_238);
  pTVar7 = &TargetProtocolConformanceDescriptor_1000d565c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d565c,uVar6,&local_228);
  *(undefined8 *)((long)auStack_2b8 + lVar1) = uVar6;
  *(TargetProtocolConformanceDescriptor **)((long)auStack_2b8 + lVar1 + 8) = pTVar7;
  auStack_2c0[lVar1] = (char)uVar4;
  *(undefined8 *)((long)auStack_2d0 + lVar1) = uVar12;
  *(undefined8 *)((long)auStack_2d0 + lVar1 + 8) = uVar11;
  FUN_100086c1c(&local_190,uVar6,local_258,uVar10,uVar2,local_280,&local_c0,local_22c,puVar3);
  (**(code **)(local_270 + 8))(puVar3,local_260);
  puVar8 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar10 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0xb8) = uStack_f8;
  *(undefined8 *)(puVar8 + 0xb0) = uStack_100;
  *(undefined8 *)(puVar8 + 200) = uStack_e8;
  *(undefined8 *)(puVar8 + 0xc0) = local_f0;
  *(undefined8 *)(puVar8 + 0xd8) = uStack_d8;
  *(undefined8 *)(puVar8 + 0xd0) = uStack_e0;
  *(undefined8 *)(puVar8 + 0xe8) = uStack_c8;
  *(undefined8 *)(puVar8 + 0xe0) = local_d0;
  *(undefined8 *)(puVar8 + 0x78) = uStack_138;
  *(undefined8 *)(puVar8 + 0x70) = uStack_140;
  *(undefined8 *)(puVar8 + 0x88) = uStack_128;
  *(undefined8 *)(puVar8 + 0x80) = local_130;
  *(undefined8 *)(puVar8 + 0x98) = uStack_118;
  *(undefined8 *)(puVar8 + 0x90) = uStack_120;
  *(undefined8 *)(puVar8 + 0xa8) = uStack_108;
  *(undefined8 *)(puVar8 + 0xa0) = local_110;
  *(undefined8 *)(puVar8 + 0x38) = uStack_178;
  *(undefined8 *)(puVar8 + 0x30) = uStack_180;
  *(undefined8 *)(puVar8 + 0x48) = uStack_168;
  *(undefined8 *)(puVar8 + 0x40) = local_170;
  *(undefined8 *)(puVar8 + 0x58) = uStack_158;
  *(undefined8 *)(puVar8 + 0x50) = uStack_160;
  *(undefined8 *)(puVar8 + 0x68) = uStack_148;
  *(undefined8 *)(puVar8 + 0x60) = local_150;
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined8 *)(puVar8 + 0x28) = uStack_188;
  *(undefined8 *)(puVar8 + 0x20) = local_190;
  puVar9 = puVar8;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar8);
  auVar14._8_8_ = uVar10;
  auVar14._0_8_ = puVar9;
  return auVar14;
}

