// rea decompile_all
// name: FUN_10003d6a8
// address: 0x10003d6a8
// body: available
// range: 0x10003d6a8-0x10003d947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003d6a8(undefined8 param_1,ulong *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x21;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  uVar13 = *param_2;
  if (1 < *(ulong *)(uVar13 + 0x10)) {
    uVar12 = uVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar12 & 1) == 0) {
      FUN_10006f924();
    }
    *param_2 = uVar13;
    lVar1 = uVar13 + 0x20;
    uVar12 = *(ulong *)(uVar13 + 0x10);
    do {
      uVar10 = uVar12 - 1;
      if (uVar12 < 4) {
        if (uVar12 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar13 + 0x28),*(long *)(uVar13 + 0x20));
          lVar8 = *(long *)(uVar13 + 0x28) - *(long *)(uVar13 + 0x20);
LAB_10003d774:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d904);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar13 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar4 = plVar2[1];
          lVar14 = lVar4 - lVar9;
          if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d90c);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar9 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar9;
          if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d918);
            (*pcVar6)();
          }
          if (SCARRY8(lVar14,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d920);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar8 <= lVar14 + lVar5) {
            uVar11 = uVar12 - 2;
            if (lVar5 <= lVar8) {
              uVar11 = uVar10;
            }
            goto LAB_10003d810;
          }
        }
        else {
          if (uVar12 < 2) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d924);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar13 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar14 = plVar2[1];
          bVar7 = SBORROW8(lVar14,lVar9);
          lVar14 = lVar14 - lVar9;
        }
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d914);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar9 = *plVar2;
        lVar8 = plVar2[1];
        if (SBORROW8(lVar8,lVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d91c);
          (*pcVar6)();
        }
        uVar11 = uVar10;
        if (lVar8 - lVar9 < lVar14) break;
      }
      else {
        lVar9 = lVar1 + uVar12 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d8fc);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d900);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar13 + uVar12 * 0x10);
        lVar14 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar14;
        if (SBORROW8(lVar4,lVar14)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d908);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d910);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) goto LAB_10003d774;
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar9 = *plVar2;
        lVar14 = plVar2[1];
        if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d928);
          (*pcVar6)();
        }
        uVar11 = uVar12 - 2;
        if (lVar14 - lVar9 <= lVar8) {
          uVar11 = uVar10;
        }
      }
LAB_10003d810:
      uVar10 = uVar11 - 1;
      if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d8ec);
        (*pcVar6)();
      }
      lVar9 = *param_4;
      if (lVar9 == 0) {
        *param_2 = uVar13;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d948);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar10 * 0x10);
      lVar14 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar11 * 0x10);
      lVar8 = plVar3[1];
      FUN_10003d390(param_1,lVar9 + lVar14 * 0x30,lVar9 + *plVar3 * 0x30,lVar9 + lVar8 * 0x30,
                    param_3);
      if (unaff_x21 != 0) break;
      if (lVar8 < lVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d8f0);
        (*pcVar6)();
      }
      uVar15 = *(ulong *)(uVar13 + 0x10);
      if (uVar15 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d8f4);
        (*pcVar6)();
      }
      *plVar2 = lVar14;
      plVar2[1] = lVar8;
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10003d8f8);
        (*pcVar6)();
      }
      uVar12 = uVar15 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar12 - uVar11) * 0x10);
      *(ulong *)(uVar13 + 0x10) = uVar12;
    } while (2 < uVar15);
    *param_2 = uVar13;
  }
  return 1;
}

