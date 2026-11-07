// rea decompile_all
// name: FUN_1007b5034
// address: 0x1007b5034
// body: available
// range: 0x1007b5034-0x1007b52c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007b5034(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x21;
  ulong uVar15;
  ulong uVar16;
  
  uVar15 = *param_1;
  if (1 < *(ulong *)(uVar15 + 0x10)) {
    uVar8 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar8 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar15;
    uVar8 = *(ulong *)(uVar15 + 0x10);
    do {
      uVar16 = uVar8 - 1;
      if (uVar8 < 4) {
        if (uVar8 == 3) {
          lVar11 = 0;
          lVar14 = *(long *)(uVar15 + 0x20);
LAB_1007b50f8:
          lVar10 = uVar15 + 0x20;
          lVar12 = *(long *)(lVar10 + lVar11 * 0x10 + 8);
          lVar9 = lVar12 - lVar14;
          if (SBORROW8(lVar12,lVar14)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5290);
            (*pcVar7)();
          }
          uVar13 = uVar8 - 2;
          plVar1 = (long *)(lVar10 + uVar13 * 0x10);
          lVar12 = *plVar1;
          lVar14 = plVar1[1];
          lVar6 = lVar14 - lVar12;
          if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5298);
            (*pcVar7)();
          }
          plVar1 = (long *)(lVar10 + uVar16 * 0x10);
          lVar10 = *plVar1;
          lVar12 = plVar1[1];
          lVar14 = lVar12 - lVar10;
          if (SBORROW8(lVar12,lVar10)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b529c);
            (*pcVar7)();
          }
          if (SCARRY8(lVar6,lVar14)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52a8);
            (*pcVar7)();
          }
          if (lVar9 <= lVar6 + lVar14) {
            if (lVar14 <= lVar9) {
              uVar13 = uVar16;
            }
            goto LAB_1007b519c;
          }
        }
        else {
          if (uVar8 < 2) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52ac);
            (*pcVar7)();
          }
          uVar13 = 0;
        }
        plVar1 = (long *)(uVar15 + 0x20 + uVar13 * 0x10);
        lVar9 = *plVar1;
        lVar10 = plVar1[1];
        if (SBORROW8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52a0);
          (*pcVar7)();
        }
        plVar1 = (long *)(uVar15 + 0x20 + uVar16 * 0x10);
        lVar12 = *plVar1;
        lVar14 = plVar1[1];
        if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52a4);
          (*pcVar7)();
        }
        uVar13 = uVar16;
        if (lVar14 - lVar12 < lVar10 - lVar9) {
          return 1;
        }
      }
      else {
        lVar9 = uVar15 + 0x20;
        lVar10 = lVar9 + uVar8 * 0x10;
        lVar12 = *(long *)(lVar10 + -0x40);
        lVar10 = *(long *)(lVar10 + -0x38);
        if (SBORROW8(lVar10,lVar12)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5284);
          (*pcVar7)();
        }
        lVar11 = uVar8 - 3;
        plVar1 = (long *)(lVar9 + lVar11 * 0x10);
        lVar14 = *plVar1;
        lVar6 = plVar1[1];
        lVar4 = lVar6 - lVar14;
        if (SBORROW8(lVar6,lVar14)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5288);
          (*pcVar7)();
        }
        plVar1 = (long *)(lVar9 + (uVar8 - 2) * 0x10);
        lVar6 = *plVar1;
        lVar3 = plVar1[1];
        lVar5 = lVar3 - lVar6;
        if (SBORROW8(lVar3,lVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b528c);
          (*pcVar7)();
        }
        if (SCARRY8(lVar4,lVar5)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5294);
          (*pcVar7)();
        }
        if (lVar4 + lVar5 < lVar10 - lVar12) goto LAB_1007b50f8;
        plVar1 = (long *)(lVar9 + uVar16 * 0x10);
        lVar9 = *plVar1;
        lVar10 = plVar1[1];
        if (SBORROW8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52b0);
          (*pcVar7)();
        }
        uVar13 = uVar8 - 2;
        if (lVar10 - lVar9 <= lVar4) {
          uVar13 = uVar16;
        }
      }
LAB_1007b519c:
      uVar16 = uVar13 - 1;
      if (uVar8 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5274);
        (*pcVar7)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b52c4);
        (*pcVar7)();
      }
      lVar10 = uVar15 + 0x20;
      plVar1 = (long *)(lVar10 + uVar16 * 0x10);
      lVar14 = *plVar1;
      plVar2 = (long *)(lVar10 + uVar13 * 0x10);
      lVar12 = plVar2[1];
      FUN_1007b5414(lVar9 + lVar14 * 0x10,lVar9 + *plVar2 * 0x10,lVar9 + lVar12 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar12 < lVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5278);
        (*pcVar7)();
      }
      if (*(ulong *)(uVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b527c);
        (*pcVar7)();
      }
      *plVar1 = lVar14;
      *(long *)(lVar10 + uVar16 * 0x10 + 8) = lVar12;
      *param_1 = uVar15;
      if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5280);
        (*pcVar7)();
      }
      lVar9 = *(ulong *)(uVar15 + 0x10) - 1;
      _memmove(plVar2,plVar2 + 2,(lVar9 - uVar13) * 0x10);
      *(long *)(uVar15 + 0x10) = lVar9;
      uVar15 = *param_1;
      uVar8 = *(ulong *)(uVar15 + 0x10);
    } while (1 < uVar8);
  }
  return 1;
}

