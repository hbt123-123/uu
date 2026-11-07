// rea decompile_all
// name: FUN_1005ce7d4
// address: 0x1005ce7d4
// body: available
// range: 0x1005ce7d4-0x1005ce82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1005ce7d4(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (long *)0x0) {
    std::mutex::lock();
    if (((int)param_2[0x14] == 0) && (lVar1 = *param_2, lVar1 != 0)) {
      param_2[0x13] = param_2[0x13] + 1;
      *param_1 = (long)param_2;
      param_1[1] = lVar1;
    }
    std::mutex::unlock();
  }
  return param_1;
}

