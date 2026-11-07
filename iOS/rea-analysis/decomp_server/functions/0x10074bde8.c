// rea decompile_all
// name: FUN_10074bde8
// address: 0x10074bde8
// body: available
// range: 0x10074bde8-0x10074beb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10074bde8(char *param_1,char *param_2)

{
  tm local_70;
  time_t tStack_38;
  
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abaf90);
  DAT_100b2cec0 = _strdup(param_1);
  DAT_100b2cec8 = _strdup(param_2);
  FUN_10074a914(param_2);
  FUN_10074beb4();
  _time(&tStack_38);
  _gmtime_r(&tStack_38,&local_70);
  DAT_100b2ced0 =
       (local_70.tm_min * 0x3d + local_70.tm_hour * 0x4c +
        local_70.tm_yday * 0x120 + local_70.tm_year * 0x1c0 + local_70.tm_sec) * 0x800000;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abaf90);
  return;
}

