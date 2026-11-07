// rea decompile_all
// name: FUN_1000a1e44
// address: 0x1000a1e44
// body: available
// range: 0x1000a1e44-0x1000a234b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000a1e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,long param_6,undefined8 param_7,undefined8 param_8,char param_9)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined8 local_1f0;
  long lStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long lStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  code *pcStack_190;
  undefined8 local_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined1 local_170;
  undefined8 local_168;
  long lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long lStack_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long lStack_78;
  
  uVar9 = *param_4;
  lVar8 = param_4[1];
  uVar19 = param_4[3];
  uVar18 = param_4[2];
  uVar15 = param_4[5];
  uVar13 = param_4[4];
  uVar2 = *(undefined1 *)(param_4 + 6);
  uVar16 = param_4[8];
  uVar7 = param_4[7];
  if (*(long *)(param_6 + 0x10) == 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_1000133cc(param_4,&local_110,&DAT_100104038,&DAT_1000d3b60);
    _swift_bridgeObjectRetain(param_6);
    FUN_10005f520(param_7,param_8,param_9);
    local_2b0 = 0;
    uStack_2a8 = 0;
  }
  else {
    pcStack_190 = FUN_1000a3408;
    local_188 = 0;
    local_198 = param_6;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_1000133cc(param_4,&local_110,&DAT_100104038,&DAT_1000d3b60);
    _swift_bridgeObjectRetain(param_6);
    FUN_10005f520(param_7,param_8,param_9);
    puVar4 = &DAT_100104cd8;
    FUN_10000eb08(&DAT_100104cd8,&DAT_1000d6838);
    puVar5 = puVar4;
    FUN_1000a34fc();
    uStack_2a8 = 0x202c;
    local_2b0 = 0xe200000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,puVar4,puVar5);
  }
  puVar4 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  lVar11 = param_4[1];
  if (lVar11 == 0) {
    local_2b8 = 0;
    uVar14 = 0;
    uVar17 = 0;
    uStack_2c8 = 0;
    local_2d0 = 0;
    lVar11 = -0x2000000000000000;
  }
  else {
    local_2b8 = *param_4;
    local_80 = local_2b8;
    lStack_78 = lVar11;
    FUN_10000eb58(&local_80,&local_110);
    _swift_bridgeObjectRetain(uVar18,uVar19);
    uVar14 = uVar18;
    uVar17 = uVar19;
    local_2d0 = uVar7;
    uStack_2c8 = uVar16;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f520(param_7,param_8,param_9);
  FUN_10005fa9c();
  if ((param_4[1] == 0) || (lVar10 = param_4[5], lVar10 == 0)) {
    _swift_bridgeObjectRelease(0);
    lVar8 = param_4[1];
    if (lVar8 == 0) {
      uVar12 = 0;
      local_1b0 = 0;
      lVar10 = -0x2000000000000000;
      goto LAB_1000a2108;
    }
    uVar12 = 0;
    uVar16 = param_4[8];
    uVar7 = param_4[7];
    uVar2 = *(undefined1 *)(param_4 + 6);
    uVar19 = param_4[3];
    uVar18 = param_4[2];
    uVar15 = param_4[5];
    uVar13 = param_4[4];
    lVar10 = -0x2000000000000000;
    uVar9 = *param_4;
  }
  else {
    uVar12 = param_4[4];
    _swift_bridgeObjectRetain(lVar10);
  }
  local_e0 = CONCAT71(local_e0._1_7_,uVar2);
  local_110 = uVar9;
  lStack_108 = lVar8;
  local_100 = uVar18;
  puStack_f8 = (undefined *)uVar19;
  local_f0 = (undefined *)uVar13;
  uStack_e8 = uVar15;
  local_d8 = uVar7;
  uStack_d0 = uVar16;
  FUN_10005fcf0(&local_110);
  local_1b0 = uVar2;
LAB_1000a2108:
  bVar3 = param_9 != -1;
  local_220 = 3;
  uStack_218 = uStack_2a8;
  cVar1 = '\x06';
  if (bVar3) {
    cVar1 = param_9;
  }
  uVar9 = 0;
  if (bVar3) {
    uVar9 = param_8;
  }
  uVar13 = 0;
  if (bVar3) {
    uVar13 = param_7;
  }
  local_210 = local_2b0;
  local_200 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_1f8 = 0;
  local_1f0 = local_2b8;
  local_1a8 = 0;
  local_1a0 = 0xe000000000000000;
  local_198 = 3;
  pcStack_190 = (code *)uStack_2a8;
  local_188 = local_2b0;
  local_178 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_170 = 0;
  local_168 = local_2b8;
  local_120 = 0;
  local_118 = 0xe000000000000000;
  puStack_208 = puVar4;
  lStack_1e8 = lVar11;
  local_1e0 = uVar14;
  uStack_1d8 = uVar17;
  local_1d0 = local_2d0;
  uStack_1c8 = uStack_2c8;
  local_1c0 = uVar12;
  lStack_1b8 = lVar10;
  puStack_180 = puVar4;
  lStack_160 = lVar11;
  local_158 = uVar14;
  uStack_150 = uVar17;
  local_148 = local_2d0;
  uStack_140 = uStack_2c8;
  local_138 = uVar12;
  lStack_130 = lVar10;
  local_128 = local_1b0;
  FUN_100064cb0(&local_220,&local_110);
  FUN_100064cec(&local_198);
  puVar4 = &DAT_1000faed8;
  _swift_allocObject(&DAT_1000faed8,0x38,7);
  *(code **)(puVar4 + 0x10) = FUN_10009335c;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  puVar5 = &DAT_1000faf00;
  _swift_allocObject(&DAT_1000faf00,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(long *)(puVar5 + 0x18) = param_6;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  uStack_a0 = CONCAT71(uStack_1af,local_1b0);
  lStack_a8 = lStack_1b8;
  local_b0 = local_1c0;
  uStack_98 = local_1a8;
  local_90 = local_1a0;
  uStack_e8 = CONCAT71(uStack_1f7,uStack_1f8);
  local_f0 = local_200;
  local_d8 = lStack_1e8;
  local_e0 = local_1f0;
  uStack_c8 = uStack_1d8;
  uStack_d0 = local_1e0;
  uStack_b8 = uStack_1c8;
  uStack_c0 = local_1d0;
  lStack_108 = uStack_218;
  local_110 = local_220;
  puStack_f8 = puStack_208;
  local_100 = local_210;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_100096318(param_7,param_8,param_9);
  puVar6 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar7 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x80) = uStack_b8;
  *(undefined8 *)(puVar6 + 0x78) = uStack_c0;
  *(long *)(puVar6 + 0x90) = lStack_a8;
  *(undefined8 *)(puVar6 + 0x88) = local_b0;
  *(undefined8 *)(puVar6 + 0xa0) = uStack_98;
  *(undefined8 *)(puVar6 + 0x98) = uStack_a0;
  *(undefined **)(puVar6 + 0x40) = puStack_f8;
  *(undefined8 *)(puVar6 + 0x38) = local_100;
  *(undefined8 *)(puVar6 + 0x50) = uStack_e8;
  *(undefined **)(puVar6 + 0x48) = local_f0;
  *(long *)(puVar6 + 0x60) = local_d8;
  *(undefined8 *)(puVar6 + 0x58) = local_e0;
  *(undefined8 *)(puVar6 + 0x70) = uStack_c8;
  *(undefined8 *)(puVar6 + 0x68) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(long *)(puVar6 + 0x30) = lStack_108;
  *(undefined8 *)(puVar6 + 0x28) = local_110;
  *(undefined8 *)(puVar6 + 0xa8) = local_90;
  *(undefined8 *)(puVar6 + 0xb0) = uVar13;
  *(undefined8 *)(puVar6 + 0xb8) = uVar9;
  puVar6[0xc0] = cVar1;
  puVar6[0xc1] = param_5;
  *(code **)(puVar6 + 200) = FUN_1000a35a0;
  *(undefined **)(puVar6 + 0xd0) = puVar4;
  puVar6[0xd8] = 1;
  *(code **)(puVar6 + 0xe0) = FUN_1000a3614;
  *(undefined **)(puVar6 + 0xe8) = puVar5;
  puVar4 = puVar6;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar6);
  auVar20._8_8_ = uVar7;
  auVar20._0_8_ = puVar4;
  return auVar20;
}

