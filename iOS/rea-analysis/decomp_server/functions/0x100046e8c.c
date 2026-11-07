// rea decompile_all
// name: FUN_100046e8c
// address: 0x100046e8c
// body: available
// range: 0x100046e8c-0x1000471f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100046e8c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  long unaff_x21;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar12 = param_3[1];
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      puVar11 = local_58;
      lVar23 = lVar13 + 1;
      if (lVar23 < lVar12) {
        lVar14 = *param_3;
        iVar3 = *(int *)(lVar14 + lVar23 * 4);
        iVar4 = *(int *)(lVar14 + lVar13 * 4);
        lVar16 = lVar13 + 2;
        iVar19 = iVar3;
        do {
          lVar18 = lVar16;
          lVar23 = lVar12;
          if (lVar12 == lVar18) break;
          iVar5 = *(int *)(lVar14 + lVar18 * 4);
          bVar8 = iVar19 <= iVar5;
          lVar16 = lVar18 + 1;
          iVar19 = iVar5;
          lVar23 = lVar18;
        } while (iVar3 < iVar4 != bVar8);
        if (iVar3 < iVar4) {
          if (lVar23 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471cc);
            (*pcVar7)();
          }
          lVar16 = lVar13;
          lVar18 = lVar23;
          if (lVar13 < lVar23) {
            do {
              lVar18 = lVar18 + -1;
              if (lVar16 != lVar18) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471ec);
                  (*pcVar7)();
                }
                uVar6 = *(undefined4 *)(lVar14 + lVar16 * 4);
                *(undefined4 *)(lVar14 + lVar16 * 4) = *(undefined4 *)(lVar14 + lVar18 * 4);
                *(undefined4 *)(lVar14 + lVar18 * 4) = uVar6;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < lVar18);
            lVar12 = param_3[1];
          }
        }
      }
      lVar16 = lVar23;
      if (lVar23 < lVar12) {
        if (SBORROW8(lVar23,lVar13)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471c8);
          (*pcVar7)();
        }
        if (lVar23 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471d0);
            (*pcVar7)();
          }
          lVar14 = lVar13 + param_4;
          if (lVar12 <= lVar13 + param_4) {
            lVar14 = lVar12;
          }
          if (lVar14 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471d4);
            (*pcVar7)();
          }
          if (lVar23 != lVar14) {
            lVar12 = *param_3;
            piVar17 = (int *)(lVar12 + lVar23 * 4 + -4);
            lVar18 = lVar13 - lVar23;
            do {
              iVar3 = *(int *)(lVar12 + lVar23 * 4);
              lVar16 = lVar18;
              piVar20 = piVar17;
              do {
                iVar4 = *piVar20;
                if (iVar4 <= iVar3) break;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471d8);
                  (*pcVar7)();
                }
                *piVar20 = iVar3;
                piVar20[1] = iVar4;
                bVar8 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                piVar20 = piVar20 + -1;
              } while (bVar8);
              lVar23 = lVar23 + 1;
              piVar17 = piVar17 + 1;
              lVar18 = lVar18 + -1;
              lVar16 = lVar14;
            } while (lVar23 != lVar14);
          }
        }
      }
      if (lVar16 < lVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471b8);
        (*pcVar7)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar22 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar22) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100033870(puVar11,uVar22 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar22 + 1;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x28) = lVar16;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471f0);
        (*pcVar7)();
      }
      FUN_100047d2c(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_100047188;
      lVar12 = param_3[1];
      lVar13 = lVar16;
    } while (lVar16 < lVar12);
  }
  puVar11 = local_58;
  lVar12 = *param_1;
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471f8);
    (*pcVar7)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10006f924();
  }
  puVar21 = (ulong *)(puVar11 + 0x10);
  uVar22 = *puVar21;
  while (1 < uVar22) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471f4);
      (*pcVar7)();
    }
    plVar1 = (long *)(puVar11 + uVar22 * 0x10);
    lVar23 = *plVar1;
    puVar2 = puVar21 + uVar22 * 2;
    uVar15 = puVar2[1];
    FUN_1000486e4(lVar13 + lVar23 * 4,lVar13 + *puVar2 * 4,lVar13 + uVar15 * 4,lVar12);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar23) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471bc);
      (*pcVar7)();
    }
    if (*puVar21 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471c0);
      (*pcVar7)();
    }
    *plVar1 = lVar23;
    plVar1[1] = uVar15;
    uVar15 = *puVar21;
    lVar13 = uVar15 - uVar22;
    if (uVar15 < uVar22) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000471c4);
      (*pcVar7)();
    }
    uVar22 = uVar15 - 1;
    _memmove(puVar2,puVar2 + 2,lVar13 * 0x10);
    *puVar21 = uVar22;
  }
LAB_100047188:
  _swift_bridgeObjectRelease(puVar11);
  return;
}

