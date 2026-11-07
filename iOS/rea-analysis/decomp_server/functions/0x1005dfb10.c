// rea decompile_all
// name: FUN_1005dfb10
// address: 0x1005dfb10
// body: available
// range: 0x1005dfb10-0x1005dfd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005dfb10(byte param_1,byte param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar6;
  
  puVar7 = (undefined1 *)0x73736f4c68746170;
  lVar8 = -0x7ffffffeff742360;
  puVar4 = &DAT_d000000000000010;
  if (param_1 != 4) {
    lVar8 = -0x108b8a909a9296ac;
    puVar4 = (undefined1 *)0x797469746e656469;
  }
  puVar6 = (undefined1 *)0x73736f4c656d6974;
  if (param_1 != 3) {
    puVar6 = puVar4;
  }
  lVar3 = -0x1800000000000000;
  if (param_1 != 3) {
    lVar3 = lVar8;
  }
  lVar8 = -0x14ffffffff8c8c91;
  puVar4 = (undefined1 *)0x4c6e6f6973726576;
  if (param_1 != 1) {
    lVar8 = -0x16ffffffffffff8d;
    puVar4 = (undefined1 *)0x736f4c646c697562;
  }
  puVar1 = puVar7;
  if (param_1 != 0) {
    puVar1 = puVar4;
  }
  lVar2 = -0x1800000000000000;
  if (param_1 != 0) {
    lVar2 = lVar8;
  }
  if (param_1 < 3) {
    lVar3 = lVar2;
    puVar6 = puVar1;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      lVar8 = -0x1800000000000000;
      if (puVar6 == (undefined1 *)0x73736f4c68746170) goto LAB_1005dfcd8;
    }
    else if (param_2 == 1) {
      puVar7 = (undefined1 *)0x4c6e6f6973726576;
      lVar8 = -0x14ffffffff8c8c91;
      if (puVar6 == (undefined1 *)0x4c6e6f6973726576) {
LAB_1005dfcd8:
        if (lVar3 == lVar8) {
          uVar5 = 1;
          goto LAB_1005dfcfc;
        }
      }
    }
    else {
      puVar7 = (undefined1 *)0x736f4c646c697562;
      lVar8 = -0x16ffffffffffff8d;
      if (puVar6 == (undefined1 *)0x736f4c646c697562) goto LAB_1005dfcd8;
    }
  }
  else if (param_2 == 3) {
    lVar8 = -0x1800000000000000;
    puVar7 = (undefined1 *)0x73736f4c656d6974;
    if (puVar6 == (undefined1 *)0x73736f4c656d6974) goto LAB_1005dfcd8;
  }
  else if (param_2 == 4) {
    puVar7 = &DAT_d000000000000010;
    lVar8 = -0x7ffffffeff742360;
    if (puVar6 == &DAT_d000000000000010) goto LAB_1005dfcd8;
  }
  else {
    puVar7 = (undefined1 *)0x797469746e656469;
    lVar8 = -0x108b8a909a9296ac;
    if (puVar6 == (undefined1 *)0x797469746e656469) goto LAB_1005dfcd8;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar6,lVar3,puVar7,lVar8,0);
  uVar5 = (uint)puVar6;
LAB_1005dfcfc:
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease(lVar8);
  return uVar5 & 1;
}

