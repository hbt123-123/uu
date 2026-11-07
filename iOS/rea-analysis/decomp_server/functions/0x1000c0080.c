// rea decompile_all
// name: FUN_1000c0080
// address: 0x1000c0080
// body: available
// range: 0x1000c0080-0x1000c0493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c0080(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long unaff_x21;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar21 = param_3[1];
  if (0 < lVar21) {
    lVar12 = 0;
    do {
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar21) {
        lVar17 = *param_3;
        puVar18 = (ulong *)(lVar17 + lVar20 * 0x10);
        uVar19 = *puVar18;
        puVar16 = (ulong *)(lVar17 + lVar12 * 0x10);
        if (uVar19 == *puVar16 && puVar18[1] == puVar16[1]) {
          uVar19 = 0;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
        lVar15 = lVar12 + 2;
        lVar20 = lVar15;
        if (lVar15 < lVar21) {
          puVar18 = puVar16 + 3;
          do {
            uVar14 = puVar18[1];
            if (uVar14 == puVar18[-1] && puVar18[2] == *puVar18) {
              if ((uVar19 & 1) != 0) goto LAB_1000c0178;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              lVar20 = lVar15;
              if ((((uint)uVar19 ^ (uint)uVar14) & 1) != 0) break;
            }
            lVar15 = lVar15 + 1;
            puVar18 = puVar18 + 2;
            lVar20 = lVar21;
          } while (lVar21 != lVar15);
        }
        lVar15 = lVar20;
        if ((uVar19 & 1) != 0) {
LAB_1000c0178:
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0468);
            (*pcVar6)();
          }
          lVar20 = lVar15;
          if (lVar12 < lVar15) {
            lVar11 = lVar15 << 4;
            lVar13 = lVar12 << 4;
            lVar21 = lVar12;
            do {
              lVar15 = lVar15 + -1;
              if (lVar21 != lVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0488);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar17 + lVar13);
                lVar2 = lVar17 + lVar11;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar22 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar22;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar21 = lVar21 + 1;
              lVar11 = lVar11 + -0x10;
              lVar13 = lVar13 + 0x10;
            } while (lVar21 < lVar15);
          }
        }
      }
      lVar21 = param_3[1];
      lVar17 = lVar20;
      if (lVar20 < lVar21) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0464);
          (*pcVar6)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c046c);
            (*pcVar6)();
          }
          lVar15 = lVar12 + param_4;
          if (lVar21 <= lVar12 + param_4) {
            lVar15 = lVar21;
          }
          if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0470);
            (*pcVar6)();
          }
          if (lVar20 != lVar15) {
            lVar13 = *param_3;
            puVar18 = (ulong *)(lVar13 + lVar20 * 0x10);
            lVar21 = lVar12 - lVar20;
            do {
              puVar16 = (ulong *)(lVar13 + lVar20 * 0x10);
              uVar19 = *puVar16;
              uVar14 = puVar16[1];
              puVar16 = puVar18;
              lVar17 = lVar21;
              do {
                if ((uVar19 == puVar16[-2] && uVar14 == puVar16[-1]) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar19 & 1) == 0)) break;
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0474);
                  (*pcVar6)();
                }
                uVar19 = *puVar16;
                uVar14 = puVar16[1];
                puVar16[1] = puVar16[-1];
                *puVar16 = puVar16[-2];
                puVar16[-1] = uVar14;
                puVar16 = puVar16 + -2;
                *puVar16 = uVar19;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
              } while (bVar7);
              lVar20 = lVar20 + 1;
              puVar18 = puVar18 + 2;
              lVar21 = lVar21 + -1;
              lVar17 = lVar15;
            } while (lVar20 != lVar15);
          }
        }
      }
      puVar10 = local_58;
      if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0454);
        (*pcVar6)();
      }
      puVar8 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar19 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100033870(puVar10,uVar19 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar19 + 1;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar19 * 0x10 + 0x28) = lVar17;
      local_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c048c);
        (*pcVar6)();
      }
      FUN_1000c0560(&local_58,*param_1,param_3);
      puVar10 = local_58;
      if (unaff_x21 != 0) goto LAB_1000c0424;
      lVar21 = param_3[1];
      lVar12 = lVar17;
    } while (lVar17 < lVar21);
  }
  puVar10 = local_58;
  lVar21 = *param_1;
  if (lVar21 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0494);
    (*pcVar6)();
  }
  puVar8 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar8 & 1) == 0) {
    FUN_10006f924();
  }
  puVar18 = (ulong *)(puVar10 + 0x10);
  uVar19 = *puVar18;
  while( true ) {
    if (uVar19 < 2) {
      _swift_bridgeObjectRelease(puVar10);
      return;
    }
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0490);
      (*pcVar6)();
    }
    plVar3 = (long *)(puVar10 + uVar19 * 0x10);
    lVar20 = *plVar3;
    puVar16 = puVar18 + uVar19 * 2;
    uVar14 = puVar16[1];
    FUN_1000c07cc(lVar12 + lVar20 * 0x10,lVar12 + *puVar16 * 0x10,lVar12 + uVar14 * 0x10,lVar21);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0458);
      (*pcVar6)();
    }
    if (*puVar18 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c045c);
      (*pcVar6)();
    }
    *plVar3 = lVar20;
    plVar3[1] = uVar14;
    uVar14 = *puVar18;
    lVar12 = uVar14 - uVar19;
    if (uVar14 < uVar19) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c0460);
      (*pcVar6)();
    }
    uVar19 = uVar14 - 1;
    _memmove(puVar16,puVar16 + 2,lVar12 * 0x10);
    *puVar18 = uVar19;
  }
LAB_1000c0424:
  _swift_bridgeObjectRelease(puVar10);
  return;
}

