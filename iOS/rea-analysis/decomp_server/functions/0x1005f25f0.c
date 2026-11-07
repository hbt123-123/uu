// rea decompile_all
// name: FUN_1005f25f0
// address: 0x1005f25f0
// body: available
// range: 0x1005f25f0-0x1005f27ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005f25f0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = 0x496e6f6973736573;
  if ((param_1 == 0x496e6f6973736573 && param_2 == -0x16ffffffffffffbc) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x496e6f6973736573,0xe900000000000044,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar3 = 0;
  }
  else {
    uVar1 = 0x6574726f70707573;
    if (((param_1 == 0x6574726f70707573) && (param_2 == -0x16ffffffffffff9c)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6574726f70707573,0xe900000000000064,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar3 = 1;
    }
    else {
      uVar1 = 0;
      if (((param_1 == 0x74616e6974736564) && (param_2 == -0x109a929eb1919097)) ||
         (uVar2 = uVar1,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (0x74616e6974736564,0xef656d614e6e6f69,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar3 = 2;
      }
      else if (((param_1 == 0x74616e6974736564) && (param_2 == -0x10978b9eaf919097)) ||
              (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (0x74616e6974736564,0xef687461506e6f69,param_1,param_2,0), (uVar1 & 1) != 0
              )) {
        _swift_bridgeObjectRelease(param_2);
        uVar3 = 3;
      }
      else {
        uVar1 = 0;
        if ((param_1 == 0x6e6f73616572) && (param_2 == -0x1a00000000000000)) {
          _swift_bridgeObjectRelease(0xe600000000000000);
          uVar3 = 4;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6e6f73616572,0xe600000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar3 = 4;
          if ((uVar1 & 1) == 0) {
            uVar3 = 5;
          }
        }
      }
    }
  }
  return uVar3;
}

