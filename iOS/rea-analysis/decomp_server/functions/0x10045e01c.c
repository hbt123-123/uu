// rea decompile_all
// name: FUN_10045e01c
// address: 0x10045e01c
// body: available
// range: 0x10045e01c-0x10045e113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045e0c4 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10045e01c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    if (lVar2 != lVar3) {
      return 0;
    }
  }
  else if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (lVar2 != 0) {
        return 0;
      }
    }
    else if (lVar3 == 1) {
      if (lVar2 != 1) {
        return 0;
      }
    }
    else if (lVar2 != 2) {
      return 0;
    }
  }
  else if (lVar3 == 3) {
    if (lVar2 != 3) {
      return 0;
    }
  }
  else if (lVar3 == 4) {
    if (lVar2 != 4) {
      return 0;
    }
  }
  else if (lVar2 != 5) {
    return 0;
  }
  uVar1 = param_1[2];
  if (((uVar1 == param_2[2] && param_1[3] == param_2[3]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar1,param_1[3],param_2[2],param_2[3],0), (uVar1 & 1) != 0)) &&
     ((int)param_1[4] == (int)param_2[4])) {
    lVar2 = param_1[5];
    FUN_1000094a4(lVar2,param_1[6],param_2[5],param_2[6]);
    return lVar2;
  }
  return 0;
}

