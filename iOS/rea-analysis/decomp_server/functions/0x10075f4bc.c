// rea decompile_all
// name: SentryNetworkTracker::addBaggageHeader:traceHeader:toRequest:
// address: 0x10075f4bc
// body: available
// range: 0x10075f4bc-0x10075f8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075f8f4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryNetworkTracker::addBaggageHeader_traceHeader_toRequest_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *self;
  cfstringStruct *pcVar3;
  code *pcVar4;
  
  IVar1 = objc_stub::FUN_1007f1920(param_1,param_5);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::FUN_1007e78c0(param_5);
      IVar1 = objc_stub::URL(IVar1);
      objc_stub::absoluteString(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Notaddingtrace_idandbaggageheadersfor__);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  else {
    if (param_3 == 0) {
      self = &cf___;
    }
    else {
      IVar1 = objc_stub::FUN_1007e78c0(param_5);
      IVar1 = objc_stub::FUN_1007e52e0(IVar1);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_baggage);
      IVar1 = objc_stub::FUN_1007e7f40
                        ((ID)&objc::class_t::_TtC6Sentry26SentryBaggageSerialization,IVar1);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_sentry_trace_id);
      if (IVar2 == 0) {
        self = (cfstringStruct *)objc_stub::FUN_1007f71c0(param_3,IVar1);
      }
      else {
        self = &cf___;
      }
    }
    IVar1 = objc_stub::FUN_1007e78c0(param_5);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableURLRequest);
    IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar1 == 0) {
      pcVar3 = &cf_setCurrentRequest_;
      _NSSelectorFromString(&cf_setCurrentRequest_);
      IVar1 = objc_stub::respondsToSelector_(param_5,pcVar3);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_1007e78c0(param_5);
        IVar1 = objc_stub::mutableCopy(IVar1);
        IVar2 = objc_stub::FUN_1007f8040(IVar1,&cf_sentry_trace);
        if (IVar2 == 0) {
          IVar2 = objc_stub::value(param_4);
          objc_stub::setValue_forHTTPHeaderField_(IVar1,IVar2,&cf_sentry_trace);
        }
        IVar2 = objc_stub::length((ID)self);
        if (IVar2 != 0) {
          objc_stub::setValue_forHTTPHeaderField_(IVar1,self,&cf_baggage);
        }
        pcVar4 = (code *)objc_stub::methodForSelector_(param_5,pcVar3);
        (*pcVar4)(param_5,pcVar3,IVar1);
      }
    }
    else {
      IVar1 = objc_stub::FUN_1007e78c0(param_5);
      IVar2 = objc_stub::FUN_1007f8040(IVar1,&cf_sentry_trace);
      if (IVar2 == 0) {
        IVar2 = objc_stub::value(param_4);
        objc_stub::setValue_forHTTPHeaderField_(IVar1,IVar2,&cf_sentry_trace);
      }
      IVar2 = objc_stub::length((ID)self);
      if (IVar2 != 0) {
        objc_stub::setValue_forHTTPHeaderField_(IVar1,self,&cf_baggage);
      }
    }
  }
  return;
}

