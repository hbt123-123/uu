// rea decompile_all
// name: thunk_FUN_1003dda2c
// address: 0x1003dd704
// body: available
// range: 0x1003dd704-0x1003dd707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_1003dda2c(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = param_1[2];
    if (((uVar1 == param_2[2] && param_1[3] == param_2[3]) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar1,param_1[3],param_2[2],param_2[3],0), (uVar1 & 1) != 0)) &&
       (param_1[4] == param_2[4])) {
      uVar1 = param_1[5];
      if (((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar1,param_1[6],param_2[5],param_2[6],0), (uVar1 & 1) != 0)) {
        uVar1 = param_1[7];
        if (((uVar1 == param_2[7]) && (param_1[8] == param_2[8])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar1,param_1[8],param_2[7],param_2[8],0), (uVar1 & 1) != 0)) {
          uVar1 = param_1[9];
          FUN_1000e408c(uVar1,param_2[9]);
          if ((uVar1 & 1) != 0) {
            return param_1[10] == param_2[10];
          }
        }
      }
    }
    return false;
  }
  return false;
}

