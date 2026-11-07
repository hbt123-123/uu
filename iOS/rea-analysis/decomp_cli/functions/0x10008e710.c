// rea decompile_all
// name: FUN_10008e710
// address: 0x10008e710
// body: available
// range: 0x10008e710-0x10008ea1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10008e710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_210 [136];
  undefined8 local_188;
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
  undefined8 local_100;
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
  
  uVar6 = param_5[2];
  uVar13 = param_5[3];
  uVar7 = *(undefined1 *)(param_5 + 6);
  uVar11 = param_5[7];
  uVar12 = param_5[8];
  puVar2 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  lVar10 = param_5[1];
  if (lVar10 == 0) {
    uVar8 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar6 = 0;
    uVar13 = 0;
    lVar9 = -0x2000000000000000;
  }
  else {
    uVar8 = *param_5;
    local_78 = uVar8;
    lStack_70 = lVar10;
    FUN_10000eb58(&local_78,&local_100);
    _swift_bridgeObjectRetain(uVar13);
    lVar9 = lVar10;
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005fa9c();
  if ((lVar10 == 0) || (lVar3 = param_5[5], lVar3 == 0)) {
    _swift_bridgeObjectRelease(0);
    local_128 = 0;
    uVar1 = 0;
    if (lVar10 != 0) {
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    lVar3 = -0x2000000000000000;
  }
  else {
    local_128 = param_5[4];
    _swift_bridgeObjectRetain();
  }
  local_188 = 3;
  uStack_180 = 0;
  local_178 = 0;
  local_168 = PTR___swiftEmptyArrayStorage_1000f0740;
  uStack_160 = 0;
  uStack_110 = 0;
  local_108 = 0xe000000000000000;
  local_100 = 3;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e0 = PTR___swiftEmptyArrayStorage_1000f0740;
  local_d8 = 0;
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  puStack_170 = puVar2;
  local_158 = uVar8;
  lStack_150 = lVar9;
  local_148 = uVar6;
  uStack_140 = uVar13;
  local_138 = uVar11;
  uStack_130 = uVar12;
  lStack_120 = lVar3;
  local_118 = uVar7;
  puStack_e8 = puVar2;
  local_d0 = uVar8;
  lStack_c8 = lVar9;
  local_c0 = uVar6;
  uStack_b8 = uVar13;
  local_b0 = uVar11;
  uStack_a8 = uVar12;
  local_a0 = local_128;
  lStack_98 = lVar3;
  local_90 = uVar7;
  FUN_100064cb0(&local_188,auStack_210);
  FUN_100064cec(&local_100);
  uVar6 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  puVar2 = &DAT_1000f9b20;
  _swift_allocObject(&DAT_1000f9b20,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar4 = &DAT_1000f9b48;
  _swift_allocObject(&DAT_1000f9b48,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar5 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x80) = uStack_130;
  *(undefined8 *)(puVar5 + 0x78) = local_138;
  *(long *)(puVar5 + 0x90) = lStack_120;
  *(undefined8 *)(puVar5 + 0x88) = local_128;
  *(undefined8 *)(puVar5 + 0xa0) = uStack_110;
  *(ulong *)(puVar5 + 0x98) = CONCAT71(uStack_117,local_118);
  *(undefined **)(puVar5 + 0x40) = puStack_170;
  *(undefined8 *)(puVar5 + 0x38) = local_178;
  *(ulong *)(puVar5 + 0x50) = CONCAT71(uStack_15f,uStack_160);
  *(undefined **)(puVar5 + 0x48) = local_168;
  *(long *)(puVar5 + 0x60) = lStack_150;
  *(undefined8 *)(puVar5 + 0x58) = local_158;
  *(undefined8 *)(puVar5 + 0x70) = uStack_140;
  *(undefined8 *)(puVar5 + 0x68) = local_148;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 *)(puVar5 + 0x30) = uStack_180;
  *(undefined8 *)(puVar5 + 0x28) = local_188;
  *(undefined8 *)(puVar5 + 0xb0) = 0;
  *(undefined8 *)(puVar5 + 0xb8) = 0;
  *(undefined8 *)(puVar5 + 0xa8) = local_108;
  *(undefined2 *)(puVar5 + 0xc0) = 6;
  *(code **)(puVar5 + 200) = FUN_10008f130;
  *(undefined **)(puVar5 + 0xd0) = puVar2;
  puVar5[0xd8] = 0;
  *(code **)(puVar5 + 0xe0) = FUN_10008f14c;
  *(undefined **)(puVar5 + 0xe8) = puVar4;
  _swift_bridgeObjectRetain_n(param_2,2);
  uVar6 = 2;
  _swift_bridgeObjectRetain_n(param_3,2);
  puVar2 = puVar5;
  FUN_1000a38e8(puVar5);
  _swift_bridgeObjectRelease(puVar5);
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = puVar2;
  return auVar14;
}

