// rea decompile_all
// name: FUN_100011238
// address: 0x100011238
// body: available
// range: 0x100011238-0x100011357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100011238(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffefff3b550)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000014,0x80000001000c4ab0,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x697463656e6e6f63;
      if (((param_1 != 0x697463656e6e6f63) || (param_2 != -0x14ffffffff8c9191)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x697463656e6e6f63,0xeb00000000736e6f,param_1,param_2,0), (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if ((param_1 == 0x6c61746f74) && (param_2 == -0x1b00000000000000)) {
          _swift_bridgeObjectRelease(0xe500000000000000);
          return 2;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6c61746f74,0xe500000000000000,param_1,param_2,0);
        _swift_bridgeObjectRelease(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

