// rea decompile_all
// name: FUN_1000bbec8
// address: 0x1000bbec8
// body: available
// range: 0x1000bbec8-0x1000bc187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000bbec8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x6d6f437265707573;
  if ((param_1 == 0x6d6f437265707573 && param_2 == -0x12ffff8c9b919e93) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6d6f437265707573,0xed000073646e616d,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x6944646c756f6873;
    if (((param_1 == 0x6944646c756f6873) && (param_2 == -0x12ffff869e938f8d)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6944646c756f6873,0xed000079616c7073,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x4e646e616d6d6f63;
      if (((param_1 == 0x4e646e616d6d6f63) && (param_2 == -0x14ffffffff9a929f)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x4e646e616d6d6f63,0xeb00000000656d61,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        uVar2 = 0x7463617274736261;
        if (((param_1 == 0x7463617274736261) && (param_2 == -0x1800000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x7463617274736261,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          uVar1 = 3;
        }
        else {
          uVar2 = 0;
          if (((param_1 == 0x6973737563736964) && (param_2 == -0x15ffffffffff9191)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6973737563736964,0xea00000000006e6f,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            uVar1 = 4;
          }
          else {
            if ((param_1 != -0x2fffffffffffffef) || (param_2 != -0x7ffffffefff34f20)) {
              uVar2 = 0xd000000000000011;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000011,0x80000001000cb0e0,param_1,param_2,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0x616d6d6f63627573;
                if (((param_1 != 0x616d6d6f63627573) || (param_2 != -0x14ffffffff8c9b92)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x616d6d6f63627573,0xeb0000000073646e,param_1,param_2,0),
                   (uVar2 & 1) == 0)) {
                  uVar2 = 0x746e656d75677261;
                  if ((param_1 == 0x746e656d75677261) && (param_2 == -0x16ffffffffffff8d)) {
                    _swift_bridgeObjectRelease(0xe900000000000073);
                    return 7;
                  }
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x746e656d75677261,0xe900000000000073,param_1,param_2,0);
                  _swift_bridgeObjectRelease(param_2);
                  if ((uVar2 & 1) != 0) {
                    return 7;
                  }
                  return 8;
                }
                _swift_bridgeObjectRelease(param_2);
                return 6;
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

