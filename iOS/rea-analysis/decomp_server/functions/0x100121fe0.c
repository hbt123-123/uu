// rea decompile_all
// name: FUN_100121fe0
// address: 0x100121fe0
// body: available
// range: 0x100121fe0-0x1001220b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100121fe0(void)

{
  ID self;
  
  _swift_getObjectType();
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001220b4,0,0xd00000000000008d,0x800000010088dd30,0x74696e696564,
                0xe600000000000000,0x1d,0);
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_(self,"removeObserver:");
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}

