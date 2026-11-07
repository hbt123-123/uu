// rea decompile_all
// name: FUN_1006005b0
// address: 0x1006005b0
// body: available
// range: 0x1006005b0-0x100600b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1006005b0(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != (undefined1 *)0x737066 || param_2 != -0x1d00000000000000) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x737066,0xe300000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == (undefined1 *)0x617551656d617266) && (param_2 == -0x13ffffff868b9694)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x617551656d617266,0xec0000007974696c,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff765550)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (&DAT_d000000000000010,0x800000010089aab0,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0x44496e6565726373;
          if (((param_1 == (undefined1 *)0x44496e6565726373) && (param_2 == -0x1800000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x44496e6565726373,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 3;
          }
          uVar1 = 0;
          if (((param_1 == (undefined1 *)0x6974756c6f736572) && (param_2 == -0x10978b9b96a89191)) ||
             (uVar2 = uVar1,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (0x6974756c6f736572,0xef68746469576e6f,param_1,param_2,0), (uVar2 & 1) != 0))
          {
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
          if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff7655b0)) {
            uVar2 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (&DAT_d000000000000010,0x800000010089aa50,param_1,param_2,0);
            if ((uVar2 & 1) == 0) {
              if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff765530)) {
                uVar2 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (&DAT_d000000000000010,0x800000010089aad0,param_1,param_2,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_1 == (undefined1 *)0x656c616353697064) &&
                      (param_2 == -0x1800000000000000)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x656c616353697064,0xe800000000000000,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 7;
                  }
                  if (((param_1 == (undefined1 *)0x6974756c6f736572) &&
                      (param_2 == -0x11ff9a8f86ab9191)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x6974756c6f736572,0xee00657079546e6f,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 8;
                  }
                  uVar1 = 0x7079546365646f63;
                  if (((param_1 == (undefined1 *)0x7079546365646f63) &&
                      (param_2 == -0x16ffffffffffff9b)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7079546365646f63,0xe900000000000065,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 9;
                  }
                  uVar1 = 0x656c61635378616d;
                  if (((param_1 == (undefined1 *)0x656c61635378616d) &&
                      (param_2 == -0x12ffff978b9b96a9)) ||
                     (uVar2 = uVar1,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (0x656c61635378616d,0xed00006874646957,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 10;
                  }
                  if (((param_1 != (undefined1 *)0x656c61635378616d) ||
                      (param_2 != -0x11ff8b9798969ab8)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x656c61635378616d,0xee00746867696548,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0;
                    if (((param_1 == (undefined1 *)0xd000000000000014) &&
                        (param_2 == -0x7ffffffeff765590)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000014,0x800000010089aa70,param_1,param_2,0),
                       (uVar1 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xc;
                    }
                    uVar1 = 0xd000000000000015;
                    if (((param_1 == (undefined1 *)0xd000000000000015) &&
                        (param_2 == -0x7ffffffeff765570)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000015,0x800000010089aa90,param_1,param_2,0),
                       (uVar1 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xd;
                    }
                    uVar1 = 0x6f46616d726f6863;
                    if (((param_1 != (undefined1 *)0x6f46616d726f6863) ||
                        (param_2 != -0x13ffffff8b9e928e)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x6f46616d726f6863,0xec00000074616d72,param_1,param_2,0),
                       (uVar1 & 1) == 0)) {
                      uVar1 = 0;
                      if (((param_1 != (undefined1 *)0x746e756f43737066) ||
                          (param_2 != -0x1800000000000000)) &&
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x746e756f43737066,0xe800000000000000,param_1,param_2,0),
                         (uVar1 & 1) == 0)) {
                        uVar1 = 0x7461746e6569726f;
                        if ((param_1 == (undefined1 *)0x7461746e6569726f) &&
                           (param_2 == -0x14ffffffff919097)) {
                          _swift_bridgeObjectRelease(0xeb000000006e6f69);
                          return 0x10;
                        }
                        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x7461746e6569726f,0xeb000000006e6f69,param_1,param_2,0);
                        _swift_bridgeObjectRelease(param_2);
                        if ((uVar1 & 1) != 0) {
                          return 0x10;
                        }
                        return 0x11;
                      }
                      _swift_bridgeObjectRelease(param_2);
                      return 0xf;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 0xe;
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 0xb;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 5;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

