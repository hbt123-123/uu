// rea decompile_all
// name: FUN_1001a1378
// address: 0x1001a1378
// body: available
// range: 0x1001a1378-0x1001a1477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a1378(void)

{
  long unaff_x20;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_bridgeObjectRelease_n(0xe000000000000000,2);
  local_188 = 0x6e776f6e6b6e75;
  uStack_180 = 0xe700000000000000;
  local_178 = 0x6e776f6e6b6e75;
  uStack_170 = 0xe700000000000000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 1;
  uStack_148 = 0;
  uStack_150 = 0;
  local_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_128 = 0xc000000000000000;
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x68);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x70);
  local_c0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
  local_120 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
  local_100 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x80) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x6e776f6e6b6e75;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe700000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0x6e776f6e6b6e75;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(ulong *)(unaff_x20 + 0x50) = CONCAT71(uStack_157,1);
  FUN_1001a37f8(&local_188,&local_b8);
  FUN_1001a3834(&local_120);
  FUN_1001a2614();
  local_b8 = 0x6e776f6e6b6e75;
  uStack_b0 = 0xe700000000000000;
  local_a8 = 0x6e776f6e6b6e75;
  uStack_a0 = 0xe700000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0xc000000000000000;
  FUN_1001a3834(&local_b8);
  return;
}

