// rea decompile_all
// name: FUN_1001fb478
// address: 0x1001fb478
// body: available
// range: 0x1001fb478-0x1001fb713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fb478(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined1 *puStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined4 local_190;
  undefined8 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined4 local_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [200];
  
  FUN_100401b14(0);
  local_150 = param_1;
  local_148 = param_2;
  uStack_140 = param_3;
  local_138 = param_4;
  uStack_130 = param_5;
  FUN_1003fb48c(FUN_10020170c,auStack_160,0xd0000000000000a0,0x800000010088d990,0xd000000000000037,
                0x800000010087c840,0x162,0);
  pcVar3 = FUN_100201718;
  puVar6 = auStack_1a0;
  local_190 = param_1;
  local_188 = param_2;
  uStack_180 = param_3;
  local_178 = param_4;
  uStack_170 = param_5;
  FUN_1003fb48c(FUN_100201718,puVar6,0xd0000000000000a0,0x800000010088d990,0xd000000000000037,
                0x800000010087c840,0x163,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  pcVar8 = *(code **)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  (*pcVar8)();
  local_1e0 = param_1;
  local_1d8 = param_2;
  uStack_1d0 = param_3;
  local_1c8 = param_4;
  uStack_1c0 = param_5;
  local_1b8 = pcVar3;
  puStack_1b0 = puVar6;
  FUN_1003fb48c(FUN_100201724,auStack_1f0,0xd0000000000000a0,0x800000010087c790,0xd000000000000037,
                0x800000010087c840,0x105,0);
  uVar4 = uVar1;
  _swift_getObjectType(uVar1);
  puVar5 = &DAT_1009a4eb8;
  _swift_allocObject(&DAT_1009a4eb8,0x118,7);
  uVar11 = param_2[0x10];
  uVar15 = param_2[0x13];
  uVar14 = param_2[0x12];
  *(undefined8 *)(puVar5 + 0xa0) = param_2[0x11];
  *(undefined8 *)(puVar5 + 0x98) = uVar11;
  *(undefined8 *)(puVar5 + 0xb0) = uVar15;
  *(undefined8 *)(puVar5 + 0xa8) = uVar14;
  uVar11 = param_2[0x14];
  uVar15 = param_2[0x17];
  uVar14 = param_2[0x16];
  *(undefined8 *)(puVar5 + 0xc0) = param_2[0x15];
  *(undefined8 *)(puVar5 + 0xb8) = uVar11;
  *(undefined8 *)(puVar5 + 0xd0) = uVar15;
  *(undefined8 *)(puVar5 + 200) = uVar14;
  uVar11 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  *(undefined8 *)(puVar5 + 0x60) = param_2[9];
  *(undefined8 *)(puVar5 + 0x58) = uVar11;
  *(undefined8 *)(puVar5 + 0x70) = uVar15;
  *(undefined8 *)(puVar5 + 0x68) = uVar14;
  uVar11 = param_2[0xc];
  uVar15 = param_2[0xf];
  uVar14 = param_2[0xe];
  *(undefined8 *)(puVar5 + 0x80) = param_2[0xd];
  *(undefined8 *)(puVar5 + 0x78) = uVar11;
  *(undefined8 *)(puVar5 + 0x90) = uVar15;
  *(undefined8 *)(puVar5 + 0x88) = uVar14;
  uVar11 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  *(undefined8 *)(puVar5 + 0x20) = param_2[1];
  *(undefined8 *)(puVar5 + 0x18) = uVar11;
  *(undefined8 *)(puVar5 + 0x30) = uVar15;
  *(undefined8 *)(puVar5 + 0x28) = uVar14;
  uVar11 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  *(undefined8 *)(puVar5 + 0x40) = param_2[5];
  *(undefined8 *)(puVar5 + 0x38) = uVar11;
  *(undefined4 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x50) = uVar15;
  *(undefined8 *)(puVar5 + 0x48) = uVar14;
  *(undefined8 *)(puVar5 + 0xd8) = uVar1;
  *(long *)(puVar5 + 0xe0) = lVar2;
  *(undefined8 *)(puVar5 + 0xf0) = uVar12;
  *(undefined8 *)(puVar5 + 0xe8) = uVar9;
  *(code **)(puVar5 + 0xf8) = pcVar8;
  *(undefined8 *)(puVar5 + 0x108) = uVar13;
  *(undefined8 *)(puVar5 + 0x100) = uVar10;
  *(undefined8 *)(puVar5 + 0x110) = uVar7;
  pcVar8 = *(code **)(lVar2 + 0x10);
  FUN_1000408d0(param_2,auStack_128);
  _swift_unknownObjectRetain(uVar1);
  _swift_unknownObjectRetain(uVar9);
  _swift_retain(uVar10);
  _swift_retain(uVar7);
  (*pcVar8)(param_3,pcVar3,puVar6,FUN_1002017f4,puVar5,uVar4,lVar2);
  _swift_bridgeObjectRelease(puVar6);
  _swift_release(puVar5);
  return;
}

