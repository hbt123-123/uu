// rea decompile_all
// name: FUN_1000bc188
// address: 0x1000bc188
// body: available
// range: 0x1000bc188-0x1000bc2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bc2f0 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000bc188(char param_1,long param_2,long param_3,char param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0x676e6f6c;
  if (param_1 == '\0') {
    lVar3 = -0x1c00000000000000;
    uVar2 = 0x676e6f6c;
    if (param_4 == '\0') goto LAB_1000bc248;
LAB_1000bc1fc:
    uVar1 = 0x74726f6873;
    if (param_4 != '\x01') {
      uVar1 = 0xd000000000000012;
    }
    lVar4 = -0x1b00000000000000;
    if (param_4 != '\x01') {
      lVar4 = -0x7ffffffefff36370;
    }
    if (uVar2 == uVar1) {
LAB_1000bc254:
      if (lVar3 == lVar4) {
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1000bc29c;
      }
    }
  }
  else {
    uVar2 = 0x74726f6873;
    if (param_1 != '\x01') {
      uVar2 = 0xd000000000000012;
    }
    lVar3 = -0x1b00000000000000;
    if (param_1 != '\x01') {
      lVar3 = -0x7ffffffefff36370;
    }
    if (param_4 != '\0') goto LAB_1000bc1fc;
LAB_1000bc248:
    lVar4 = -0x1c00000000000000;
    if (uVar2 == 0x676e6f6c) goto LAB_1000bc254;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar2,lVar3,uVar1,lVar4,0);
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease(lVar4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
LAB_1000bc29c:
  if ((param_2 == param_5) && (param_3 == param_6)) {
    return 1;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (param_2,param_3,param_5,param_6,0);
  return param_2;
}

