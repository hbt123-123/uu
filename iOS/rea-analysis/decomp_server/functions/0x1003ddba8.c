// rea decompile_all
// name: FUN_1003ddba8
// address: 0x1003ddba8
// body: available
// range: 0x1003ddba8-0x1003dde47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003ddba8(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0x54676e6974746573;
  if ((param_1 == (undefined1 *)0x54676e6974746573 && param_2 == -0x14ffffffff9a8f87) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x54676e6974746573,0xeb00000000657079,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    return 0;
  }
  if ((param_1 != (undefined1 *)0x65707974) || (param_2 != -0x1c00000000000000)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x65707974,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != (undefined1 *)0x74736f68) || (param_2 != -0x1c00000000000000)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x74736f68,0xe400000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != (undefined1 *)0x74726f70) || (param_2 != -0x1c00000000000000)) {
            uVar1 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74726f70,0xe400000000000000,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0x656d616e72657375;
              if (((param_1 == (undefined1 *)0x656d616e72657375) && (param_2 == -0x1800000000000000)
                  ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x656d616e72657375,0xe800000000000000,param_1,param_2,0),
                       (uVar1 & 1) != 0)) {
                _swift_bridgeObjectRelease(param_2);
                return 4;
              }
              uVar1 = 0;
              if (((param_1 != (undefined1 *)0x64726f7773736170) || (param_2 != -0x1800000000000000)
                  ) && (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x64726f7773736170,0xe800000000000000,param_1,param_2,0),
                       (uVar1 & 1) == 0)) {
                if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff74b570)) {
                  uVar1 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (&DAT_d000000000000010,0x80000001008b4a90,param_1,param_2,0);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = 0xd000000000000017;
                    if ((param_1 == (undefined1 *)0xd000000000000017) &&
                       (param_2 == -0x7ffffffeff74b550)) {
                      _swift_bridgeObjectRelease(0x80000001008b4ab0);
                      return 7;
                    }
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd000000000000017,0x80000001008b4ab0,param_1,param_2,0);
                    _swift_bridgeObjectRelease(param_2);
                    if ((uVar1 & 1) != 0) {
                      return 7;
                    }
                    return 8;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                return 6;
              }
              _swift_bridgeObjectRelease(param_2);
              return 5;
            }
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

