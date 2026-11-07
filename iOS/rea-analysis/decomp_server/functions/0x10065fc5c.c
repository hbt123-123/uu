// rea decompile_all
// name: FUN_10065fc5c
// address: 0x10065fc5c
// body: available
// range: 0x10065fc5c-0x10065fd1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065fc5c(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *unaff_x20;
  long lVar8;
  
  uVar7 = *unaff_x20;
  lVar8 = *(long *)(uVar7 + 0x10);
  if (lVar8 != 0) {
    uVar4 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_1006541a4();
    }
    bVar3 = true;
    lVar8 = 1 - lVar8;
    lVar5 = 4;
    while (bVar2 = *(ulong *)(uVar7 + 0x10) <= lVar5 - 4U, !bVar3) {
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fd0c);
        (*pcVar1)();
      }
      *(ulong *)(uVar7 + lVar5 * 8) = ~*(ulong *)(uVar7 + lVar5 * 8);
      if (lVar8 == 0) goto LAB_10065fcec;
      bVar3 = false;
LAB_10065fc94:
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 1;
      if (lVar8 == 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fd04);
        (*pcVar1)();
      }
    }
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10065fd08);
      (*pcVar1)();
    }
    lVar6 = *(long *)(uVar7 + lVar5 * 8);
    bVar3 = lVar6 == 0;
    *(long *)(uVar7 + lVar5 * 8) = -lVar6;
    if (lVar8 != 0) goto LAB_10065fc94;
LAB_10065fcec:
    *unaff_x20 = uVar7;
  }
  return;
}

