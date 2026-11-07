// rea decompile_all
// name: FUN_1000619a4
// address: 0x1000619a4
// body: available
// range: 0x1000619a4-0x100061ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000619a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5,
             ulong param_6,undefined1 param_7,undefined8 *param_8)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long local_3d0;
  undefined8 local_3c8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_398;
  undefined1 auStack_330 [136];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined *puStack_290;
  undefined *local_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined8 local_278;
  long lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  long lStack_240;
  undefined1 local_238;
  undefined7 uStack_237;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  ulong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined *local_180;
  undefined *local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long lStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 local_120;
  undefined8 local_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  
  uVar9 = param_8[2];
  uVar13 = param_8[3];
  uVar10 = *(undefined1 *)(param_8 + 6);
  uVar18 = param_8[7];
  uVar19 = param_8[8];
  if ((param_6 & 1) == 0) {
    lVar2 = param_1;
    FUN_100067074(param_1,param_2,param_4);
    lVar3 = 0x6f6e;
    uVar8 = 0xe200000000000000;
  }
  else {
    lVar2 = 0x656c62616e65;
    FUN_100065f2c(0x656c62616e65,0xe600000000000000,1,param_4,param_1,param_2,param_3);
    lVar3 = 0x656c6261736964;
    uVar8 = 0xe700000000000000;
  }
  FUN_100065f2c(lVar3,uVar8,0,param_4,param_1,param_2,param_3);
  if (param_5 != 2) {
    lVar16 = lVar2;
    if ((param_5 & 1) == 0) {
      lVar16 = lVar3;
    }
    if (*(long *)(lVar16 + 0x10) != 0) {
      uVar8 = *(undefined8 *)(lVar16 + 0x20);
      uVar14 = *(undefined8 *)(lVar16 + 0x28);
      uVar1 = *(undefined1 *)(lVar16 + 0x30);
      FUN_100065610(uVar8,uVar14,uVar1);
      uStack_3a8 = uVar8;
      local_3b0 = uVar14;
      FUN_1000979e4(uVar8,uVar14,uVar1);
      FUN_100065628(uVar8,uVar14,uVar1);
      goto LAB_100061aec;
    }
  }
  local_3b0 = 0;
  uStack_3a8 = 0;
LAB_100061aec:
  puVar4 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  puVar5 = puVar4;
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(long *)(puVar5 + 0x20) = param_1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  lVar16 = param_8[1];
  if (lVar16 == 0) {
    uVar8 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0;
    local_3d0 = -0x2000000000000000;
    local_3c8 = 0;
  }
  else {
    local_3c8 = *param_8;
    local_88 = local_3c8;
    lStack_80 = lVar16;
    FUN_10000eb58(&local_88,&local_110);
    _swift_bridgeObjectRetain(uVar13);
    uVar8 = uVar18;
    uVar14 = uVar19;
    uVar15 = uVar9;
    uVar17 = uVar13;
    local_3d0 = lVar16;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005fa9c();
  lVar11 = param_8[5];
  if ((lVar16 == 0) || (lVar11 == 0)) {
    _swift_bridgeObjectRelease(0);
    local_138 = 0;
    local_128 = 0;
    if (lVar16 != 0) {
      local_128 = uVar10;
    }
    lStack_130 = -0x2000000000000000;
  }
  else {
    local_138 = param_8[4];
    _swift_bridgeObjectRetain(lVar11);
    lStack_130 = lVar11;
    local_128 = uVar10;
  }
  uStack_190 = uStack_3a8;
  local_188 = local_3b0;
  local_178 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_170 = 1;
  local_168 = local_3c8;
  local_160 = local_3d0;
  lVar12 = -0x2000000000000000;
  local_120 = 0;
  local_118 = 0xe000000000000000;
  uStack_108 = uStack_3a8;
  local_100 = local_3b0;
  local_f0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_e8 = 1;
  local_e0 = local_3c8;
  lStack_d8 = local_3d0;
  local_98 = 0;
  uStack_90 = 0xe000000000000000;
  local_198 = (ulong)(param_5 != 2);
  local_180 = puVar5;
  local_158 = uVar15;
  uStack_150 = uVar17;
  local_148 = uVar8;
  local_140 = uVar14;
  local_110 = (ulong)(param_5 != 2);
  puStack_f8 = puVar5;
  local_d0 = uVar15;
  uStack_c8 = uVar17;
  local_c0 = uVar8;
  uStack_b8 = uVar14;
  local_b0 = local_138;
  lStack_a8 = lStack_130;
  local_a0 = local_128;
  FUN_100064cb0(&local_198,&local_220);
  FUN_100064cec(&local_110);
  _swift_allocObject(puVar4,0x38,7);
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(long *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  if (lVar16 == 0) {
    uVar1 = 0;
    local_398 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar9 = 0;
    uVar13 = 0;
  }
  else {
    local_398 = *param_8;
    local_78 = local_398;
    lStack_70 = lVar16;
    FUN_10000eb58(&local_78,&local_220);
    _swift_bridgeObjectRetain(uVar13);
    lVar12 = lVar16;
    uVar1 = uVar10;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005fa9c();
  if (lVar16 == 0 || lVar11 == 0) {
    uVar8 = 0;
    lVar11 = -0x2000000000000000;
    uVar10 = uVar1;
  }
  else {
    uVar8 = param_8[4];
    _swift_bridgeObjectRetain();
  }
  local_2a8 = 1;
  uStack_2a0 = 0;
  local_298 = 0;
  local_288 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_280 = 0;
  local_278 = local_398;
  local_230 = 0;
  local_228 = 0xe000000000000000;
  local_220 = 1;
  uStack_218 = 0;
  local_210 = 0;
  local_200 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_1f8 = 0;
  local_1f0 = local_398;
  local_1a8 = 0;
  local_1a0 = 0xe000000000000000;
  puStack_290 = puVar4;
  lStack_270 = lVar12;
  local_268 = uVar9;
  uStack_260 = uVar13;
  local_258 = uVar18;
  uStack_250 = uVar19;
  local_248 = uVar8;
  lStack_240 = lVar11;
  local_238 = uVar10;
  puStack_208 = puVar4;
  local_1e8 = lVar12;
  local_1e0 = uVar9;
  local_1d8 = uVar13;
  local_1d0 = uVar18;
  local_1c8 = uVar19;
  local_1c0 = uVar8;
  local_1b8 = lVar11;
  local_1b0 = uVar10;
  FUN_100064cb0(&local_2a8,auStack_330);
  FUN_100064cec(&local_220);
  puVar4 = &DAT_1000f7f50;
  _swift_allocObject(&DAT_1000f7f50,0x29,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar4[0x28] = param_7;
  puVar5 = &DAT_1000f7f78;
  _swift_allocObject(&DAT_1000f7f78,0x30,7);
  puVar5[0x10] = param_5;
  *(long *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  puVar6 = &DAT_1000f7fa0;
  _swift_allocObject(&DAT_1000f7fa0,0x29,7);
  *(long *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  puVar6[0x28] = param_7;
  puVar7 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined8 *)(puVar7 + 0x80) = local_140;
  *(undefined8 *)(puVar7 + 0x78) = local_148;
  *(long *)(puVar7 + 0x90) = lStack_130;
  *(undefined8 *)(puVar7 + 0x88) = local_138;
  *(undefined8 *)(puVar7 + 0xa0) = local_120;
  *(ulong *)(puVar7 + 0x98) = CONCAT71(uStack_127,local_128);
  *(undefined **)(puVar7 + 0x40) = local_180;
  *(undefined8 *)(puVar7 + 0x38) = local_188;
  *(ulong *)(puVar7 + 0x50) = CONCAT71(uStack_16f,uStack_170);
  *(undefined **)(puVar7 + 0x48) = local_178;
  *(long *)(puVar7 + 0x60) = local_160;
  *(undefined8 *)(puVar7 + 0x58) = local_168;
  *(undefined8 *)(puVar7 + 0x70) = uStack_150;
  *(undefined8 *)(puVar7 + 0x68) = local_158;
  *(undefined8 *)(puVar7 + 0x30) = uStack_190;
  *(ulong *)(puVar7 + 0x28) = local_198;
  *(undefined8 *)(puVar7 + 0x150) = uStack_250;
  *(undefined8 *)(puVar7 + 0x148) = local_258;
  *(long *)(puVar7 + 0x160) = lStack_240;
  *(undefined8 *)(puVar7 + 0x158) = local_248;
  *(undefined8 *)(puVar7 + 0x170) = local_230;
  *(ulong *)(puVar7 + 0x168) = CONCAT71(uStack_237,local_238);
  *(undefined **)(puVar7 + 0x110) = puStack_290;
  *(undefined8 *)(puVar7 + 0x108) = local_298;
  *(ulong *)(puVar7 + 0x120) = CONCAT71(uStack_27f,uStack_280);
  *(undefined **)(puVar7 + 0x118) = local_288;
  *(long *)(puVar7 + 0x130) = lStack_270;
  *(undefined8 *)(puVar7 + 0x128) = local_278;
  *(undefined8 *)(puVar7 + 0x140) = uStack_260;
  *(undefined8 *)(puVar7 + 0x138) = local_268;
  *(long *)(puVar7 + 0x20) = lVar2;
  *(undefined8 *)(puVar7 + 0xb0) = 0;
  *(undefined8 *)(puVar7 + 0xb8) = 0;
  *(undefined8 *)(puVar7 + 0xa8) = local_118;
  *(undefined2 *)(puVar7 + 0xc0) = 6;
  *(code **)(puVar7 + 200) = FUN_100065644;
  *(undefined **)(puVar7 + 0xd0) = puVar4;
  puVar7[0xd8] = 0;
  *(code **)(puVar7 + 0xe0) = FUN_100065674;
  *(undefined **)(puVar7 + 0xe8) = puVar5;
  *(long *)(puVar7 + 0xf0) = lVar3;
  *(undefined8 *)(puVar7 + 0x100) = uStack_2a0;
  *(undefined8 *)(puVar7 + 0xf8) = local_2a8;
  *(undefined8 *)(puVar7 + 0x180) = 0;
  *(undefined8 *)(puVar7 + 0x188) = 0;
  *(undefined8 *)(puVar7 + 0x178) = local_228;
  *(undefined2 *)(puVar7 + 400) = 6;
  *(code **)(puVar7 + 0x198) = FUN_100065694;
  *(undefined **)(puVar7 + 0x1a0) = puVar6;
  puVar7[0x1a8] = 0;
  *(code **)(puVar7 + 0x1b0) = FUN_1000045b0;
  *(undefined8 *)(puVar7 + 0x1b8) = 0;
  _swift_bridgeObjectRetain_n(param_2,3);
  uVar9 = 3;
  _swift_bridgeObjectRetain_n(param_3,3);
  puVar4 = puVar7;
  FUN_1000a38e8(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  auVar20._8_8_ = uVar9;
  auVar20._0_8_ = puVar4;
  return auVar20;
}

