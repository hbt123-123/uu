// rea decompile_all
// name: FUN_1000bb36c
// address: 0x1000bb36c
// body: available
// range: 0x1000bb36c-0x1000bb51b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000bb36c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    if (*param_2 == 0) {
      return 0;
    }
    FUN_100080b0c();
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[1] ^ *(byte *)(param_2 + 1)) & 1) != 0) {
    return 0;
  }
  uVar1 = param_1[2];
  if ((uVar1 != param_2[2] || param_1[3] != param_2[3]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar1 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[4];
    if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[6];
    if (((uVar2 != param_2[6]) || (param_1[7] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_2[9];
  if (param_1[9] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[8];
    if (((uVar2 != param_2[8]) || (param_1[9] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_1[10];
  lVar3 = param_2[10];
  if (uVar1 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar3);
    FUN_1000b88cc(uVar1,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = param_1[0xb];
  lVar3 = param_2[0xb];
  if (uVar1 == 0) {
    if (lVar3 == 0) {
      return 1;
    }
  }
  else if (lVar3 != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_1000b8ca4(uVar1,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

