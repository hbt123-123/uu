// rea decompile_all
// name: FUN_10040db40
// address: 0x10040db40
// body: available
// range: 0x10040db40-0x10040dd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040db40(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar8;
  long lVar9;
  long lVar7;
  
  lVar9 = -0x12ffff9a8f868ba1;
  lVar8 = 0x64657463656c6573;
  lVar1 = -0x13ffffff9a989e93;
  lVar4 = 0x695f6d6f74737563;
  if (param_1 != 4) {
    lVar1 = -0x12ffff9896999191;
    lVar4 = 0x635f746573657270;
  }
  lVar3 = -0x7ffffffeff7505b0;
  lVar7 = -0x2fffffffffffffee;
  if (param_1 != 3) {
    lVar3 = lVar1;
    lVar7 = lVar4;
  }
  lVar1 = -0x7ffffffeff7505e0;
  lVar4 = -0x2fffffffffffffee;
  if (param_1 != 1) {
    lVar1 = -0x11ff879a9b9196a1;
    lVar4 = lVar8;
  }
  lVar2 = lVar9;
  lVar5 = lVar8;
  if (param_1 != 0) {
    lVar2 = lVar1;
    lVar5 = lVar4;
  }
  if (param_1 < 3) {
    lVar3 = lVar2;
    lVar7 = lVar5;
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        lVar9 = -0x7ffffffeff7505e0;
        goto joined_r0x00010040dca4;
      }
      lVar9 = -0x11ff879a9b9196a1;
    }
    if (lVar7 == 0x64657463656c6573) goto LAB_10040dcc4;
  }
  else if (param_2 == 3) {
    lVar9 = -0x7ffffffeff7505b0;
joined_r0x00010040dca4:
    lVar8 = -0x2fffffffffffffee;
    if (lVar7 == -0x2fffffffffffffee) goto LAB_10040dcc4;
  }
  else if (param_2 == 4) {
    lVar8 = 0x695f6d6f74737563;
    lVar9 = -0x13ffffff9a989e93;
    if (lVar7 == 0x695f6d6f74737563) {
LAB_10040dcc4:
      if (lVar3 == lVar9) {
        uVar6 = 1;
        goto LAB_10040dd10;
      }
    }
  }
  else {
    lVar8 = 0x635f746573657270;
    lVar9 = -0x12ffff9896999191;
    if (lVar7 == 0x635f746573657270) goto LAB_10040dcc4;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar7,lVar3,lVar8,lVar9,0);
  uVar6 = (uint)lVar7;
LAB_10040dd10:
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease(lVar9);
  return uVar6 & 1;
}

