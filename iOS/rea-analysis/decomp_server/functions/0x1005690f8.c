// rea decompile_all
// name: FUN_1005690f8
// address: 0x1005690f8
// body: available
// range: 0x1005690f8-0x100569207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005691e4 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005690f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) &&
      ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)))) && ((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0)) {
    uVar1 = param_1[5];
    if ((((uVar1 == param_2[5]) && (param_1[6] == param_2[6])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar1 & 1) != 0)) && ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)) {
      uVar1 = param_1[8];
      FUN_10056acec(uVar1,param_2[8]);
      if ((uVar1 & 1) != 0) {
        uVar1 = param_1[9];
        uVar2 = param_2[9];
        if ((param_2[10] & 1) == 0) {
          if (uVar1 == uVar2) goto LAB_1005691d4;
        }
        else if (uVar2 == 0) {
          if (uVar1 == 0) goto LAB_1005691d4;
        }
        else if (uVar2 == 1) {
          if (uVar1 == 1) {
LAB_1005691d4:
            uVar1 = param_1[0xb];
            FUN_1000094a4(uVar1,param_1[0xc],param_2[0xb],param_2[0xc]);
            return uVar1;
          }
        }
        else if (uVar1 == 2) goto LAB_1005691d4;
      }
    }
  }
  return 0;
}

