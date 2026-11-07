// rea decompile_all
// name: FUN_1004ab584
// address: 0x1004ab584
// body: available
// range: 0x1004ab584-0x1004ab5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ab584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_68 = *unaff_x20;
  local_60 = *(undefined1 *)(unaff_x20 + 1);
  local_38 = unaff_x20[6];
  uStack_50 = unaff_x20[3];
  local_58 = unaff_x20[2];
  uStack_40 = unaff_x20[5];
  local_48 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_b0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b0,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

