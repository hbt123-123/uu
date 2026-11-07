// rea decompile_all
// name: FUN_1000d2ad0
// address: 0x1000d2ad0
// body: available
// range: 0x1000d2ad0-0x1000d2d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000d2ad0(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar12 = *param_1;
  if (1 < *(ulong *)(uVar12 + 0x10)) {
    _swift_retain(param_4);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar12;
    uVar6 = *(ulong *)(uVar12 + 0x10);
    do {
      lVar8 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar12 + 0x28),*(long *)(uVar12 + 0x20));
          lVar7 = *(long *)(uVar12 + 0x28) - *(long *)(uVar12 + 0x20);
LAB_1000d2b9c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d4c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar12 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar9 = plVar1[1];
          lVar10 = lVar9 - lVar2;
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d54);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar12 + 0x20 + lVar8 * 0x10);
          lVar2 = *plVar1;
          lVar9 = plVar1[1];
          lVar3 = lVar9 - lVar2;
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d60);
            (*pcVar4)();
          }
          if (SCARRY8(lVar10,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d68);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar7 <= lVar10 + lVar3) {
            lVar9 = uVar6 - 2;
            if (lVar3 <= lVar7) {
              lVar9 = lVar8;
            }
            goto LAB_1000d2c3c;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d6c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar12 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          bVar5 = SBORROW8(lVar10,lVar2);
          lVar10 = lVar10 - lVar2;
        }
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d5c);
          (*pcVar4)();
        }
        lVar2 = uVar12 + lVar8 * 0x10;
        lVar7 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d64);
          (*pcVar4)();
        }
        lVar9 = lVar8;
        if (lVar2 - lVar7 < lVar10) break;
      }
      else {
        lVar2 = uVar12 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d44);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d48);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar12 + uVar6 * 0x10);
        lVar10 = *plVar1;
        lVar9 = plVar1[1];
        lVar3 = lVar9 - lVar10;
        if (SBORROW8(lVar9,lVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d50);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d58);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40)) goto LAB_1000d2b9c;
        plVar1 = (long *)(uVar12 + 0x20 + lVar8 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d70);
          (*pcVar4)();
        }
        lVar9 = uVar6 - 2;
        if (lVar10 - lVar2 <= lVar7) {
          lVar9 = lVar8;
        }
      }
LAB_1000d2c3c:
      uVar11 = lVar9 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d38);
        (*pcVar4)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        _swift_release(param_4);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d8c);
        (*pcVar4)();
      }
      lVar10 = *(long *)(uVar12 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar12 + 0x20 + lVar9 * 0x10);
      lVar2 = *plVar1;
      lVar7 = plVar1[1];
      _swift_retain(param_4);
      FUN_1000d22e0(lVar8 + lVar10 * 0x48,lVar8 + lVar2 * 0x48,lVar8 + lVar7 * 0x48,param_2,param_4)
      ;
      if (unaff_x21 != 0) break;
      if (lVar7 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d3c);
        (*pcVar4)();
      }
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_10006f924();
      }
      if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d2d40);
        (*pcVar4)();
      }
      lVar8 = uVar12 + uVar11 * 0x10;
      *(long *)(lVar8 + 0x20) = lVar10;
      *(long *)(lVar8 + 0x28) = lVar7;
      *param_1 = uVar12;
      FUN_10005fd60(lVar9);
      uVar12 = *param_1;
      uVar6 = *(ulong *)(uVar12 + 0x10);
    } while (1 < uVar6);
    _swift_release(param_4);
  }
  return 1;
}

