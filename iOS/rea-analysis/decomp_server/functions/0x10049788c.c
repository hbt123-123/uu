// rea decompile_all
// name: FUN_10049788c
// address: 0x10049788c
// body: available
// range: 0x10049788c-0x1004978d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004978cc to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10049788c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             uint param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_1 != 0);
  if ((param_2 & 1) == 0) {
    uVar1 = param_1;
  }
  if ((param_6 & 1) == 0) {
    if (uVar1 == param_5) goto LAB_1004978bc;
  }
  else if (param_5 == 0) {
    if (uVar1 == 0) goto LAB_1004978bc;
  }
  else if (uVar1 == 1) {
LAB_1004978bc:
    FUN_1000094a4(param_3,param_4,param_7,param_8);
    return param_3;
  }
  return 0;
}

