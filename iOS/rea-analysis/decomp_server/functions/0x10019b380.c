// rea decompile_all
// name: FUN_10019b380
// address: 0x10019b380
// body: available
// range: 0x10019b380-0x10019b3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019b380(void)

{
  ID IVar1;
  char *pcVar2;
  
  pcVar2 = "mainBundle";
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_1004078f4();
  DAT_100b36278 = 0x312e302e30;
  if (pcVar2 != (char *)0x0) {
    DAT_100b36278 = IVar1;
  }
  DAT_100b36280 = (char *)0xe500000000000000;
  if (pcVar2 != (char *)0x0) {
    DAT_100b36280 = pcVar2;
  }
  return 0;
}

