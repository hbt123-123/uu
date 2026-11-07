// rea decompile_all
// name: FUN_1000e3e80
// address: 0x1000e3e80
// body: available
// range: 0x1000e3e80-0x1000e3edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000e3e80(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar3 != 0) && (param_1 != param_2)) {
    plVar4 = (long *)(param_1 + 0x20);
    plVar5 = (long *)(param_2 + 0x20);
    do {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000e3edc);
        (*pcVar1)();
      }
      lVar6 = *plVar4;
      lVar7 = *plVar5;
      bVar2 = lVar3 != 1;
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (lVar6 == lVar7 && bVar2);
    return lVar6 == lVar7;
  }
  return true;
}

