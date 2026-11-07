// rea decompile_all
// name: SentryFileIOTracker::mainThreadExtraInfo:
// address: 0x100742320
// body: available
// range: 0x100742320-0x1007424cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileIOTracker::mainThreadExtraInfo_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar1 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_blocked_main_thread);
  if ((int)IVar1 != 0) {
    IVar1 = threadInspector(param_1);
    IVar1 = objc_stub::stacktraceForCurrentThreadAsyncUnsafe(IVar1);
    IVar1 = objc_stub::frames(IVar1);
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0xc2000000;
    local_68 = FUN_1007424d0;
    puStack_60 = &DAT_1009e88c0;
    local_58 = param_1;
    IVar2 = NSPredicate::predicateWithBlock_((ID)&_OBJC_CLASS___NSPredicate,&local_78);
    IVar1 = objc_stub::filteredArrayUsingPredicate_(IVar1,IVar2);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 < 2) {
      IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
      objc_stub::setDataValue_forKey_(param_3,IVar1,&cf_blocked_main_thread);
    }
    else {
      objc_stub::setFrames_(param_3,IVar1);
    }
  }
  return;
}

