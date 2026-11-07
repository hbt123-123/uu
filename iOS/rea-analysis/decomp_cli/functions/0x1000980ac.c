// rea decompile_all
// name: FUN_1000980ac
// address: 0x1000980ac
// body: available
// range: 0x1000980ac-0x10009817f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009817c to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000980ac(ulong param_1,long param_2,uint param_3,ulong param_4,long param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    if ((param_6 & 0xff) < 0x40) {
joined_r0x000100098130:
      if ((param_1 == param_4) && (param_2 == param_5)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0);
      return param_1;
    }
  }
  else if (uVar1 == 1) {
    if (((param_6 & 0xc0) == 0x40) &&
       (((param_1 == param_4 && (param_2 == param_5)) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0)))) {
      return (ulong)((param_6 ^ param_3 ^ 1) & 1);
    }
  }
  else if ((param_6 & 0xc0) == 0x80) goto joined_r0x000100098130;
  return 0;
}

