// rea decompile_all
// name: FUN_10012ac6c
// address: 0x10012ac6c
// body: available
// range: 0x10012ac6c-0x10012acab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012aca8 to 0x100008184 FUN_100008184 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012ac6c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  if ((param_5 >> 0x3d & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    param_5 = param_4;
  }
  else {
    param_5 = param_5 & 0xdfffffffffffffff;
    param_3 = param_4;
  }
  FUN_100008184(param_3,param_5);
  return;
}

