// rea decompile_all
// name: FUN_100037f28
// address: 0x100037f28
// body: available
// range: 0x100037f28-0x1000381a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100037f28(ulong *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar9 = *param_1;
  if (1 < *(ulong *)(uVar9 + 0x10)) {
    uVar6 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar9;
    uVar6 = *(ulong *)(uVar9 + 0x10);
    do {
      lVar10 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar8 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
LAB_100037fe8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100038170);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar9 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar7 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100038178);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar3 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100038184);
            (*pcVar4)();
          }
          if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10003818c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar8 <= lVar7 + lVar3) {
            lVar11 = uVar6 - 2;
            if (lVar3 <= lVar8) {
              lVar11 = lVar10;
            }
            goto LAB_100038088;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100038190);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar9 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar7 = plVar1[1];
          bVar5 = SBORROW8(lVar7,lVar2);
          lVar7 = lVar7 - lVar2;
        }
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100038180);
          (*pcVar4)();
        }
        lVar2 = uVar9 + lVar10 * 0x10;
        lVar8 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100038188);
          (*pcVar4)();
        }
        lVar11 = lVar10;
        if (lVar2 - lVar8 < lVar7) {
          return 1;
        }
      }
      else {
        lVar2 = uVar9 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100038168);
          (*pcVar4)();
        }
        lVar8 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10003816c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar9 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar11 = plVar1[1];
        lVar3 = lVar11 - lVar7;
        if (SBORROW8(lVar11,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100038174);
          (*pcVar4)();
        }
        if (SCARRY8(lVar8,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10003817c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar8 + lVar3 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40)) goto LAB_100037fe8;
        plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
        lVar2 = *plVar1;
        lVar7 = plVar1[1];
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100038194);
          (*pcVar4)();
        }
        lVar11 = uVar6 - 2;
        if (lVar7 - lVar2 <= lVar8) {
          lVar11 = lVar10;
        }
      }
LAB_100038088:
      uVar12 = lVar11 - 1;
      if (uVar6 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10003815c);
        (*pcVar4)();
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000381a8);
        (*pcVar4)();
      }
      lVar8 = *(long *)(uVar9 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
      lVar2 = plVar1[1];
      (*param_4)(lVar10 + lVar8 * 0x30,lVar10 + *plVar1 * 0x30,lVar10 + lVar2 * 0x30,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar2 < lVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100038160);
        (*pcVar4)();
      }
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_10006f924();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100038164);
        (*pcVar4)();
      }
      lVar10 = uVar9 + uVar12 * 0x10;
      *(long *)(lVar10 + 0x20) = lVar8;
      *(long *)(lVar10 + 0x28) = lVar2;
      *param_1 = uVar9;
      FUN_10005fd60(lVar11);
      uVar9 = *param_1;
      uVar6 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}

