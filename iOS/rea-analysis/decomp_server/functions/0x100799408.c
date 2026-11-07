// rea decompile_all
// name: FUN_100799408
// address: 0x100799408
// body: available
// range: 0x100799408-0x10079947f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100799408(time_t param_1,char *param_2)

{
  tm local_60;
  time_t local_28;
  
  local_60.tm_zone = (char *)0x0;
  local_60.tm_wday = 0;
  local_60.tm_yday = 0;
  local_60.tm_mon = 0;
  local_60.tm_year = 0;
  local_60.tm_gmtoff = 0;
  local_60.tm_isdst = 0;
  local_60._36_4_ = 0;
  local_60.tm_hour = 0;
  local_60.tm_mday = 0;
  local_60.tm_sec = 0;
  local_60.tm_min = 0;
  local_28 = param_1;
  _gmtime_r(&local_28,&local_60);
  _snprintf(param_2,0x15,"%04d-%02d-%02dT%02d:%02d:%02dZ");
  return;
}

