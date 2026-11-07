// rea decompile_all
// name: FUN_100600f28
// address: 0x100600f28
// body: available
// range: 0x100600f28-0x100601187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100600f28(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x646f436f65646976 && param_2 == -0x15ffffffffff9c9b) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x646f436f65646976,0xea00000000006365,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x6153616d6f726863;
    if (((param_1 == 0x6153616d6f726863) && (param_2 == -0x11ff989196938f93)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6153616d6f726863,0xee00676e696c706d,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x656d61724678616d;
      if (((param_1 == 0x656d61724678616d) && (param_2 == -0x10868b96939e8aaf)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x656d61724678616d,0xef7974696c617551,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0;
        if (((param_1 == 0x6874706544746962) && (param_2 == -0x1800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6874706544746962,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
        }
        else {
          uVar1 = 0x687464695778616d;
          if (((param_1 == 0x687464695778616d) && (param_2 == -0x1800000000000000)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x687464695778616d,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            uVar2 = 4;
          }
          else {
            uVar1 = 0x686769654878616d;
            if (((param_1 == 0x686769654878616d) && (param_2 == -0x16ffffffffffff8c)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x686769654878616d,0xe900000000000074,param_1,param_2,0),
               (uVar1 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              uVar2 = 5;
            }
            else {
              uVar1 = 0;
              if ((param_1 == 0x746c75736572) && (param_2 == -0x1a00000000000000)) {
                _swift_bridgeObjectRelease(0xe600000000000000);
                uVar2 = 6;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x746c75736572,0xe600000000000000,param_1,param_2,0);
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

