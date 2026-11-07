// rea decompile_all
// name: FUN_100790314
// address: 0x100790314
// body: available
// range: 0x100790314-0x1007904c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007904c4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100790314(long param_1)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m");
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_SDKmainthreadinitstarted___);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
  }
  self = &objc::class_t::SentryHub;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007eb5a0
                    ((ID)self,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  objc_stub::FUN_1007f2280((ID)&objc::class_t::SentrySDK,IVar1);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryCrashWrapper);
  objc_stub::FUN_1007f5e00(IVar2);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar2 = objc_stub::FUN_1007e5d60(IVar2);
  objc_stub::FUN_1007f5de0(IVar2);
  objc_stub::FUN_1007ec8c0((ID)&objc::class_t::SentrySDK);
  FUN_10078b838(*(undefined8 *)(param_1 + 0x30),IVar1);
  return 0;
}

