// rea decompile_all
// name: FUN_1005dce88
// address: 0x1005dce88
// body: available
// range: 0x1005dce88-0x1005dcf1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005dcf08 to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005dce88(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == *param_2) {
    uVar1 = param_1[1];
    if ((uVar1 == param_2[1] && param_1[2] == param_2[2]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,param_1[2],param_2[1],param_2[2],0), (uVar1 & 1) != 0)) {
      lVar2 = param_1[3];
      if (lVar2 != param_2[3] || param_1[4] != param_2[4]) {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (lVar2,param_1[4],param_2[3],param_2[4],0);
        return lVar2;
      }
      return 1;
    }
  }
  return 0;
}

