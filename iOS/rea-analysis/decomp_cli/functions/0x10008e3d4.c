// rea decompile_all
// name: FUN_10008e3d4
// address: 0x10008e3d4
// body: available
// range: 0x10008e3d4-0x10008e70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10008e3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_210 [136];
  ulong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long lStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 local_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  
  uVar7 = param_6[2];
  uVar12 = param_6[3];
  uVar8 = *(undefined1 *)(param_6 + 6);
  uVar13 = param_6[7];
  uVar14 = param_6[8];
  puVar3 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  lVar10 = param_6[1];
  if (lVar10 == 0) {
    uVar9 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar7 = 0;
    uVar12 = 0;
    lVar11 = -0x2000000000000000;
  }
  else {
    uVar9 = *param_6;
    local_78 = uVar9;
    lStack_70 = lVar10;
    FUN_10000eb58(&local_78,&local_100);
    _swift_bridgeObjectRetain(uVar12);
    lVar11 = lVar10;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005fa9c();
  if ((lVar10 == 0) || (lVar4 = param_6[5], lVar4 == 0)) {
    _swift_bridgeObjectRelease(0);
    local_128 = 0;
    uVar1 = 0;
    if (lVar10 != 0) {
      uVar1 = uVar8;
    }
    uVar8 = uVar1;
    lVar4 = -0x2000000000000000;
  }
  else {
    local_128 = param_6[4];
    _swift_bridgeObjectRetain();
  }
  local_188 = (ulong)(param_5 != 2);
  bVar2 = (param_5 & 1) == 0;
  uStack_180 = 0x65757274;
  if (bVar2) {
    uStack_180 = 0;
  }
  local_178 = 0xe400000000000000;
  if (bVar2) {
    local_178 = 0;
  }
  local_168 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_160 = 0;
  uStack_110 = 0;
  local_108 = 0xe000000000000000;
  local_e0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_d8 = 0;
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  puStack_170 = puVar3;
  local_158 = uVar9;
  lStack_150 = lVar11;
  local_148 = uVar7;
  uStack_140 = uVar12;
  local_138 = uVar13;
  uStack_130 = uVar14;
  lStack_120 = lVar4;
  local_118 = uVar8;
  local_100 = local_188;
  uStack_f8 = uStack_180;
  local_f0 = local_178;
  puStack_e8 = puVar3;
  local_d0 = uVar9;
  lStack_c8 = lVar11;
  local_c0 = uVar7;
  uStack_b8 = uVar12;
  local_b0 = uVar13;
  uStack_a8 = uVar14;
  local_a0 = local_128;
  lStack_98 = lVar4;
  local_90 = uVar8;
  FUN_100064cb0(&local_188,auStack_210);
  FUN_100064cec(&local_100);
  uVar7 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  puVar3 = &DAT_1000f9b70;
  _swift_allocObject(&DAT_1000f9b70,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar5 = &DAT_1000f9b98;
  _swift_allocObject(&DAT_1000f9b98,0x30,7);
  puVar5[0x10] = param_5;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  puVar6 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x80) = uStack_130;
  *(undefined8 *)(puVar6 + 0x78) = local_138;
  *(long *)(puVar6 + 0x90) = lStack_120;
  *(undefined8 *)(puVar6 + 0x88) = local_128;
  *(undefined8 *)(puVar6 + 0xa0) = uStack_110;
  *(ulong *)(puVar6 + 0x98) = CONCAT71(uStack_117,local_118);
  *(undefined **)(puVar6 + 0x40) = puStack_170;
  *(undefined8 *)(puVar6 + 0x38) = local_178;
  *(ulong *)(puVar6 + 0x50) = CONCAT71(uStack_15f,uStack_160);
  *(undefined **)(puVar6 + 0x48) = local_168;
  *(long *)(puVar6 + 0x60) = lStack_150;
  *(undefined8 *)(puVar6 + 0x58) = local_158;
  *(undefined8 *)(puVar6 + 0x70) = uStack_140;
  *(undefined8 *)(puVar6 + 0x68) = local_148;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x30) = uStack_180;
  *(ulong *)(puVar6 + 0x28) = local_188;
  *(undefined8 *)(puVar6 + 0xb0) = 0;
  *(undefined8 *)(puVar6 + 0xb8) = 0;
  *(undefined8 *)(puVar6 + 0xa8) = local_108;
  *(undefined2 *)(puVar6 + 0xc0) = 6;
  *(code **)(puVar6 + 200) = FUN_10008f1e4;
  *(undefined **)(puVar6 + 0xd0) = puVar3;
  puVar6[0xd8] = 0;
  *(code **)(puVar6 + 0xe0) = FUN_10008f22c;
  *(undefined **)(puVar6 + 0xe8) = puVar5;
  _swift_bridgeObjectRetain_n(param_2,2);
  uVar7 = 2;
  _swift_bridgeObjectRetain_n(param_3,2);
  puVar3 = puVar6;
  FUN_1000a38e8(puVar6);
  _swift_bridgeObjectRelease(puVar6);
  auVar15._8_8_ = uVar7;
  auVar15._0_8_ = puVar3;
  return auVar15;
}

