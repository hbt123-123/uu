// rea decompile_all
// name: FUN_1005ddd58
// address: 0x1005ddd58
// body: available
// range: 0x1005ddd58-0x1005ddf07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005ddd58(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x496e6f6973736573;
  if ((param_1 == 0x496e6f6973736573 && param_2 == -0x16ffffffffffff9c) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x496e6f6973736573,0xe900000000000064,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    if ((param_1 != 0x656d616e) || (param_2 != -0x1c00000000000000)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x656d616e,0xe400000000000000,param_1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x6c6c656873;
        if (((param_1 == 0x6c6c656873) && (param_2 == -0x1b00000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6c6c656873,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          return 2;
        }
        uVar2 = 0x6574617473;
        if (((param_1 != 0x6574617473) || (param_2 != -0x1b00000000000000)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x6574617473,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) == 0)) {
          uVar2 = 0x4164657461657263;
          if ((param_1 == 0x4164657461657263) && (param_2 == -0x14ffffffff8cb28c)) {
            _swift_bridgeObjectRelease(0xeb00000000734d74);
            return 4;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x4164657461657263,0xeb00000000734d74,param_1,param_2,0);
          _swift_bridgeObjectRelease(param_2);
          if ((uVar2 & 1) != 0) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
    }
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 1;
  }
  return uVar1;
}

