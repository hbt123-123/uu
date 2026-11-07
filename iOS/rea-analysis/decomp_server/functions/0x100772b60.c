// rea decompile_all
// name: SentryEnvelopeItem::initWithReplayEvent:replayRecording:video:
// address: 0x100772b60
// body: available
// range: 0x100772b60-0x100772f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100772f98 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryEnvelopeItem::initWithReplayEvent_replayRecording_video_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *pcStack_90;
  cfstringStruct *local_88;
  ID local_80;
  ID IStack_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::serialize(param_3);
  IVar1 = objc_stub::dataWithJSONObject_((ID)&objc::class_t::SentrySerialization,IVar1);
  IVar2 = objc_stub::FUN_1007e7c00((ID)&objc::class_t::SentrySerialization,param_4);
  IVar3 = objc_stub::FUN_1007e4ba0(param_5);
  IVar3 = objc_stub::FUN_1007e4b60(IVar3,&cf_dat);
  local_98 = &cf_replay_event;
  pcStack_90 = &cf_replay_recording;
  local_88 = &cf_replay_video;
  local_80 = IVar1;
  IStack_78 = IVar2;
  local_70 = param_5;
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_80,&local_98,3);
  IVar1 = objc_stub::FUN_1007f1720((ID)&objc::class_t::SentryMsgPackSerializer,IVar1,IVar3);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_CouldnotcreateMessagePackforsessionreplayenvelopeitem_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      IVar1 = 0;
    }
  }
  else {
    IVar1 = objc_stub::dataWithContentsOfURL_((ID)&_OBJC_CLASS___NSData,IVar3);
    IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    local_a0 = 0;
    IVar2 = objc_stub::FUN_1007f0380(IVar2,IVar3,&local_a0);
    if (((IVar2 & 1) == 0) &&
       (IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
       (int)IVar2 != 0)) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Coundnotdeletetemporaryreplaycontentfromdisk___);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
    }
    self = &objc::class_t::SentryEnvelopeItemHeader;
    _objc_alloc();
    IVar2 = objc_stub::length(IVar1);
    IVar2 = objc_stub::initWithType_length_((ID)self,&cf_replay_video,IVar2);
    IVar1 = objc_stub::initWithHeader_data_(param_1,IVar2,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

