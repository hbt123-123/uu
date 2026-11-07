// rea decompile_all
// name: FUN_10019c03c
// address: 0x10019c03c
// body: available
// range: 0x10019c03c-0x10019c493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019c03c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long unaff_x21;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar9 = param_3[1];
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      lVar18 = lVar10 + 1;
      if (lVar18 < lVar9) {
        lVar22 = *param_3;
        lVar12 = *(long *)(lVar22 + lVar18 * 0x58);
        plVar13 = (long *)(lVar22 + lVar10 * 0x58);
        plVar15 = plVar13 + 0xb;
        lVar14 = *plVar13;
        lVar24 = lVar10 + 2;
        do {
          lVar28 = lVar24;
          lVar18 = lVar9;
          if (lVar9 == lVar28) break;
          lVar16 = *plVar15;
          plVar15 = plVar15 + 0xb;
          lVar24 = lVar28 + 1;
          lVar18 = lVar28;
        } while (lVar12 < lVar14 != lVar16 <= *plVar15);
        if (lVar12 < lVar14) {
          if (lVar18 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c468);
            (*pcVar4)();
          }
          if (lVar10 < lVar18) {
            puVar20 = (undefined8 *)(lVar22 + lVar10 * 0x58);
            lVar9 = lVar10;
            lVar24 = lVar18;
            puVar3 = (undefined8 *)(lVar22 + lVar18 * 0x58);
            do {
              puVar19 = puVar3 + -0xb;
              lVar24 = lVar24 + -1;
              if (lVar9 != lVar24) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c488);
                  (*pcVar4)();
                }
                uVar30 = puVar20[5];
                uVar25 = puVar20[4];
                uVar40 = puVar20[7];
                uVar36 = puVar20[6];
                uVar31 = puVar20[9];
                uVar26 = puVar20[8];
                uVar2 = *(undefined1 *)(puVar20 + 10);
                uVar32 = puVar20[1];
                uVar27 = *puVar20;
                uVar41 = puVar20[3];
                uVar37 = puVar20[2];
                _memmove(puVar20,puVar19,0x58);
                puVar3[-6] = uVar30;
                puVar3[-7] = uVar25;
                puVar3[-4] = uVar40;
                puVar3[-5] = uVar36;
                puVar3[-2] = uVar31;
                puVar3[-3] = uVar26;
                *(undefined1 *)(puVar3 + -1) = uVar2;
                puVar3[-10] = uVar32;
                *puVar19 = uVar27;
                puVar3[-8] = uVar41;
                puVar3[-9] = uVar37;
              }
              lVar9 = lVar9 + 1;
              puVar20 = puVar20 + 0xb;
              puVar3 = puVar19;
            } while (lVar9 < lVar24);
            lVar9 = param_3[1];
          }
        }
      }
      puVar8 = local_58;
      lVar24 = lVar18;
      if (lVar18 < lVar9) {
        if (SBORROW8(lVar18,lVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c464);
          (*pcVar4)();
        }
        if (lVar18 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c46c);
            (*pcVar4)();
          }
          lVar12 = lVar10 + param_4;
          if (lVar9 <= lVar10 + param_4) {
            lVar12 = lVar9;
          }
          if (lVar12 < lVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c470);
            (*pcVar4)();
          }
          if (lVar18 != lVar12) {
            lVar22 = *param_3;
            plVar13 = (long *)(lVar22 + lVar18 * 0x58);
            lVar9 = lVar10 - lVar18;
            lVar14 = lVar9;
            plVar15 = plVar13;
LAB_10019c218:
            do {
              plVar17 = plVar13 + -0xb;
              if (*plVar13 < *plVar17) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c474);
                  (*pcVar4)();
                }
                lVar33 = plVar13[5];
                lVar28 = plVar13[4];
                lVar42 = plVar13[7];
                lVar38 = plVar13[6];
                lVar34 = plVar13[9];
                lVar16 = plVar13[8];
                lVar24 = plVar13[10];
                lVar35 = plVar13[1];
                lVar29 = *plVar13;
                lVar43 = plVar13[3];
                lVar39 = plVar13[2];
                plVar13[5] = plVar13[-6];
                plVar13[4] = plVar13[-7];
                plVar13[7] = plVar13[-4];
                plVar13[6] = plVar13[-5];
                plVar13[9] = plVar13[-2];
                plVar13[8] = plVar13[-3];
                plVar13[10] = plVar13[-1];
                plVar13[1] = plVar13[-10];
                *plVar13 = *plVar17;
                plVar13[3] = plVar13[-8];
                plVar13[2] = plVar13[-9];
                plVar13[-6] = lVar33;
                plVar13[-7] = lVar28;
                plVar13[-4] = lVar42;
                plVar13[-5] = lVar38;
                plVar13[-2] = lVar34;
                plVar13[-3] = lVar16;
                *(char *)(plVar13 + -1) = (char)lVar24;
                plVar13[-10] = lVar35;
                *plVar17 = lVar29;
                plVar13[-8] = lVar43;
                plVar13[-9] = lVar39;
                bVar5 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                plVar13 = plVar13 + -0xb;
                if (bVar5) goto LAB_10019c218;
              }
              lVar18 = lVar18 + 1;
              plVar13 = plVar15 + 0xb;
              lVar9 = lVar14 + -1;
              lVar24 = lVar12;
              lVar14 = lVar9;
              plVar15 = plVar13;
            } while (lVar18 != lVar12);
          }
        }
      }
      if (lVar24 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c454);
        (*pcVar4)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar23 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar23) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar23 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar23 + 1;
      *(long *)(puVar8 + uVar23 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar8 + uVar23 * 0x10 + 0x28) = lVar24;
      local_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c48c);
        (*pcVar4)();
      }
      FUN_10019c494(&local_58,*param_1,param_3);
      puVar8 = local_58;
      if (unaff_x21 != 0) goto LAB_10019c428;
      lVar9 = param_3[1];
      lVar10 = lVar24;
    } while (lVar24 < lVar9);
  }
  puVar8 = local_58;
  lVar9 = *param_1;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c494);
    (*pcVar4)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10006f924();
  }
  puVar21 = (ulong *)(puVar8 + 0x10);
  uVar23 = *puVar21;
  while (1 < uVar23) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c490);
      (*pcVar4)();
    }
    plVar13 = (long *)(puVar8 + uVar23 * 0x10);
    lVar18 = *plVar13;
    puVar1 = puVar21 + uVar23 * 2;
    uVar11 = puVar1[1];
    FUN_10019c708(lVar10 + lVar18 * 0x58,lVar10 + *puVar1 * 0x58,lVar10 + uVar11 * 0x58,lVar9);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c458);
      (*pcVar4)();
    }
    if (*puVar21 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c45c);
      (*pcVar4)();
    }
    *plVar13 = lVar18;
    plVar13[1] = uVar11;
    uVar11 = *puVar21;
    lVar10 = uVar11 - uVar23;
    if (uVar11 < uVar23) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10019c460);
      (*pcVar4)();
    }
    uVar23 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar10 * 0x10);
    *puVar21 = uVar23;
  }
LAB_10019c428:
  _swift_bridgeObjectRelease(puVar8);
  return;
}

