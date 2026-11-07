// rea decompile_all
// name: FUN_10035272c
// address: 0x10035272c
// body: available
// range: 0x10035272c-0x10035276f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035272c(undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_20;
  byte local_18;
  
  local_18 = param_2 & 1;
  local_20 = param_1;
  FUN_100352568(&local_20,param_3,PTR___sSiN_100995968,PTR___sSiSEsWP_100995970);
  return;
}

