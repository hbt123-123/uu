// rea decompile_all
// name: SentryClient::captureFeedback:withScope:
// address: 0x10073e57c
// body: available
// range: 0x10073e57c-0x10073e85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073e858 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryClient::captureFeedback_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  bool bVar2;
  class_t *self;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  bVar2 = isDisabled(param_1);
  if (bVar2 == 0) {
    self = &objc::class_t::SentryEvent;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)self);
    IVar4 = objc_stub::eventId(param_3);
    objc_stub::setEventId_(IVar3,IVar4);
    objc_stub::setType_(IVar3,&cf_feedback);
    IVar4 = objc_stub::serialize(param_3);
    IVar5 = objc_stub::span(param_4);
    IVar6 = objc_stub::replayId(param_4);
    lVar1 = 1;
    if (IVar5 != 0) {
      lVar1 = 2;
    }
    if (IVar6 != 0) {
      lVar1 = lVar1 + 1;
    }
    IVar5 = NSMutableDictionary::dictionaryWithCapacity_
                      ((ID)&_OBJC_CLASS___NSMutableDictionary,lVar1);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_feedback);
    IVar4 = objc_stub::replayId(param_4);
    if (IVar4 != 0) {
      IVar4 = NSMutableDictionary::dictionaryWithCapacity_((ID)&_OBJC_CLASS___NSMutableDictionary,1)
      ;
      IVar6 = objc_stub::replayId(param_4);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar4,IVar6,&cf_replay_id);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar5,IVar4,&cf_replay);
    }
    objc_stub::setContext_(IVar3,IVar5);
    IVar3 = prepareEvent_withScope_alwaysAttachStacktrace_(param_1,IVar3,param_4,0);
    IVar4 = getTraceStateWithEvent_withScope_(param_1,IVar3,param_4);
    IVar5 = attachmentsForEvent_scope_(param_1,IVar3,param_4);
    IVar6 = objc_stub::attachmentsForEnvelope(param_3);
    IVar5 = objc_stub::arrayByAddingObjectsFromArray_(IVar5,IVar6);
    IVar6 = transportAdapter(param_1);
    objc_stub::sendEvent_traceContext_attachments_additionalEnvelopeItems_
              (IVar6,IVar3,IVar4,IVar5,*(undefined8 *)PTR____NSArray0___1009953a8);
  }
  else {
    logDisabledMessage(param_1);
  }
  return;
}

