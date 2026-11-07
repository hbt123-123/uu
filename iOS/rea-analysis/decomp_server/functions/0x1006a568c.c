// rea decompile_all
// name: FUN_1006a568c
// address: 0x1006a568c
// body: available
// range: 0x1006a568c-0x1006a56eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006a568c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1009e6cd0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  return param_1;
}

