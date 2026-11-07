// rea decompile_all
// name: FUN_1006a7800
// address: 0x1006a7800
// body: available
// range: 0x1006a7800-0x1006a7873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a7870 to 0x1007de020 ___cxa_atexit (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a7800(void)

{
  FUN_1006978f8(&DAT_100b2c568,0);
  ___cxa_atexit(thunk_FUN_100697440,&DAT_100b2c568,0x100000000);
  FUN_1006978f8(&DAT_100b2c5c0,0);
  ___cxa_atexit(thunk_FUN_100697440,&DAT_100b2c5c0,0x100000000);
  return;
}

