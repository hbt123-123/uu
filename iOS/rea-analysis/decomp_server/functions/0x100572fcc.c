// rea decompile_all
// name: FUN_100572fcc
// address: 0x100572fcc
// body: available
// range: 0x100572fcc-0x100573027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100572fcc(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar5 != 0) && (param_1 != param_2)) {
    pcVar6 = (char *)(param_1 + 0x20);
    pcVar7 = (char *)(param_2 + 0x20);
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100573028);
        (*pcVar3)();
      }
      cVar1 = *pcVar6;
      cVar2 = *pcVar7;
      bVar4 = lVar5 != 1;
      lVar5 = lVar5 + -1;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 == cVar2 && bVar4);
    return cVar1 == cVar2;
  }
  return true;
}

