// rea decompile_all
// name: FUN_100054254
// address: 0x100054254
// body: available
// range: 0x100054254-0x100054357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100054254(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_1000b3298();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else if ((param_1 != 0x68737a) || (lVar2 = 0x68737a, param_2 != -0x1d00000000000000)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x68737a,0xe300000000000000,param_1,param_2,0);
    lVar2 = param_1;
    if (((uVar1 & 1) == 0) &&
       ((param_1 != 0x68736162 || (lVar2 = 0x68736162, param_2 != -0x1c00000000000000)))) {
      uVar1 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x68736162,0xe400000000000000,param_1,param_2,0);
      lVar2 = param_1;
      if (((uVar1 & 1) == 0) && (param_1 != 0x68736966 || param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x68736966,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}

