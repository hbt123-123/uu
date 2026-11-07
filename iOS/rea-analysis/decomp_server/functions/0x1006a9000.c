// rea decompile_all
// name: FUN_1006a9000
// address: 0x1006a9000
// body: available
// range: 0x1006a9000-0x1006a9047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a9044 to 0x1006a8868 FUN_1006a8868 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a9000(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1006a9000_1009e6de8;
  if ((*(char *)(param_1 + 5) == '\x01') && (param_1[0x10] != 0)) {
    _deflateEnd((z_streamp)(param_1 + 9));
  }
  FUN_1006a8868(param_1);
  return;
}

