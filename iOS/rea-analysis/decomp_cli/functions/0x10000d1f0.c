// rea decompile_all
// name: FUN_10000d1f0
// address: 0x10000d1f0
// body: available
// range: 0x10000d1f0-0x10000d273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000d1f0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x65646f63 && param_3 == -0x1c00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 99;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x65646f63,0xe400000000000000,param_2,param_3,0);
    _swift_bridgeObjectRelease(param_3);
    bVar1 = bVar1 ^ 1;
  }
  *param_1 = bVar1 & 1;
  return;
}

