// rea decompile_all
// name: FUN_1004858d8
// address: 0x1004858d8
// body: available
// range: 0x1004858d8-0x100485a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004858d8(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_218 [24];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_100492e44(0);
    _swift_allocObject();
    FUN_10048be0c();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  local_150 = param_1[0x16];
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  local_130 = param_1[0x1a];
  uStack_198 = param_1[0xd];
  local_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  local_190 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  local_170 = param_1[0x12];
  uStack_1d8 = param_1[5];
  local_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  local_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  local_1b0 = param_1[10];
  uStack_1f8 = param_1[1];
  local_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  FUN_100008290(&local_200);
  _swift_beginAccess(lVar2 + 0xe8,auStack_218,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 400);
  local_80 = *(undefined8 *)(lVar2 + 0x188);
  uStack_68 = *(undefined8 *)(lVar2 + 0x1a0);
  uStack_70 = *(undefined8 *)(lVar2 + 0x198);
  uStack_58 = *(undefined8 *)(lVar2 + 0x1b0);
  local_60 = *(undefined8 *)(lVar2 + 0x1a8);
  uStack_48 = *(undefined8 *)(lVar2 + 0x1c0);
  uStack_50 = *(undefined8 *)(lVar2 + 0x1b8);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x150);
  local_c0 = *(undefined8 *)(lVar2 + 0x148);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x160);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x158);
  uStack_98 = *(undefined8 *)(lVar2 + 0x170);
  local_a0 = *(undefined8 *)(lVar2 + 0x168);
  uStack_88 = *(undefined8 *)(lVar2 + 0x180);
  uStack_90 = *(undefined8 *)(lVar2 + 0x178);
  uStack_f8 = *(undefined8 *)(lVar2 + 0x110);
  local_100 = *(undefined8 *)(lVar2 + 0x108);
  uStack_e8 = *(undefined8 *)(lVar2 + 0x120);
  uStack_f0 = *(undefined8 *)(lVar2 + 0x118);
  uStack_d8 = *(undefined8 *)(lVar2 + 0x130);
  local_e0 = *(undefined8 *)(lVar2 + 0x128);
  uStack_c8 = *(undefined8 *)(lVar2 + 0x140);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x138);
  uStack_118 = *(undefined8 *)(lVar2 + 0xf0);
  local_120 = *(undefined8 *)(lVar2 + 0xe8);
  uStack_108 = *(undefined8 *)(lVar2 + 0x100);
  uStack_110 = *(undefined8 *)(lVar2 + 0xf8);
  *(undefined8 *)(lVar2 + 400) = uStack_158;
  *(undefined8 *)(lVar2 + 0x188) = uStack_160;
  *(undefined8 *)(lVar2 + 0x1a0) = uStack_148;
  *(undefined8 *)(lVar2 + 0x198) = local_150;
  *(undefined8 *)(lVar2 + 0x1b0) = uStack_138;
  *(undefined8 *)(lVar2 + 0x1a8) = uStack_140;
  *(undefined8 *)(lVar2 + 0x1c0) = uStack_128;
  *(undefined8 *)(lVar2 + 0x1b8) = local_130;
  *(undefined8 *)(lVar2 + 0x150) = uStack_198;
  *(undefined8 *)(lVar2 + 0x148) = local_1a0;
  *(undefined8 *)(lVar2 + 0x160) = uStack_188;
  *(undefined8 *)(lVar2 + 0x158) = local_190;
  *(undefined8 *)(lVar2 + 0x170) = uStack_178;
  *(undefined8 *)(lVar2 + 0x168) = uStack_180;
  *(undefined8 *)(lVar2 + 0x180) = uStack_168;
  *(undefined8 *)(lVar2 + 0x178) = local_170;
  *(undefined8 *)(lVar2 + 0x110) = uStack_1d8;
  *(undefined8 *)(lVar2 + 0x108) = local_1e0;
  *(undefined8 *)(lVar2 + 0x120) = uStack_1c8;
  *(undefined8 *)(lVar2 + 0x118) = uStack_1d0;
  *(undefined8 *)(lVar2 + 0x130) = uStack_1b8;
  *(undefined8 *)(lVar2 + 0x128) = local_1c0;
  *(undefined8 *)(lVar2 + 0x140) = uStack_1a8;
  *(undefined8 *)(lVar2 + 0x138) = local_1b0;
  *(undefined8 *)(lVar2 + 0xf0) = uStack_1f8;
  *(undefined8 *)(lVar2 + 0xe8) = local_200;
  *(undefined8 *)(lVar2 + 0x100) = uStack_1e8;
  *(undefined8 *)(lVar2 + 0xf8) = uStack_1f0;
  FUN_100040bb4(&local_120,&DAT_100aa0bc8,&DAT_10082de10);
  return;
}

