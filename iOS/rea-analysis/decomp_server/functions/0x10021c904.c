// rea decompile_all
// name: FUN_10021c904
// address: 0x10021c904
// body: available
// range: 0x10021c904-0x10021cb93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10021c904(uint param_1)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0x41;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x41,0xe100000000000000,0xa0d,0xe200000000000000,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x41;
    uVar2 = 0x41;
    __sSJ15_isSingleScalarSbvg(0x41,0xe100000000000000);
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      FUN_10021c614(0x41,0xe100000000000000);
      if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb78);
        (*pcVar1)();
      }
      if ((uVar2 & 0xffffff80) == 0) {
        uVar2 = 0x41;
        FUN_10021c614(0x41,0xe100000000000000);
        if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb80);
          (*pcVar1)();
        }
        if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb60);
          (*pcVar1)();
        }
        uVar3 = (uint)uVar2 & 0xff;
      }
      else {
        uVar3 = 0x41;
      }
    }
  }
  else {
    uVar3 = 10;
  }
  uVar2 = 0;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x5a,0xe100000000000000,0xa0d,0xe200000000000000,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0x5a;
    uVar2 = 0;
    __sSJ15_isSingleScalarSbvg(0x5a,0xe100000000000000);
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      FUN_10021c614(0x5a,0xe100000000000000);
      if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb7c);
        (*pcVar1)();
      }
      if ((uVar2 & 0xffffff80) == 0) {
        uVar2 = 0x5a;
        FUN_10021c614(0x5a,0xe100000000000000);
        if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb88);
          (*pcVar1)();
        }
        if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb6c);
          (*pcVar1)();
        }
        uVar4 = (uint)uVar2 & 0xff;
      }
      else {
        uVar4 = 0x5a;
      }
    }
  }
  else {
    uVar4 = 10;
  }
  uVar2 = 0x61;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x61,0xe100000000000000,0xa0d,0xe200000000000000,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0x61;
    uVar2 = 0x61;
    __sSJ15_isSingleScalarSbvg(0x61,0xe100000000000000);
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      FUN_10021c614(0x61,0xe100000000000000);
      if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb84);
        (*pcVar1)();
      }
      if ((uVar2 & 0xffffff80) == 0) {
        uVar2 = 0x61;
        FUN_10021c614(0x61,0xe100000000000000);
        if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb90);
          (*pcVar1)();
        }
        if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb70);
          (*pcVar1)();
        }
        uVar5 = (uint)uVar2 & 0xff;
      }
      else {
        uVar5 = 0x61;
      }
    }
  }
  else {
    uVar5 = 10;
  }
  param_1 = param_1 & 0xff;
  uVar2 = 0;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x7a,0xe100000000000000,0xa0d,0xe200000000000000,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    __sSJ15_isSingleScalarSbvg(0x7a,0xe100000000000000);
    if ((uVar2 & 1) != 0) {
      uVar2 = 0;
      FUN_10021c614(0x7a,0xe100000000000000);
      if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb8c);
        (*pcVar1)();
      }
      if ((uVar2 & 0xffffff80) == 0) {
        uVar2 = 0x7a;
        FUN_10021c614(0x7a,0xe100000000000000);
        if ((uVar2 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb94);
          (*pcVar1)();
        }
        if ((uVar2 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10021cb74);
          (*pcVar1)();
        }
        if ((uVar3 <= param_1) && (param_1 <= uVar4)) {
          return true;
        }
        if (param_1 < uVar5) {
          return false;
        }
        uVar3 = (uint)uVar2 & 0xff;
        goto LAB_10021caf4;
      }
    }
    if ((uVar3 <= param_1) && (param_1 <= uVar4)) {
      return true;
    }
    if (uVar5 <= param_1) {
      uVar3 = 0x7a;
LAB_10021caf4:
      return param_1 <= uVar3;
    }
  }
  else {
    if ((uVar3 <= param_1) && (param_1 <= uVar4)) {
      return true;
    }
    if (uVar5 <= param_1) {
      uVar3 = 10;
      goto LAB_10021caf4;
    }
  }
  return false;
}

