// rea decompile_all
// name: FUN_1003f6e58
// address: 0x1003f6e58
// body: available
// range: 0x1003f6e58-0x1003f6edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003f6e58(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0x737974696c696261;
  if (*param_1 == '\0') {
    lVar2 = 0x6d726f6674616c70;
  }
  lVar1 = 0x737974696c696261;
  if (*param_2 == '\0') {
    lVar1 = 0x6d726f6674616c70;
  }
  if (lVar2 == lVar1) {
    uVar3 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,0xe800000000000000,lVar1,0xe800000000000000,0);
    uVar3 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease_n(0xe800000000000000,2);
  return uVar3 & 1;
}

