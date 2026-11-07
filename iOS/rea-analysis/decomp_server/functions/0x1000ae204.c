// rea decompile_all
// name: FUN_1000ae204
// address: 0x1000ae204
// body: available
// range: 0x1000ae204-0x1000ae323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000ae204(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar6 = -0x11ff9b96a09a9c97;
  lVar3 = 0x7665645f72657375;
  if (*param_1 != '\x01') {
    lVar6 = -0x16ffffffffffff9c;
    lVar3 = 0x695f656369766564;
  }
  lVar1 = -0x15ffffffffff9b97;
  lVar5 = 0x5f7463656c6c6f63;
  if (*param_1 != '\0') {
    lVar1 = lVar6;
    lVar5 = lVar3;
  }
  lVar6 = -0x11ff9b96a09a9c97;
  lVar3 = 0x7665645f72657375;
  if (*param_2 != '\x01') {
    lVar6 = -0x16ffffffffffff9c;
    lVar3 = 0x695f656369766564;
  }
  lVar2 = -0x15ffffffffff9b97;
  lVar4 = 0x5f7463656c6c6f63;
  if (*param_2 != '\0') {
    lVar2 = lVar6;
    lVar4 = lVar3;
  }
  if ((lVar5 == lVar4) && (lVar1 == lVar2)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar1,lVar4,lVar2,0);
    uVar7 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar2);
  return uVar7 & 1;
}

