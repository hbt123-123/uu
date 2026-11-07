// rea decompile_all
// name: FUN_1005e8f38
// address: 0x1005e8f38
// body: available
// range: 0x1005e8f38-0x1005e99d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005e8f38(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x6e776f6e6b6e75;
  if ((param_1 == (undefined1 *)0x6e776f6e6b6e75 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e776f6e6b6e75,0xe700000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    return 0;
  }
  if ((param_1 != (undefined1 *)0x6f686365) || (param_2 != -0x1c00000000000000)) {
    uVar1 = 0x6f686365;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6f686365,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x74536d6f6f526e6f;
      if (((param_1 == (undefined1 *)0x74536d6f6f526e6f) && (param_2 == -0x14ffffffff9a8b9f)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x74536d6f6f526e6f,0xeb00000000657461,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if ((param_1 != (undefined1 *)0xd000000000000015) || (param_2 != -0x7ffffffeff741a10)) {
        uVar1 = 0xd000000000000015;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000015,0x80000001008be5f0,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0x6c616e6769536e6f;
          if (((param_1 == (undefined1 *)0x6c616e6769536e6f) && (param_2 == -0x13ffffff978c8ab0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6c616e6769536e6f,0xec00000068737550,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
          uVar1 = 0x536d6f6f52746567;
          if (((param_1 == (undefined1 *)0x536d6f6f52746567) && (param_2 == -0x13ffffff9a8b9e8c)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x536d6f6f52746567,0xec00000065746174,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 5;
          }
          uVar1 = 0;
          if (((param_1 == (undefined1 *)0xd000000000000016) && (param_2 == -0x7ffffffeff7419f0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000016,0x80000001008be610,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 6;
          }
          uVar1 = 0xd000000000000017;
          if (((param_1 == (undefined1 *)0xd000000000000017) && (param_2 == -0x7ffffffeff7419d0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000017,0x80000001008be630,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 7;
          }
          uVar1 = 0;
          if (((param_1 == (undefined1 *)0xd000000000000020) && (param_2 == -0x7ffffffeff7419b0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000020,0x80000001008be650,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 8;
          }
          uVar1 = 0xd00000000000001d;
          if (((param_1 == (undefined1 *)0xd00000000000001d) && (param_2 == -0x7ffffffeff741980)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001d,0x80000001008be680,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 9;
          }
          uVar1 = 0xd00000000000001b;
          if (((param_1 == (undefined1 *)0xd00000000000001b) && (param_2 == -0x7ffffffeff741960)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001b,0x80000001008be6a0,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 10;
          }
          uVar1 = 0;
          if (((param_1 == (undefined1 *)0xd00000000000001a) && (param_2 == -0x7ffffffeff741940)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001a,0x80000001008be6c0,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 0xb;
          }
          uVar1 = 0;
          if (((param_1 == (undefined1 *)0xd000000000000014) && (param_2 == -0x7ffffffeff741920)) ||
             (uVar2 = uVar1,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (0xd000000000000014,0x80000001008be6e0,param_1,param_2,0), (uVar2 & 1) != 0))
          {
            _swift_bridgeObjectRelease(param_2);
            return 0xc;
          }
          if ((param_1 != (undefined1 *)0xd000000000000015) || (param_2 != -0x7ffffffeff741900)) {
            uVar2 = 0xd000000000000015;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000015,0x80000001008be700,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              if ((param_1 != (undefined1 *)0xd000000000000015) || (param_2 != -0x7ffffffeff7418e0))
              {
                uVar2 = 0xd000000000000015;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000015,0x80000001008be720,param_1,param_2,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0x6553746978456e6f;
                  if (((param_1 == (undefined1 *)0x6553746978456e6f) &&
                      (param_2 == -0x13ffffff8d9a898e)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x6553746978456e6f,0xec00000072657672,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 0xf;
                  }
                  uVar2 = 0;
                  if (((param_1 == &DAT_d000000000000018) && (param_2 == -0x7ffffffeff7418c0)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (&DAT_d000000000000018,0x80000001008be740,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 0x10;
                  }
                  if ((param_1 != (undefined1 *)0xd000000000000016) ||
                     (param_2 != -0x7ffffffeff7418a0)) {
                    uVar2 = 0;
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd000000000000016,0x80000001008be760,param_1,param_2,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0;
                      if (((param_1 == (undefined1 *)0xd00000000000001c) &&
                          (param_2 == -0x7ffffffeff741880)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0xd00000000000001c,0x80000001008be780,param_1,param_2,0),
                         (uVar2 & 1) != 0)) {
                        _swift_bridgeObjectRelease(param_2);
                        return 0x12;
                      }
                      if ((param_1 != &DAT_d000000000000018) || (param_2 != -0x7ffffffeff741860)) {
                        uVar2 = 0;
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (&DAT_d000000000000018,0x80000001008be7a0,param_1,param_2,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = 0x6f6f527261656c63;
                          if (((param_1 == (undefined1 *)0x6f6f527261656c63) &&
                              (param_2 == -0x16ffffffffffff93)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x6f6f527261656c63,0xe90000000000006d,param_1,param_2,0),
                             (uVar2 & 1) != 0)) {
                            _swift_bridgeObjectRelease(param_2);
                            return 0x14;
                          }
                          uVar2 = 0x6f44686374697773;
                          if (((param_1 == (undefined1 *)0x6f44686374697773) &&
                              (param_2 == -0x13ffffff91969e93)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x6f44686374697773,0xec0000006e69616d,param_1,param_2,0),
                             (uVar2 & 1) != 0)) {
                            _swift_bridgeObjectRelease(param_2);
                            return 0x15;
                          }
                          if (((param_1 == (undefined1 *)0xd000000000000014) &&
                              (param_2 == -0x7ffffffeff741840)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0xd000000000000014,0x80000001008be7c0,param_1,param_2,0),
                             (uVar1 & 1) != 0)) {
                            _swift_bridgeObjectRelease(param_2);
                            return 0x16;
                          }
                          uVar1 = 0xd000000000000011;
                          if (((param_1 == (undefined1 *)0xd000000000000011) &&
                              (param_2 == -0x7ffffffeff741820)) ||
                             (uVar2 = uVar1,
                             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                       (0xd000000000000011,0x80000001008be7e0,param_1,param_2,0),
                             (uVar2 & 1) != 0)) {
                            _swift_bridgeObjectRelease(param_2);
                            return 0x17;
                          }
                          if (((param_1 == (undefined1 *)0xd000000000000011) &&
                              (param_2 == -0x7ffffffeff741800)) ||
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0xd000000000000011,0x80000001008be800,param_1,param_2,0),
                             (uVar1 & 1) != 0)) {
                            _swift_bridgeObjectRelease(param_2);
                            return 0x18;
                          }
                          uVar1 = 0x796669746e656469;
                          if (((param_1 != (undefined1 *)0x796669746e656469) ||
                              (param_2 != -0x1800000000000000)) &&
                             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x796669746e656469,0xe800000000000000,param_1,param_2,0),
                             (uVar1 & 1) == 0)) {
                            uVar1 = 0;
                            if (((param_1 == (undefined1 *)0x6165627472616568) &&
                                (param_2 == -0x16ffffffffffff8c)) ||
                               (uVar2 = uVar1,
                               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                         (0x6165627472616568,0xe900000000000074,param_1,param_2,0),
                               (uVar2 & 1) != 0)) {
                              _swift_bridgeObjectRelease(param_2);
                              return 0x1a;
                            }
                            if (((param_1 == (undefined1 *)0x6165627472616568) &&
                                (param_2 == -0x12ffff989190af8c)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (0x6165627472616568,0xed0000676e6f5074,param_1,param_2,0),
                               (uVar1 & 1) != 0)) {
                              _swift_bridgeObjectRelease(param_2);
                              return 0x1b;
                            }
                            uVar1 = 0x6552657241756f79;
                            if (((param_1 != (undefined1 *)0x6552657241756f79) ||
                                (param_2 != -0x11ff9b9a8b9c9a96)) &&
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (0x6552657241756f79,0xee0064657463656a,param_1,param_2,0),
                               (uVar1 & 1) == 0)) {
                              uVar1 = 0x77654e78756d;
                              if (((param_1 == (undefined1 *)0x77654e78756d) &&
                                  (param_2 == -0x1a00000000000000)) ||
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0x77654e78756d,0xe600000000000000,param_1,param_2,0),
                                 (uVar1 & 1) != 0)) {
                                _swift_bridgeObjectRelease(param_2);
                                return 0x1d;
                              }
                              uVar1 = 0x636174744178756d;
                              if (((param_1 == (undefined1 *)0x636174744178756d) &&
                                  (param_2 == -0x16ffffffffffff98)) ||
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0x636174744178756d,0xe900000000000068,param_1,param_2,0
                                            ), (uVar1 & 1) != 0)) {
                                _swift_bridgeObjectRelease(param_2);
                                return 0x1e;
                              }
                              uVar1 = 0x73614878756d;
                              if (((param_1 != (undefined1 *)0x73614878756d) ||
                                  (param_2 != -0x1a00000000000000)) &&
                                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0x73614878756d,0xe600000000000000,param_1,param_2,0),
                                 (uVar1 & 1) == 0)) {
                                uVar1 = 0x6c6c694b78756d;
                                if (((param_1 != (undefined1 *)0x6c6c694b78756d) ||
                                    (param_2 != -0x1900000000000000)) &&
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (0x6c6c694b78756d,0xe700000000000000,param_1,param_2,0
                                              ), (uVar1 & 1) == 0)) {
                                  uVar1 = 0x6d616e655278756d;
                                  if (((param_1 != (undefined1 *)0x6d616e655278756d) ||
                                      (param_2 != -0x16ffffffffffff9b)) &&
                                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                (0x6d616e655278756d,0xe900000000000065,param_1,
                                                 param_2,0), (uVar1 & 1) == 0)) {
                                    uVar1 = 0x7473694c78756d;
                                    if ((param_1 == (undefined1 *)0x7473694c78756d) &&
                                       (param_2 == -0x1900000000000000)) {
                                      _swift_bridgeObjectRelease(0xe700000000000000);
                                      return 0x22;
                                    }
                                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (0x7473694c78756d,0xe700000000000000,param_1,param_2,0
                                              );
                                    _swift_bridgeObjectRelease(param_2);
                                    if ((uVar1 & 1) != 0) {
                                      return 0x22;
                                    }
                                    return 0x23;
                                  }
                                  _swift_bridgeObjectRelease(param_2);
                                  return 0x21;
                                }
                                _swift_bridgeObjectRelease(param_2);
                                return 0x20;
                              }
                              _swift_bridgeObjectRelease(param_2);
                              return 0x1f;
                            }
                            _swift_bridgeObjectRelease(param_2);
                            return 0x1c;
                          }
                          _swift_bridgeObjectRelease(param_2);
                          return 0x19;
                        }
                      }
                      _swift_bridgeObjectRelease(param_2);
                      return 0x13;
                    }
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 0x11;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 0xe;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 0xd;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 3;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 1;
}

