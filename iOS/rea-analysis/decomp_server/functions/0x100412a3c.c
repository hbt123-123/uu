// rea decompile_all
// name: FUN_100412a3c
// address: 0x100412a3c
// body: available
// range: 0x100412a3c-0x100412ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100412a3c(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((param_1 == 0x737365636f7270 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x737365636f7270,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    return 0;
  }
  if ((param_1 != 0x646970) || (param_2 != -0x1d00000000000000)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x646970,0xe300000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x424d79726f6d656d;
      if (((param_1 == 0x424d79726f6d656d) && (param_2 == -0x1800000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x424d79726f6d656d,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      uVar1 = 0;
      if (((param_1 == 0x6c6f687365726874) && (param_2 == -0x14ffffffffbdb29c)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6c6f687365726874,0xeb00000000424d64,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffeff7499e0)) {
        uVar1 = 0xd000000000000011;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000011,0x80000001008b6620,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0;
          if (((param_1 == 0x6d617473656d6974) && (param_2 == -0x16ffffffffffff90)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6d617473656d6974,0xe900000000000070,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 5;
          }
          uVar1 = 0;
          if (((param_1 != 0x74736f6e67616964) || (param_2 != -0x14ffffffff8c9c97)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x74736f6e67616964,0xeb00000000736369,param_1,param_2,0), (uVar1 & 1) == 0)
             ) {
            uVar1 = 0x747865746e6f63;
            if ((param_1 == 0x747865746e6f63) && (param_2 == -0x1900000000000000)) {
              _swift_bridgeObjectRelease(0xe700000000000000);
              return 7;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x747865746e6f63,0xe700000000000000,param_1,param_2,0);
            _swift_bridgeObjectRelease(param_2);
            if ((uVar1 & 1) != 0) {
              return 7;
            }
            return 8;
          }
          _swift_bridgeObjectRelease(param_2);
          return 6;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 4;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 1;
}

