// rea decompile_all
// name: SentrySpotlightTransport::sendEnvelope:
// address: 0x10076329c
// body: available
// range: 0x10076329c-0x1007637c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007637c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void SentrySpotlightTransport::sendEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  ID IVar5;
  long lVar6;
  ID self_00;
  undefined *local_160;
  undefined8 local_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  long local_138 [3];
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007e5520(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpotlightTransport.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::options(param_1);
      objc_stub::FUN_1007f5c60(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_MalformedSpotlightURLpassedfromtheoptions_NotsendingenvelopetoSpotlightwithURL___
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  else {
    IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
    local_138[2] = 0;
    local_138[1] = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar2 = objc_stub::items(param_3);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                      (IVar2,local_138 + 1,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar6 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          self_00 = *(ID *)(local_138[2] + IVar5 * 8);
          IVar4 = objc_stub::header(self_00);
          IVar4 = objc_stub::type(IVar4);
          IVar4 = objc_stub::isEqualToString_(IVar4,&cf_event);
          if ((int)IVar4 != 0) {
            objc_stub::addObject_(IVar1,self_00);
          }
          IVar4 = objc_stub::header(self_00);
          IVar4 = objc_stub::type(IVar4);
          IVar4 = objc_stub::isEqualToString_(IVar4,&cf_transaction);
          if ((int)IVar4 != 0) {
            objc_stub::addObject_(IVar1,self_00);
          }
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,local_138 + 1,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
    self = &objc::class_t::SentryEnvelope;
    _objc_alloc();
    IVar2 = objc_stub::header(param_3);
    IVar1 = objc_stub::initWithHeader_items_((ID)self,IVar2,IVar1);
    IVar2 = objc_stub::FUN_1007f0880(param_1);
    IVar3 = objc_stub::FUN_1007e5520(param_1);
    local_138[0] = 0;
    IVar1 = objc_stub::FUN_1007e76a0(IVar2,IVar1,IVar3,local_138);
    if ((IVar1 == 0) || (local_138[0] != 0)) {
      if ((local_138[0] != 0) &&
         (IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4),
         (int)IVar1 != 0)) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySpotlightTransport.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Unabletobuildenveloperequestwitherror__);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      }
    }
    else {
      IVar2 = objc_stub::FUN_1007f08a0(param_1);
      local_160 = PTR___NSConcreteStackBlock_100995490;
      local_158 = 0xc2000000;
      local_150 = FUN_1007637c4;
      puStack_148 = &DAT_1009e9068;
      local_140 = 0;
      objc_stub::FUN_1007e5120(IVar2,IVar1,&local_160);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

