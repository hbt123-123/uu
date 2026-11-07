// rea decompile_all
// name: FUN_100671424
// address: 0x100671424
// body: available
// range: 0x100671424-0x10067172f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006716d4 to 0x1006718cc FUN_1006718cc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100671424(void)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  
  *(undefined4 *)(unaff_x20 + 0x30) = 0;
  _swift_retain();
  lVar3 = 8;
  FUN_1006722f0();
  lVar7 = lVar3 + 0x20;
  _swift_release();
  uVar5 = 0;
  do {
    uVar8 = uVar5 + 1;
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(lVar3 + 0x10) <= (uVar8 & 7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671708);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671710);
        (*pcVar2)();
      }
      iVar9 = *(int *)(lVar7 + (uVar8 & 7) * 4);
      uVar10 = *(uint *)(lVar7 + uVar5 * 4);
      uVar6 = *(ulong *)(unaff_x20 + 0x20);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x20) = uVar6;
      if ((uVar4 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671714);
        (*pcVar2)();
      }
      *(uint *)(uVar6 + uVar5 * 4 + 0x20) = uVar10 | iVar9 << 0x10;
      *(ulong *)(unaff_x20 + 0x20) = uVar6;
      uVar4 = uVar5 & 6 ^ 4;
      if (*(ulong *)(lVar3 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671720);
        (*pcVar2)();
      }
      uVar6 = (ulong)((int)uVar5 + 5) & 7;
      if (*(ulong *)(lVar3 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671728);
        (*pcVar2)();
      }
      iVar9 = *(int *)(lVar7 + uVar4 * 4);
      uVar10 = *(uint *)(lVar7 + uVar6 * 4);
      uVar6 = *(ulong *)(unaff_x20 + 0x28);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x28) = uVar6;
      if ((uVar4 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671730);
        (*pcVar2)();
      }
    }
    else {
      uVar4 = (ulong)((int)uVar5 + 5) & 6;
      if (*(ulong *)(lVar3 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671704);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar3 + 0x10) <= (uVar5 ^ 4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067170c);
        (*pcVar2)();
      }
      iVar9 = *(int *)(lVar7 + uVar4 * 4);
      uVar10 = *(uint *)(lVar7 + (uVar5 ^ 4) * 4);
      uVar6 = *(ulong *)(unaff_x20 + 0x20);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x20) = uVar6;
      if ((uVar4 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671718);
        (*pcVar2)();
      }
      *(uint *)(uVar6 + uVar5 * 4 + 0x20) = uVar10 | iVar9 << 0x10;
      *(ulong *)(unaff_x20 + 0x20) = uVar6;
      if (*(ulong *)(lVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067171c);
        (*pcVar2)();
      }
      if (*(ulong *)(lVar3 + 0x10) <= (uVar8 & 6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100671724);
        (*pcVar2)();
      }
      iVar9 = *(int *)(lVar7 + uVar5 * 4);
      uVar10 = *(uint *)(lVar7 + (uVar8 & 6) * 4);
      uVar6 = *(ulong *)(unaff_x20 + 0x28);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x28) = uVar6;
      if ((uVar4 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067172c);
        (*pcVar2)();
      }
    }
    *(uint *)(uVar6 + uVar5 * 4 + 0x20) = uVar10 | iVar9 << 0x10;
    *(ulong *)(unaff_x20 + 0x28) = uVar6;
    uVar5 = uVar8;
    if (uVar8 == 8) {
      _swift_bridgeObjectRelease(lVar3);
      FUN_1006717b8();
      FUN_1006717b8();
      FUN_1006717b8();
      FUN_1006717b8();
      uVar5 = *(ulong *)(unaff_x20 + 0x28);
      lVar7 = 8;
      while( true ) {
        uVar8 = lVar7 - 8;
        if (*(ulong *)(uVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006716f8);
          (*pcVar2)();
        }
        if (*(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10) <= (uVar8 ^ 4)) break;
        uVar1 = *(uint *)(uVar5 + lVar7 * 4);
        uVar10 = *(uint *)(*(long *)(unaff_x20 + 0x20) + (uVar8 ^ 4) * 4 + 0x20);
        uVar4 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x28) = uVar5;
        if ((uVar4 & 1) == 0) {
          FUN_1006541cc();
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100671700);
          (*pcVar2)();
        }
        *(uint *)(uVar5 + lVar7 * 4) = uVar10 ^ uVar1;
        *(ulong *)(unaff_x20 + 0x28) = uVar5;
        lVar7 = lVar7 + 1;
        if (lVar7 == 0x10) {
          if (*(long *)(unaff_x20 + 0x18) != 0) {
            FUN_1006718cc();
            return;
          }
          return;
        }
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006716fc);
      (*pcVar2)();
    }
  } while( true );
}

