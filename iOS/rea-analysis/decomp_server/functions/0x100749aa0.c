// rea decompile_all
// name: SentryCrashWrapper::stopBinaryImageCache
// address: 0x100749aa0
// body: available
// range: 0x100749aa0-0x100749aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryCrashWrapper::stopBinaryImageCache(ID param_1,SEL param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abb670);
  pvVar1 = DAT_100b2e2c0;
  if (DAT_100b2e2c8 != 0) {
    DAT_100b2e2c0 = (void *)0x0;
    DAT_100b2e2c8 = 0;
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x48);
      _free(pvVar1);
      pvVar1 = pvVar2;
    }
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abb670);
  return;
}

