// rea decompile_all
// name: FUN_1000b793c
// address: 0x1000b793c
// body: available
// range: 0x1000b793c-0x1000b7a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b793c(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  lVar3 = 0x6e6f6974706f;
  if (cVar5 != '\x01') {
    lVar3 = 0x67616c66;
  }
  lVar1 = -0x1a00000000000000;
  if (cVar5 != '\x01') {
    lVar1 = -0x1c00000000000000;
  }
  lVar2 = -0x15ffffffffff939f;
  lVar8 = 0x6e6f697469736f70;
  if (cVar5 != '\0') {
    lVar2 = lVar1;
    lVar8 = lVar3;
  }
  lVar3 = 0x6e6f6974706f;
  if (cVar6 != '\x01') {
    lVar3 = 0x67616c66;
  }
  lVar1 = -0x1a00000000000000;
  if (cVar6 != '\x01') {
    lVar1 = -0x1c00000000000000;
  }
  lVar4 = -0x15ffffffffff939f;
  lVar7 = 0x6e6f697469736f70;
  if (cVar6 != '\0') {
    lVar4 = lVar1;
    lVar7 = lVar3;
  }
  if ((lVar8 == lVar7) && (lVar2 == lVar4)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar8,lVar2,lVar7,lVar4,0);
    uVar9 = (uint)lVar8;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return uVar9 & 1;
}

