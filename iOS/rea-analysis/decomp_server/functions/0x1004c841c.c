// rea decompile_all
// name: FUN_1004c841c
// address: 0x1004c841c
// body: available
// range: 0x1004c841c-0x1004c850b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c841c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined8 local_d0;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_1d8 = param_1[5];
  local_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  local_1c0 = param_1[8];
  uStack_1f8 = param_1[1];
  local_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  FUN_1004df754(&local_200);
  uStack_f8 = uStack_198;
  local_100 = local_1a0;
  uStack_e8 = uStack_188;
  uStack_f0 = uStack_190;
  uStack_d8 = uStack_178;
  local_e0 = local_180;
  local_d0 = local_170;
  uStack_138 = uStack_1d8;
  local_140 = local_1e0;
  uStack_128 = uStack_1c8;
  uStack_130 = uStack_1d0;
  uStack_118 = uStack_1b8;
  local_120 = local_1c0;
  uStack_108 = uStack_1a8;
  uStack_110 = uStack_1b0;
  uStack_158 = uStack_1f8;
  local_160 = local_200;
  uStack_148 = uStack_1e8;
  uStack_150 = uStack_1f0;
  FUN_100008290(&local_160);
  uStack_58 = unaff_x20[0xd];
  local_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  local_40 = unaff_x20[0x10];
  local_30 = unaff_x20[0x12];
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
  FUN_100040bb4(&local_c0,&DAT_100aa1980,&DAT_100832130);
  unaff_x20[0xd] = uStack_f8;
  unaff_x20[0xc] = local_100;
  unaff_x20[0xf] = uStack_e8;
  unaff_x20[0xe] = uStack_f0;
  unaff_x20[0x11] = uStack_d8;
  unaff_x20[0x10] = local_e0;
  unaff_x20[0x12] = local_d0;
  unaff_x20[5] = uStack_138;
  unaff_x20[4] = local_140;
  unaff_x20[7] = uStack_128;
  unaff_x20[6] = uStack_130;
  unaff_x20[9] = uStack_118;
  unaff_x20[8] = local_120;
  unaff_x20[0xb] = uStack_108;
  unaff_x20[10] = uStack_110;
  unaff_x20[1] = uStack_158;
  *unaff_x20 = local_160;
  unaff_x20[3] = uStack_148;
  unaff_x20[2] = uStack_150;
  return;
}

