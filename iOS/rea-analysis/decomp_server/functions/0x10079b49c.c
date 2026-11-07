// rea decompile_all
// name: FUN_10079b49c
// address: 0x10079b49c
// body: available
// range: 0x10079b49c-0x10079b4e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10079b49c(pthread_t param_1)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  FUN_10079b210();
  if (param_1 == (pthread_t)0x0) {
    pvVar1 = (void *)0x0;
    lVar3 = 0;
  }
  else {
    pvVar1 = _pthread_get_stackaddr_np(param_1);
    sVar2 = _pthread_get_stacksize_np(param_1);
    lVar3 = (long)pvVar1 - sVar2;
  }
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = pvVar1;
  return auVar4;
}

