// rea decompile_all
// name: FUN_100392c48
// address: 0x100392c48
// body: available
// range: 0x100392c48-0x100392c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_100392c48(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 8));
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  return param_1;
}

