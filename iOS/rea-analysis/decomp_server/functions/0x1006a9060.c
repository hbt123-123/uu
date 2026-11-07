// rea decompile_all
// name: FUN_1006a9060
// address: 0x1006a9060
// body: available
// range: 0x1006a9060-0x1006a90a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a90a0 to 0x1006a88c0 FUN_1006a88c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a9060(long param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x28) == '\x01') && (*(long *)(param_1 + 0x80) != 0)) {
    _deflateEnd((z_streamp)(param_1 + 0x48));
  }
  FUN_1006a88c0(param_1,param_2);
  return;
}

