// rea decompile_all
// name: FUN_1006a8ee8
// address: 0x1006a8ee8
// body: available
// range: 0x1006a8ee8-0x1006a8f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006a8ee8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_1006a80f0((long)pvVar1 + 0x28);
    if (*(char *)((long)pvVar1 + 0x1f) < '\0') {
      operator_delete(*(void **)((long)pvVar1 + 8));
    }
    FUN_1006a8f40(pvVar1,0);
    operator_delete(pvVar1);
  }
  return param_1;
}

