// rea decompile_all
// name: SentryDependencyContainer::fileManager
// address: 0x10079c0c8
// body: available
// range: 0x10079c0c8-0x10079c293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079c290 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencyContainer::fileManager(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *self;
  undefined8 local_68;
  
  uVar1 = DAT_100b2e250;
  _objc_sync_enter();
  IVar2 = *(ID *)(param_1 + 8);
  if (IVar2 == 0) {
    self = &objc::class_t::SentryFileManager;
    _objc_alloc();
    IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDK);
    local_68 = 0;
    IVar2 = objc_stub::FUN_1007ebf60((ID)self,IVar2,&local_68);
    *(ID *)(param_1 + 8) = IVar2;
    if ((*(long *)(param_1 + 8) == 0) &&
       (IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1),
       (int)IVar2 != 0)) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDependencyContainer.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Couldnotcreatefilemanager___);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
    IVar2 = *(ID *)(param_1 + 8);
  }
  _objc_sync_exit(uVar1);
  return IVar2;
}

