// rea decompile_all
// name: FUN_10039bd5c
// address: 0x10039bd5c
// body: available
// range: 0x10039bd5c-0x10039c047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10039bd5c(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x746f6c73 || param_2 != -0x1c00000000000000) {
    uVar1 = 0x746f6c73;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x746f6c73,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x656d616e,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0x6874646977;
          if (((param_1 == 0x6874646977) && (param_2 == -0x1b00000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6874646977,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
            _swift_bridgeObjectRelease(param_2);
            return 2;
          }
          uVar1 = 0;
          if (((param_1 != 0x746867696568) || (param_2 != -0x1a00000000000000)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x746867696568,0xe600000000000000,param_1,param_2,0), (uVar1 & 1) == 0)) {
            uVar1 = 0;
            if (((param_1 != 0x4950446968) || (param_2 != -0x1b00000000000000)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x4950446968,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) == 0)) {
              uVar1 = 0;
              if (((param_1 == 0x5268736572666572) && (param_2 == -0x14ffffffff9a8b9f)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x5268736572666572,0xeb00000000657461,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                _swift_bridgeObjectRelease(param_2);
                return 5;
              }
              if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffeff750020)) {
                uVar1 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000012,0x80000001008affe0,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0x4164657461657263;
                  if (((param_1 != 0x4164657461657263) || (param_2 != -0x16ffffffffffff8c)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x4164657461657263,0xe900000000000074,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0x4164657461647075;
                    if ((param_1 == 0x4164657461647075) && (param_2 == -0x16ffffffffffff8c)) {
                      _swift_bridgeObjectRelease(0xe900000000000074);
                      return 8;
                    }
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x4164657461647075,0xe900000000000074,param_1,param_2,0);
                    _swift_bridgeObjectRelease(param_2);
                    if ((uVar1 & 1) != 0) {
                      return 8;
                    }
                    return 9;
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 7;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
          _swift_bridgeObjectRelease(param_2);
          return 3;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

