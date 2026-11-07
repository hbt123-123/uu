// rea decompile_all
// name: FUN_100673e6c
// address: 0x100673e6c
// body: available
// range: 0x100673e6c-0x1006741b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067415c to 0x1007df484 _swift_slowDealloc (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100673e6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  
  lVar13 = *(long *)(unaff_x20 + 0x30);
  if (*(ulong *)(lVar13 + 0x10) >> 0x3c != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067416c);
    (*pcVar4)();
  }
  plVar5 = (long *)(*(ulong *)(lVar13 + 0x10) << 3);
  _swift_slowAlloc(plVar5,0xffffffffffffffff);
  lVar14 = *(long *)(lVar13 + 0x10);
  if (lVar14 != 0) {
    _bzero(plVar5,lVar14 << 3);
    lVar21 = 0;
    lVar22 = 0;
    plVar10 = plVar5;
    do {
      if (lVar22 < 0x10) {
        if (lVar22 + 0xf000000000000000U >> 0x3d < 7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674164);
          (*pcVar4)();
        }
        if (SCARRY8(param_3,lVar21)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674168);
          (*pcVar4)();
        }
        lVar6 = param_1;
        _swift_unknownObjectRetain();
        FUN_10067c9e0();
        *plVar10 = lVar6;
      }
      else {
        uVar8 = plVar10[-2];
        uVar16 = plVar10[-0xf];
        *plVar10 = plVar10[-7] + plVar10[-0x10] +
                   ((uVar8 >> 0x13 | uVar8 << 0x2d) ^ (uVar8 >> 0x3d | uVar8 << 3) ^ uVar8 >> 6) +
                   ((uVar16 >> 1 | uVar16 << 0x3f) ^ (uVar16 >> 8 | uVar16 << 0x38) ^ uVar16 >> 7);
      }
      lVar22 = lVar22 + 1;
      plVar10 = plVar10 + 1;
      lVar21 = lVar21 + 8;
    } while (lVar14 != lVar22);
  }
  uVar16 = *param_5;
  uVar8 = *(ulong *)(uVar16 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674170);
    (*pcVar4)();
  }
  if (uVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674174);
    (*pcVar4)();
  }
  if (uVar8 < 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674178);
    (*pcVar4)();
  }
  if (uVar8 == 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067417c);
    (*pcVar4)();
  }
  if (uVar8 < 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674180);
    (*pcVar4)();
  }
  if (uVar8 == 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674184);
    (*pcVar4)();
  }
  if (uVar8 < 7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674188);
    (*pcVar4)();
  }
  if (uVar8 == 7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067418c);
    (*pcVar4)();
  }
  uVar1 = *(ulong *)(uVar16 + 0x20);
  uVar15 = *(ulong *)(uVar16 + 0x28);
  uVar23 = *(ulong *)(uVar16 + 0x30);
  uVar20 = *(ulong *)(uVar16 + 0x38);
  uVar8 = *(ulong *)(uVar16 + 0x40);
  uVar19 = *(ulong *)(uVar16 + 0x48);
  uVar18 = *(ulong *)(uVar16 + 0x50);
  uVar17 = *(ulong *)(uVar16 + 0x58);
  lVar14 = *(long *)(lVar13 + 0x10);
  uVar9 = uVar1;
  if (lVar14 != 0) {
    uVar7 = uVar20;
    plVar10 = (long *)(lVar13 + 0x20);
    plVar11 = plVar5;
    uVar12 = uVar17;
    uVar2 = uVar15;
    uVar3 = uVar19;
    do {
      uVar19 = uVar8;
      uVar15 = uVar9;
      uVar17 = uVar18;
      uVar18 = uVar3;
      uVar20 = uVar23;
      uVar23 = uVar2;
      lVar13 = (uVar19 & uVar18 | uVar17 & (uVar19 ^ 0xffffffffffffffff)) + uVar12 + *plVar10 +
               *plVar11 +
               ((uVar19 >> 0xe | uVar19 << 0x32) ^ (uVar19 >> 0x12 | uVar19 << 0x2e) ^
               (uVar19 >> 0x29 | uVar19 << 0x17));
      uVar8 = lVar13 + uVar7;
      uVar9 = ((uVar15 >> 0x1c | uVar15 << 0x24) ^ (uVar15 >> 0x22 | uVar15 << 0x1e) ^
              (uVar15 >> 0x27 | uVar15 << 0x19)) + (uVar15 & (uVar23 ^ uVar20) ^ uVar23 & uVar20) +
              lVar13;
      lVar14 = lVar14 + -1;
      uVar7 = uVar20;
      plVar10 = plVar10 + 1;
      plVar11 = plVar11 + 1;
      uVar12 = uVar17;
      uVar2 = uVar15;
      uVar3 = uVar19;
    } while (lVar14 != 0);
  }
  uVar7 = uVar16;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_1006541e0();
  }
  *(ulong *)(uVar16 + 0x20) = uVar9 + uVar1;
  uVar9 = *(ulong *)(uVar16 + 0x10);
  if (uVar9 < 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741a0);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x28) = *(long *)(uVar16 + 0x28) + uVar15;
  if (uVar9 == 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741a4);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x30) = *(long *)(uVar16 + 0x30) + uVar23;
  if (uVar9 < 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741a8);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x38) = *(long *)(uVar16 + 0x38) + uVar20;
  if (uVar9 == 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741ac);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x40) = *(long *)(uVar16 + 0x40) + uVar8;
  if (uVar9 < 6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741b0);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x48) = *(long *)(uVar16 + 0x48) + uVar19;
  if (uVar9 == 6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741b4);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x50) = *(long *)(uVar16 + 0x50) + uVar18;
  if (uVar9 < 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006741b8);
    (*pcVar4)();
  }
  *(ulong *)(uVar16 + 0x58) = *(long *)(uVar16 + 0x58) + uVar17;
  *param_5 = uVar16;
  _swift_slowDealloc(plVar5,0xffffffffffffffff,0xffffffffffffffff);
  return;
}

