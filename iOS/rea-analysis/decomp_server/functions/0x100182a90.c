// rea decompile_all
// name: FUN_100182a90
// address: 0x100182a90
// body: available
// range: 0x100182a90-0x100182ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100182a90(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  cVar4 = *param_1;
  cVar5 = *param_2;
  lVar7 = -0x11ff9a8d8a93969f;
  lVar1 = 0x466c616974726170;
  if (cVar4 != '\x01') {
    lVar7 = -0x1900000000000000;
    lVar1 = 0x6572756c696166;
  }
  lVar6 = 0x73736563637573;
  if (cVar4 != '\0') {
    lVar6 = lVar1;
  }
  lVar1 = -0x1900000000000000;
  if (cVar4 != '\0') {
    lVar1 = lVar7;
  }
  lVar7 = -0x11ff9a8d8a93969f;
  lVar3 = 0x466c616974726170;
  if (cVar5 != '\x01') {
    lVar7 = -0x1900000000000000;
    lVar3 = 0x6572756c696166;
  }
  lVar2 = 0x73736563637573;
  if (cVar5 != '\0') {
    lVar2 = lVar3;
  }
  lVar3 = -0x1900000000000000;
  if (cVar5 != '\0') {
    lVar3 = lVar7;
  }
  if ((lVar6 == lVar2) && (lVar1 == lVar3)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar6,lVar1,lVar2,lVar3,0);
    uVar8 = (uint)lVar6;
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_bridgeObjectRelease(lVar3);
  return uVar8 & 1;
}

