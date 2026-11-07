// rea decompile_all
// name: FUN_1005dd820
// address: 0x1005dd820
// body: available
// range: 0x1005dd820-0x1005dd9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005dd820(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6b6f || param_2 != -0x1e00000000000000) {
    uVar1 = 0x6b6f;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6b6f,0xe200000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x63657865) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0x63657865;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x63657865,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != 0x65646f63) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0x65646f63;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x65646f63,0xe400000000000000,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0x6449726f727265;
              if (((param_1 != 0x6449726f727265) || (param_2 != -0x1900000000000000)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x6449726f727265,0xe700000000000000,param_1,param_2,0),
                 (uVar1 & 1) == 0)) {
                uVar1 = 0x6567617373656d;
                if ((param_1 == 0x6567617373656d) && (param_2 == -0x1900000000000000)) {
                  _swift_bridgeObjectRelease(0xe700000000000000);
                  return 4;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x6567617373656d,0xe700000000000000,param_1,param_2,0);
                _swift_bridgeObjectRelease(param_2);
                if ((uVar1 & 1) != 0) {
                  return 4;
                }
                return 5;
              }
              _swift_bridgeObjectRelease(param_2);
              return 3;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 2;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

