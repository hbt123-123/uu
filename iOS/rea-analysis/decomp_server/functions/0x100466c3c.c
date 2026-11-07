// rea decompile_all
// name: FUN_100466c3c
// address: 0x100466c3c
// body: available
// range: 0x100466c3c-0x100466cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100466cbc to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100466c3c(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && ((float)param_1[1] == (float)param_2[1])) &&
      ((float)param_1[2] == (float)param_2[2])) &&
     ((((float)param_1[3] == (float)param_2[3] && ((float)param_1[4] == (float)param_2[4])) &&
      (((float)param_1[5] == (float)param_2[5] && ((float)param_1[6] == (float)param_2[6])))))) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_1000094a4(uVar1,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_2 + 8),
                  *(undefined8 *)(param_2 + 10));
    return uVar1;
  }
  return 0;
}

