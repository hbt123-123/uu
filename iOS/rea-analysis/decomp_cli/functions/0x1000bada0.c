// rea decompile_all
// name: FUN_1000bada0
// address: 0x1000bada0
// body: available
// range: 0x1000bada0-0x1000baeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000badf8 to 0x100080b0c FUN_100080b0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000bae68 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000bada0(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  ulong uVar1;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
LAB_1000badf4:
        FUN_100080b0c(param_1,param_4);
        return param_1;
      }
    }
    else if (param_6 == '\x01') goto LAB_1000badf4;
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else {
    uVar1 = param_2 + (ulong)(param_1 >= 2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
      if (param_1 == 0 && param_2 == 0) {
        if ((param_6 == '\x03') && (param_5 == 0 && param_4 == 0)) {
          return 1;
        }
      }
      else if (((param_6 == '\x03') && (param_4 == 1)) && (param_5 == 0)) {
        return 1;
      }
    }
    else if (param_1 == 2 && param_2 == 0) {
      if (((param_6 == '\x03') && (param_4 == 2)) && (param_5 == 0)) {
        return 1;
      }
    }
    else if (((param_6 == '\x03') && (param_4 == 3)) && (param_5 == 0)) {
      return 1;
    }
  }
  return 0;
}

