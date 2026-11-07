// rea decompile_all
// name: FUN_10049d18c
// address: 0x10049d18c
// body: available
// range: 0x10049d18c-0x10049d263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049d250 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10049d18c(int *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = *(ulong *)(param_1 + 4);
    FUN_1000094a4(uVar1,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_2 + 4),
                  *(undefined8 *)(param_2 + 6));
    if ((((uVar1 & 1) != 0) && (param_1[8] == param_2[8])) &&
       ((*(double *)(param_1 + 10) == *(double *)(param_2 + 10) &&
        ((*(double *)(param_1 + 0xc) == *(double *)(param_2 + 0xc) && (param_1[0xe] == param_2[0xe])
         ))))) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      FUN_1000094a4(uVar2,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_2 + 0x10),
                    *(undefined8 *)(param_2 + 0x12));
      return uVar2;
    }
  }
  return 0;
}

