// rea decompile_all
// name: FUN_1000ed6c4
// address: 0x1000ed6c4
// body: available
// range: 0x1000ed6c4-0x1000ed917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000ed6c4(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x71696e556b736174 && param_2 == -0x13ffffffbbb69a8b) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x71696e556b736174,0xec00000044496575,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x6150746567726174) && (param_2 == -0x15ffffffffff978c)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6150746567726174,0xea00000000006874,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x614e7265646c6f66) && (param_2 == -0x15ffffffffff9a93)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x614e7265646c6f66,0xea0000000000656d,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x73656c6966) && (param_2 == -0x1b00000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x73656c6966,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0x4164657461657263;
          if (((param_1 == 0x4164657461657263) && (param_2 == -0x16ffffffffffff8c)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x4164657461657263,0xe900000000000074,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            uVar2 = 4;
          }
          else {
            uVar1 = 0x4164657461647075;
            if (((param_1 == 0x4164657461647075) && (param_2 == -0x16ffffffffffff8c)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x4164657461647075,0xe900000000000074,param_1,param_2,0),
               (uVar1 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              uVar2 = 5;
            }
            else {
              uVar1 = 0x737574617473;
              if ((param_1 == 0x737574617473) && (param_2 == -0x1a00000000000000)) {
                _swift_bridgeObjectRelease(0xe600000000000000);
                uVar2 = 6;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x737574617473,0xe600000000000000,param_1,param_2,0);
                _swift_bridgeObjectRelease(param_2);
                uVar2 = 6;
                if ((uVar1 & 1) == 0) {
                  uVar2 = 7;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

