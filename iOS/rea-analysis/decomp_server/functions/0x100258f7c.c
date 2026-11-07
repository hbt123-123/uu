// rea decompile_all
// name: FUN_100258f7c
// address: 0x100258f7c
// body: available
// range: 0x100258f7c-0x100259063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100258f7c(char *param_1,char *param_2)

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
  lVar2 = 0x67736d;
  if (cVar5 != '\x01') {
    lVar2 = 0x736c6961746564;
  }
  lVar1 = -0x1d00000000000000;
  if (cVar5 != '\x01') {
    lVar1 = -0x1900000000000000;
  }
  lVar7 = 0x65646f63;
  if (cVar5 != '\0') {
    lVar7 = lVar2;
  }
  lVar2 = -0x1c00000000000000;
  if (cVar5 != '\0') {
    lVar2 = lVar1;
  }
  lVar1 = 0x67736d;
  if (cVar6 != '\x01') {
    lVar1 = 0x736c6961746564;
  }
  lVar3 = -0x1d00000000000000;
  if (cVar6 != '\x01') {
    lVar3 = -0x1900000000000000;
  }
  lVar4 = 0x65646f63;
  if (cVar6 != '\0') {
    lVar4 = lVar1;
  }
  lVar1 = -0x1c00000000000000;
  if (cVar6 != '\0') {
    lVar1 = lVar3;
  }
  if ((lVar7 == lVar4) && (lVar2 == lVar1)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar7,lVar2,lVar4,lVar1,0);
    uVar8 = (uint)lVar7;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar1);
  return uVar8 & 1;
}

