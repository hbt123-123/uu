// rea decompile_all
// name: thunk_FUN_10039108c
// address: 0x1003911fc
// body: available
// range: 0x1003911fc-0x1003911ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_10039108c(long param_1)

{
  void *pvVar1;
  void *pvStack_28;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_10037c9a4();
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    thunk_FUN_10037edac();
    operator_delete(pvVar1);
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    pvStack_28 = pvVar1;
    FUN_100391b1c(&pvStack_28);
    operator_delete(pvVar1);
  }
  return param_1;
}

