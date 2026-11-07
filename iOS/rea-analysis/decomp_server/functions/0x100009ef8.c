// rea decompile_all
// name: FUN_100009ef8
// address: 0x100009ef8
// body: available
// range: 0x100009ef8-0x10000a13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100009ef8(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar5;
  
  lVar9 = -0x14ffffffff9c9a9c;
  lVar6 = 0x6f635f6f65646976;
  lVar7 = -0x15ffffffffff8b98;
  lVar5 = 0x676965685f78616d;
  if (param_1 != 5) {
    lVar7 = -0x1a00000000000000;
    lVar5 = 0x746c75736572;
  }
  lVar8 = 0x747065645f746962;
  if (param_1 != 3) {
    lVar8 = 0x746469775f78616d;
  }
  if (param_1 < 5) {
    lVar7 = -0x16ffffffffffff98;
    lVar5 = lVar8;
  }
  lVar8 = 0x735f616d6f726863;
  lVar1 = -0x10989196938f929f;
  if (param_1 != 1) {
    lVar8 = -0x2fffffffffffffef;
    lVar1 = -0x7ffffffeff789d90;
  }
  lVar2 = lVar9;
  lVar3 = lVar6;
  if (param_1 != 0) {
    lVar2 = lVar1;
    lVar3 = lVar8;
  }
  if (param_1 < 3) {
    lVar7 = lVar2;
    lVar5 = lVar3;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
LAB_10000a0d4:
      if (lVar5 == lVar6) goto LAB_10000a0dc;
    }
    else if (param_2 == 1) {
      lVar6 = 0x735f616d6f726863;
      lVar9 = -0x10989196938f929f;
      if (lVar5 == 0x735f616d6f726863) goto LAB_10000a0dc;
    }
    else {
      lVar6 = -0x2fffffffffffffef;
      lVar9 = -0x7ffffffeff789d90;
      if (lVar5 == -0x2fffffffffffffef) goto LAB_10000a0dc;
    }
  }
  else if (param_2 < 5) {
    if (param_2 != 3) {
      lVar6 = 0x746469775f78616d;
      lVar9 = -0x16ffffffffffff98;
      goto LAB_10000a0d4;
    }
    lVar6 = 0x747065645f746962;
    lVar9 = -0x16ffffffffffff98;
    if (lVar5 == 0x747065645f746962) goto LAB_10000a0dc;
  }
  else if (param_2 == 5) {
    lVar6 = 0x676965685f78616d;
    lVar9 = -0x15ffffffffff8b98;
    if (lVar5 == 0x676965685f78616d) {
LAB_10000a0dc:
      if (lVar7 == lVar9) {
        uVar4 = 1;
        goto LAB_10000a118;
      }
    }
  }
  else {
    lVar9 = -0x1a00000000000000;
    lVar6 = 0x746c75736572;
    if (lVar5 == 0x746c75736572) goto LAB_10000a0dc;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar5,lVar7,lVar6,lVar9,0);
  uVar4 = (uint)lVar5;
LAB_10000a118:
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar9);
  return uVar4 & 1;
}

