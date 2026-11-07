// rea decompile_all
// name: FUN_10036cdf4
// address: 0x10036cdf4
// body: available
// range: 0x10036cdf4-0x10036cfaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10036cdf4(byte param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar6;
  long lVar7;
  long lVar5;
  
  lVar6 = 0x6c7275;
  lVar3 = 0x35646d;
  if (param_1 != 4) {
    lVar3 = 0x766f436f65646976;
  }
  lVar7 = -0x1d00000000000000;
  if (param_1 != 4) {
    lVar7 = -0x15ffffffffff8d9b;
  }
  lVar5 = 0x657a6953636970;
  if (param_1 != 3) {
    lVar5 = lVar3;
  }
  lVar3 = -0x1900000000000000;
  if (param_1 != 3) {
    lVar3 = lVar7;
  }
  lVar7 = 0x657a697366;
  if (param_1 != 1) {
    lVar7 = 0x656d696d;
  }
  lVar1 = -0x1b00000000000000;
  if (param_1 != 1) {
    lVar1 = -0x1c00000000000000;
  }
  lVar2 = lVar6;
  if (param_1 != 0) {
    lVar2 = lVar7;
  }
  lVar7 = -0x1d00000000000000;
  if (param_1 != 0) {
    lVar7 = lVar1;
  }
  if (param_1 < 3) {
    lVar3 = lVar7;
    lVar5 = lVar2;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      lVar7 = -0x1d00000000000000;
      if (lVar5 == 0x6c7275) goto LAB_10036cf68;
    }
    else if (param_2 == 1) {
      lVar7 = -0x1b00000000000000;
      lVar6 = 0x657a697366;
      if (lVar5 == 0x657a697366) {
LAB_10036cf68:
        if (lVar3 == lVar7) {
          uVar4 = 1;
          goto LAB_10036cf8c;
        }
      }
    }
    else {
      lVar7 = -0x1c00000000000000;
      lVar6 = 0x656d696d;
      if (lVar5 == 0x656d696d) goto LAB_10036cf68;
    }
  }
  else if (param_2 == 3) {
    lVar7 = -0x1900000000000000;
    lVar6 = 0x657a6953636970;
    if (lVar5 == 0x657a6953636970) goto LAB_10036cf68;
  }
  else if (param_2 == 4) {
    lVar7 = -0x1d00000000000000;
    lVar6 = 0x35646d;
    if (lVar5 == 0x35646d) goto LAB_10036cf68;
  }
  else {
    lVar6 = 0x766f436f65646976;
    lVar7 = -0x15ffffffffff8d9b;
    if (lVar5 == 0x766f436f65646976) goto LAB_10036cf68;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar5,lVar3,lVar6,lVar7,0);
  uVar4 = (uint)lVar5;
LAB_10036cf8c:
  _swift_bridgeObjectRelease(lVar3);
  _swift_bridgeObjectRelease(lVar7);
  return uVar4 & 1;
}

