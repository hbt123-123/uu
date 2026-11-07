// rea decompile_all
// name: FUN_10051c170
// address: 0x10051c170
// body: available
// range: 0x10051c170-0x10051c4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051c170(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  FUN_10051bbf0();
  if ((param_1 & 1) == 0) {
LAB_10051c494:
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    _swift_bridgeObjectRetain();
    __sSS8IteratorV4nextSJSgyF();
    while (uVar6 != 0) {
      if ((uVar3 == 0x5f) && (uVar6 == 0xe100000000000000)) {
LAB_10051c47c:
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(0xe000000000000000);
        goto LAB_10051c494;
      }
      uVar4 = 0x5f;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5f,0xe100000000000000,uVar3,uVar6,0);
      if ((uVar4 & 1) != 0) goto LAB_10051c47c;
      uVar4 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051c4d0);
        (*pcVar2)();
      }
      if ((uVar3 == 0x41) && (uVar6 == 0xe100000000000000)) {
LAB_10051c264:
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5a,0xe100000000000000,uVar3,uVar6,1);
        if ((uVar4 & 1) == 0) goto LAB_10051c3e0;
LAB_10051c2a0:
        uVar4 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7a,0xe100000000000000,0x61,0xe100000000000000,1);
        if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10051c4d4);
          (*pcVar2)();
        }
        if ((uVar3 == 0x61) && (uVar6 == 0xe100000000000000)) {
LAB_10051c2cc:
          uVar4 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x7a,0xe100000000000000,uVar3,uVar6,1);
          if ((uVar4 & 1) != 0) {
LAB_10051c308:
            uVar4 = 0x39;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x39,0xe100000000000000,0x30,0xe100000000000000,1);
            if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10051c4d8);
              (*pcVar2)();
            }
            if ((uVar3 == 0x30) && (uVar6 == 0xe100000000000000)) {
LAB_10051c334:
              uVar4 = 0x39;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x39,0xe100000000000000,uVar3,uVar6,1);
              if ((uVar6 != 0xe100000000000000 || uVar3 != 0x2e) && ((uVar4 & 1) != 0)) {
LAB_10051c35c:
                uVar4 = 0;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x2e,0xe100000000000000,uVar3,uVar6,0);
                if (((uVar4 & 1) == 0) && (uVar3 != 0x28 || uVar6 != 0xe100000000000000)) {
                  uVar4 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x28,0xe100000000000000,uVar3,uVar6,0);
                  if (((uVar4 & 1) == 0) && (uVar3 != 0x29 || uVar6 != 0xe100000000000000)) {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x29,0xe100000000000000,uVar3,uVar6,0);
                  }
                }
              }
            }
            else {
              uVar4 = uVar3;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar3,uVar6,0x30,0xe100000000000000,1);
              if ((uVar4 & 1) == 0) {
                if ((uVar3 != 0x39) || (uVar6 != 0xe100000000000000)) goto LAB_10051c334;
              }
              else if ((uVar3 != 0x2e) || (uVar6 != 0xe100000000000000)) goto LAB_10051c35c;
            }
          }
        }
        else {
          uVar4 = uVar3;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar3,uVar6,0x61,0xe100000000000000,1);
          if ((uVar4 & 1) != 0) goto LAB_10051c308;
          if ((uVar3 != 0x7a) || (uVar6 != 0xe100000000000000)) goto LAB_10051c2cc;
        }
        uVar4 = uVar6;
        __sSS6appendyySJF(uVar3);
      }
      else {
        uVar4 = uVar3;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,uVar6,0x41,0xe100000000000000,1);
        if ((uVar4 & 1) != 0) goto LAB_10051c2a0;
        if ((uVar3 != 0x5a) || (uVar6 != 0xe100000000000000)) goto LAB_10051c264;
LAB_10051c3e0:
        __sSS6appendyySJF(0x5f,0xe100000000000000);
        uVar5 = uVar6;
        __sSS10lowercasedSSyF(uVar3);
        _swift_bridgeObjectRelease(uVar6);
        uVar4 = uVar5;
        __sSS6appendyySSF(uVar3);
        uVar6 = uVar5;
      }
      _swift_bridgeObjectRelease();
      __sSS8IteratorV4nextSJSgyF();
      uVar3 = uVar6;
      uVar6 = uVar4;
    }
    uVar6 = 0xe000000000000000;
    _swift_bridgeObjectRelease(param_2);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  return auVar1 << 0x40;
}

