// rea decompile_all
// name: FUN_10069f45c
// address: 0x10069f45c
// body: available
// range: 0x10069f45c-0x10069f4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069f4b0 to 0x1007de074 ___cxa_guard_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069f45c(void)

{
  int iVar1;
  
  iVar1 = 0xb2c548;
  ___cxa_guard_acquire();
  if (iVar1 != 0) {
    FUN_1006928dc(&DAT_100b2c550,"Unknown error");
    ___cxa_atexit(PTR__string_100995110,&DAT_100b2c550,0x100000000);
    ___cxa_guard_release(&DAT_100b2c548);
    return;
  }
  return;
}

