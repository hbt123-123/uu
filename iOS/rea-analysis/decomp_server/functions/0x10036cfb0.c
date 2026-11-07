// rea decompile_all
// name: FUN_10036cfb0
// address: 0x10036cfb0
// body: available
// range: 0x10036cfb0-0x10036d16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10036cfb0(byte param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar5 = 0x6765706a;
  uVar7 = 0x706d62;
  if (param_1 != 5) {
    uVar7 = 0x666967;
  }
  lVar2 = -0x1d00000000000000;
  uVar4 = 0x66666974;
  if (param_1 != 3) {
    uVar4 = 0x63696568;
  }
  if (param_1 < 5) {
    lVar2 = -0x1c00000000000000;
    uVar7 = uVar4;
  }
  uVar4 = 0x70626577;
  if (param_1 != 1) {
    uVar4 = 0x676e70;
  }
  lVar6 = -0x1c00000000000000;
  if (param_1 != 1) {
    lVar6 = -0x1d00000000000000;
  }
  uVar1 = uVar5;
  if (param_1 != 0) {
    uVar1 = uVar4;
  }
  lVar3 = -0x1c00000000000000;
  if (param_1 != 0) {
    lVar3 = lVar6;
  }
  if (param_1 < 3) {
    lVar2 = lVar3;
    uVar7 = uVar1;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      lVar6 = -0x1c00000000000000;
      if (uVar7 == 0x6765706a) goto LAB_10036d124;
    }
    else if (param_2 == 1) {
      lVar6 = -0x1c00000000000000;
      uVar5 = 0x70626577;
      if (uVar7 == 0x70626577) goto LAB_10036d124;
    }
    else {
      lVar6 = -0x1d00000000000000;
      uVar5 = 0x676e70;
      if (uVar7 == 0x676e70) goto LAB_10036d124;
    }
    goto LAB_10036d134;
  }
  if (param_2 < 5) {
    lVar6 = -0x1c00000000000000;
    if (param_2 == 3) {
      uVar5 = 0x66666974;
      if (uVar7 == 0x66666974) {
LAB_10036d124:
        if (lVar2 == lVar6) {
          uVar7 = 1;
          goto LAB_10036d148;
        }
      }
    }
    else {
      uVar5 = 0x63696568;
      if (uVar7 == 0x63696568) goto LAB_10036d124;
    }
  }
  else {
    lVar6 = -0x1d00000000000000;
    if (param_2 == 5) {
      uVar5 = 0x706d62;
      if (uVar7 == 0x706d62) goto LAB_10036d124;
    }
    else {
      uVar5 = 0x666967;
      if (uVar7 == 0x666967) goto LAB_10036d124;
    }
  }
LAB_10036d134:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar7,lVar2,uVar5,lVar6,0);
LAB_10036d148:
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar6);
  return uVar7 & 1;
}

