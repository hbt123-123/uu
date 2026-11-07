// rea decompile_all
// name: FUN_100010270
// address: 0x100010270
// body: available
// range: 0x100010270-0x1000104db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100010270(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x6449656369766564 && param_2 == -0x1800000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6449656369766564,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x614e656369766564) && (param_2 == -0x15ffffffffff9a93)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x614e656369766564,0xea0000000000656d,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x6d726f6674616c70) && (param_2 == -0x1800000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6d726f6674616c70,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0x697463656e6e6f63;
        if (((param_1 == 0x697463656e6e6f63) && (param_2 == -0x109a8b9e8bac9191)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x697463656e6e6f63,0xef65746174536e6f,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0x6f72746e6f437369;
          if (((param_1 == 0x6f72746e6f437369) && (param_2 == -0x12ffff9891969394)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6f72746e6f437369,0xed0000676e696c6c,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 4;
          }
          else {
            if ((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffefff3b570)) {
              uVar2 = 0xd000000000000013;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000013,0x80000001000c4a90,param_1,param_2,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if ((param_1 == 0x6f7272457473616c) && (param_2 == -0x16ffffffffffff8e)) {
                  _swift_bridgeObjectRelease(0xe900000000000072);
                  return 6;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x6f7272457473616c,0xe900000000000072,param_1,param_2,0);
                _swift_bridgeObjectRelease(param_2);
                if ((uVar2 & 1) != 0) {
                  return 6;
                }
                return 7;
              }
            }
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 5;
          }
        }
      }
    }
  }
  return uVar1;
}

