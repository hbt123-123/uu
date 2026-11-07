// rea decompile_all
// name: FUN_1005c1418
// address: 0x1005c1418
// body: available
// range: 0x1005c1418-0x1005c14cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c1490) */

void FUN_1005c1418(void)

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
  undefined8 local_c0;
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
  
  uStack_68 = unaff_x20[9];
  local_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  local_50 = unaff_x20[0xc];
  local_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&local_100);
  uStack_128 = uStack_d8;
  local_130 = uStack_e0;
  uStack_118 = uStack_c8;
  uStack_120 = local_d0;
  local_110 = local_c0;
  uStack_148 = uStack_f8;
  local_150 = local_100;
  uStack_138 = uStack_e8;
  uStack_140 = local_f0;
  FUN_1005c0e60(&local_150);
  uStack_c8 = uStack_118;
  local_d0 = uStack_120;
  local_c0 = local_110;
  uStack_e8 = uStack_138;
  local_f0 = uStack_140;
  uStack_d8 = uStack_128;
  uStack_e0 = local_130;
  uStack_f8 = uStack_148;
  local_100 = local_150;
  __ss6HasherV9_finalizeSiyF();
  return;
}

