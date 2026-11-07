// rea decompile_all
// name: FUN_1003b5d64
// address: 0x1003b5d64
// body: available
// range: 0x1003b5d64-0x1003b5e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003b5d64(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  lVar1 = 0x6c7275;
  if (cVar5 != '\x01') {
    lVar1 = 0x5f64657461657263;
  }
  lVar4 = -0x1d00000000000000;
  if (cVar5 != '\x01') {
    lVar4 = -0x15ffffffffff8b9f;
  }
  lVar7 = 0x64695f;
  if (cVar5 != '\0') {
    lVar7 = lVar1;
  }
  lVar1 = -0x1d00000000000000;
  if (cVar5 != '\0') {
    lVar1 = lVar4;
  }
  lVar4 = 0x6c7275;
  if (cVar6 != '\x01') {
    lVar4 = 0x5f64657461657263;
  }
  lVar2 = -0x1d00000000000000;
  if (cVar6 != '\x01') {
    lVar2 = -0x15ffffffffff8b9f;
  }
  lVar3 = 0x64695f;
  if (cVar6 != '\0') {
    lVar3 = lVar4;
  }
  lVar4 = -0x1d00000000000000;
  if (cVar6 != '\0') {
    lVar4 = lVar2;
  }
  if ((lVar7 == lVar3) && (lVar1 == lVar4)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar7,lVar1,lVar3,lVar4,0);
    uVar8 = (uint)lVar7;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar4);
  return uVar8 & 1;
}

