// rea decompile_all
// name: FUN_1001391c4
// address: 0x1001391c4
// body: available
// range: 0x1001391c4-0x1001395db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001391c4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  int *piVar23;
  undefined8 *puVar24;
  int iVar25;
  long unaff_x21;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar15 = param_3[1];
  if (0 < lVar15) {
    lVar17 = 0;
    do {
      puVar14 = local_58;
      lVar26 = lVar17 + 1;
      if (lVar26 < lVar15) {
        lVar18 = *param_3;
        iVar6 = *(int *)(lVar18 + lVar26 * 0x38 + 0x10);
        lVar20 = lVar17 * 0x38;
        iVar7 = *(int *)(lVar18 + lVar20 + 0x10);
        lVar16 = lVar17 + 2;
        piVar23 = (int *)(lVar18 + lVar20 + 0x80);
        iVar25 = iVar6;
        do {
          lVar22 = lVar16;
          lVar26 = lVar15;
          if (lVar15 == lVar22) break;
          iVar9 = *piVar23;
          bVar11 = iVar25 <= iVar9;
          lVar16 = lVar22 + 1;
          piVar23 = piVar23 + 0xe;
          iVar25 = iVar9;
          lVar26 = lVar22;
        } while (iVar6 < iVar7 != bVar11);
        if (iVar6 < iVar7) {
          if (lVar26 < lVar17) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395b0);
            (*pcVar10)();
          }
          if (lVar17 < lVar26) {
            lVar16 = lVar26 * 0x38;
            lVar22 = lVar26;
            lVar15 = lVar17;
            do {
              lVar22 = lVar22 + -1;
              if (lVar15 != lVar22) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395d0);
                  (*pcVar10)();
                }
                puVar21 = (undefined8 *)(lVar18 + lVar20);
                lVar1 = lVar18 + lVar16;
                uVar4 = *puVar21;
                uVar5 = puVar21[1];
                uVar8 = *(undefined4 *)(puVar21 + 2);
                uVar30 = puVar21[4];
                uVar29 = puVar21[3];
                uVar32 = puVar21[6];
                uVar31 = puVar21[5];
                uVar34 = *(undefined8 *)(lVar1 + -0x20);
                uVar33 = *(undefined8 *)(lVar1 + -0x28);
                uVar36 = *(undefined8 *)(lVar1 + -0x10);
                uVar35 = *(undefined8 *)(lVar1 + -0x18);
                uVar38 = *(undefined8 *)(lVar1 + -0x30);
                uVar37 = *(undefined8 *)(lVar1 + -0x38);
                puVar21[6] = *(undefined8 *)(lVar1 + -8);
                puVar21[3] = uVar34;
                puVar21[2] = uVar33;
                puVar21[5] = uVar36;
                puVar21[4] = uVar35;
                puVar21[1] = uVar38;
                *puVar21 = uVar37;
                *(undefined8 *)(lVar1 + -0x38) = uVar4;
                *(undefined8 *)(lVar1 + -0x30) = uVar5;
                *(undefined4 *)(lVar1 + -0x28) = uVar8;
                *(undefined8 *)(lVar1 + -0x18) = uVar30;
                *(undefined8 *)(lVar1 + -0x20) = uVar29;
                *(undefined8 *)(lVar1 + -8) = uVar32;
                *(undefined8 *)(lVar1 + -0x10) = uVar31;
              }
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + -0x38;
              lVar20 = lVar20 + 0x38;
            } while (lVar15 < lVar22);
            lVar15 = param_3[1];
          }
        }
      }
      lVar20 = lVar26;
      if (lVar26 < lVar15) {
        if (SBORROW8(lVar26,lVar17)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395ac);
          (*pcVar10)();
        }
        if (lVar26 - lVar17 < param_4) {
          if (SCARRY8(lVar17,param_4)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395b4);
            (*pcVar10)();
          }
          lVar16 = lVar17 + param_4;
          if (lVar15 <= lVar17 + param_4) {
            lVar16 = lVar15;
          }
          if (lVar16 < lVar17) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395b8);
            (*pcVar10)();
          }
          if (lVar26 != lVar16) {
            lVar15 = *param_3;
            puVar21 = (undefined8 *)(lVar15 + lVar26 * 0x38 + -0x38);
            lVar18 = lVar17 - lVar26;
            do {
              iVar6 = *(int *)(lVar15 + lVar26 * 0x38 + 0x10);
              lVar20 = lVar18;
              puVar24 = puVar21;
              do {
                if (*(int *)(puVar24 + 2) <= iVar6) break;
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395bc);
                  (*pcVar10)();
                }
                uVar4 = puVar24[7];
                uVar5 = puVar24[8];
                puVar24[8] = puVar24[1];
                puVar24[7] = *puVar24;
                uVar30 = puVar24[0xb];
                uVar29 = puVar24[10];
                uVar32 = puVar24[0xd];
                uVar31 = puVar24[0xc];
                puVar24[10] = puVar24[3];
                puVar24[9] = puVar24[2];
                puVar24[0xc] = puVar24[5];
                puVar24[0xb] = puVar24[4];
                puVar24[0xd] = puVar24[6];
                *puVar24 = uVar4;
                puVar24[1] = uVar5;
                *(int *)(puVar24 + 2) = iVar6;
                puVar24[4] = uVar30;
                puVar24[3] = uVar29;
                puVar24[6] = uVar32;
                puVar24[5] = uVar31;
                puVar24 = puVar24 + -7;
                bVar11 = lVar20 != -1;
                lVar20 = lVar20 + 1;
              } while (bVar11);
              lVar26 = lVar26 + 1;
              puVar21 = puVar21 + 7;
              lVar18 = lVar18 + -1;
              lVar20 = lVar16;
            } while (lVar26 != lVar16);
          }
        }
      }
      if (lVar20 < lVar17) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10013959c);
        (*pcVar10)();
      }
      puVar12 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar13 = puVar14;
      if (((ulong)puVar12 & 1) == 0) {
        puVar13 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
      }
      uVar28 = *(ulong *)(puVar13 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar28) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        FUN_100033870(puVar14,uVar28 + 1,1,puVar13);
      }
      *(ulong *)(puVar14 + 0x10) = uVar28 + 1;
      *(long *)(puVar14 + uVar28 * 0x10 + 0x20) = lVar17;
      *(long *)(puVar14 + uVar28 * 0x10 + 0x28) = lVar20;
      local_58 = puVar14;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395d4);
        (*pcVar10)();
      }
      FUN_1001395dc(&local_58,*param_1,param_3);
      puVar14 = local_58;
      if (unaff_x21 != 0) goto LAB_100139570;
      lVar15 = param_3[1];
      lVar17 = lVar20;
    } while (lVar20 < lVar15);
  }
  puVar14 = local_58;
  lVar15 = *param_1;
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395dc);
    (*pcVar10)();
  }
  puVar12 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar12 & 1) == 0) {
    FUN_10006f924();
  }
  puVar27 = (ulong *)(puVar14 + 0x10);
  uVar28 = *puVar27;
  while (1 < uVar28) {
    lVar17 = *param_3;
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395d8);
      (*pcVar10)();
    }
    plVar2 = (long *)(puVar14 + uVar28 * 0x10);
    lVar26 = *plVar2;
    puVar3 = puVar27 + uVar28 * 2;
    uVar19 = puVar3[1];
    FUN_100139850(lVar17 + lVar26 * 0x38,lVar17 + *puVar3 * 0x38,lVar17 + uVar19 * 0x38,lVar15);
    if (unaff_x21 != 0) break;
    if ((long)uVar19 < lVar26) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395a0);
      (*pcVar10)();
    }
    if (*puVar27 <= uVar28 - 2) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395a4);
      (*pcVar10)();
    }
    *plVar2 = lVar26;
    plVar2[1] = uVar19;
    uVar19 = *puVar27;
    lVar17 = uVar19 - uVar28;
    if (uVar19 < uVar28) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001395a8);
      (*pcVar10)();
    }
    uVar28 = uVar19 - 1;
    _memmove(puVar3,puVar3 + 2,lVar17 * 0x10);
    *puVar27 = uVar28;
  }
LAB_100139570:
  _swift_bridgeObjectRelease(puVar14);
  return;
}

