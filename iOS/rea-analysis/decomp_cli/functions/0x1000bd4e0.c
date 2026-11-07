// rea decompile_all
// name: FUN_1000bd4e0
// address: 0x1000bd4e0
// body: available
// range: 0x1000bd4e0-0x1000bd9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000bd4e0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x646e696b || param_2 != -0x1c00000000000000) {
    uVar1 = 0x646e696b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x646e696b,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6944646c756f6873;
      if (((param_1 == 0x6944646c756f6873) && (param_2 == -0x12ffff869e938f8d)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6944646c756f6873,0xed000079616c7073,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      uVar1 = 0x546e6f6974636573;
      if (((param_1 == 0x546e6f6974636573) && (param_2 == -0x13ffffff9a938b97)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x546e6f6974636573,0xec000000656c7469,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      uVar1 = 0x6e6f6974704f7369;
      if (((param_1 == 0x6e6f6974704f7369) && (param_2 == -0x15ffffffffff939f)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6e6f6974704f7369,0xea00000000006c61,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      uVar1 = 0x7461657065527369;
      if (((param_1 == 0x7461657065527369) && (param_2 == -0x14ffffffff989197)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7461657065527369,0xeb00000000676e69,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      uVar1 = 0;
      if (((param_1 != 0x53676e6973726170) || (param_2 != -0x1086989a8b9e8d8c)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x53676e6973726170,0xef79676574617274,param_1,param_2,0), (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if (((param_1 == 0x73656d616e) && (param_2 == -0x1b00000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x73656d616e,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          return 6;
        }
        uVar1 = 0;
        if (((param_1 == 0x6572726566657270) && (param_2 == -0x12ffff9a929eb19c)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6572726566657270,0xed0000656d614e64,param_1,param_2,0), (uVar1 & 1) != 0))
        {
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        uVar1 = 0;
        if (((param_1 != 0x6d614e65756c6176) || (param_2 != -0x16ffffffffffff9b)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6d614e65756c6176,0xe900000000000065,param_1,param_2,0), (uVar1 & 1) == 0))
        {
          uVar1 = 0;
          if (((param_1 != 0x56746c7561666564) || (param_2 != -0x13ffffff9a8a939f)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x56746c7561666564,0xec00000065756c61,param_1,param_2,0), (uVar1 & 1) == 0)
             ) {
            uVar1 = 0x65756c61566c6c61;
            if (((param_1 == 0x65756c61566c6c61) && (param_2 == -0x16ffffffffffff8d)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x65756c61566c6c61,0xe900000000000073,param_1,param_2,0),
               (uVar1 & 1) != 0)) {
              _swift_bridgeObjectRelease(param_2);
              return 10;
            }
            if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffefff34ee0)) {
              uVar1 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000014,0x80000001000cb120,param_1,param_2,0);
              if ((uVar1 & 1) == 0) {
                uVar1 = 0x6974656c706d6f63;
                if (((param_1 != 0x6974656c706d6f63) || (param_2 != -0x11ff9b9196b49191)) &&
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x6974656c706d6f63,0xee00646e694b6e6f,param_1,param_2,0),
                   (uVar1 & 1) == 0)) {
                  uVar1 = 0x7463617274736261;
                  if (((param_1 != 0x7463617274736261) || (param_2 != -0x1800000000000000)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7463617274736261,0xe800000000000000,param_1,param_2,0),
                     (uVar1 & 1) == 0)) {
                    uVar1 = 0;
                    if ((param_1 == 0x6973737563736964) && (param_2 == -0x15ffffffffff9191)) {
                      _swift_bridgeObjectRelease(0xea00000000006e6f);
                      return 0xe;
                    }
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x6973737563736964,0xea00000000006e6f,param_1,param_2,0);
                    _swift_bridgeObjectRelease(param_2);
                    if ((uVar1 & 1) != 0) {
                      return 0xe;
                    }
                    return 0xf;
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 0xd;
                }
                _swift_bridgeObjectRelease(param_2);
                return 0xc;
              }
            }
            _swift_bridgeObjectRelease(param_2);
            return 0xb;
          }
          _swift_bridgeObjectRelease(param_2);
          return 9;
        }
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

