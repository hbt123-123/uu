// rea decompile_all
// name: FUN_10040e7d4
// address: 0x10040e7d4
// body: available
// range: 0x10040e7d4-0x10040e863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040e7d4(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = -0x15ffffffffff9b9b;
  if (*param_1 == '\0') {
    lVar1 = -0x15ffffffffff8d9b;
  }
  lVar2 = -0x15ffffffffff9b9b;
  if (*param_2 == '\0') {
    lVar2 = -0x15ffffffffff8d9b;
  }
  if (lVar1 == lVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0x746e6f63;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x6c6c6f72746e6f63,lVar1,0x6c6c6f72746e6f63,lVar2,0);
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar2);
  return uVar3 & 1;
}

