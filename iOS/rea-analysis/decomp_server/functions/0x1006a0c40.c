// rea decompile_all
// name: FUN_1006a0c40
// address: 0x1006a0c40
// body: available
// range: 0x1006a0c40-0x1006a0c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0c88 to 0x1006a0d24 FUN_1006a0d24 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0c40(int *param_1,int param_2)

{
  *param_1 = param_2;
  FUN_1006a0c98(param_1 + 0x6e,0);
  if ((*param_1 == 0) && (*(char *)(*(long *)(param_1 + 0x28) + 0x19) == '\x01')) {
    FUN_1006a0d24(param_1 + 0x26,0);
    return;
  }
  return;
}

