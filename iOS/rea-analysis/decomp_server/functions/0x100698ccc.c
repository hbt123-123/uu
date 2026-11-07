// rea decompile_all
// name: FUN_100698ccc
// address: 0x100698ccc
// body: available
// range: 0x100698ccc-0x100698da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100698d4c to 0x100699128 FUN_100699128 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100698d6c to 0x100698da8 FUN_100698da8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100698d90 to 0x100698f3c FUN_100698f3c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100698ccc(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int local_38 [2];
  
  uVar1 = param_1;
  FUN_100698904(local_38,param_1,param_3);
  if (*param_3 == 0) {
    if (local_38[0] == 2) {
      FUN_100698f3c(param_1,param_2,0,param_3);
      return;
    }
    if (local_38[0] == 3) {
      FUN_100698da8(param_1,param_2,param_3);
      return;
    }
    if (local_38[0] == 4) {
      FUN_100699128(param_1,param_2,param_3);
      return;
    }
    FUN_10069f164();
    *param_3 = 0x4e;
    *(undefined8 *)(param_3 + 2) = uVar1;
  }
  return;
}

