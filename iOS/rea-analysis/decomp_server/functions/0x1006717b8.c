// rea decompile_all
// name: FUN_1006717b8
// address: 0x1006717b8
// body: available
// range: 0x1006717b8-0x1006718cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006718bc to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006717b8(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  uint uVar9;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x28);
  if (*(long *)(uVar7 + 0x10) != 0) {
    uVar9 = *(uint *)(unaff_x20 + 0x30);
    lVar8 = 8;
    do {
      if (*(ulong *)(*(long *)(unaff_x20 + 0x38) + 0x10) <= lVar8 - 8U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006718c8);
        (*pcVar3)();
      }
      uVar1 = *(uint *)(uVar7 + lVar8 * 4);
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x38) + lVar8 * 4);
      uVar6 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x28) = uVar7;
      if ((uVar6 & 1) == 0) {
        FUN_1006541cc();
      }
      if (*(ulong *)(uVar7 + 0x10) <= lVar8 - 8U) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006718cc);
        (*pcVar3)();
      }
      *(uint *)(uVar7 + lVar8 * 4) = uVar1 + uVar9 + iVar2;
      *(ulong *)(unaff_x20 + 0x28) = uVar7;
      uVar9 = (uint)(*(uint *)(uVar7 + lVar8 * 4) < uVar1);
      if (lVar8 == 0xf) {
        *(uint *)(unaff_x20 + 0x30) = uVar9;
        _swift_retain();
        uVar4 = 8;
        FUN_1006722f0();
        _swift_release();
        uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
        _swift_bridgeObjectRelease(uVar5);
        return;
      }
      uVar6 = lVar8 - 7;
      lVar8 = lVar8 + 1;
    } while (uVar6 < *(ulong *)(uVar7 + 0x10));
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006718c4);
  (*pcVar3)();
}

