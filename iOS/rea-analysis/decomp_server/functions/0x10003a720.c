// rea decompile_all
// name: FUN_10003a720
// address: 0x10003a720
// body: available
// range: 0x10003a720-0x10003aa0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003a720(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar12 = *param_1;
  if (1 < *(ulong *)(uVar12 + 0x10)) {
    _swift_retain(param_4);
    uVar14 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar12;
    lVar1 = uVar12 + 0x20;
    uVar14 = *(ulong *)(uVar12 + 0x10);
    do {
      uVar10 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar6 = SBORROW8(*(long *)(uVar12 + 0x28),*(long *)(uVar12 + 0x20));
          lVar7 = *(long *)(uVar12 + 0x28) - *(long *)(uVar12 + 0x20);
LAB_10003a7f4:
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9c4);
            (*pcVar5)();
          }
          plVar2 = (long *)(uVar12 + uVar14 * 0x10);
          lVar8 = *plVar2;
          lVar13 = plVar2[1];
          lVar9 = lVar13 - lVar8;
          if (SBORROW8(lVar13,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9cc);
            (*pcVar5)();
          }
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar8 = *plVar2;
          lVar13 = plVar2[1];
          lVar4 = lVar13 - lVar8;
          if (SBORROW8(lVar13,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9d8);
            (*pcVar5)();
          }
          if (SCARRY8(lVar9,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9e0);
            (*pcVar5)();
          }
          bVar6 = false;
          if (lVar7 <= lVar9 + lVar4) {
            uVar11 = uVar14 - 2;
            if (lVar4 <= lVar7) {
              uVar11 = uVar10;
            }
            goto LAB_10003a890;
          }
        }
        else {
          if (uVar14 < 2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9e4);
            (*pcVar5)();
          }
          plVar2 = (long *)(uVar12 + uVar14 * 0x10);
          lVar8 = *plVar2;
          lVar9 = plVar2[1];
          bVar6 = SBORROW8(lVar9,lVar8);
          lVar9 = lVar9 - lVar8;
        }
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9d4);
          (*pcVar5)();
        }
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar7 = plVar2[1];
        if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9dc);
          (*pcVar5)();
        }
        uVar11 = uVar10;
        if (lVar7 - lVar8 < lVar9) break;
      }
      else {
        lVar8 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9bc);
          (*pcVar5)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9c0);
          (*pcVar5)();
        }
        plVar2 = (long *)(uVar12 + uVar14 * 0x10);
        lVar9 = *plVar2;
        lVar13 = plVar2[1];
        lVar4 = lVar13 - lVar9;
        if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9c8);
          (*pcVar5)();
        }
        if (SCARRY8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9d0);
          (*pcVar5)();
        }
        bVar6 = false;
        if (lVar7 + lVar4 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) goto LAB_10003a7f4;
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        if (SBORROW8(lVar9,lVar8)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9e8);
          (*pcVar5)();
        }
        uVar11 = uVar14 - 2;
        if (lVar9 - lVar8 <= lVar7) {
          uVar11 = uVar10;
        }
      }
LAB_10003a890:
      uVar10 = uVar11 - 1;
      if (uVar14 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9ac);
        (*pcVar5)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        _swift_release(param_4);
        *param_1 = uVar12;
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003aa10);
        (*pcVar5)();
      }
      plVar2 = (long *)(lVar1 + uVar10 * 0x10);
      lVar13 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar11 * 0x10);
      lVar7 = *plVar3;
      lVar9 = plVar3[1];
      _swift_retain(param_4);
      FUN_10003a2fc(lVar8 + lVar13 * 0x10,lVar8 + lVar7 * 0x10,lVar8 + lVar9 * 0x10,param_2,param_4)
      ;
      _swift_release(param_4);
      if (unaff_x21 != 0) {
        *param_1 = uVar12;
        _swift_release(param_4);
        return 1;
      }
      if (lVar9 < lVar13) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9b0);
        (*pcVar5)();
      }
      uVar15 = *(ulong *)(uVar12 + 0x10);
      if (uVar15 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9b4);
        (*pcVar5)();
      }
      *plVar2 = lVar13;
      plVar2[1] = lVar9;
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10003a9b8);
        (*pcVar5)();
      }
      uVar14 = uVar15 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar11) * 0x10);
      *(ulong *)(uVar12 + 0x10) = uVar14;
    } while (2 < uVar15);
    _swift_release(param_4);
    *param_1 = uVar12;
  }
  return 1;
}

