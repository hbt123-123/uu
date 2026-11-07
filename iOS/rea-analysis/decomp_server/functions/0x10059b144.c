// rea decompile_all
// name: FUN_10059b144
// address: 0x10059b144
// body: available
// range: 0x10059b144-0x10059b1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010059b1ac) */

void FUN_10059b144(void)

{
  undefined8 *unaff_x20;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = unaff_x20[5];
  local_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  local_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&local_d0);
  uStack_f8 = uStack_a8;
  local_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = local_a0;
  local_e0 = local_90;
  uStack_118 = uStack_c8;
  local_120 = local_d0;
  uStack_108 = uStack_b8;
  uStack_110 = local_c0;
  FUN_10059ad08(&local_120);
  uStack_98 = uStack_e8;
  local_a0 = uStack_f0;
  local_90 = local_e0;
  uStack_b8 = uStack_108;
  local_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = local_100;
  uStack_c8 = uStack_118;
  local_d0 = local_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}

