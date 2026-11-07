// rea decompile_all
// name: FUN_100695198
// address: 0x100695198
// body: available
// range: 0x100695198-0x1006951df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100695198(long *param_1,int param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  if (param_2 != 0) {
    plVar1 = param_1;
    FUN_1006951fc();
    *param_1 = (long)plVar1 + (2000000000 - DAT_100b2c440);
  }
  return param_1;
}

