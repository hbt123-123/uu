// rea decompile_all
// name: FUN_1004b81bc
// address: 0x1004b81bc
// body: available
// range: 0x1004b81bc-0x1004b81f7 inclusive
// range: 0x1004b8200-0x1004b825f inclusive
// range: 0x1004b82ec-0x1004b82fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004b825c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1004b81bc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004b81f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1004b81f8 + (ulong)(byte)(&DAT_10083019f)[*param_2] * 4))();
    return param_1;
  }
  if ((*param_1 == *param_2) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      plVar2 = (long *)param_1[6];
      FUN_1000094a4(plVar2,param_1[7],param_2[6],param_2[7]);
      return plVar2;
    }
  }
  return (long *)0x0;
}

