// rea decompile_all
// name: FUN_10041c96c
// address: 0x10041c96c
// body: available
// range: 0x10041c96c-0x10041c9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041c9a0 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


double FUN_10041c96c(double *param_1)

{
  bool bVar1;
  double dVar2;
  double *unaff_x20;
  
  bVar1 = false;
  if ((*unaff_x20 == *param_1) && (bVar1 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar1 = unaff_x20[1] == param_1[1];
  }
  if (!bVar1 || *(int *)(unaff_x20 + 2) != *(int *)(param_1 + 2)) {
    return 0.0;
  }
  dVar2 = unaff_x20[3];
  FUN_1000094a4(dVar2,unaff_x20[4],param_1[3],param_1[4]);
  return dVar2;
}

