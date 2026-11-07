// rea decompile_all
// name: SentryClient::sendEvent:withSession:withScope:
// address: 0x10073da04
// body: available
// range: 0x10073da04-0x10073dda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073dda0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClient::sendEvent_withSession_withScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  if (param_3 == 0) {
    IVar1 = objc_stub::empty((ID)&objc::class_t::_TtC6Sentry8SentryId);
    return IVar1;
  }
  IVar1 = attachmentsForEvent_scope_(param_1,param_3,param_5);
  IVar2 = objc_stub::isFatalEvent(param_3);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::context(param_3);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_replay);
    if (IVar2 != 0) {
      IVar2 = objc_stub::context(param_3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_replay);
      IVar3 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary);
      IVar2 = objc_stub::isKindOfClass_(IVar2,IVar3);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::context(param_3);
        IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_replay);
        IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_replay_id);
        objc_stub::setReplayId_(param_5,IVar2);
      }
    }
  }
  IVar2 = getTraceStateWithEvent_withScope_(param_1,param_3,param_5);
  IVar3 = objc_stub::releaseName(param_4);
  if (IVar3 != 0) {
    IVar3 = objc_stub::releaseName(param_4);
    IVar3 = objc_stub::length(IVar3);
    if (IVar3 != 0) {
      IVar3 = transportAdapter(param_1);
      objc_stub::sendEvent_withSession_traceContext_attachments_(IVar3,param_3,param_4,IVar2,IVar1);
      goto LAB_10073dd20;
    }
  }
  IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar3 != 0) {
    IVar3 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m")
    ;
    IVar3 = NSString::lastPathComponent(IVar3);
    NSString::stringByDeletingPathExtension(IVar3);
    NSString::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Sessionhasnoreleasename_Won_tsendit_);
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
  }
  IVar3 = transportAdapter(param_1);
  objc_stub::sendEvent_traceContext_attachments_(IVar3,param_3,IVar2,IVar1);
LAB_10073dd20:
  IVar1 = objc_stub::eventId(param_3);
  return IVar1;
}

