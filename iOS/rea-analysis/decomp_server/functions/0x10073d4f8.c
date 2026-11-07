// rea decompile_all
// name: SentryClient::getTraceStateWithEvent:withScope:
// address: 0x10073d4f8
// body: available
// range: 0x10073d4f8-0x10073d71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073d710 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryClient::getTraceStateWithEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::class((ID)&objc::class_t::SentryTransaction);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::span(param_4);
  }
  else {
    IVar1 = objc_stub::trace(param_3);
  }
  IVar1 = SentryTracer::getTracer_((ID)&objc::class_t::SentryTracer,IVar1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::error(param_3);
    if (IVar1 == 0) {
      IVar1 = objc_stub::exceptions(param_3);
      IVar1 = objc_stub::count(IVar1);
      if (IVar1 == 0) {
        return 0;
      }
    }
    pcVar2 = &objc::class_t::SentryTraceContext;
    _objc_alloc();
    IVar1 = objc_stub::propagationContext(param_4);
    IVar1 = objc_stub::traceId(IVar1);
    IVar3 = options(param_1);
    IVar4 = objc_stub::userObject(param_4);
    IVar4 = objc_stub::segment(IVar4);
    IVar5 = objc_stub::replayId(param_4);
    IVar1 = objc_stub::initWithTraceId_options_userSegment_replayId_
                      ((ID)pcVar2,IVar1,IVar3,IVar4,IVar5);
  }
  else {
    pcVar2 = &objc::class_t::SentryTraceContext;
    _objc_alloc();
    IVar1 = objc_stub::initWithTracer_scope_options_
                      ((ID)pcVar2,IVar1,param_4,*(undefined8 *)(param_1 + 0x10));
  }
  return IVar1;
}

