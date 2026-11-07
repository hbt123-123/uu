// rea decompile_all
// name: FUN_1006290cc
// address: 0x1006290cc
// body: available
// range: 0x1006290cc-0x1006292bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006290cc(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long local_50;
  long local_48;
  
  plVar3 = &local_50;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar9 = *unaff_x20;
  lVar11 = *(long *)(uVar9 + 0x10);
  if (SCARRY8(lVar11,lVar13)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006291b0);
    (*pcVar1)();
  }
  uVar2 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar2 == 0) || (uVar4 = *(ulong *)(uVar9 + 0x18) >> 1, (long)uVar4 < lVar11 + lVar13)) {
    FUN_1006295a0();
    uVar4 = *(ulong *)(uVar2 + 0x18) >> 1;
    uVar9 = uVar2;
  }
  puVar12 = (undefined1 *)(uVar4 - *(long *)(uVar9 + 0x10));
  FUN_100629468(&local_50,param_1,uVar9 + *(long *)(uVar9 + 0x10) + 0x20,puVar12);
  _swift_bridgeObjectRelease(param_1);
  lVar11 = local_50;
  if ((long)plVar3 < lVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006291b4);
    (*pcVar1)();
  }
  if (plVar3 != (long *)0x0) {
    if (SCARRY8(*(long *)(uVar9 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10062929c);
      (*pcVar1)();
    }
    *(undefined1 **)(uVar9 + 0x10) = (undefined1 *)((long)plVar3 + *(long *)(uVar9 + 0x10));
  }
  if ((plVar3 != (long *)puVar12) || (local_48 == 0)) {
LAB_100629188:
    _swift_bridgeObjectRelease(local_50);
    *unaff_x20 = uVar9;
    return;
  }
  uVar2 = local_48 - 1;
  if (SBORROW8(local_48,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006292b4);
    (*pcVar1)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006292b8);
    (*pcVar1)();
  }
  if (*(ulong *)(local_50 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006292bc);
    (*pcVar1)();
  }
  uVar5 = *(undefined1 *)(local_50 + uVar2 + 0x20);
  lVar13 = local_50 + 0x1f;
  uVar4 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  do {
    while( true ) {
      uVar6 = *(ulong *)(uVar10 + 0x18) >> 1;
      if ((long)(uVar4 + 1) <= (long)uVar6) break;
      uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1006295a0(uVar9,uVar4 + 1,1,uVar10);
      uVar6 = *(ulong *)(uVar9 + 0x18) >> 1;
      if ((long)uVar6 <= (long)uVar4) goto LAB_1006291ec;
LAB_10062920c:
      lVar7 = 0;
      lVar8 = uVar9 + 0x20;
      do {
        *(undefined1 *)(lVar8 + uVar4) = uVar5;
        if (uVar2 + lVar7 == 0) {
          *(ulong *)(uVar9 + 0x10) = (uVar4 - lVar7) + 1;
          goto LAB_100629188;
        }
        if (*(long *)(lVar11 + 0x10) <= (long)(uVar2 + lVar7 + -1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006292b0);
          (*pcVar1)();
        }
        uVar5 = *(undefined1 *)(lVar13 + uVar2 + lVar7);
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + 1;
      } while (uVar4 - uVar6 != lVar7);
      uVar2 = uVar2 + lVar7;
      *(ulong *)(uVar9 + 0x10) = uVar6;
      uVar4 = uVar6;
      uVar10 = uVar9;
    }
    uVar9 = uVar10;
    if ((long)uVar4 < (long)uVar6) goto LAB_10062920c;
LAB_1006291ec:
    *(ulong *)(uVar9 + 0x10) = uVar4;
    uVar10 = uVar9;
  } while( true );
}

