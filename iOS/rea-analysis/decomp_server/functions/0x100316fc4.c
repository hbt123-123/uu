// rea decompile_all
// name: FUN_100316fc4
// address: 0x100316fc4
// body: available
// range: 0x100316fc4-0x100317017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100316fc4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  local_50 = param_1;
  FUN_1002c6c70(*(undefined8 *)(unaff_x20 + 0x20),FUN_100317018,auStack_60,PTR___sytN_100995e90 + 8)
  ;
  return;
}

