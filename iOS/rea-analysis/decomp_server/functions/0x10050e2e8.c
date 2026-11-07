// rea decompile_all
// name: FUN_10050e2e8
// address: 0x10050e2e8
// body: available
// range: 0x10050e2e8-0x10050e337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050e2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = *(undefined8 *)(unaff_x20 + 8);
  local_30[0] = *unaff_x20;
  uStack_18 = *(undefined8 *)(unaff_x20 + 0x18);
  local_20 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100564348(local_30,param_2,param_3,param_1);
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 8) = local_28;
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_18;
    *(undefined8 *)(unaff_x20 + 0x10) = local_20;
  }
  return;
}

