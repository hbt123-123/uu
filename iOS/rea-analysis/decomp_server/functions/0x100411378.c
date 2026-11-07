// rea decompile_all
// name: FUN_100411378
// address: 0x100411378
// body: available
// range: 0x100411378-0x100411423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100411378(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar5;
  long lVar4;
  
  lVar4 = 0x6c6f687365726874;
  if (*param_1 == '\0') {
    lVar4 = 0x737365636f7270;
  }
  lVar5 = -0x13ffffff9d92a09c;
  lVar1 = lVar5;
  if (*param_1 == '\0') {
    lVar1 = -0x1900000000000000;
  }
  lVar2 = 0x6c6f687365726874;
  if (*param_2 == '\0') {
    lVar5 = -0x1900000000000000;
    lVar2 = 0x737365636f7270;
  }
  if (lVar4 == lVar2 && lVar1 == lVar5) {
    uVar3 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar4,lVar1,lVar2,lVar5,0);
    uVar3 = (uint)lVar4;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar5);
  return uVar3 & 1;
}

