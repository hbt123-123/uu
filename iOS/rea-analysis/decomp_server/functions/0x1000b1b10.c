// rea decompile_all
// name: FUN_1000b1b10
// address: 0x1000b1b10
// body: available
// range: 0x1000b1b10-0x1000b1c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b1b10(void)

{
  ID self;
  
  self = NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
  if (DAT_100a73b38 != -1) {
    _swift_once(&DAT_100a73b38,FUN_1000b1470);
  }
  NSDistributedNotificationCenter::removeObserver_name_object_(self,"removeObserver:name:object:");
  if (DAT_100a73b40 != -1) {
    _swift_once(&DAT_100a73b40,FUN_1000b14a4);
  }
  NSDistributedNotificationCenter::removeObserver_name_object_(self,"removeObserver:name:object:");
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000b1c58,0,0xd000000000000099,0x8000000100881de0,0x74696e696564,
                0xe600000000000000,0xb5,0);
  FUN_1000b1f20();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}

