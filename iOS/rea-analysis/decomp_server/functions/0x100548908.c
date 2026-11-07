// rea decompile_all
// name: FUN_100548908
// address: 0x100548908
// body: available
// range: 0x100548908-0x100548957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100548908(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_40 [6];
  undefined *local_28;
  
  local_28 = PTR___sSfN_100995928;
  local_40[0] = param_1;
  FUN_10054869c(local_40,param_2,param_3);
  FUN_10003f094(local_40);
  return;
}

