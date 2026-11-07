// rea decompile_all
// name: FUN_100229500
// address: 0x100229500
// body: available
// range: 0x100229500-0x1002296d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100229500(byte param_1,byte param_2)

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
  
  lVar9 = -0x13ffffff9a929e92;
  lVar8 = 0x5f7463656a6f7270;
  lVar4 = -0x14ffffffff938d8b;
  lVar7 = 0x5f616d69786f7270;
  if (param_1 != 4) {
    lVar4 = -0x7ffffffeff75a730;
    lVar7 = -0x2fffffffffffffe7;
  }
  if (param_1 == 3) {
    lVar7 = -0x2fffffffffffffee;
    lVar4 = -0x7ffffffeff75a750;
  }
  lVar2 = -0x11ff8b9a8d9c9a8d;
  lVar1 = lVar8;
  if (param_1 != 1) {
    lVar1 = -0x2fffffffffffffef;
    lVar2 = -0x7ffffffeff75a770;
  }
  lVar3 = lVar9;
  lVar5 = lVar8;
  if (param_1 != 0) {
    lVar3 = lVar2;
    lVar5 = lVar1;
  }
  if (param_1 < 3) {
    lVar4 = lVar3;
    lVar7 = lVar5;
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        lVar9 = -0x11ff8b9a8d9c9a8d;
        if (lVar7 == 0x5f7463656a6f7270) goto LAB_100229678;
        goto LAB_1002296a0;
      }
      lVar8 = -0x2fffffffffffffef;
      lVar9 = -0x7ffffffeff75a770;
    }
    if (lVar7 == lVar8) goto LAB_100229678;
  }
  else if (param_2 == 3) {
    lVar9 = -0x7ffffffeff75a750;
    lVar8 = -0x2fffffffffffffee;
    if (lVar7 == -0x2fffffffffffffee) goto LAB_100229678;
  }
  else if (param_2 == 4) {
    lVar8 = 0x5f616d69786f7270;
    lVar9 = -0x14ffffffff938d8b;
    if (lVar7 == 0x5f616d69786f7270) {
LAB_100229678:
      if (lVar4 == lVar9) {
        uVar6 = 1;
        goto LAB_1002296b4;
      }
    }
  }
  else {
    lVar9 = -0x7ffffffeff75a730;
    lVar8 = -0x2fffffffffffffe7;
    if (lVar7 == -0x2fffffffffffffe7) goto LAB_100229678;
  }
LAB_1002296a0:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar7,lVar4,lVar8,lVar9,0);
  uVar6 = (uint)lVar7;
LAB_1002296b4:
  _swift_bridgeObjectRelease(lVar4);
  _swift_bridgeObjectRelease(lVar9);
  return uVar6 & 1;
}

