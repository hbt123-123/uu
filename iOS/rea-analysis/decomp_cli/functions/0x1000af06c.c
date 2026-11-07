// rea decompile_all
// name: FUN_1000af06c
// address: 0x1000af06c
// body: available
// range: 0x1000af06c-0x1000af74b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000af4ac to 0x1000c1dfc _$sSS8distance4from2toSiSS5IndexV_AEtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000af06c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong local_88;
  undefined auStack_80 [32];
  
  uVar19 = param_3;
  __sSS5countSivg(param_3,param_4);
  uVar20 = param_1;
  __sSS5countSivg(param_1,param_2);
  if (((long)uVar19 < 1) || ((long)uVar20 < 1)) {
    if ((long)uVar20 <= (long)uVar19) {
      uVar20 = uVar19;
    }
  }
  else {
    uVar20 = 0;
    uVar19 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar19 = param_2 >> 0x38 & 0xf;
    }
    uVar23 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar23 = param_4 >> 0x38 & 0xf;
    }
    uVar15 = uVar23 << 2;
    uVar22 = 0xf;
    uVar21 = 0xf;
    if ((uVar23 != 0) && (uVar19 != 0)) {
      uVar20 = 0;
      uVar22 = 0xf;
      uVar21 = 0xf;
      do {
        uVar12 = uVar21;
        uVar4 = param_3;
        __sSSySJSS5IndexVcig(uVar21,param_3,param_4);
        uVar16 = uVar22;
        uVar5 = param_1;
        __sSSySJSS5IndexVcig(uVar22,param_1,param_2);
        if ((uVar12 == uVar16) && (uVar4 == uVar5)) {
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar5);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar12,uVar4,uVar16,uVar5,0);
          _swift_bridgeObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar5);
          if ((uVar12 & 1) == 0) break;
        }
        __sSS5index5afterSS5IndexVAD_tF(uVar21,param_3,param_4);
        __sSS5index5afterSS5IndexVAD_tF(uVar22,param_1,param_2);
        uVar20 = uVar21 >> 0xe;
        if ((uVar15 <= uVar20) || (uVar19 << 2 <= uVar22 >> 0xe)) break;
      } while( true );
    }
    uVar12 = 0xb;
    if (((uint)(param_4 >> 0x3c) & (uint)((param_3 & 0x800000000000000) == 0)) == 0) {
      uVar12 = 7;
    }
    uVar12 = uVar12 | uVar23 << 0x10;
    uVar23 = 0xb;
    if (((uint)(param_2 >> 0x3c) & (uint)((param_1 & 0x800000000000000) == 0)) == 0) {
      uVar23 = 7;
    }
    uVar23 = uVar23 | uVar19 << 0x10;
    uVar16 = uVar22 >> 0xe;
    if (uVar20 < uVar15) {
      do {
        if (uVar23 >> 0xe <= uVar16) {
          bVar3 = true;
          goto LAB_1000af328;
        }
        uVar4 = uVar12;
        __sSS5index6beforeSS5IndexVAD_tF(uVar12,param_3,param_4);
        uVar5 = uVar23;
        __sSS5index6beforeSS5IndexVAD_tF(uVar23,param_1,param_2);
        uVar6 = uVar4;
        uVar13 = param_3;
        __sSSySJSS5IndexVcig(uVar4,param_3,param_4);
        uVar7 = uVar5;
        uVar14 = param_1;
        __sSSySJSS5IndexVcig(uVar5,param_1,param_2);
        if ((uVar6 == uVar7) && (uVar13 == uVar14)) {
          _swift_bridgeObjectRelease(uVar13);
          _swift_bridgeObjectRelease(uVar14);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,uVar13,uVar7,uVar14,0);
          _swift_bridgeObjectRelease(uVar13);
          _swift_bridgeObjectRelease(uVar14);
          if ((uVar6 & 1) == 0) {
            bVar3 = true;
            goto LAB_1000af328;
          }
        }
        uVar12 = uVar4;
        uVar23 = uVar5;
      } while (uVar20 < uVar4 >> 0xe);
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
LAB_1000af328:
    if ((uVar20 != uVar15) || (uVar16 != uVar19 << 2)) {
      uVar19 = uVar22;
      uVar20 = uVar23;
      uVar15 = param_1;
      uVar4 = param_2;
      if ((!bVar3) ||
         (uVar19 = uVar21, uVar20 = uVar12, uVar15 = param_3, uVar4 = param_4,
         uVar23 >> 0xe <= uVar16)) {
        __sSS8distance4from2toSiSS5IndexV_AEtF(uVar19,uVar20,uVar15,uVar4);
        return uVar19;
      }
      __sSSySsSnySS5IndexVGcig();
      __sSSySsSnySS5IndexVGcig();
      uVar19 = uVar21;
      __sSs8distance4from2toSiSS5IndexV_AEtF(uVar21,uVar12,uVar21,uVar12,param_3,param_4);
      uVar20 = uVar22;
      __sSs8distance4from2toSiSS5IndexV_AEtF(uVar22,uVar23,uVar22,uVar23,param_1,param_2);
      puVar11 = (undefined *)(uVar20 + 1);
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af738);
        (*pcVar2)();
      }
      if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af73c);
        (*pcVar2)();
      }
      if (puVar11 == (undefined *)0x0) {
        puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
        puVar9 = PTR___swiftEmptyArrayStorage_1000f0740;
        if ((long)uVar20 < 0) goto LAB_1000af73c;
      }
      else {
        puVar8 = puVar11;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (puVar11,PTR___sSiN_1000f03e8);
        *(undefined **)(puVar8 + 0x10) = puVar11;
        _bzero(puVar8 + 0x20,uVar20 * 8 + 8);
        if ((long)uVar20 < 0) {
LAB_1000af73c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af740);
          (*pcVar2)();
        }
        puVar9 = puVar11;
        FUN_100079834(puVar11,0);
        puVar10 = auStack_80;
        FUN_1000ac17c(puVar10,puVar9 + 0x20,puVar11,0,uVar20);
        if (puVar10 != puVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af748);
          (*pcVar2)();
        }
      }
      if (((long)uVar19 < 1) || (uVar20 == 0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af744);
        (*pcVar2)();
      }
      uVar15 = 1;
      local_88 = uVar21;
      do {
        puVar11 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar11 & 1) == 0) {
          FUN_100080fb4();
          lVar17 = *(long *)(puVar8 + 0x10);
          puVar11 = puVar8;
        }
        else {
          lVar17 = *(long *)(puVar8 + 0x10);
          puVar11 = puVar8;
        }
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af6dc);
          (*pcVar2)();
        }
        lVar17 = 0;
        uVar16 = 0;
        *(ulong *)(puVar11 + 0x20) = uVar15;
        uVar4 = uVar22;
        do {
          uVar5 = uVar16 + 1;
          uVar6 = local_88;
          uVar13 = uVar21;
          __sSsySJSS5IndexVcig(local_88,uVar21,uVar12,param_3,param_4);
          uVar7 = uVar4;
          uVar14 = uVar22;
          __sSsySJSS5IndexVcig(uVar4,uVar22,uVar23,param_1,param_2);
          if ((uVar6 == uVar7) && (uVar13 == uVar14)) {
            _swift_bridgeObjectRelease(uVar13);
            _swift_bridgeObjectRelease(uVar14);
LAB_1000af610:
            if (*(ulong *)(puVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af71c);
              (*pcVar2)();
            }
            if (*(ulong *)(puVar11 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af720);
              (*pcVar2)();
            }
            lVar18 = *(long *)(puVar9 + lVar17 + 0x20);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar6,uVar13,uVar7,uVar14,0);
            _swift_bridgeObjectRelease(uVar13);
            _swift_bridgeObjectRelease(uVar14);
            if ((uVar6 & 1) != 0) goto LAB_1000af610;
            if (*(ulong *)(puVar9 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af724);
              (*pcVar2)();
            }
            if (*(ulong *)(puVar11 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af728);
              (*pcVar2)();
            }
            lVar1 = *(long *)(puVar9 + lVar17 + 0x20);
            if (*(long *)(puVar11 + lVar17 + 0x20) <= *(long *)(puVar9 + lVar17 + 0x20)) {
              lVar1 = *(long *)(puVar11 + lVar17 + 0x20);
            }
            if (*(long *)(puVar9 + lVar17 + 0x28) <= lVar1) {
              lVar1 = *(long *)(puVar9 + lVar17 + 0x28);
            }
            lVar18 = lVar1 + 1;
            if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af72c);
              (*pcVar2)();
            }
            if (*(ulong *)(puVar11 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af730);
              (*pcVar2)();
            }
          }
          *(long *)(puVar11 + lVar17 + 0x28) = lVar18;
          __sSs5index5afterSS5IndexVAD_tF(uVar4,uVar22,uVar23,param_1,param_2);
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 8;
        } while (uVar20 != uVar16);
        __sSs5index5afterSS5IndexVAD_tF(local_88,uVar21,uVar12,param_3,param_4);
        if (uVar15 == uVar19) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRelease(puVar9);
          if (uVar20 < *(ulong *)(puVar11 + 0x10)) {
            uVar19 = *(ulong *)((long)(puVar11 + 0x20) + uVar20 * 8);
            _swift_bridgeObjectRelease(puVar11);
            return uVar19;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af74c);
          (*pcVar2)();
        }
        bVar3 = SCARRY8(uVar15,1);
        uVar15 = uVar15 + 1;
        puVar8 = puVar9;
        puVar9 = puVar11;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000af734);
          (*pcVar2)();
        }
      } while( true );
    }
    uVar20 = 0;
  }
  return uVar20;
}

