// rea decompile_all
// name: FUN_1007a182c
// address: 0x1007a182c
// body: available
// range: 0x1007a182c-0x1007a1867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a182c(long param_1)

{
  long *plVar1;
  
  plVar1 = &DAT_100b2e278;
  do {
    if (*plVar1 == param_1) {
      *(undefined1 *)(plVar1 + 8) = 0;
      if (DAT_100b2e2d8 == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001007a1860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_100b2e2d8)();
      return;
    }
    plVar1 = (long *)plVar1[9];
  } while (plVar1 != (long *)0x0);
  return;
}

