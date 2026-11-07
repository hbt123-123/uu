// rea decompile_all
// name: FUN_1006c76a4
// address: 0x1006c76a4
// body: available
// range: 0x1006c76a4-0x1006c7d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006c76a4(long param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  
  lVar14 = *(long *)(param_1 + 8);
  uVar13 = (ulong)*(uint *)(param_1 + 0x24);
  plVar15 = (long *)(lVar14 + uVar13);
  plVar7 = (long *)(param_2 - 6);
  plVar10 = (long *)((long)plVar15 + 3);
  if (plVar10 < plVar7) {
    lVar8 = *(long *)(param_1 + 0x30);
    iVar12 = *(int *)(param_1 + 200);
    uVar9 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    uVar4 = 0x20 - *(int *)(param_1 + 0xc0);
    if (param_3 == 0) {
      iVar11 = (int)lVar14;
      if (iVar12 < 7) {
        if (iVar12 == 5) {
          plVar5 = (long *)(lVar14 + uVar13 + 6);
          if (plVar5 <= plVar7) {
            plVar5 = plVar7;
          }
          uVar16 = (long)plVar5 + (-6 - lVar14);
          uVar17 = uVar13;
          if (uVar16 != uVar13) {
            uVar17 = uVar13 + 1;
          }
          uVar17 = (uVar16 - uVar17) / 3;
          if (uVar16 != uVar13) {
            uVar17 = uVar17 + 1;
          }
          if (2 < uVar17) {
            uVar18 = uVar17 + 1 & 0x7ffffffffffffffc;
            plVar5 = (long *)(uVar13 + lVar14 + 6);
            uVar16 = uVar18;
            do {
              iVar12 = (int)uVar13;
              lVar14 = *(long *)((long)plVar5 + -3);
              lVar6 = *plVar5;
              lVar19 = *(long *)((long)plVar5 + 3);
              *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar5 + -6) * -0x30e4432345000000) >>
                               (uVar9 & 0x3f)) * 4) = iVar12;
              *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e4432345000000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 3;
              *(int *)(lVar8 + ((ulong)(lVar6 * -0x30e4432345000000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 6;
              *(int *)(lVar8 + ((ulong)(lVar19 * -0x30e4432345000000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 9;
              uVar13 = (ulong)(iVar12 + 0xc);
              plVar5 = (long *)((long)plVar5 + 0xc);
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
            plVar10 = (long *)((long)plVar10 + uVar18 * 3);
            plVar15 = (long *)((long)plVar15 + uVar18 * 3);
            if (uVar17 + 1 == uVar18) {
              return;
            }
          }
          do {
            plVar5 = plVar10;
            *(int *)(lVar8 + ((ulong)(*plVar15 * -0x30e4432345000000) >> (uVar9 & 0x3f)) * 4) =
                 (int)plVar15 - iVar11;
            plVar10 = (long *)((long)plVar5 + 3);
            plVar15 = plVar5;
          } while (plVar10 < plVar7);
          return;
        }
        if (iVar12 == 6) {
          plVar5 = (long *)(lVar14 + uVar13 + 6);
          if (plVar5 <= plVar7) {
            plVar5 = plVar7;
          }
          uVar16 = (long)plVar5 + (-6 - lVar14);
          uVar17 = uVar13;
          if (uVar16 != uVar13) {
            uVar17 = uVar13 + 1;
          }
          uVar17 = (uVar16 - uVar17) / 3;
          if (uVar16 != uVar13) {
            uVar17 = uVar17 + 1;
          }
          if (2 < uVar17) {
            uVar18 = uVar17 + 1 & 0x7ffffffffffffffc;
            plVar5 = (long *)(uVar13 + lVar14 + 6);
            uVar16 = uVar18;
            do {
              iVar12 = (int)uVar13;
              lVar14 = *(long *)((long)plVar5 + -3);
              lVar6 = *plVar5;
              lVar19 = *(long *)((long)plVar5 + 3);
              *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar5 + -6) * -0x30e4432340650000) >>
                               (uVar9 & 0x3f)) * 4) = iVar12;
              *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e4432340650000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 3;
              *(int *)(lVar8 + ((ulong)(lVar6 * -0x30e4432340650000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 6;
              *(int *)(lVar8 + ((ulong)(lVar19 * -0x30e4432340650000) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 9;
              uVar13 = (ulong)(iVar12 + 0xc);
              plVar5 = (long *)((long)plVar5 + 0xc);
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
            plVar10 = (long *)((long)plVar10 + uVar18 * 3);
            plVar15 = (long *)((long)plVar15 + uVar18 * 3);
            if (uVar17 + 1 == uVar18) {
              return;
            }
          }
          do {
            plVar5 = plVar10;
            *(int *)(lVar8 + ((ulong)(*plVar15 * -0x30e4432340650000) >> (uVar9 & 0x3f)) * 4) =
                 (int)plVar15 - iVar11;
            plVar10 = (long *)((long)plVar5 + 3);
            plVar15 = plVar5;
          } while (plVar10 < plVar7);
          return;
        }
      }
      else {
        if (iVar12 == 7) {
          plVar5 = (long *)(lVar14 + uVar13 + 6);
          if (plVar5 <= plVar7) {
            plVar5 = plVar7;
          }
          uVar16 = (long)plVar5 + (-6 - lVar14);
          uVar17 = uVar13;
          if (uVar16 != uVar13) {
            uVar17 = uVar13 + 1;
          }
          uVar17 = (uVar16 - uVar17) / 3;
          if (uVar16 != uVar13) {
            uVar17 = uVar17 + 1;
          }
          if (2 < uVar17) {
            uVar18 = uVar17 + 1 & 0x7ffffffffffffffc;
            plVar5 = (long *)(uVar13 + lVar14 + 6);
            uVar16 = uVar18;
            do {
              iVar12 = (int)uVar13;
              lVar14 = *(long *)((long)plVar5 + -3);
              lVar6 = *plVar5;
              lVar19 = *(long *)((long)plVar5 + 3);
              *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar5 + -6) * -0x30e44323405a9d00) >>
                               (uVar9 & 0x3f)) * 4) = iVar12;
              *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323405a9d00) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 3;
              *(int *)(lVar8 + ((ulong)(lVar6 * -0x30e44323405a9d00) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 6;
              *(int *)(lVar8 + ((ulong)(lVar19 * -0x30e44323405a9d00) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 9;
              uVar13 = (ulong)(iVar12 + 0xc);
              plVar5 = (long *)((long)plVar5 + 0xc);
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
            plVar10 = (long *)((long)plVar10 + uVar18 * 3);
            plVar15 = (long *)((long)plVar15 + uVar18 * 3);
            if (uVar17 + 1 == uVar18) {
              return;
            }
          }
          do {
            plVar5 = plVar10;
            *(int *)(lVar8 + ((ulong)(*plVar15 * -0x30e44323405a9d00) >> (uVar9 & 0x3f)) * 4) =
                 (int)plVar15 - iVar11;
            plVar10 = (long *)((long)plVar5 + 3);
            plVar15 = plVar5;
          } while (plVar10 < plVar7);
          return;
        }
        if (iVar12 == 8) {
          plVar5 = (long *)(lVar14 + uVar13 + 6);
          if (plVar5 <= plVar7) {
            plVar5 = plVar7;
          }
          uVar16 = (long)plVar5 + (-6 - lVar14);
          uVar17 = uVar13;
          if (uVar16 != uVar13) {
            uVar17 = uVar13 + 1;
          }
          uVar17 = (uVar16 - uVar17) / 3;
          if (uVar16 != uVar13) {
            uVar17 = uVar17 + 1;
          }
          if (2 < uVar17) {
            uVar18 = uVar17 + 1 & 0x7ffffffffffffffc;
            plVar5 = (long *)(uVar13 + lVar14 + 6);
            uVar16 = uVar18;
            do {
              iVar12 = (int)uVar13;
              lVar14 = *(long *)((long)plVar5 + -3);
              lVar6 = *plVar5;
              lVar19 = *(long *)((long)plVar5 + 3);
              *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar5 + -6) * -0x30e44323485a9b9d) >>
                               (uVar9 & 0x3f)) * 4) = iVar12;
              *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 3;
              *(int *)(lVar8 + ((ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 6;
              *(int *)(lVar8 + ((ulong)(lVar19 * -0x30e44323485a9b9d) >> (uVar9 & 0x3f)) * 4) =
                   iVar12 + 9;
              uVar13 = (ulong)(iVar12 + 0xc);
              plVar5 = (long *)((long)plVar5 + 0xc);
              uVar16 = uVar16 - 4;
            } while (uVar16 != 0);
            plVar10 = (long *)((long)plVar10 + uVar18 * 3);
            plVar15 = (long *)((long)plVar15 + uVar18 * 3);
            if (uVar17 + 1 == uVar18) {
              return;
            }
          }
          do {
            plVar5 = plVar10;
            *(int *)(lVar8 + ((ulong)(*plVar15 * -0x30e44323485a9b9d) >> (uVar9 & 0x3f)) * 4) =
                 (int)plVar15 - iVar11;
            plVar10 = (long *)((long)plVar5 + 3);
            plVar15 = plVar5;
          } while (plVar10 < plVar7);
          return;
        }
      }
      do {
        *(int *)(lVar8 + (ulong)((uint)(*(int *)((long)plVar10 - 3) * -0x61c8864f) >>
                                (ulong)(uVar4 & 0x1f)) * 4) = (int)uVar13;
        plVar10 = (long *)((long)plVar10 + 3);
        uVar13 = (ulong)((int)uVar13 + 3);
      } while (plVar10 < plVar7);
    }
    else {
      do {
        iVar11 = (int)uVar13;
        if (iVar12 < 7) {
          if (iVar12 == 5) {
            *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 3) * -0x30e4432345000000) >>
                             (uVar9 & 0x3f)) * 4) = iVar11;
            uVar13 = (ulong)(*(long *)((long)plVar10 - 2) * -0x30e4432345000000) >> (uVar9 & 0x3f);
            if (*(int *)(lVar8 + uVar13 * 4) == 0) {
              *(int *)(lVar8 + uVar13 * 4) = iVar11 + 1;
            }
            piVar1 = (int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 1) * -0x30e4432345000000) >>
                                     (uVar9 & 0x3f)) * 4);
            iVar2 = *piVar1;
          }
          else if (iVar12 == 6) {
            *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 3) * -0x30e4432340650000) >>
                             (uVar9 & 0x3f)) * 4) = iVar11;
            uVar13 = (ulong)(*(long *)((long)plVar10 - 2) * -0x30e4432340650000) >> (uVar9 & 0x3f);
            if (*(int *)(lVar8 + uVar13 * 4) == 0) {
              *(int *)(lVar8 + uVar13 * 4) = iVar11 + 1;
            }
            piVar1 = (int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 1) * -0x30e4432340650000) >>
                                     (uVar9 & 0x3f)) * 4);
            iVar2 = *piVar1;
          }
          else {
LAB_1006c77f0:
            *(int *)(lVar8 + (ulong)((uint)(*(int *)((long)plVar10 - 3) * -0x61c8864f) >>
                                    (ulong)(uVar4 & 0x1f)) * 4) = iVar11;
            uVar3 = (uint)(*(int *)((long)plVar10 - 2) * -0x61c8864f) >> (ulong)(uVar4 & 0x1f);
            if (*(int *)(lVar8 + (ulong)uVar3 * 4) == 0) {
              *(int *)(lVar8 + (ulong)uVar3 * 4) = iVar11 + 1;
            }
            piVar1 = (int *)(lVar8 + (ulong)((uint)(*(int *)((long)plVar10 - 1) * -0x61c8864f) >>
                                            (ulong)(uVar4 & 0x1f)) * 4);
            iVar2 = *piVar1;
          }
        }
        else if (iVar12 == 7) {
          *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 3) * -0x30e44323405a9d00) >>
                           (uVar9 & 0x3f)) * 4) = iVar11;
          uVar13 = (ulong)(*(long *)((long)plVar10 - 2) * -0x30e44323405a9d00) >> (uVar9 & 0x3f);
          if (*(int *)(lVar8 + uVar13 * 4) == 0) {
            *(int *)(lVar8 + uVar13 * 4) = iVar11 + 1;
          }
          piVar1 = (int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 1) * -0x30e44323405a9d00) >>
                                   (uVar9 & 0x3f)) * 4);
          iVar2 = *piVar1;
        }
        else {
          if (iVar12 != 8) goto LAB_1006c77f0;
          *(int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 3) * -0x30e44323485a9b9d) >>
                           (uVar9 & 0x3f)) * 4) = iVar11;
          uVar13 = (ulong)(*(long *)((long)plVar10 - 2) * -0x30e44323485a9b9d) >> (uVar9 & 0x3f);
          if (*(int *)(lVar8 + uVar13 * 4) == 0) {
            *(int *)(lVar8 + uVar13 * 4) = iVar11 + 1;
          }
          piVar1 = (int *)(lVar8 + ((ulong)(*(long *)((long)plVar10 - 1) * -0x30e44323485a9b9d) >>
                                   (uVar9 & 0x3f)) * 4);
          iVar2 = *piVar1;
        }
        if (iVar2 == 0) {
          *piVar1 = iVar11 + 2;
        }
        plVar10 = (long *)((long)plVar10 + 3);
        uVar13 = (ulong)(iVar11 + 3);
      } while (plVar10 < plVar7);
    }
  }
  return;
}

