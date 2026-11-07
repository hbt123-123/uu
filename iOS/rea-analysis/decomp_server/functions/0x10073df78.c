// rea decompile_all
// name: SentryClient::captureReplayEvent:replayRecording:video:withScope:
// address: 0x10073df78
// body: available
// range: 0x10073df78-0x10073e363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073e360 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryClient::captureReplayEvent_replayRecording_video_withScope_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = prepareEvent_withScope_alwaysAttachStacktrace_(param_1,param_3,param_6,0);
  IVar2 = objc_stub::class((ID)&objc::class_t::_TtC6Sentry17SentryReplayEvent);
  IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((IVar2 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Theeventpreprocessordidn_tupdatethereplayeventinplace_Thereplaywasdiscarded_);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  else {
    pcVar3 = &objc::class_t::SentryEnvelopeItem;
    _objc_alloc();
    IVar2 = objc_stub::initWithReplayEvent_replayRecording_video_((ID)pcVar3,IVar1,param_4,param_5);
    if (IVar2 == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                          );
        IVar1 = NSString::lastPathComponent(IVar1);
        NSString::stringByDeletingPathExtension(IVar1);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_TheSessionReplaysegmentwillnotbesenttoSentrybecauseanEnvelopeItemcouldnotbecreated_
                  );
        IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
    }
    else {
      IVar4 = objc_stub::sdk(IVar1);
      pcVar3 = &objc::class_t::SentrySdkInfo;
      if (IVar4 == 0) {
        IVar4 = SentrySdkInfo::global((ID)&objc::class_t::SentrySdkInfo);
      }
      else {
        _objc_alloc();
        IVar4 = objc_stub::sdk(IVar1);
        IVar4 = objc_stub::initWithDict_((ID)pcVar3,IVar4);
      }
      pcVar3 = &objc::class_t::SentryEnvelopeHeader;
      _objc_alloc();
      IVar1 = objc_stub::eventId(IVar1);
      IVar1 = objc_stub::initWithId_sdkInfo_traceContext_((ID)pcVar3,IVar1,IVar4,0);
      pcVar3 = &objc::class_t::SentryEnvelope;
      _objc_alloc();
      local_70 = IVar2;
      IVar2 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
      IVar1 = objc_stub::initWithHeader_items_((ID)pcVar3,IVar1,IVar2);
      captureEnvelope_(param_1,IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

