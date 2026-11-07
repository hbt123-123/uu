// rea decompile_all
// name: FUN_10040e334
// address: 0x10040e334
// body: available
// range: 0x10040e334-0x10040e51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040e334(byte param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar6;
  long lVar7;
  ulong uVar5;
  
  uVar6 = 0x6e656b6f74;
  uVar1 = 0x64695f7473657567;
  if (param_1 != 4) {
    uVar1 = 0x6f745f7473657567;
  }
  lVar7 = -0x1800000000000000;
  if (param_1 != 4) {
    lVar7 = -0x14ffffffff919a95;
  }
  uVar5 = 0x64695f72657375;
  if (param_1 != 3) {
    uVar5 = uVar1;
  }
  lVar3 = -0x1900000000000000;
  if (param_1 != 3) {
    lVar3 = lVar7;
  }
  uVar1 = 0x695f656369766564;
  if (param_1 != 1) {
    uVar1 = 0x695f746e65696c63;
  }
  uVar2 = uVar6;
  if (param_1 != 0) {
    uVar2 = uVar1;
  }
  lVar7 = -0x1b00000000000000;
  if (param_1 != 0) {
    lVar7 = -0x16ffffffffffff9c;
  }
  if (param_1 < 3) {
    lVar3 = lVar7;
    uVar5 = uVar2;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      lVar7 = -0x1b00000000000000;
      if (uVar5 == 0x6e656b6f74) goto LAB_10040e4d8;
    }
    else {
      if (param_2 == 1) {
        uVar6 = 0x656369766564;
      }
      else {
        uVar6 = 0x746e65696c63;
      }
      uVar6 = uVar6 | 0x695f000000000000;
      lVar7 = -0x16ffffffffffff9c;
      if (uVar5 == uVar6) {
LAB_10040e4d8:
        if (lVar3 == lVar7) {
          uVar4 = 1;
          goto LAB_10040e4fc;
        }
      }
    }
  }
  else if (param_2 == 3) {
    lVar7 = -0x1900000000000000;
    uVar6 = 0x64695f72657375;
    if (uVar5 == 0x64695f72657375) goto LAB_10040e4d8;
  }
  else if (param_2 == 4) {
    lVar7 = -0x1800000000000000;
    uVar6 = 0x64695f7473657567;
    if (uVar5 == 0x64695f7473657567) goto LAB_10040e4d8;
  }
  else {
    uVar6 = 0x6f745f7473657567;
    lVar7 = -0x14ffffffff919a95;
    if (uVar5 == 0x6f745f7473657567) goto LAB_10040e4d8;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar5,lVar3,uVar6,lVar7,0);
  uVar4 = (uint)uVar5;
LAB_10040e4fc:
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease(lVar7);
  return uVar4 & 1;
}

