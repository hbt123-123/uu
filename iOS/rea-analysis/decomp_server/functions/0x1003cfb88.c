// rea decompile_all
// name: FUN_1003cfb88
// address: 0x1003cfb88
// body: available
// range: 0x1003cfb88-0x1003cfe17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1003cfb88(ulong *param_1,undefined8 param_2,long *param_3,code *param_4,code *param_5)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
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
          bVar4 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar7 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
LAB_1003cfc44:
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfde0);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar9 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar5 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfde8);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar8 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdf4);
            (*pcVar3)();
          }
          if (SCARRY8(lVar5,lVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdfc);
            (*pcVar3)();
          }
          bVar4 = false;
          if (lVar7 <= lVar5 + lVar8) {
            lVar11 = uVar6 - 2;
            if (lVar8 <= lVar7) {
              lVar11 = lVar10;
            }
            goto LAB_1003cfce4;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfe00);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar9 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar5 = plVar1[1];
          bVar4 = SBORROW8(lVar5,lVar2);
          lVar5 = lVar5 - lVar2;
        }
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdf0);
          (*pcVar3)();
        }
        lVar2 = uVar9 + lVar10 * 0x10;
        lVar7 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdf8);
          (*pcVar3)();
        }
        lVar11 = lVar10;
        if (lVar2 - lVar7 < lVar5) {
          return 1;
        }
      }
      else {
        lVar2 = uVar9 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdd8);
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfddc);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar9 + uVar6 * 0x10);
        lVar5 = *plVar1;
        lVar11 = plVar1[1];
        lVar8 = lVar11 - lVar5;
        if (SBORROW8(lVar11,lVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfde4);
          (*pcVar3)();
        }
        if (SCARRY8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdec);
          (*pcVar3)();
        }
        bVar4 = false;
        if (lVar7 + lVar8 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40)) goto LAB_1003cfc44;
        plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
        lVar2 = *plVar1;
        lVar5 = plVar1[1];
        if (SBORROW8(lVar5,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfe04);
          (*pcVar3)();
        }
        lVar11 = uVar6 - 2;
        if (lVar5 - lVar2 <= lVar7) {
          lVar11 = lVar10;
        }
      }
LAB_1003cfce4:
      uVar12 = lVar11 - 1;
      if (uVar6 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdcc);
        (*pcVar3)();
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfe18);
        (*pcVar3)();
      }
      lVar8 = *(long *)(uVar9 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
      lVar2 = *plVar1;
      lVar7 = plVar1[1];
      lVar5 = 0;
      (*param_4)();
      lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      (*param_5)(lVar10 + lVar5 * lVar8,lVar10 + lVar5 * lVar2,lVar10 + lVar5 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdd0);
        (*pcVar3)();
      }
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_10006f924();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003cfdd4);
        (*pcVar3)();
      }
      lVar10 = uVar9 + uVar12 * 0x10;
      *(long *)(lVar10 + 0x20) = lVar8;
      *(long *)(lVar10 + 0x28) = lVar7;
      *param_1 = uVar9;
      FUN_10005fd60(lVar11);
      uVar9 = *param_1;
      uVar6 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}

