// rea decompile_all
// name: SentryFileIOTracker::startTrackingReadingFilePath:origin:operation:
// address: 0x1007425f0
// body: available
// range: 0x1007425f0-0x100742773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100742770 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryFileIOTracker::startTrackingReadingFilePath_origin_operation_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread);
  IVar1 = NSThread::threadDictionary(IVar1);
  IVar1 = NSThread::objectForKey_(IVar1,&cf_SENTRY_TRACKING_COUNTER_KEY);
  IVar2 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = NSThread::threadDictionary(IVar2);
  IVar3 = NSThread::intValue(IVar1);
  IVar3 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 + 1));
  NSThread::setObject_forKey_(IVar2,IVar3,&cf_SENTRY_TRACKING_COUNTER_KEY);
  if (IVar1 == 0) {
    IVar1 = spanForPath_origin_operation_size_(param_1,param_3,param_4,param_5,0);
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}

