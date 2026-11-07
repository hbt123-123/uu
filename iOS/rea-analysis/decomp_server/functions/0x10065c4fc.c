// rea decompile_all
// name: FUN_10065c4fc
// address: 0x10065c4fc
// body: available
// range: 0x10065c4fc-0x10065c6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065c4fc(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = param_2;
  uVar2 = param_3;
  FUN_10021892c();
  if (uVar2 != 0) {
    if ((uVar1 == 0x2d) && (uVar2 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_5 = 0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar1 & 1) == 0) goto LAB_10065c5bc;
    }
    uVar3 = 1;
    uVar1 = 1;
    param_4 = param_3;
    FUN_1001dff9c();
    _swift_bridgeObjectRelease(param_3);
    FUN_10065b790();
    goto joined_r0x00010065c680;
  }
LAB_10065c5bc:
  uVar1 = param_2;
  uVar2 = param_3;
  FUN_10021892c();
  if (uVar2 == 0) {
LAB_10065c66c:
    FUN_10065b1a0();
    uVar1 = param_2;
    param_2 = param_3;
  }
  else {
    if ((uVar1 == 0x2b) && (uVar2 == 0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_5 = 0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar1 & 1) == 0) goto LAB_10065c66c;
    }
    uVar1 = 1;
    param_4 = param_3;
    FUN_1001dff9c();
    _swift_bridgeObjectRelease(param_3);
    FUN_10065b790();
  }
  uVar3 = 0;
joined_r0x00010065c680:
  if (param_5 == 0) {
    uVar1 = 0;
    param_2 = 0;
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    if ((param_4 & 0xff) == 0) {
      uVar4 = 0;
      if (param_2 != 0) {
        uVar4 = uVar3;
      }
      if (uVar1 != 0) {
        uVar4 = uVar3;
      }
    }
    else {
      uVar4 = uVar3;
      if ((((uint)param_4 & 0xff) != 1) && (uVar4 = 0, *(long *)(param_5 + 0x10) != 0)) {
        uVar4 = uVar3;
      }
    }
    param_4 = param_4 & 0xff;
  }
  *param_1 = uVar1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = uVar4;
  return;
}

