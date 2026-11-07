// rea decompile_all
// name: FUN_1000e3bf4
// address: 0x1000e3bf4
// body: available
// range: 0x1000e3bf4-0x1000e3c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000e3bf4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar5 != 0) && (param_1 != param_2)) {
    plVar6 = (long *)(param_1 + 0x20);
    plVar7 = (long *)(param_2 + 0x20);
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e3c6c);
        (*pcVar3)();
      }
      plVar1 = plVar6 + 1;
      lVar8 = *plVar6;
      plVar2 = plVar7 + 1;
      lVar9 = *plVar7;
    } while ((lVar8 == lVar9 && *plVar1 == *plVar2) &&
            (bVar4 = lVar5 != 1, lVar5 = lVar5 + -1, plVar6 = plVar6 + 2, plVar7 = plVar7 + 2, bVar4
            ));
    return lVar8 == lVar9 && *plVar1 == *plVar2;
  }
  return true;
}

