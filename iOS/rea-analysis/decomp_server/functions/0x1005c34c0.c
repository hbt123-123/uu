// rea decompile_all
// name: FUN_1005c34c0
// address: 0x1005c34c0
// body: available
// range: 0x1005c34c0-0x1005c355f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c3520) */

void FUN_1005c34c0(void)

{
  undefined8 *unaff_x20;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  local_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&local_b0);
  uStack_d8 = uStack_88;
  local_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = local_80;
  local_c0 = local_70;
  uStack_f8 = uStack_a8;
  local_100 = local_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = local_a0;
  FUN_1005c30e0(&local_100);
  uStack_78 = uStack_c8;
  local_80 = uStack_d0;
  local_70 = local_c0;
  uStack_98 = uStack_e8;
  local_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = local_e0;
  uStack_a8 = uStack_f8;
  local_b0 = local_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}

