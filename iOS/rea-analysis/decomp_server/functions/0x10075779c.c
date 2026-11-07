// rea decompile_all
// name: FUN_10075779c
// address: 0x10075779c
// body: available
// range: 0x10075779c-0x100757a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075795c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10075779c(long param_1,ID param_2)

{
  ID IVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\0') {
    IVar1 = NSArray::class((ID)&_OBJC_CLASS___NSArray);
    IVar1 = objc_stub::isKindOfClass_(param_2,IVar1);
    if ((int)IVar1 != 0) {
      param_2 = SentryCrashReportFilterPipeline::filterWithFilters_
                          ((ID)&objc::class_t::SentryCrashReportFilterPipeline,param_2);
    }
    IVar1 = objc_stub::conformsToProtocol_(param_2,&objc::protocol_t::SentryCrashReportFilter);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar1 == 0) {
        return 0;
      }
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Reporting/Filters/SentryCrashReportFilterBasic.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Notafilter___);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      return 0;
    }
    IVar1 = *(ID *)(param_1 + 0x28);
  }
  else {
    if (param_2 == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar1 != 0) {
        IVar1 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Reporting/Filters/SentryCrashReportFilterBasic.m"
                          );
        IVar1 = NSString::lastPathComponent(IVar1);
        NSString::stringByDeletingPathExtension(IVar1);
        NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_keyentrywasnil);
        IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      }
      goto LAB_10075792c;
    }
    IVar1 = *(ID *)(param_1 + 0x20);
  }
  objc_stub::addObject_(IVar1,param_2);
LAB_10075792c:
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) ^ 1;
  return 0;
}

