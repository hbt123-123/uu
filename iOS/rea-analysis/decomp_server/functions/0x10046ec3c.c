// rea decompile_all
// name: FUN_10046ec3c
// address: 0x10046ec3c
// body: available
// range: 0x10046ec3c-0x10046edd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046ec3c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 local_150;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  uVar5 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar3 = *(undefined8 *)(param_1 + 4);
  bVar6 = *(byte *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 10);
  uVar7 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if ((uVar7 & 1) == 0) {
    FUN_1004679e8(0);
    _swift_allocObject();
    FUN_100474804();
    *(long *)(unaff_x20 + 0x10) = lVar8;
  }
  bStack_2c0 = bVar6 & 1;
  local_2d8 = uVar5;
  uStack_2d0 = uVar1;
  local_2c8 = uVar3;
  local_2b8 = uVar2;
  uStack_2b0 = uVar4;
  FUN_100474e30(&local_2d8);
  uStack_168 = uStack_230;
  local_170 = local_238;
  uStack_158 = uStack_220;
  uStack_160 = local_228;
  local_150 = local_218;
  uStack_1a8 = uStack_270;
  local_1b0 = local_278;
  uStack_198 = uStack_260;
  local_1a0 = local_268;
  uStack_188 = uStack_250;
  local_190 = local_258;
  uStack_178 = uStack_240;
  local_180 = local_248;
  uStack_1e8 = uStack_2b0;
  local_1f0 = local_2b8;
  uStack_1d8 = uStack_2a0;
  uStack_1e0 = local_2a8;
  uStack_1c8 = uStack_290;
  local_1d0 = local_298;
  uStack_1b8 = uStack_280;
  local_1c0 = local_288;
  uStack_1f8 = CONCAT71(uStack_2bf,bStack_2c0);
  local_210 = CONCAT44(uStack_2d4,local_2d8);
  uStack_208 = uStack_2d0;
  uStack_200 = local_2c8;
  FUN_100008290(&local_210);
  uStack_128 = *(undefined8 *)(lVar8 + 0x38);
  uStack_130 = *(undefined8 *)(lVar8 + 0x30);
  uStack_118 = *(undefined8 *)(lVar8 + 0x48);
  local_120 = *(undefined8 *)(lVar8 + 0x40);
  uStack_108 = *(undefined8 *)(lVar8 + 0x58);
  uStack_110 = *(undefined8 *)(lVar8 + 0x50);
  uStack_f8 = *(undefined8 *)(lVar8 + 0x68);
  local_100 = *(undefined8 *)(lVar8 + 0x60);
  uStack_e8 = *(undefined8 *)(lVar8 + 0x78);
  uStack_f0 = *(undefined8 *)(lVar8 + 0x70);
  uStack_d8 = *(undefined8 *)(lVar8 + 0x88);
  local_e0 = *(undefined8 *)(lVar8 + 0x80);
  uStack_c8 = *(undefined8 *)(lVar8 + 0x98);
  uStack_d0 = *(undefined8 *)(lVar8 + 0x90);
  uStack_b8 = *(undefined8 *)(lVar8 + 0xa8);
  local_c0 = *(undefined8 *)(lVar8 + 0xa0);
  uStack_a8 = *(undefined8 *)(lVar8 + 0xb8);
  uStack_b0 = *(undefined8 *)(lVar8 + 0xb0);
  uStack_98 = *(undefined8 *)(lVar8 + 200);
  local_a0 = *(undefined8 *)(lVar8 + 0xc0);
  local_80 = *(undefined1 *)(lVar8 + 0xe0);
  uStack_88 = *(undefined8 *)(lVar8 + 0xd8);
  uStack_90 = *(undefined8 *)(lVar8 + 0xd0);
  uStack_138 = *(undefined8 *)(lVar8 + 0x28);
  local_140 = *(undefined8 *)(lVar8 + 0x20);
  *(undefined8 *)(lVar8 + 0x28) = uStack_208;
  *(undefined8 *)(lVar8 + 0x20) = local_210;
  *(undefined8 *)(lVar8 + 0x58) = uStack_1d8;
  *(undefined8 *)(lVar8 + 0x50) = uStack_1e0;
  *(undefined8 *)(lVar8 + 0x68) = uStack_1c8;
  *(undefined8 *)(lVar8 + 0x60) = local_1d0;
  *(undefined8 *)(lVar8 + 0xb8) = uStack_178;
  *(undefined8 *)(lVar8 + 0xb0) = local_180;
  *(undefined8 *)(lVar8 + 200) = uStack_168;
  *(undefined8 *)(lVar8 + 0xc0) = local_170;
  *(undefined8 *)(lVar8 + 0xd8) = uStack_158;
  *(undefined8 *)(lVar8 + 0xd0) = uStack_160;
  *(undefined8 *)(lVar8 + 0x78) = uStack_1b8;
  *(undefined8 *)(lVar8 + 0x70) = local_1c0;
  *(undefined8 *)(lVar8 + 0x88) = uStack_1a8;
  *(undefined8 *)(lVar8 + 0x80) = local_1b0;
  *(undefined1 *)(lVar8 + 0xe0) = local_150;
  *(undefined8 *)(lVar8 + 0x98) = uStack_198;
  *(undefined8 *)(lVar8 + 0x90) = local_1a0;
  *(undefined8 *)(lVar8 + 0xa8) = uStack_188;
  *(undefined8 *)(lVar8 + 0xa0) = local_190;
  *(undefined8 *)(lVar8 + 0x38) = uStack_1f8;
  *(undefined8 *)(lVar8 + 0x30) = uStack_200;
  *(undefined8 *)(lVar8 + 0x48) = uStack_1e8;
  *(undefined8 *)(lVar8 + 0x40) = local_1f0;
  FUN_100040bb4(&local_140,&DAT_100aa09a8,&BYTE_10082db80);
  return;
}

