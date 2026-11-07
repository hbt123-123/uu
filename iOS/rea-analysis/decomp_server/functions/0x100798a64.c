// rea decompile_all
// name: SentryMetricProfiler::recordCPUsage
// address: 0x100798a64
// body: available
// range: 0x100798a64-0x100798c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryMetricProfiler::recordCPUsage(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  long local_58;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar1 = objc_stub::FUN_1007f6d20(IVar1);
  local_58 = 0;
  IVar1 = objc_stub::FUN_1007e7440(IVar1,&local_58);
  if (local_58 == 0) {
    if (IVar1 != 0) {
      _objc_sync_enter();
      self = *(ID *)(param_1 + 0x10);
      IVar1 = objc_stub::FUN_1007ee480(param_1,IVar1);
      objc_stub::addObject_(self,IVar1);
      _objc_sync_exit(param_1);
    }
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMetricProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_FailedtoreadCPUusages___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
    }
  }
  return;
}

