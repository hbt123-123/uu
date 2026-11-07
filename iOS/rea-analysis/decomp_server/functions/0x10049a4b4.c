// rea decompile_all
// name: FUN_10049a4b4
// address: 0x10049a4b4
// body: available
// range: 0x10049a4b4-0x10049a537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049a4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = *unaff_x20;
  local_47 = unaff_x20[1];
  local_46 = unaff_x20[2];
  local_45 = unaff_x20[3];
  local_44 = unaff_x20[4];
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x10);
  local_40 = *(undefined8 *)(unaff_x20 + 8);
  __ss6HasherV5_seedABSi_tcfC(auStack_90);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

