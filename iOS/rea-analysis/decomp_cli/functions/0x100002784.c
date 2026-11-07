// rea decompile_all
// name: FUN_100002784
// address: 0x100002784
// body: available
// range: 0x100002784-0x1000028e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100002784(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x73736563637573;
  if ((param_1 == 0x73736563637573 && param_2 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x73736563637573,0xe700000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x61746164) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x61746164,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x726f727265;
        if (((param_1 != 0x726f727265) || (param_2 != -0x1b00000000000000)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x726f727265,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) == 0)) {
          uVar2 = 0;
          if ((param_1 == 0x6d617473656d6974) && (param_2 == -0x16ffffffffffff90)) {
            _swift_bridgeObjectRelease(0xe900000000000070);
            return 3;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6d617473656d6974,0xe900000000000070,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          if ((uVar2 & 1) != 0) {
            return 3;
          }
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

