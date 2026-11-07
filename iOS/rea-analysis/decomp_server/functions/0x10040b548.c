// rea decompile_all
// name: FUN_10040b548
// address: 0x10040b548
// body: available
// range: 0x10040b548-0x10040b82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10040b548(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar5 = (long)param_2 - (long)param_1;
  lVar11 = lVar5 + 0xf;
  if (-1 < lVar5) {
    lVar11 = lVar5;
  }
  lVar11 = lVar11 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar12 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar12 = lVar10;
  }
  lVar12 = lVar12 >> 4;
  if (lVar11 < lVar12) {
    if ((param_4 != param_1) || (param_1 + lVar11 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar11 << 4);
    }
    puVar7 = param_4 + lVar11 * 2;
    puVar8 = param_1;
    if (0xf < lVar5) {
      do {
        if (param_3 <= param_2) break;
        uVar13 = *param_2;
        uVar1 = param_2[1];
        uVar4 = *param_4;
        uVar2 = param_4[1];
        __sSS10lowercasedSSyF();
        __sSS10lowercasedSSyF();
        if (uVar13 == uVar4 && uVar1 == uVar2) {
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
LAB_10040b66c:
          puVar3 = param_4 + 2;
          puVar9 = param_4;
          puVar6 = param_2;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar13,uVar1,uVar4,uVar2,1);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          if ((uVar13 & 1) == 0) goto LAB_10040b66c;
          puVar6 = param_2 + 2;
          puVar3 = param_4;
          puVar9 = param_2;
        }
        param_4 = puVar3;
        if (puVar8 != puVar9) {
          uVar13 = *puVar9;
          puVar8[1] = puVar9[1];
          *puVar8 = uVar13;
        }
        puVar8 = puVar8 + 2;
        param_2 = puVar6;
      } while (param_4 < puVar7);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar12 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar12 << 4);
    }
    puVar6 = param_4 + lVar12 * 2;
    puVar7 = puVar6;
    puVar8 = param_2;
    if (0xf < lVar10) {
      while (puVar7 = puVar6, puVar8 = param_2, param_1 < param_2) {
        puVar3 = param_2 + -2;
        puVar9 = param_3;
        while( true ) {
          param_3 = puVar9 + -2;
          puVar7 = puVar6 + -2;
          uVar13 = *puVar7;
          uVar1 = puVar6[-1];
          uVar4 = param_2[-2];
          uVar2 = param_2[-1];
          __sSS10lowercasedSSyF();
          __sSS10lowercasedSSyF();
          if (uVar13 == uVar4 && uVar1 == uVar2) {
            uVar13 = 0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar13,uVar1,uVar4,uVar2,1);
          }
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          if ((uVar13 & 1) != 0) break;
          if (puVar9 != puVar6) {
            uVar13 = *puVar7;
            puVar9[-1] = puVar6[-1];
            *param_3 = uVar13;
          }
          puVar6 = puVar7;
          puVar9 = param_3;
          if (puVar7 <= param_4) goto LAB_10040b7d0;
        }
        if (puVar9 != param_2) {
          uVar13 = *puVar3;
          puVar9[-1] = param_2[-1];
          *param_3 = uVar13;
        }
        puVar7 = puVar6;
        puVar8 = puVar3;
        param_2 = puVar3;
        if (puVar6 <= param_4) break;
      }
    }
  }
LAB_10040b7d0:
  uVar4 = (long)puVar7 - (long)param_4;
  uVar13 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar13 = uVar4;
  }
  if ((puVar8 != param_4) || ((ulong *)((long)param_4 + (uVar13 & 0xfffffffffffffff0)) <= puVar8)) {
    _memmove(puVar8,param_4,((long)uVar13 >> 4) << 4);
  }
  return 1;
}

