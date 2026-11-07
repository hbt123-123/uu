// rea decompile_all
// name: FUN_1007bff18
// address: 0x1007bff18
// body: available
// range: 0x1007bff18-0x1007c0003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1007bff18(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x636174536c6c6163 || param_2 != -0x15ffffffffff8c95) {
    uVar1 = 0x636174536c6c6163;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x636174536c6c6163,0xea0000000000736b,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 == -0x2fffffffffffffee) && (param_2 == -0x7ffffffeff7253c0)) {
        _swift_bridgeObjectRelease();
        return 1;
      }
      uVar1 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000012,0x80000001008dac40,param_1,param_2,0);
      _swift_bridgeObjectRelease(param_2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

