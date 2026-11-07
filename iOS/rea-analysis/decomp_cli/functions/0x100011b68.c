// rea decompile_all
// name: FUN_100011b68
// address: 0x100011b68
// body: available
// range: 0x100011b68-0x100011cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100011b68(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6c616e7265746e69;
  if ((param_1 == 0x6c616e7265746e69 && param_2 == -0x13ffffff9a929eb2) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6c616e7265746e69,0xec000000656d614e,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x6874615078756d74) && (param_2 == -0x1800000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6874615078756d74,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x615074656b636f73;
      if (((param_1 == 0x615074656b636f73) && (param_2 == -0x15ffffffffff978c)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x615074656b636f73,0xea00000000006874,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar2 = 2;
      }
      else {
        uVar1 = 0x68746150666e6f63;
        if ((param_1 == 0x68746150666e6f63) && (param_2 == -0x1800000000000000)) {
          _swift_bridgeObjectRelease(0xe800000000000000);
          uVar2 = 3;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x68746150666e6f63,0xe800000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 3;
          if ((uVar1 & 1) == 0) {
            uVar2 = 4;
          }
        }
      }
    }
  }
  return uVar2;
}

