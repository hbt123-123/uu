// rea decompile_all
// name: FUN_1007c0550
// address: 0x1007c0550
// body: available
// range: 0x1007c0550-0x1007c0637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1007c0550(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  if ((param_1 != &DAT_d000000000000010) ||
     (lVar2 = -0x7ffffffeff725340, param_2 != -0x7ffffffeff725340)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (&DAT_d000000000000010,0x80000001008dacc0,param_1,param_2,0);
    lVar2 = param_2;
    if ((uVar1 & 1) == 0) {
      puVar3 = &DAT_d000000000000013;
      if ((param_1 == &DAT_d000000000000013) && (param_2 == -0x7ffffffeff725320)) {
        _swift_bridgeObjectRelease(0x80000001008dace0);
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (&DAT_d000000000000013,0x80000001008dace0,param_1,param_2,0);
      _swift_bridgeObjectRelease(param_2);
      if (((ulong)puVar3 & 1) != 0) {
        return 1;
      }
      return 2;
    }
  }
  _swift_bridgeObjectRelease(lVar2);
  return 0;
}

