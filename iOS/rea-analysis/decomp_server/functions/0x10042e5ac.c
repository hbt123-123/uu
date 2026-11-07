// rea decompile_all
// name: FUN_10042e5ac
// address: 0x10042e5ac
// body: available
// range: 0x10042e5ac-0x10042e5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042e5e0 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10042e5ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             uint param_6,undefined8 param_7,undefined8 param_8)

{
  if ((param_6 & 1) == 0) {
    if (param_1 == param_5) goto LAB_10042e5d0;
  }
  else if (param_5 == 0) {
    if (param_1 == 0) goto LAB_10042e5d0;
  }
  else if (param_5 == 1) {
    if (param_1 == 1) {
LAB_10042e5d0:
      FUN_1000094a4(param_3,param_4,param_7,param_8);
      return param_3;
    }
  }
  else if (param_1 == 2) goto LAB_10042e5d0;
  return 0;
}

