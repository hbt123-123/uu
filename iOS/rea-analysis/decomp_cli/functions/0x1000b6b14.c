// rea decompile_all
// name: FUN_1000b6b14
// address: 0x1000b6b14
// body: available
// range: 0x1000b6b14-0x1000b6bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b6b14(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  cVar3 = *param_1;
  cVar4 = *param_2;
  lVar7 = 0x74726f6873;
  if (cVar3 != '\x01') {
    lVar7 = -0x2fffffffffffffee;
  }
  lVar6 = -0x1b00000000000000;
  if (cVar3 != '\x01') {
    lVar6 = -0x7ffffffefff36370;
  }
  lVar5 = 0x676e6f6c;
  if (cVar3 != '\0') {
    lVar5 = lVar7;
  }
  lVar7 = -0x1c00000000000000;
  if (cVar3 != '\0') {
    lVar7 = lVar6;
  }
  lVar6 = 0x74726f6873;
  if (cVar4 != '\x01') {
    lVar6 = -0x2fffffffffffffee;
  }
  lVar1 = -0x1b00000000000000;
  if (cVar4 != '\x01') {
    lVar1 = -0x7ffffffefff36370;
  }
  lVar2 = 0x676e6f6c;
  if (cVar4 != '\0') {
    lVar2 = lVar6;
  }
  lVar6 = -0x1c00000000000000;
  if (cVar4 != '\0') {
    lVar6 = lVar1;
  }
  if ((lVar5 == lVar2) && (lVar7 == lVar6)) {
    uVar8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar5,lVar7,lVar2,lVar6,0);
    uVar8 = (uint)lVar5;
  }
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar6);
  return uVar8 & 1;
}

