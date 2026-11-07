// rea decompile_all
// name: FUN_1006aa614
// address: 0x1006aa614
// body: available
// range: 0x1006aa614-0x1006aa65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aa614(long param_1)

{
  tm *ptVar1;
  __darwin_time_t local_38;
  timeval local_30;
  
  _gettimeofday(&local_30,(void *)0x0);
  local_38 = local_30.tv_sec;
  ptVar1 = _localtime(&local_38);
  *(char *)(param_1 + 4) = (char)ptVar1->tm_hour;
  return;
}

