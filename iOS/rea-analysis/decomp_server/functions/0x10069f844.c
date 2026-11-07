// rea decompile_all
// name: FUN_10069f844
// address: 0x10069f844
// body: available
// range: 0x10069f844-0x10069f87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069f844(long *param_1)

{
  void *pvVar1;
  
  FUN_10069f5c4(*param_1);
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_1006a49cc();
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return;
}

