// rea decompile_all
// name: FUN_10000a5f0
// address: 0x10000a5f0
// body: available
// range: 0x10000a5f0-0x10000a7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000a5f0(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar6;
  
  puVar7 = (undefined1 *)0x736572705f64626b;
  lVar9 = -0x16ffffffffffff8d;
  lVar8 = -0x7ffffffeff789e20;
  puVar3 = &DAT_d000000000000018;
  if (param_1 != 4) {
    lVar8 = -0x15ffffffffff8b8b;
    puVar3 = (undefined1 *)0x706e695f74786574;
  }
  lVar2 = -0x7ffffffeff789e40;
  puVar6 = (undefined1 *)0xd000000000000016;
  if (param_1 != 3) {
    lVar2 = lVar8;
    puVar6 = puVar3;
  }
  lVar8 = -0x14ffffffff9a8c9f;
  puVar3 = (undefined1 *)0x656c65725f64626b;
  if (param_1 != 1) {
    lVar8 = -0x16ffffffffffff95;
    puVar3 = (undefined1 *)0x63696c635f64626b;
  }
  lVar1 = lVar9;
  puVar4 = puVar7;
  if (param_1 != 0) {
    lVar1 = lVar8;
    puVar4 = puVar3;
  }
  if (param_1 < 3) {
    lVar2 = lVar1;
    puVar6 = puVar4;
  }
  if (param_2 < 3) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        puVar7 = (undefined1 *)0x656c65725f64626b;
        lVar9 = -0x14ffffffff9a8c9f;
        if (puVar6 == (undefined1 *)0x656c65725f64626b) goto LAB_10000a770;
        goto LAB_10000a7a0;
      }
      puVar7 = (undefined1 *)0x63696c635f64626b;
      lVar9 = -0x16ffffffffffff95;
    }
joined_r0x00010000a730:
    if (puVar6 == puVar7) {
LAB_10000a770:
      if (lVar2 == lVar9) {
        uVar5 = 1;
        goto LAB_10000a7b4;
      }
    }
  }
  else if (param_2 == 3) {
    puVar7 = (undefined1 *)0xd000000000000016;
    lVar9 = -0x7ffffffeff789e40;
    if (puVar6 == (undefined1 *)0xd000000000000016) goto LAB_10000a770;
  }
  else {
    if (param_2 == 4) {
      lVar9 = -0x7ffffffeff789e20;
      puVar7 = &DAT_d000000000000018;
      goto joined_r0x00010000a730;
    }
    puVar7 = (undefined1 *)0x706e695f74786574;
    lVar9 = -0x15ffffffffff8b8b;
    if (puVar6 == (undefined1 *)0x706e695f74786574) goto LAB_10000a770;
  }
LAB_10000a7a0:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar6,lVar2,puVar7,lVar9,0);
  uVar5 = (uint)puVar6;
LAB_10000a7b4:
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar9);
  return uVar5 & 1;
}

