// rea decompile_all
// name: FUN_1004a3350
// address: 0x1004a3350
// body: available
// range: 0x1004a3350-0x1004a342b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a3350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
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
  undefined1 local_40;
  
  local_1d8 = param_1;
  uStack_1d0 = param_2;
  local_1c8 = param_3;
  uStack_1c0 = param_4;
  (*param_5)(&local_1d8);
  uStack_e8 = uStack_170;
  local_f0 = local_178;
  uStack_d8 = uStack_160;
  uStack_e0 = local_168;
  local_d0 = local_158;
  uStack_128 = uStack_1b0;
  local_130 = local_1b8;
  uStack_118 = uStack_1a0;
  uStack_120 = local_1a8;
  uStack_108 = uStack_190;
  local_110 = local_198;
  uStack_f8 = uStack_180;
  uStack_100 = local_188;
  uStack_148 = uStack_1d0;
  local_150 = local_1d8;
  uStack_138 = uStack_1c0;
  uStack_140 = local_1c8;
  FUN_100008290(&local_150);
  uStack_58 = unaff_x20[0xd];
  local_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  local_40 = *(undefined1 *)(unaff_x20 + 0x10);
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  local_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  FUN_100040bb4(&local_c0,&DAT_100aa1378,&DAT_100830238);
  unaff_x20[0xd] = uStack_e8;
  unaff_x20[0xc] = local_f0;
  unaff_x20[0xf] = uStack_d8;
  unaff_x20[0xe] = uStack_e0;
  *(undefined1 *)(unaff_x20 + 0x10) = local_d0;
  unaff_x20[5] = uStack_128;
  unaff_x20[4] = local_130;
  unaff_x20[7] = uStack_118;
  unaff_x20[6] = uStack_120;
  unaff_x20[9] = uStack_108;
  unaff_x20[8] = local_110;
  unaff_x20[0xb] = uStack_f8;
  unaff_x20[10] = uStack_100;
  unaff_x20[1] = uStack_148;
  *unaff_x20 = local_150;
  unaff_x20[3] = uStack_138;
  unaff_x20[2] = uStack_140;
  return;
}

