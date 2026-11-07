// rea decompile_all
// name: FUN_1007b52c4
// address: 0x1007b52c4
// body: available
// range: 0x1007b52c4-0x1007b5413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007b52c4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    lVar6 = *param_3;
    uVar10 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar10 & 1) == 0) {
      FUN_10006f924();
    }
    *param_1 = uVar8;
    uVar10 = *(ulong *)(uVar8 + 0x10);
    do {
      uVar4 = uVar10 - 2;
      if (uVar10 < 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b53f4);
        (*pcVar5)();
      }
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b5414);
        (*pcVar5)();
      }
      lVar1 = uVar8 + 0x20;
      plVar2 = (long *)(lVar1 + uVar4 * 0x10);
      lVar9 = *plVar2;
      plVar3 = (long *)(lVar1 + (uVar10 - 1) * 0x10);
      lVar7 = plVar3[1];
      FUN_1007b5414(lVar6 + lVar9 * 0x10,lVar6 + *plVar3 * 0x10,lVar6 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b53f8);
        (*pcVar5)();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b53fc);
        (*pcVar5)();
      }
      *plVar2 = lVar9;
      *(long *)(lVar1 + uVar4 * 0x10 + 8) = lVar7;
      *param_1 = uVar8;
      if (*(ulong *)(uVar8 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b5400);
        (*pcVar5)();
      }
      lVar7 = *(ulong *)(uVar8 + 0x10) - 1;
      _memmove(plVar3,(void *)(lVar1 + uVar10 * 0x10),(lVar7 - (uVar10 - 1)) * 0x10);
      *(long *)(uVar8 + 0x10) = lVar7;
      uVar8 = *param_1;
      uVar10 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar10);
  }
  return 1;
}

