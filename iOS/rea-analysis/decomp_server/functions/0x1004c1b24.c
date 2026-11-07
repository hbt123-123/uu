// rea decompile_all
// name: FUN_1004c1b24
// address: 0x1004c1b24
// body: available
// range: 0x1004c1b24-0x1004c1c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c1b24(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
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
  undefined8 uStack_120;
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
  undefined8 local_40;
  
  bStack_200 = param_2 & 1;
  local_208 = param_1;
  local_1f8 = param_3;
  uStack_1f0 = param_4;
  (*param_5)(&local_208);
  uStack_108 = uStack_1a0;
  local_110 = local_1a8;
  uStack_f8 = uStack_190;
  uStack_100 = local_198;
  uStack_e8 = uStack_180;
  local_f0 = local_188;
  local_e0 = local_178;
  uStack_148 = uStack_1e0;
  local_150 = local_1e8;
  uStack_138 = uStack_1d0;
  uStack_140 = local_1d8;
  uStack_128 = uStack_1c0;
  local_130 = local_1c8;
  uStack_118 = uStack_1b0;
  uStack_120 = local_1b8;
  uStack_168 = CONCAT71(uStack_1ff,bStack_200);
  local_170 = local_208;
  uStack_158 = uStack_1f0;
  uStack_160 = local_1f8;
  FUN_100008290(&local_170);
  uStack_68 = unaff_x20[0xd];
  local_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  local_50 = unaff_x20[0x10];
  local_40 = unaff_x20[0x12];
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
  FUN_100040bb4(&local_d0,&DAT_100aa1980,&DAT_100832130);
  unaff_x20[0xd] = uStack_108;
  unaff_x20[0xc] = local_110;
  unaff_x20[0xf] = uStack_f8;
  unaff_x20[0xe] = uStack_100;
  unaff_x20[0x11] = uStack_e8;
  unaff_x20[0x10] = local_f0;
  unaff_x20[0x12] = local_e0;
  unaff_x20[5] = uStack_148;
  unaff_x20[4] = local_150;
  unaff_x20[7] = uStack_138;
  unaff_x20[6] = uStack_140;
  unaff_x20[9] = uStack_128;
  unaff_x20[8] = local_130;
  unaff_x20[0xb] = uStack_118;
  unaff_x20[10] = uStack_120;
  unaff_x20[1] = uStack_168;
  *unaff_x20 = local_170;
  unaff_x20[3] = uStack_158;
  unaff_x20[2] = uStack_160;
  return;
}

