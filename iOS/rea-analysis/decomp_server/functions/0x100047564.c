// rea decompile_all
// name: FUN_100047564
// address: 0x100047564
// body: available
// range: 0x100047564-0x1000479bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100047564(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long unaff_x21;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong uVar24;
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
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar10 = 0;
    do {
      lVar18 = lVar10 + 1;
      if (lVar18 < lVar8) {
        lVar23 = *param_3;
        lVar12 = *(long *)(lVar23 + lVar18 * 0x58);
        plVar13 = (long *)(lVar23 + lVar10 * 0x58);
        lVar15 = *plVar13;
        plVar13 = plVar13 + 0x16;
        lVar19 = lVar10 + 2;
        lVar16 = lVar12;
        do {
          lVar28 = lVar19;
          lVar18 = lVar8;
          if (lVar8 == lVar28) break;
          lVar18 = *plVar13;
          bVar4 = lVar16 <= lVar18;
          plVar13 = plVar13 + 0xb;
          lVar19 = lVar28 + 1;
          lVar16 = lVar18;
          lVar18 = lVar28;
        } while (lVar12 < lVar15 != bVar4);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100047994);
            (*pcVar3)();
          }
          if (lVar10 < lVar18) {
            puVar21 = (undefined8 *)(lVar23 + lVar10 * 0x58);
            lVar8 = lVar10;
            lVar19 = lVar18;
            puVar2 = (undefined8 *)(lVar23 + lVar18 * 0x58);
            do {
              puVar20 = puVar2 + -0xb;
              lVar19 = lVar19 + -1;
              if (lVar8 != lVar19) {
                if (lVar23 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000479b4);
                  (*pcVar3)();
                }
                uVar30 = puVar21[5];
                uVar25 = puVar21[4];
                uVar40 = puVar21[7];
                uVar36 = puVar21[6];
                uVar31 = puVar21[9];
                uVar26 = puVar21[8];
                uVar9 = puVar21[10];
                uVar32 = puVar21[1];
                uVar27 = *puVar21;
                uVar41 = puVar21[3];
                uVar37 = puVar21[2];
                _memmove(puVar21,puVar20,0x58);
                puVar2[-6] = uVar30;
                puVar2[-7] = uVar25;
                puVar2[-4] = uVar40;
                puVar2[-5] = uVar36;
                puVar2[-2] = uVar31;
                puVar2[-3] = uVar26;
                puVar2[-1] = uVar9;
                puVar2[-10] = uVar32;
                *puVar20 = uVar27;
                puVar2[-8] = uVar41;
                puVar2[-9] = uVar37;
              }
              lVar8 = lVar8 + 1;
              puVar21 = puVar21 + 0xb;
              puVar2 = puVar20;
            } while (lVar8 < lVar19);
            lVar8 = param_3[1];
          }
        }
      }
      puVar7 = local_58;
      lVar19 = lVar18;
      if (lVar18 < lVar8) {
        if (SBORROW8(lVar18,lVar10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100047990);
          (*pcVar3)();
        }
        if (lVar18 - lVar10 < param_4) {
          if (SCARRY8(lVar10,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100047998);
            (*pcVar3)();
          }
          lVar16 = lVar10 + param_4;
          if (lVar8 <= lVar10 + param_4) {
            lVar16 = lVar8;
          }
          if (lVar16 < lVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10004799c);
            (*pcVar3)();
          }
          if (lVar18 != lVar16) {
            lVar15 = *param_3;
            plVar13 = (long *)(lVar15 + lVar18 * 0x58);
            lVar8 = lVar10 - lVar18;
            lVar12 = lVar8;
            plVar14 = plVar13;
LAB_100047744:
            do {
              plVar17 = plVar13 + -0xb;
              if (*plVar13 < *plVar17) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000479a0);
                  (*pcVar3)();
                }
                lVar33 = plVar13[5];
                lVar23 = plVar13[4];
                lVar42 = plVar13[7];
                lVar38 = plVar13[6];
                lVar34 = plVar13[9];
                lVar28 = plVar13[8];
                lVar19 = plVar13[10];
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
                plVar13[-7] = lVar23;
                plVar13[-4] = lVar42;
                plVar13[-5] = lVar38;
                plVar13[-2] = lVar34;
                plVar13[-3] = lVar28;
                plVar13[-1] = lVar19;
                plVar13[-10] = lVar35;
                *plVar17 = lVar29;
                plVar13[-8] = lVar43;
                plVar13[-9] = lVar39;
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                plVar13 = plVar13 + -0xb;
                if (bVar4) goto LAB_100047744;
              }
              lVar18 = lVar18 + 1;
              plVar13 = plVar14 + 0xb;
              lVar8 = lVar12 + -1;
              lVar19 = lVar16;
              lVar12 = lVar8;
              plVar14 = plVar13;
            } while (lVar18 != lVar16);
          }
        }
      }
      if (lVar19 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100047980);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar24 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100033870(puVar7,uVar24 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar10;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar19;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000479b8);
        (*pcVar3)();
      }
      FUN_100048204(&local_58,*param_1,param_3);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_100047954;
      lVar8 = param_3[1];
      lVar10 = lVar19;
    } while (lVar19 < lVar8);
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000479c0);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10006f924();
  }
  puVar22 = (ulong *)(puVar7 + 0x10);
  uVar24 = *puVar22;
  while (1 < uVar24) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000479bc);
      (*pcVar3)();
    }
    plVar13 = (long *)(puVar7 + uVar24 * 0x10);
    lVar18 = *plVar13;
    puVar1 = puVar22 + uVar24 * 2;
    uVar11 = puVar1[1];
    FUN_100048ac4(lVar10 + lVar18 * 0x58,lVar10 + *puVar1 * 0x58,lVar10 + uVar11 * 0x58,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100047984);
      (*pcVar3)();
    }
    if (*puVar22 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100047988);
      (*pcVar3)();
    }
    *plVar13 = lVar18;
    plVar13[1] = uVar11;
    uVar11 = *puVar22;
    lVar10 = uVar11 - uVar24;
    if (uVar11 < uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10004798c);
      (*pcVar3)();
    }
    uVar24 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar10 * 0x10);
    *puVar22 = uVar24;
  }
LAB_100047954:
  _swift_bridgeObjectRelease(puVar7);
  return;
}

