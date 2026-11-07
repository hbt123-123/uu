// rea decompile_all
// name: FUN_1005a46f8
// address: 0x1005a46f8
// body: available
// range: 0x1005a46f8-0x1005a4737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a4728 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1005a46f8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,ulong param_7,ulong param_8)

{
  if ((param_3 >> 0x20 & 1) == 0) {
    if ((param_7 & 0x100000000) != 0) {
      return 0;
    }
    if ((int)param_3 != (int)param_7) {
      return 0;
    }
  }
  else if ((param_7 & 0x100000000) == 0) {
    return 0;
  }
  if ((param_4 >> 0x20 & 1) == 0) {
    if (((param_8 & 0x100000000) == 0) && ((int)param_4 == (int)param_8)) {
LAB_1005a4720:
      FUN_1000094a4(param_1,param_2,param_5,param_6);
      return param_1;
    }
  }
  else if ((param_8 & 0x100000000) != 0) goto LAB_1005a4720;
  return 0;
}

