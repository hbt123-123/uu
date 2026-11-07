// rea decompile_all
// name: FUN_1005ce688
// address: 0x1005ce688
// body: available
// range: 0x1005ce688-0x1005ce6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005ce688(long param_1)

{
  if (*(char *)(param_1 + 0x6f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}

