// rea decompile_all
// name: FUN_10026e834
// address: 0x10026e834
// body: available
// range: 0x10026e834-0x10026e893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026e888 to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10026e834(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else if (uVar2 == 1) {
    if (uVar3 != 1) {
      return 0;
    }
  }
  else {
    if (uVar3 < 2) {
      return 0;
    }
    lVar1 = *param_1;
    if (lVar1 != *param_2 || uVar2 != uVar3) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      return lVar1;
    }
  }
  return 1;
}

