// rea decompile_all
// name: FUN_1004456bc
// address: 0x1004456bc
// body: available
// range: 0x1004456bc-0x1004456e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004456e0 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004456bc(char *param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*param_1 != *unaff_x20) {
    return 0;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  FUN_1000094a4(uVar1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x10));
  return uVar1;
}

