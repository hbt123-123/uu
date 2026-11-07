// rea decompile_all
// name: FUN_10040ac6c
// address: 0x10040ac6c
// body: available
// range: 0x10040ac6c-0x10040b1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040ac6c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x21;
  long lVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  ulong local_68;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar22 = param_3[1];
  if (0 < lVar22) {
    lVar14 = 0;
    do {
      lVar27 = lVar14 + 1;
      if (lVar27 < lVar22) {
        lVar19 = *param_3;
        puVar24 = (ulong *)(lVar19 + lVar27 * 0x10);
        local_68 = *puVar24;
        uVar10 = puVar24[1];
        puVar24 = (ulong *)(lVar19 + lVar14 * 0x10);
        uVar21 = *puVar24;
        uVar6 = puVar24[1];
        __sSS10lowercasedSSyF();
        __sSS10lowercasedSSyF();
        if (local_68 == uVar21 && uVar10 == uVar6) {
          local_68 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (local_68,uVar10,uVar21,uVar6,1);
          local_68 = local_68 & 0xffffffff;
        }
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(uVar6);
        lVar17 = lVar14 * 0x10;
        plVar26 = (long *)(lVar19 + lVar17 + 0x28);
        lVar15 = lVar14 + 2;
        lVar23 = 0;
        lVar19 = lVar17;
        do {
          lVar20 = lVar23;
          lVar27 = lVar15;
          lVar19 = lVar19 + 0x10;
          if (lVar22 <= lVar27) break;
          lVar15 = plVar26[-1];
          lVar11 = *plVar26;
          lVar23 = plVar26[-3];
          lVar12 = plVar26[-2];
          __sSS10lowercasedSSyF();
          __sSS10lowercasedSSyF();
          if (lVar15 == lVar23 && lVar11 == lVar12) {
            uVar5 = 0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar15,lVar11,lVar23,lVar12,1);
            uVar5 = (uint)lVar15;
          }
          _swift_bridgeObjectRelease(lVar11);
          _swift_bridgeObjectRelease(lVar12);
          plVar26 = plVar26 + 2;
          lVar15 = lVar27 + 1;
          lVar23 = lVar20 + 1;
        } while ((((uint)local_68 ^ uVar5) & 1) == 0);
        if ((local_68 & 1) != 0) {
          if (lVar27 < lVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b188);
            (*pcVar3)();
          }
          if (lVar14 < lVar27) {
            lVar22 = 0;
            lVar15 = *param_3;
            puVar16 = (undefined8 *)(lVar15 + lVar19);
            puVar18 = (undefined8 *)(lVar15 + lVar17);
            do {
              if (lVar14 + lVar22 != lVar14 + lVar20 + 1) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b1a8);
                  (*pcVar3)();
                }
                uVar1 = *puVar18;
                uVar2 = puVar18[1];
                uVar28 = *puVar16;
                puVar18[1] = puVar16[1];
                *puVar18 = uVar28;
                *puVar16 = uVar1;
                puVar16[1] = uVar2;
              }
              lVar20 = lVar20 + -1;
              lVar22 = lVar22 + 1;
              puVar16 = puVar16 + -2;
              puVar18 = puVar18 + 2;
            } while (lVar22 + lVar14 < lVar14 + lVar20 + 2);
          }
        }
      }
      lVar22 = param_3[1];
      lVar19 = lVar27;
      if (lVar27 < lVar22) {
        if (SBORROW8(lVar27,lVar14)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b184);
          (*pcVar3)();
        }
        if (lVar27 - lVar14 < param_4) {
          if (SCARRY8(lVar14,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b18c);
            (*pcVar3)();
          }
          lVar15 = lVar14 + param_4;
          if (lVar22 <= lVar14 + param_4) {
            lVar15 = lVar22;
          }
          if (lVar15 < lVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b190);
            (*pcVar3)();
          }
          if (lVar27 != lVar15) {
            lVar23 = *param_3;
            puVar24 = (ulong *)(lVar23 + lVar27 * 0x10);
            lVar22 = lVar14 - lVar27;
            do {
              puVar25 = (ulong *)(lVar23 + lVar27 * 0x10);
              uVar21 = *puVar25;
              uVar10 = puVar25[1];
              lVar19 = lVar22;
              puVar25 = puVar24;
              do {
                uVar6 = puVar25[-2];
                uVar13 = puVar25[-1];
                __sSS10lowercasedSSyF();
                __sSS10lowercasedSSyF();
                if (uVar21 == uVar6 && uVar10 == uVar13) {
                  _swift_bridgeObjectRelease(uVar10);
                  _swift_bridgeObjectRelease(uVar13);
                  break;
                }
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar21,uVar10,uVar6,uVar13,1);
                _swift_bridgeObjectRelease(uVar10);
                _swift_bridgeObjectRelease(uVar13);
                if ((uVar21 & 1) == 0) break;
                if (lVar23 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b194);
                  (*pcVar3)();
                }
                uVar21 = *puVar25;
                uVar10 = puVar25[1];
                puVar25[1] = puVar25[-1];
                *puVar25 = puVar25[-2];
                puVar25[-1] = uVar10;
                puVar25 = puVar25 + -2;
                *puVar25 = uVar21;
                bVar4 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar4);
              lVar27 = lVar27 + 1;
              puVar24 = puVar24 + 2;
              lVar22 = lVar22 + -1;
              lVar19 = lVar15;
            } while (lVar27 != lVar15);
          }
        }
      }
      puVar9 = local_58;
      if (lVar19 < lVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b178);
        (*pcVar3)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar21 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100033870(puVar9,uVar21 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = lVar14;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar19;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b1ac);
        (*pcVar3)();
      }
      FUN_10040b2dc(&local_58,*param_1,param_3);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_10040b148;
      lVar22 = param_3[1];
      lVar14 = lVar19;
    } while (lVar19 < lVar22);
  }
  puVar9 = local_58;
  lVar22 = *param_1;
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b1b4);
    (*pcVar3)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10006f924();
  }
  uVar21 = *(ulong *)(puVar9 + 0x10);
  while (local_58 = puVar9, 1 < uVar21) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b1b0);
      (*pcVar3)();
    }
    lVar15 = uVar21 - 1;
    lVar19 = *(long *)(puVar9 + uVar21 * 0x10);
    lVar27 = *(long *)(puVar9 + lVar15 * 0x10 + 0x28);
    FUN_10040b548(lVar14 + lVar19 * 0x10,lVar14 + *(long *)(puVar9 + lVar15 * 0x10 + 0x20) * 0x10,
                  lVar14 + lVar27 * 0x10,lVar22);
    if (unaff_x21 != 0) break;
    if (lVar27 < lVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b17c);
      (*pcVar3)();
    }
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10040b180);
      (*pcVar3)();
    }
    *(long *)(puVar9 + uVar21 * 0x10) = lVar19;
    *(long *)((long)(puVar9 + uVar21 * 0x10) + 8) = lVar27;
    local_58 = puVar9;
    FUN_10005fd60(lVar15);
    puVar9 = local_58;
    uVar21 = *(ulong *)(local_58 + 0x10);
  }
LAB_10040b148:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

