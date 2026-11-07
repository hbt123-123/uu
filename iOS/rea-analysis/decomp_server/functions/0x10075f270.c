// rea decompile_all
// name: SentryNetworkTracker::addTraceWithoutTransactionToTask:
// address: 0x10075f270
// body: available
// range: 0x10075f270-0x10075f4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075f4b8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::addTraceWithoutTransactionToTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::propagationContext(IVar1);
  self = &objc::class_t::SentryTraceContext;
  _objc_alloc();
  IVar2 = objc_stub::traceId(IVar1);
  IVar3 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar3 = objc_stub::FUN_1007e6ba0(IVar3);
  IVar3 = objc_stub::options(IVar3);
  IVar4 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar4 = objc_stub::scope(IVar4);
  IVar4 = objc_stub::userObject(IVar4);
  IVar4 = objc_stub::segment(IVar4);
  IVar5 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar5 = objc_stub::scope(IVar5);
  IVar5 = objc_stub::replayId(IVar5);
  IVar2 = objc_stub::initWithTraceId_options_userSegment_replayId_((ID)self,IVar2,IVar3,IVar4,IVar5)
  ;
  IVar2 = objc_stub::FUN_1007f71a0(IVar2);
  IVar1 = objc_stub::FUN_1007f7340(IVar1);
  objc_stub::FUN_1007e4d60(param_1,IVar2,IVar1,param_3);
  return;
}

