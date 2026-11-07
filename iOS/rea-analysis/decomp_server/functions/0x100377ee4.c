// rea decompile_all
// name: FUN_100377ee4
// address: 0x100377ee4
// body: available
// range: 0x100377ee4-0x100377f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100377ee4(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x35363248;
  if (*param_1 == '\0') {
    uVar2 = 0x34363248;
  }
  uVar1 = 0x35363248;
  if (*param_2 == '\0') {
    uVar1 = 0x34363248;
  }
  if (uVar2 == uVar1) {
    uVar2 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,0xe400000000000000,uVar1,0xe400000000000000,0);
  }
  _swift_bridgeObjectRelease_n(0xe400000000000000,2);
  return uVar2 & 1;
}

