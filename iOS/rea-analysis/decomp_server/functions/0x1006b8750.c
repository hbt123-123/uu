// rea decompile_all
// name: FUN_1006b8750
// address: 0x1006b8750
// body: available
// range: 0x1006b8750-0x1006b8783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b8780 to 0x1006b8330 FUN_1006b8330 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b8750(long param_1)

{
  uint uVar1;
  ulong in_x4;
  
  uVar1 = 1 << (ulong)(*(uint *)(param_1 + 0xa4) & 0x1f);
  if (0x1ffff < uVar1) {
    uVar1 = 0x20000;
  }
  if (uVar1 < in_x4) {
    return -0x48;
  }
  FUN_1006b8330();
  return param_1;
}

