// rea decompile_all
// name: FUN_100228e68
// address: 0x100228e68
// body: available
// range: 0x100228e68-0x1002294ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100228e68(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == (undefined1 *)0x7463656a6f7270 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x7463656a6f7270,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x746572636573;
    if (((param_1 == (undefined1 *)0x746572636573) && (param_2 == -0x1a00000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x746572636573,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x656372756f73;
      if (((param_1 == (undefined1 *)0x656372756f73) && (param_2 == -0x1a00000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656372756f73,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_1 == (undefined1 *)0x6d617473656d6974) && (param_2 == -0x16ffffffffffff90)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6d617473656d6974,0xe900000000000070,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0x746e657665;
          if (((param_1 == (undefined1 *)0x746e657665) && (param_2 == -0x1b00000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x746e657665,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 4;
          }
          else {
            uVar2 = 0x695f657571696e75;
            if (((param_1 == (undefined1 *)0x695f657571696e75) && (param_2 == -0x16ffffffffffff9c))
               || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x695f657571696e75,0xe900000000000064,param_1,param_2,0),
                  (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              uVar1 = 5;
            }
            else {
              uVar2 = 0x6d65747379735f5f;
              if (((param_1 == (undefined1 *)0x6d65747379735f5f) && (param_2 == -0x12ffff9a8f868ba1)
                  ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x6d65747379735f5f,0xed0000657079745f,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                _swift_bridgeObjectRelease(param_2);
                uVar1 = 6;
              }
              else {
                if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff759aa0)) {
                  uVar2 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (&DAT_d000000000000010,0x80000001008a6560,param_1,param_2,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0x65765f7070615f5f;
                    if (((param_1 == (undefined1 *)0x65765f7070615f5f) &&
                        (param_2 == -0x12ffff9190968c8e)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x65765f7070615f5f,0xed00006e6f697372,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 8;
                    }
                    uVar2 = 0;
                    if (((param_1 == (undefined1 *)0xd000000000000012) &&
                        (param_2 == -0x7ffffffeff759a80)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000012,0x80000001008a6580,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 9;
                    }
                    uVar2 = 0x6563697665645f5f;
                    if (((param_1 == (undefined1 *)0x6563697665645f5f) &&
                        (param_2 == -0x14ffffffff9b96a1)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x6563697665645f5f,0xeb0000000064695f,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 10;
                    }
                    uVar2 = 0x656c646e75625f5f;
                    if (((param_1 == (undefined1 *)0x656c646e75625f5f) &&
                        (param_2 == -0x14ffffffff9b96a1)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x656c646e75625f5f,0xeb0000000064695f,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xb;
                    }
                    uVar2 = 0x656e6e6168635f5f;
                    if (((param_1 != (undefined1 *)0x656e6e6168635f5f) ||
                        (param_2 != -0x16ffffffffffff94)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x656e6e6168635f5f,0xe90000000000006c,param_1,param_2,0),
                       (uVar2 & 1) == 0)) {
                      uVar2 = 0x656c61636f6c5f5f;
                      if (((param_1 == (undefined1 *)0x656c61636f6c5f5f) &&
                          (param_2 == -0x1800000000000000)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x656c61636f6c5f5f,0xe800000000000000,param_1,param_2,0),
                         (uVar2 & 1) != 0)) {
                        _swift_bridgeObjectRelease(param_2);
                        return 0xd;
                      }
                      uVar2 = 0x6469616f5f5f;
                      if (((param_1 == (undefined1 *)0x6469616f5f5f) &&
                          (param_2 == -0x1a00000000000000)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x6469616f5f5f,0xe600000000000000,param_1,param_2,0),
                         (uVar2 & 1) != 0)) {
                        _swift_bridgeObjectRelease(param_2);
                        return 0xe;
                      }
                      uVar2 = 0x6375646f72705f5f;
                      if (((param_1 != (undefined1 *)0x6375646f72705f5f) ||
                          (param_2 != -0x16ffffffffffff8c)) &&
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x6375646f72705f5f,0xe900000000000074,param_1,param_2,0),
                         (uVar2 & 1) == 0)) {
                        uVar2 = 0x756c6f7365725f5f;
                        if (((param_1 == (undefined1 *)0x756c6f7365725f5f) &&
                            (param_2 == -0x13ffffff9190968c)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0x756c6f7365725f5f,0xec0000006e6f6974,param_1,param_2,0),
                           (uVar2 & 1) != 0)) {
                          _swift_bridgeObjectRelease(param_2);
                          return 0x10;
                        }
                        uVar2 = 0x6e65657263735f5f;
                        if (((param_1 == (undefined1 *)0x6e65657263735f5f) &&
                            (param_2 == -0x12ffff9a85968ca1)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0x6e65657263735f5f,0xed0000657a69735f,param_1,param_2,0),
                           (uVar2 & 1) != 0)) {
                          _swift_bridgeObjectRelease(param_2);
                          return 0x11;
                        }
                        uVar2 = 0x72626c69616a5f5f;
                        if (((param_1 != (undefined1 *)0x72626c69616a5f5f) ||
                            (param_2 != -0x13ffffff919a9491)) &&
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0x72626c69616a5f5f,0xec0000006e656b6f,param_1,param_2,0),
                           (uVar2 & 1) == 0)) {
                          if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff759a00)
                             ) {
                            uVar2 = 0;
                            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (&DAT_d000000000000010,0x80000001008a6600,param_1,param_2,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0x74617265706f5f5f;
                              if ((param_1 == (undefined1 *)0x74617265706f5f5f) &&
                                 (param_2 == -0x15ffffffffff8d91)) {
                                _swift_bridgeObjectRelease(0xea0000000000726f);
                                return 0x14;
                              }
                              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x74617265706f5f5f,0xea0000000000726f,param_1,param_2,0);
                              _swift_bridgeObjectRelease(param_2);
                              if ((uVar2 & 1) != 0) {
                                return 0x14;
                              }
                              return 0x15;
                            }
                          }
                          _swift_bridgeObjectRelease(param_2);
                          return 0x13;
                        }
                        _swift_bridgeObjectRelease(param_2);
                        return 0x12;
                      }
                      _swift_bridgeObjectRelease(param_2);
                      return 0xf;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 0xc;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                uVar1 = 7;
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

