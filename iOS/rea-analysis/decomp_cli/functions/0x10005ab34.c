// rea decompile_all
// name: FUN_10005ab34
// address: 0x10005ab34
// body: available
// range: 0x10005ab34-0x10005ac6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10005ab34(char param_1,long param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  pcVar6 = (char *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x10);
  do {
    lVar7 = lVar5;
    if (lVar7 == 0) break;
    cVar2 = *pcVar6;
    uVar4 = 0x6e6f6974706f;
    if (cVar2 != '\x01') {
      uVar4 = 0x67616c66;
    }
    lVar5 = -0x1a00000000000000;
    if (cVar2 != '\x01') {
      lVar5 = -0x1c00000000000000;
    }
    uVar3 = 0x6e6f697469736f70;
    if (cVar2 != '\0') {
      uVar3 = uVar4;
    }
    lVar1 = -0x15ffffffffff939f;
    if (cVar2 != '\0') {
      lVar1 = lVar5;
    }
    if (param_1 == '\0') {
      uVar4 = 0x6e6f697469736f70;
      lVar5 = -0x15ffffffffff939f;
      if (uVar3 == 0x6e6f697469736f70) goto LAB_10005ac34;
    }
    else {
      uVar4 = 0x6e6f6974706f;
      if (param_1 != '\x01') {
        uVar4 = 0x67616c66;
      }
      lVar5 = -0x1a00000000000000;
      if (param_1 != '\x01') {
        lVar5 = -0x1c00000000000000;
      }
      if (uVar3 == uVar4) {
LAB_10005ac34:
        if (lVar1 == lVar5) {
          _swift_bridgeObjectRelease(lVar1);
          _swift_bridgeObjectRelease(lVar5);
          break;
        }
      }
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar1,uVar4,lVar5,0);
    _swift_bridgeObjectRelease(lVar1);
    _swift_bridgeObjectRelease(lVar5);
    pcVar6 = pcVar6 + 1;
    lVar5 = lVar7 + -1;
  } while ((uVar3 & 1) == 0);
  return lVar7 != 0;
}

