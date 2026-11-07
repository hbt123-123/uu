// rea decompile_all
// name: FUN_1000ecc64
// address: 0x1000ecc64
// body: available
// range: 0x1000ecc64-0x1000ecf1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000ecc64(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (((param_1 == 0x65646e49656c6966) && (param_2 == -0x16ffffffffffff88)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x65646e49656c6966,0xe900000000000078,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x687461506c6572) && (param_2 == -0x1900000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x687461506c6572,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != 0x657a6973) || (param_2 != -0x1c00000000000000)) {
        uVar2 = 0x657a6973;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x657a6973,0xe400000000000000,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x6465696669646f6d;
          if (((param_1 == 0x6465696669646f6d) && (param_2 == -0x13ffffff9a9296ac)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6465696669646f6d,0xec000000656d6954,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 3;
          }
          uVar2 = 0;
          if (((param_1 != 0x7261726f706d6574) || (param_2 != -0x12ffff978b9eaf87)) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x7261726f706d6574,0xed00006874615079,param_1,param_2,0), (uVar2 & 1) == 0)
             ) {
            uVar2 = 0;
            if (((param_1 != 0x7461506c616e6966) || (param_2 != -0x16ffffffffffff98)) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x7461506c616e6966,0xe900000000000068,param_1,param_2,0),
               (uVar2 & 1) == 0)) {
              uVar2 = 0x536e657474697277;
              if (((param_1 != 0x536e657474697277) || (param_2 != -0x14ffffffff9a8597)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x536e657474697277,0xeb00000000657a69,param_1,param_2,0),
                 (uVar2 & 1) == 0)) {
                uVar2 = 0x656c706d6f437369;
                if ((param_1 == 0x656c706d6f437369) && (param_2 == -0x14ffffffff9b9a8c)) {
                  _swift_bridgeObjectRelease(0xeb00000000646574);
                  return 7;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x656c706d6f437369,0xeb00000000646574,param_1,param_2,0);
                _swift_bridgeObjectRelease(param_2);
                if ((uVar2 & 1) != 0) {
                  return 7;
                }
                return 8;
              }
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
            _swift_bridgeObjectRelease(param_2);
            return 5;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}

