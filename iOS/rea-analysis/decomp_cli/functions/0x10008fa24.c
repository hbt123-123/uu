// rea decompile_all
// name: FUN_10008fa24
// address: 0x10008fa24
// body: available
// range: 0x10008fa24-0x10008fe43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10008fa24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_290 [136];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined *puStack_1f0;
  undefined *local_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8;
  long lStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined **ppuStack_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined1 local_158;
  undefined8 local_150;
  long lStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined **ppuStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined **ppuStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined **ppuStack_70;
  
  uVar9 = param_5[2];
  uVar15 = param_5[3];
  uVar13 = param_5[4];
  lVar14 = param_5[5];
  uVar12 = *(undefined1 *)(param_5 + 6);
  uVar5 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  lStack_f0 = param_5[1];
  if (lStack_f0 == 0) {
    uVar12 = 0;
    uVar13 = 0;
    lVar14 = 0;
    uVar9 = 0;
    uVar15 = 0;
    uVar11 = 0;
    lStack_f0 = -0x2000000000000000;
  }
  else {
    uVar11 = *param_5;
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lStack_f0);
    _swift_bridgeObjectRetain(uVar15);
  }
  local_c0 = PTR___sSSN_1000f02f8;
  ppuStack_b8 = &PTR_PTR_1000f88f0;
  local_78 = PTR___sSSN_1000f02f8;
  ppuStack_70 = &PTR_PTR_1000f88f0;
  local_f8 = uVar11;
  local_e8 = uVar9;
  uStack_e0 = uVar15;
  local_d8 = uVar13;
  lStack_d0 = lVar14;
  local_c8 = uVar12;
  local_b0 = uVar11;
  lStack_a8 = lStack_f0;
  local_a0 = uVar9;
  uStack_98 = uVar15;
  local_90 = uVar13;
  lStack_88 = lVar14;
  local_80 = uVar12;
  FUN_10005fcbc(&local_f8,&local_180);
  FUN_10005fcf0(&local_b0);
  puVar6 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  ppuVar10 = ppuStack_b8;
  puVar7 = local_c0;
  uVar15 = uStack_e0;
  uVar13 = local_e8;
  lVar14 = lStack_f0;
  uVar9 = local_f8;
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  *(undefined8 *)(puVar6 + 0x28) = param_2;
  *(undefined8 *)(puVar6 + 0x30) = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f520(param_7,param_8,param_9);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f520(param_7,param_8,param_9);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(lVar14);
  FUN_10005fa9c();
  local_198 = local_c8;
  local_1a8 = 0;
  if (lStack_d0 != 0) {
    local_1a8 = local_d8;
  }
  lVar2 = -0x2000000000000000;
  if (lStack_d0 != 0) {
    lVar2 = lStack_d0;
  }
  bVar4 = param_9 != -1;
  cVar1 = '\x06';
  if (bVar4) {
    cVar1 = param_9;
  }
  uVar11 = 0;
  if (bVar4) {
    uVar11 = param_8;
  }
  uVar3 = 0;
  if (bVar4) {
    uVar3 = param_7;
  }
  _swift_bridgeObjectRetain();
  FUN_10005fcf0(&local_f8);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e8 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_1e0 = 0;
  local_1d8 = uVar9;
  lStack_1d0 = lVar14;
  uStack_190 = 0;
  local_188 = 0xe000000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_160 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_158 = 0;
  local_150 = uVar9;
  lStack_148 = lVar14;
  local_110 = local_198;
  local_108 = 0;
  local_100 = 0xe000000000000000;
  puStack_1f0 = puVar6;
  local_1c8 = uVar13;
  uStack_1c0 = uVar15;
  local_1b8 = puVar7;
  ppuStack_1b0 = ppuVar10;
  lStack_1a0 = lVar2;
  puStack_168 = puVar6;
  local_140 = uVar13;
  uStack_138 = uVar15;
  local_130 = puVar7;
  ppuStack_128 = ppuVar10;
  local_120 = local_1a8;
  lStack_118 = lVar2;
  FUN_100064cb0(&local_208,auStack_290);
  FUN_100064cec(&local_180);
  puVar6 = &DAT_1000fa188;
  _swift_allocObject(&DAT_1000fa188,0x38,7);
  *(code **)(puVar6 + 0x10) = FUN_10009335c;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  *(undefined8 *)(puVar6 + 0x28) = param_2;
  *(undefined8 *)(puVar6 + 0x30) = param_3;
  puVar7 = &DAT_1000fa1b0;
  _swift_allocObject(&DAT_1000fa1b0,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = param_1;
  *(undefined8 *)(puVar7 + 0x30) = param_2;
  *(undefined8 *)(puVar7 + 0x38) = param_3;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(uVar5);
  FUN_100096318(param_7,param_8,param_9);
  puVar8 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar9 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(undefined ***)(puVar8 + 0x80) = ppuStack_1b0;
  *(undefined **)(puVar8 + 0x78) = local_1b8;
  *(long *)(puVar8 + 0x90) = lStack_1a0;
  *(undefined8 *)(puVar8 + 0x88) = local_1a8;
  *(undefined8 *)(puVar8 + 0xa0) = uStack_190;
  *(ulong *)(puVar8 + 0x98) = CONCAT71(uStack_197,local_198);
  *(undefined **)(puVar8 + 0x40) = puStack_1f0;
  *(undefined8 *)(puVar8 + 0x38) = local_1f8;
  *(ulong *)(puVar8 + 0x50) = CONCAT71(uStack_1df,uStack_1e0);
  *(undefined **)(puVar8 + 0x48) = local_1e8;
  *(long *)(puVar8 + 0x60) = lStack_1d0;
  *(undefined8 *)(puVar8 + 0x58) = local_1d8;
  *(undefined8 *)(puVar8 + 0x70) = uStack_1c0;
  *(undefined8 *)(puVar8 + 0x68) = local_1c8;
  *(undefined8 *)(puVar8 + 0x20) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uStack_200;
  *(undefined8 *)(puVar8 + 0x28) = local_208;
  *(undefined8 *)(puVar8 + 0xa8) = local_188;
  *(undefined8 *)(puVar8 + 0xb0) = uVar3;
  *(undefined8 *)(puVar8 + 0xb8) = uVar11;
  puVar8[0xc0] = cVar1;
  puVar8[0xc1] = param_6;
  *(code **)(puVar8 + 200) = FUN_100096284;
  *(undefined **)(puVar8 + 0xd0) = puVar6;
  puVar8[0xd8] = 1;
  *(code **)(puVar8 + 0xe0) = FUN_1000962f8;
  *(undefined **)(puVar8 + 0xe8) = puVar7;
  puVar6 = puVar8;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar8);
  auVar16._8_8_ = uVar9;
  auVar16._0_8_ = puVar6;
  return auVar16;
}

