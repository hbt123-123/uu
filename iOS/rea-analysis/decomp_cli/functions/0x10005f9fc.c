// rea decompile_all
// name: FUN_10005f9fc
// address: 0x10005f9fc
// body: available
// range: 0x10005f9fc-0x10005fa9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005fa34 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10005f9fc(ulong param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,
                   long param_7,long param_8)

{
  if (param_4 < 0) {
    if (param_8 < 0) {
      if (param_2 == 0) {
        if (param_6 == 0) goto LAB_10005fa90;
      }
      else if ((param_6 != 0) &&
              (((param_1 == param_5 && (param_2 == param_6)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (param_1,param_2,param_5,param_6,0), (param_1 & 1) != 0)))) {
LAB_10005fa90:
        return (ulong)(param_3 == param_7);
      }
    }
  }
  else if (-1 < param_8) {
    if ((param_1 == param_5) && (param_2 == param_6)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (param_1,param_2,param_5,param_6,0);
    return param_1;
  }
  return 0;
}

