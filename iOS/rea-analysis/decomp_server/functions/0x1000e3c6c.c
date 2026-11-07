// rea decompile_all
// name: FUN_1000e3c6c
// address: 0x1000e3c6c
// body: available
// range: 0x1000e3c6c-0x1000e3cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000e3c6c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar5 != 0) && (param_1 != param_2)) {
    piVar6 = (int *)(param_1 + 0x20);
    piVar7 = (int *)(param_2 + 0x20);
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e3cc8);
        (*pcVar3)();
      }
      iVar1 = *piVar6;
      iVar2 = *piVar7;
      bVar4 = lVar5 != 1;
      lVar5 = lVar5 + -1;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar1 == iVar2 && bVar4);
    return iVar1 == iVar2;
  }
  return true;
}

