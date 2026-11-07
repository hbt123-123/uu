// rea decompile_all
// name: FUN_1003a037c
// address: 0x1003a037c
// body: available
// range: 0x1003a037c-0x1003a03db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a037c(void)

{
  ID self;
  long unaff_x20;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(self,"removeObserver:");
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}

