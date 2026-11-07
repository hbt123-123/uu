// rea decompile_all
// name: FUN_1007a18c4
// address: 0x1007a18c4
// body: available
// range: 0x1007a18c4-0x1007a194f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a193c to 0x1007decf8 _pthread_mutex_unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a18c4(code *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  DAT_100b2e2d0 = param_1;
  if (param_1 != (code *)0x0) {
    _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abb670);
    if (DAT_100b2e2c8 != 0) {
      puVar2 = &DAT_100b2e278;
      lVar1 = DAT_100b2e2c8;
      do {
        if (*(char *)(puVar2 + 8) != '\0') {
          (*param_1)(puVar2);
          lVar1 = DAT_100b2e2c8;
        }
        puVar2 = (undefined8 *)puVar2[9];
      } while (puVar2 != (undefined8 *)0x0 && lVar1 != 0);
    }
    _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abb670);
    return;
  }
  return;
}

