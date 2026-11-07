// rea decompile_all
// name: FUN_1001acedc
// address: 0x1001acedc
// body: available
// range: 0x1001acedc-0x1001ad2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001acedc(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0x72756769666e6f63;
  if ((param_1 == (undefined1 *)0x72756769666e6f63 && param_2 == -0x15ffffffffff9b9b) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x72756769666e6f63,0xea00000000006465,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == (undefined1 *)0x6974756c6f736572) && (param_2 == -0x11ff9a8f86ab9191)) ||
       (uVar3 = uVar2,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x6974756c6f736572,0xee00657079546e6f,param_1,param_2,0), (uVar3 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else if (((param_1 == (undefined1 *)0x6974756c6f736572) && (param_2 == -0x10978b9b96a89191)) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (0x6974756c6f736572,0xef68746469576e6f,param_1,param_2,0), (uVar2 & 1) != 0))
    {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 2;
    }
    else {
      if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff7655b0)) {
        uVar2 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (&DAT_d000000000000010,0x800000010089aa50,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_1 == (undefined1 *)0xd000000000000014) && (param_2 == -0x7ffffffeff765590)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000014,0x800000010089aa70,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 4;
          }
          uVar2 = 0xd000000000000015;
          if (((param_1 != (undefined1 *)0xd000000000000015) || (param_2 != -0x7ffffffeff765570)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000015,0x800000010089aa90,param_1,param_2,0), (uVar2 & 1) == 0)
             ) {
            uVar2 = 0x7461746e6569726f;
            if (((param_1 == (undefined1 *)0x7461746e6569726f) && (param_2 == -0x14ffffffff919097))
               || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                             (0x7461746e6569726f,0xeb000000006e6f69,param_1,param_2,0),
                  (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
            if ((param_1 != (undefined1 *)0x737066) || (param_2 != -0x1d00000000000000)) {
              uVar2 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x737066,0xe300000000000000,param_1,param_2,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_1 == (undefined1 *)0x617551656d617266) &&
                    (param_2 == -0x13ffffff868b9694)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x617551656d617266,0xec0000007974696c,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  _swift_bridgeObjectRelease(param_2);
                  return 8;
                }
                if ((param_1 != &DAT_d000000000000010) || (param_2 != -0x7ffffffeff765550)) {
                  uVar2 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (&DAT_d000000000000010,0x800000010089aab0,param_1,param_2,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0x6f46616d726f6863;
                    if (((param_1 != (undefined1 *)0x6f46616d726f6863) ||
                        (param_2 != -0x13ffffff8b9e928e)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x6f46616d726f6863,0xec00000074616d72,param_1,param_2,0),
                       (uVar2 & 1) == 0)) {
                      if ((param_1 == &DAT_d000000000000010) && (param_2 == -0x7ffffffeff765530)) {
                        _swift_bridgeObjectRelease(0x800000010089aad0);
                        return 0xb;
                      }
                      uVar2 = 0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (&DAT_d000000000000010,0x800000010089aad0,param_1,param_2,0);
                      _swift_bridgeObjectRelease(param_2);
                      if ((uVar2 & 1) != 0) {
                        return 0xb;
                      }
                      return 0xc;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 10;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                return 9;
              }
            }
            _swift_bridgeObjectRelease(param_2);
            return 7;
          }
          _swift_bridgeObjectRelease(param_2);
          return 5;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 3;
    }
  }
  return uVar1;
}

