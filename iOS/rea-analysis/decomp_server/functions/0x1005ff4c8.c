// rea decompile_all
// name: FUN_1005ff4c8
// address: 0x1005ff4c8
// body: available
// range: 0x1005ff4c8-0x1005ff85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005ff4c8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x4449656369766564 && param_2 == -0x1800000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x4449656369766564,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x44496e6565726373;
    if (((param_1 == 0x44496e6565726373) && (param_2 == -0x1800000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x44496e6565726373,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x61446e6565726373;
      if (((param_1 == 0x61446e6565726373) && (param_2 == -0x15ffffffffff9e8c)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x61446e6565726373,0xea00000000006174,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        if ((param_1 != 0x737066) || (param_2 != -0x1d00000000000000)) {
          uVar2 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x737066,0xe300000000000000,param_1,param_2,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0x7974696c617571;
            if (((param_1 == 0x7974696c617571) && (param_2 == -0x1900000000000000)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x7974696c617571,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)
               ) {
              _swift_bridgeObjectRelease(param_2);
              return 4;
            }
            uVar2 = 0;
            if (((param_1 == 0x6e6f697461746f72) && (param_2 == -0x1800000000000000)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x6e6f697461746f72,0xe800000000000000,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              return 5;
            }
            uVar2 = 0x496e6f6973736573;
            if (((param_1 == 0x496e6f6973736573) && (param_2 == -0x16ffffffffffffbc)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x496e6f6973736573,0xe900000000000044,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
            uVar2 = 0;
            if (((param_1 == 0x6e6f697369766572) && (param_2 == -0x1800000000000000)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x6e6f697369766572,0xe800000000000000,param_1,param_2,0),
               (uVar2 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              return 7;
            }
            uVar2 = 0x5365727574706163;
            if (((param_1 != 0x5365727574706163) || (param_2 != -0x108c9891968b8b9b)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x5365727574706163,0xef73676e69747465,param_1,param_2,0),
               (uVar2 & 1) == 0)) {
              if ((param_1 != -0x2fffffffffffffe9) || (param_2 != -0x7ffffffeff741600)) {
                uVar2 = 0xd000000000000017;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000017,0x80000001008bea00,param_1,param_2,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0x73654d726f727265;
                  if ((param_1 == 0x73654d726f727265) && (param_2 == -0x13ffffff9a989e8d)) {
                    _swift_bridgeObjectRelease(0xec00000065676173);
                    return 10;
                  }
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x73654d726f727265,0xec00000065676173,param_1,param_2,0);
                  _swift_bridgeObjectRelease(param_2);
                  if ((uVar2 & 1) != 0) {
                    return 10;
                  }
                  return 0xb;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 9;
            }
            _swift_bridgeObjectRelease(param_2);
            return 8;
          }
        }
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}

