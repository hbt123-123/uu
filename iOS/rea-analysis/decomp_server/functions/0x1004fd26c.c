// rea decompile_all
// name: FUN_1004fd26c
// address: 0x1004fd26c
// body: available
// range: 0x1004fd26c-0x1004fd2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fd2cc to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fd26c(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10003f094(param_1 + 0x30);
  }
  if (*(ulong *)(param_1 + 0x88) >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(param_1 + 0x80));
  }
  if (0xe < *(ulong *)(param_1 + 0x98) >> 0x3c) {
    return;
  }
  FUN_100006cdc(*(undefined8 *)(param_1 + 0x90));
  return;
}

