// rea decompile_all
// name: FUN_1004281b4
// address: 0x1004281b4
// body: available
// range: 0x1004281b4-0x100428243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004281b4(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    pcVar4 = (char *)(param_2 + 0x28);
    plVar3 = (long *)(param_1 + 0x20);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100428244);
        (*pcVar1)();
      }
      lVar5 = *plVar3;
      lVar6 = *(long *)(pcVar4 + -8);
      if (*pcVar4 == '\x01') {
        if (lVar6 == 0) {
          if (lVar5 != 0) {
            return 0;
          }
        }
        else if (lVar6 == 1) {
          if (lVar5 != 1) {
            return 0;
          }
        }
        else if (lVar5 != 2) {
          return 0;
        }
      }
      else if (lVar5 != lVar6) {
        return 0;
      }
      pcVar4 = pcVar4 + 0x10;
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 2;
    } while (lVar2 != 0);
  }
  return 1;
}

