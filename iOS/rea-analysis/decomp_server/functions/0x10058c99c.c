// rea decompile_all
// name: FUN_10058c99c
// address: 0x10058c99c
// body: available
// range: 0x10058c99c-0x10058ca5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010058ca20) */

void FUN_10058c99c(void)

{
  undefined8 *unaff_x20;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  uStack_68 = unaff_x20[0xd];
  local_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  local_50 = unaff_x20[0x10];
  local_40 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&local_120,0);
  uStack_148 = uStack_f8;
  local_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = local_f0;
  local_130 = local_e0;
  uStack_168 = uStack_118;
  local_170 = local_120;
  uStack_158 = uStack_108;
  uStack_160 = local_110;
  FUN_10058c2a8(&local_170);
  uStack_e8 = uStack_138;
  local_f0 = uStack_140;
  local_e0 = local_130;
  uStack_108 = uStack_158;
  local_110 = uStack_160;
  uStack_f8 = uStack_148;
  uStack_100 = local_150;
  uStack_118 = uStack_168;
  local_120 = local_170;
  __ss6HasherV9_finalizeSiyF();
  return;
}

