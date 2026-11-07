// rea decompile_all
// name: FUN_10036d16c
// address: 0x10036d16c
// body: available
// range: 0x10036d16c-0x10036d3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10036d16c(byte param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = 0x534e4f4954504f;
  if (param_1 < 4) {
    uVar3 = 0x44414548;
    if (param_1 != 2) {
      uVar3 = 0x54534f50;
    }
    uVar1 = uVar4;
    if (param_1 != 0) {
      uVar1 = 0x544547;
    }
    lVar6 = -0x1900000000000000;
    if (param_1 != 0) {
      lVar6 = -0x1d00000000000000;
    }
    uVar2 = (ulong)uVar3;
    lVar5 = -0x1c00000000000000;
    if (param_1 < 2) {
      uVar2 = uVar1;
      lVar5 = lVar6;
    }
  }
  else {
    uVar1 = 0x4543415254;
    if (param_1 != 7) {
      uVar1 = 0x5443454e4e4f43;
    }
    lVar6 = -0x1b00000000000000;
    if (param_1 != 7) {
      lVar6 = -0x1900000000000000;
    }
    uVar2 = 0x4554454c4544;
    if (param_1 != 6) {
      uVar2 = uVar1;
    }
    lVar5 = -0x1a00000000000000;
    if (param_1 != 6) {
      lVar5 = lVar6;
    }
    uVar1 = 0x545550;
    if (param_1 != 4) {
      uVar1 = 0x4843544150;
    }
    lVar6 = -0x1d00000000000000;
    if (param_1 != 4) {
      lVar6 = -0x1b00000000000000;
    }
    if (param_1 < 6) {
      uVar2 = uVar1;
      lVar5 = lVar6;
    }
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 != 0) {
        uVar3 = 0x4547;
        goto LAB_10036d31c;
      }
      lVar6 = -0x1900000000000000;
      if (uVar2 == 0x534e4f4954504f) goto LAB_10036d378;
    }
    else {
      lVar6 = -0x1c00000000000000;
      if (param_2 == 2) {
        uVar4 = 0x44414548;
        if (uVar2 == 0x44414548) {
LAB_10036d378:
          if (lVar5 == lVar6) {
            uVar3 = 1;
            goto LAB_10036d39c;
          }
        }
      }
      else {
        uVar4 = 0x54534f50;
        if (uVar2 == 0x54534f50) goto LAB_10036d378;
      }
    }
  }
  else if (param_2 < 6) {
    if (param_2 == 4) {
      uVar3 = 0x5550;
LAB_10036d31c:
      lVar6 = -0x1d00000000000000;
      uVar4 = (ulong)(uVar3 | 0x540000);
      if (uVar2 == uVar4) goto LAB_10036d378;
    }
    else {
      lVar6 = -0x1b00000000000000;
      uVar4 = 0x4843544150;
      if (uVar2 == 0x4843544150) goto LAB_10036d378;
    }
  }
  else if (param_2 == 6) {
    lVar6 = -0x1a00000000000000;
    uVar4 = 0x4554454c4544;
    if (uVar2 == 0x4554454c4544) goto LAB_10036d378;
  }
  else if (param_2 == 7) {
    lVar6 = -0x1b00000000000000;
    uVar4 = 0x4543415254;
    if (uVar2 == 0x4543415254) goto LAB_10036d378;
  }
  else {
    lVar6 = -0x1900000000000000;
    uVar4 = 0x5443454e4e4f43;
    if (uVar2 == 0x5443454e4e4f43) goto LAB_10036d378;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar2,lVar5,uVar4,lVar6,0);
  uVar3 = (uint)uVar2;
LAB_10036d39c:
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lVar6);
  return uVar3 & 1;
}

