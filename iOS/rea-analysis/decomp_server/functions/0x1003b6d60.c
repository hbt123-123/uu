// rea decompile_all
// name: FUN_1003b6d60
// address: 0x1003b6d60
// body: available
// range: 0x1003b6d60-0x1003b6e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003b6d60(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0x73656c61636f6c;
  if (*param_1 == '\0') {
    lVar5 = 0x695f746573657270;
  }
  lVar1 = -0x1900000000000000;
  if (*param_1 == '\0') {
    lVar1 = -0x16ffffffffffff9c;
  }
  lVar2 = 0x73656c61636f6c;
  if (*param_2 == '\0') {
    lVar2 = 0x695f746573657270;
  }
  lVar3 = -0x1900000000000000;
  if (*param_2 == '\0') {
    lVar3 = -0x16ffffffffffff9c;
  }
  if (lVar5 == lVar2 && lVar1 == lVar3) {
    uVar4 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar1,lVar2,lVar3,0);
    uVar4 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar3);
  return uVar4 & 1;
}

