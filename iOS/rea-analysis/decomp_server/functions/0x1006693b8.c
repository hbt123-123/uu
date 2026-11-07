// rea decompile_all
// name: FUN_1006693b8
// address: 0x1006693b8
// body: available
// range: 0x1006693b8-0x10066963f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006693b8(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x20;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar17 = *param_4;
  uVar10 = *(ulong *)(uVar17 + 0x10);
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100669614);
    (*pcVar9)();
  }
  if (uVar10 == 1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100669618);
    (*pcVar9)();
  }
  if (uVar10 < 3) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10066961c);
    (*pcVar9)();
  }
  if (uVar10 != 3) {
    uVar7 = *(uint *)(uVar17 + 0x20);
    uVar20 = *(uint *)(uVar17 + 0x24);
    uVar18 = *(uint *)(uVar17 + 0x28);
    uVar16 = *(uint *)(uVar17 + 0x2c);
    uVar10 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + 0x10);
    uVar19 = uVar7;
    if (uVar10 != 0) {
      if (*(ulong *)(*(long *)(unaff_x20 + 0x28) + 0x10) < uVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100669640);
        (*pcVar9)();
      }
      uVar11 = 0;
      uVar14 = 0;
      param_3 = param_3 >> 1;
      uVar12 = 5;
      uVar13 = 1;
      uVar15 = uVar7;
      uVar8 = uVar16;
      do {
        uVar16 = uVar18;
        uVar19 = uVar8;
        uVar18 = uVar20;
        uVar20 = 0;
        if (uVar14 < 0x40) {
          uVar20 = (uVar18 | uVar19 ^ 0xffffffff) ^ uVar16;
        }
        uVar6 = 0;
        if (uVar14 < 0x40) {
          uVar6 = uVar11 & 0xf;
        }
        if (uVar14 < 0x30) {
          uVar6 = uVar12 & 0xf;
          uVar20 = uVar16 ^ uVar19 ^ uVar18;
        }
        if (uVar14 < 0x20) {
          uVar6 = uVar13 & 0xf;
          uVar20 = uVar18 & uVar19 | uVar16 & (uVar19 ^ 0xffffffff);
        }
        if (uVar14 < 0x10) {
          uVar6 = uVar14;
          uVar20 = uVar18 & uVar16 | uVar19 & (uVar18 ^ 0xffffffff);
        }
        lVar4 = param_2 + uVar6 * 4;
        if ((lVar4 < param_2) || ((long)param_3 <= lVar4)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100669600);
          (*pcVar9)();
        }
        if ((long)param_3 <= lVar4 + 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100669604);
          (*pcVar9)();
        }
        lVar2 = lVar4 + 2;
        if ((lVar2 < param_2) || ((long)param_3 <= lVar2)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100669608);
          (*pcVar9)();
        }
        lVar3 = lVar4 + 3;
        if ((lVar3 < param_2) || ((long)param_3 <= lVar3)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10066960c);
          (*pcVar9)();
        }
        uVar8 = *(uint *)(*(long *)(unaff_x20 + 0x28) + 0x20 + uVar14 * 4);
        if (0x20 < uVar8) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100669610);
          (*pcVar9)();
        }
        lVar1 = uVar14 * 4;
        uVar14 = uVar14 + 1;
        uVar20 = uVar20 + uVar15 + *(int *)(*(long *)(unaff_x20 + 0x30) + 0x20 + lVar1) +
                 CONCAT13(*(undefined1 *)(param_1 + lVar3),
                          CONCAT12(*(undefined1 *)(param_1 + lVar2),
                                   CONCAT11(*(undefined1 *)(param_1 + lVar4 + 1),
                                            *(undefined1 *)(param_1 + lVar4))));
        uVar15 = 0;
        if (uVar8 < 0x20) {
          uVar15 = uVar20 << (ulong)(uVar8 & 0x1f);
        }
        uVar5 = 0;
        if (0x20 - uVar8 < 0x20) {
          uVar5 = uVar20 >> (ulong)(0x20 - uVar8 & 0x1f);
        }
        uVar20 = (uVar15 | uVar5) + uVar18;
        uVar11 = uVar11 + 7;
        uVar12 = uVar12 + 3;
        uVar13 = uVar13 + 5;
        uVar15 = uVar19;
        uVar8 = uVar16;
      } while (uVar10 != uVar14);
    }
    uVar10 = uVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar10 & 1) == 0) {
      FUN_1006541cc();
    }
    *(uint *)(uVar17 + 0x20) = uVar19 + uVar7;
    uVar10 = *(ulong *)(uVar17 + 0x10);
    if (uVar10 < 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100669634);
      (*pcVar9)();
    }
    *(uint *)(uVar17 + 0x24) = *(int *)(uVar17 + 0x24) + uVar20;
    if (uVar10 == 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100669638);
      (*pcVar9)();
    }
    *(uint *)(uVar17 + 0x28) = *(int *)(uVar17 + 0x28) + uVar18;
    if (3 < uVar10) {
      *(uint *)(uVar17 + 0x2c) = *(int *)(uVar17 + 0x2c) + uVar16;
      *param_4 = uVar17;
      return;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10066963c);
    (*pcVar9)();
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100669620);
  (*pcVar9)();
}

