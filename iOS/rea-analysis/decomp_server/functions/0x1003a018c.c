// rea decompile_all
// name: FUN_1003a018c
// address: 0x1003a018c
// body: available
// range: 0x1003a018c-0x1003a025f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a018c(long param_1)

{
  long lVar1;
  ID self;
  
  FUN_1003a05b0();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  lVar1 = DAT_100a891d0;
  _swift_retain(param_1);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a891d0,FUN_1003a9ec4);
  }
  NSNotificationCenter::addObserver_selector_name_object_
            (self,"addObserver:selector:name:object:",param_1,"handleHostChanged",DAT_100b36738,0);
  _swift_release(param_1);
  DAT_100b36710 = param_1;
  return;
}

