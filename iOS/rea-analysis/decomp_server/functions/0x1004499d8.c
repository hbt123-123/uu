// rea decompile_all
// name: FUN_1004499d8
// address: 0x1004499d8
// body: available
// range: 0x1004499d8-0x100449a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100449a20 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004499d8(ulong *param_1)

{
  if (*param_1 < 0xffffffff00000000 || (param_1[2] & 0x3000000000000000) != 0) {
    FUN_10020376c(*param_1,param_1[1],param_1[2],FUN_100006cdc);
  }
  FUN_100006cdc(param_1[3],param_1[4]);
  return;
}

