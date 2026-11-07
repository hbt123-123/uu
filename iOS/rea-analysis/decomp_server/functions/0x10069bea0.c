// rea decompile_all
// name: FUN_10069bea0
// address: 0x10069bea0
// body: available
// range: 0x10069bea0-0x10069bf0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069bea0(void)

{
  code *pcVar1;
  
  DAT_100b2c480 = 0;
  DAT_100b2c488 = 0;
  pcVar1 = FUN_100697f60;
  ___cxa_atexit(FUN_100697f60,&DAT_100b2c480,0x100000000);
  DAT_100b2c490 = 0;
  FUN_10069f164();
  DAT_100b2c4a0 = 0xfff;
  DAT_100b2c498 = pcVar1;
  FUN_10069f164();
  DAT_100b2c4a8 = 2;
  DAT_100b2c4b0 = pcVar1;
  return;
}

