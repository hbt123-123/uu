// rea decompile_all
// name: FUN_1005c3328
// address: 0x1005c3328
// body: available
// range: 0x1005c3328-0x1005c33b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005c3378) */

void FUN_1005c3328(void)

{
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  __ss6HasherV5_seedABSi_tcfC(&local_80,0);
  uStack_a8 = uStack_58;
  local_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = local_50;
  local_90 = local_40;
  uStack_c8 = uStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  uStack_c0 = local_70;
  FUN_1005c30e0(&local_d0);
  uStack_48 = uStack_98;
  local_50 = uStack_a0;
  local_40 = local_90;
  uStack_68 = uStack_b8;
  local_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = local_b0;
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}

