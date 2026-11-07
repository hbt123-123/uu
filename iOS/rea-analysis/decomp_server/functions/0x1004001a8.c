// rea decompile_all
// name: FUN_1004001a8
// address: 0x1004001a8
// body: available
// range: 0x1004001a8-0x10040046f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004001a8(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar12 = *param_1;
  if (1 < *(ulong *)(uVar12 + 0x10)) {
    _swift_bridgeObjectRetain(param_4);
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
          bVar4 = SBORROW8(*(long *)(uVar12 + 0x28),*(long *)(uVar12 + 0x20));
          lVar7 = *(long *)(uVar12 + 0x28) - *(long *)(uVar12 + 0x20);
LAB_100400274:
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100400430);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar12 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar9 = plVar1[1];
          lVar5 = lVar9 - lVar2;
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100400438);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar12 + 0x20 + lVar8 * 0x10);
          lVar2 = *plVar1;
          lVar9 = plVar1[1];
          lVar11 = lVar9 - lVar2;
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100400444);
            (*pcVar3)();
          }
          if (SCARRY8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040044c);
            (*pcVar3)();
          }
          bVar4 = false;
          if (lVar7 <= lVar5 + lVar11) {
            lVar9 = uVar6 - 2;
            if (lVar11 <= lVar7) {
              lVar9 = lVar8;
            }
            goto LAB_100400314;
          }
        }
        else {
          if (uVar6 < 2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100400450);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar12 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar5 = plVar1[1];
          bVar4 = SBORROW8(lVar5,lVar2);
          lVar5 = lVar5 - lVar2;
        }
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100400440);
          (*pcVar3)();
        }
        lVar2 = uVar12 + lVar8 * 0x10;
        lVar7 = *(long *)(lVar2 + 0x20);
        lVar2 = *(long *)(lVar2 + 0x28);
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100400448);
          (*pcVar3)();
        }
        lVar9 = lVar8;
        if (lVar2 - lVar7 < lVar5) break;
      }
      else {
        lVar2 = uVar12 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar2 + -0x38),*(long *)(lVar2 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100400428);
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar2 + -0x28) - *(long *)(lVar2 + -0x30);
        if (SBORROW8(*(long *)(lVar2 + -0x28),*(long *)(lVar2 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040042c);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar12 + uVar6 * 0x10);
        lVar5 = *plVar1;
        lVar9 = plVar1[1];
        lVar11 = lVar9 - lVar5;
        if (SBORROW8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100400434);
          (*pcVar3)();
        }
        if (SCARRY8(lVar7,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10040043c);
          (*pcVar3)();
        }
        bVar4 = false;
        if (lVar7 + lVar11 < *(long *)(lVar2 + -0x38) - *(long *)(lVar2 + -0x40))
        goto LAB_100400274;
        plVar1 = (long *)(uVar12 + 0x20 + lVar8 * 0x10);
        lVar2 = *plVar1;
        lVar5 = plVar1[1];
        if (SBORROW8(lVar5,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100400454);
          (*pcVar3)();
        }
        lVar9 = uVar6 - 2;
        if (lVar5 - lVar2 <= lVar7) {
          lVar9 = lVar8;
        }
      }
LAB_100400314:
      uVar10 = lVar9 - 1;
      if (uVar6 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10040041c);
        (*pcVar3)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100400470);
        (*pcVar3)();
      }
      lVar11 = *(long *)(uVar12 + 0x20 + uVar10 * 0x10);
      plVar1 = (long *)(uVar12 + 0x20 + lVar9 * 0x10);
      lVar2 = *plVar1;
      lVar7 = plVar1[1];
      lVar5 = 0;
      __s10Foundation3URLVMa();
      lVar5 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      _swift_bridgeObjectRetain(param_4);
      FUN_1003ffbd8(lVar8 + lVar5 * lVar11,lVar8 + lVar5 * lVar2,lVar8 + lVar5 * lVar7,param_2,
                    param_4);
      if (unaff_x21 != 0) break;
      if (lVar7 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100400420);
        (*pcVar3)();
      }
      uVar6 = uVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_10006f924();
      }
      if (*(ulong *)(uVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100400424);
        (*pcVar3)();
      }
      lVar8 = uVar12 + uVar10 * 0x10;
      *(long *)(lVar8 + 0x20) = lVar11;
      *(long *)(lVar8 + 0x28) = lVar7;
      *param_1 = uVar12;
      FUN_10005fd60(lVar9);
      uVar12 = *param_1;
      uVar6 = *(ulong *)(uVar12 + 0x10);
    } while (1 < uVar6);
    _swift_bridgeObjectRelease(param_4);
  }
  return 1;
}

