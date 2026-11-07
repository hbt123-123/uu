// rea decompile_all
// name: FUN_100098dec
// address: 0x100098dec
// body: available
// range: 0x100098dec-0x10009906f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100098dec(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar4 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
LAB_100098ea4:
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100099038);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar5 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100099040);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009904c);
            (*pcVar3)();
          }
          if (SCARRY8(lVar5,lVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100099054);
            (*pcVar3)();
          }
          bVar4 = false;
          if (lVar7 <= lVar5 + lVar12) {
            lVar10 = uVar6 - 2;
            if (lVar12 <= lVar7) {
              lVar10 = lVar9;
            }
            goto LAB_100098f44;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100099058);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar5 = plVar1[1];
          bVar4 = SBORROW8(lVar5,lVar2);
          lVar5 = lVar5 - lVar2;
        }
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099048);
          (*pcVar3)();
        }
        lVar2 = uVar8 + lVar9 * 0x10;
        lVar7 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099050);
          (*pcVar3)();
        }
        lVar10 = lVar9;
        if (lVar2 - lVar7 < lVar5) {
          return 1;
        }
      }
      else {
        lVar2 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099030);
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099034);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar5 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar5;
        if (SBORROW8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009903c);
          (*pcVar3)();
        }
        if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100099044);
          (*pcVar3)();
        }
        bVar4 = false;
        if (lVar7 + lVar12 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40))
        goto LAB_100098ea4;
        plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
        lVar2 = *plVar1;
        lVar5 = plVar1[1];
        if (SBORROW8(lVar5,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009905c);
          (*pcVar3)();
        }
        lVar10 = uVar6 - 2;
        if (lVar5 - lVar2 <= lVar7) {
          lVar10 = lVar9;
        }
      }
LAB_100098f44:
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100099024);
        (*pcVar3)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100099070);
        (*pcVar3)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar2 = *plVar1;
      lVar7 = plVar1[1];
      lVar5 = 0;
      __s10Foundation3URLVMa();
      lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      FUN_100099070(lVar9 + lVar5 * lVar12,lVar9 + lVar5 * lVar2,lVar9 + lVar5 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100099028);
        (*pcVar3)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_10006f924();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10009902c);
        (*pcVar3)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_10005fd60(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}

