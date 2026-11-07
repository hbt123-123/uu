// rea decompile_all
// name: FUN_1003b46cc
// address: 0x1003b46cc
// body: available
// range: 0x1003b46cc-0x1003b4787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003b46cc(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = 0x5f6c616963657073;
  if (*param_1 == '\0') {
    lVar5 = 0x615f656369766564;
  }
  lVar1 = -0x108f9e92a08f8f9f;
  if (*param_1 == '\0') {
    lVar1 = -0x108b8c9693a08f90;
  }
  lVar2 = -0x108f9e92a08f8f9f;
  lVar3 = 0x5f6c616963657073;
  if (*param_2 == '\0') {
    lVar2 = -0x108b8c9693a08f90;
    lVar3 = 0x615f656369766564;
  }
  if (lVar5 == lVar3 && lVar1 == lVar2) {
    uVar4 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar1,lVar3,lVar2,0);
    uVar4 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar2);
  return uVar4 & 1;
}

