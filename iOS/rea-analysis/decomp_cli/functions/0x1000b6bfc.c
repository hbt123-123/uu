// rea decompile_all
// name: FUN_1000b6bfc
// address: 0x1000b6bfc
// body: available
// range: 0x1000b6bfc-0x1000b6e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000b6bfc(byte param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar7;
  ulong uVar8;
  long lVar6;
  
  lVar7 = 0x746c7561666564;
  uVar3 = 0xee00726f74616e69;
  lVar6 = 0x6d72655474736f70;
  if (param_1 != 5) {
    uVar3 = 0xef64657a696e676f;
    lVar6 = 0x6365726e556c6c61;
  }
  uVar8 = 0xee006e6f6974704f;
  lVar4 = 0x7478654e6f547075;
  if (param_1 != 3) {
    uVar8 = 0x80000001000cb080;
    lVar4 = -0x2fffffffffffffef;
  }
  if (param_1 < 5) {
    uVar3 = uVar8;
    lVar6 = lVar4;
  }
  uVar8 = 0x80000001000cb050;
  lVar4 = -0x2ffffffffffffff0;
  if (param_1 != 1) {
    uVar8 = 0xed00006c616e6f69;
    lVar4 = 0x7469646e6f636e75;
  }
  lVar1 = lVar7;
  if (param_1 != 0) {
    lVar1 = lVar4;
  }
  uVar2 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar2 = uVar8;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    lVar6 = lVar1;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar8 = 0xe700000000000000;
      if (lVar6 == 0x746c7561666564) goto LAB_1000b6e34;
    }
    else if (param_2 == 1) {
      lVar7 = -0x2ffffffffffffff0;
      uVar8 = 0x80000001000cb050;
      if (lVar6 == -0x2ffffffffffffff0) goto LAB_1000b6e34;
    }
    else {
      lVar7 = 0x7469646e6f636e75;
      uVar8 = 0xed00006c616e6f69;
      if (lVar6 == 0x7469646e6f636e75) goto LAB_1000b6e34;
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      lVar7 = 0x7478654e6f547075;
      uVar8 = 0x6e6f6974704f;
LAB_1000b6da4:
      uVar8 = uVar8 | 0xee00000000000000;
      if (lVar6 == lVar7) {
LAB_1000b6e34:
        if (uVar3 == uVar8) {
          uVar5 = 1;
          goto LAB_1000b6e58;
        }
      }
    }
    else {
      uVar8 = 0x80000001000cb080;
      lVar7 = -0x2fffffffffffffef;
      if (lVar6 == -0x2fffffffffffffef) goto LAB_1000b6e34;
    }
  }
  else {
    if (param_2 == 5) {
      lVar7 = 0x6d72655474736f70;
      uVar8 = 0x726f74616e69;
      goto LAB_1000b6da4;
    }
    lVar7 = 0x6365726e556c6c61;
    uVar8 = 0xef64657a696e676f;
    if (lVar6 == 0x6365726e556c6c61) goto LAB_1000b6e34;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar6,uVar3,lVar7,uVar8,0);
  uVar5 = (uint)lVar6;
LAB_1000b6e58:
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar8);
  return uVar5 & 1;
}

