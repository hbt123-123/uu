// rea decompile_all
// name: FUN_100788cb8
// address: 0x100788cb8
// body: available
// range: 0x100788cb8-0x100788d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100788cb8(int param_1)

{
  double dVar1;
  timeval local_40;
  
  dVar1 = DAT_100b2e0e0;
  if (DAT_100b2e0f0 != '\0') {
    DAT_100b2e0e8._0_1_ = (undefined1)param_1;
    if (param_1 == 0) {
      _gettimeofday(&local_40,(void *)0x0);
      dVar1 = ((double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec) - dVar1;
      DAT_100b2e0b8 = DAT_100b2e0b8 + dVar1;
      DAT_100b2e0a0 = DAT_100b2e0a0 + dVar1;
    }
    else {
      _gettimeofday(&local_40,(void *)0x0);
      DAT_100b2e0e0 = (double)local_40.tv_usec / 1000000.0 + (double)local_40.tv_sec;
    }
  }
  return;
}

