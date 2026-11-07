// rea decompile_all
// name: FUN_10053eb74
// address: 0x10053eb74
// body: available
// range: 0x10053eb74-0x10053ec2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053ebf8) */

void FUN_10053eb74(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  local_50 = unaff_x20[0x16];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  local_70 = unaff_x20[0x12];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  local_90 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  local_b0 = unaff_x20[10];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  local_d0 = unaff_x20[6];
  local_40 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  local_f0 = unaff_x20[2];
  uStack_128 = param_1[5];
  local_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  local_110 = param_1[8];
  uStack_148 = param_1[1];
  local_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  FUN_100586c14(&local_150);
  param_1[5] = uStack_128;
  param_1[4] = local_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  param_1[8] = local_110;
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[3] = uStack_138;
  param_1[2] = uStack_140;
  return;
}

