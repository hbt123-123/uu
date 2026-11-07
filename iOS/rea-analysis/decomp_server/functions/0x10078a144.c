// rea decompile_all
// name: FUN_10078a144
// address: 0x10078a144
// body: available
// range: 0x10078a144-0x10078a497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078a494 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10078a144(ID param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  std::mutex::lock();
  IVar1 = objc_stub::FUN_1007ef760(param_1);
  IVar1 = objc_stub::sentryIdString(IVar1);
  IVar2 = objc_stub::sentryIdString(param_2);
  IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar3 != 0) {
    IVar3 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      );
    IVar3 = objc_stub::lastPathComponent(IVar3);
    objc_stub::stringByDeletingPathExtension(IVar3);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Trackingrelationshipbetweenprofilerid__andtracerid__)
    ;
    IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
  }
  if (DAT_100b2e0f8 != 0 || DAT_100b2e100 != 0) {
    if (((DAT_100b2e0f8 == 0) || (DAT_100b2e100 == 0)) &&
       (IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3),
       (int)IVar3 != 0)) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Bothstructuresmustbeinitializedsimultaneously_);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,3);
    }
    if (DAT_100b2e0f8 != 0) goto LAB_10078a3e8;
  }
  IVar4 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar3 = DAT_100b2e0f8;
  DAT_100b2e0f8 = IVar4;
  DAT_100b2e100 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,IVar3);
LAB_10078a3e8:
  IVar3 = objc_stub::objectForKeyedSubscript_(DAT_100b2e0f8,IVar1);
  IVar3 = objc_stub::FUN_1007f7b40(IVar3);
  IVar3 = objc_stub::numberWithUnsignedInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 + 1));
  objc_stub::setObject_forKeyedSubscript_(DAT_100b2e0f8,IVar3,IVar1);
  objc_stub::setObject_forKeyedSubscript_(DAT_100b2e100,param_1,IVar2);
  std::mutex::unlock();
  return 0;
}

