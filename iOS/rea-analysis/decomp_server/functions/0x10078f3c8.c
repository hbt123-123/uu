// rea decompile_all
// name: SentryTransportFactory::initTransports:sentryFileManager:rateLimits:
// address: 0x10078f3c8
// body: available
// range: 0x10078f3c8-0x10078f687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078f680 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10078f684 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTransportFactory::initTransports_sentryFileManager_rateLimits_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID local_80;
  ID local_78;
  ID IStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007f7d20(param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::ephemeralSessionConfiguration((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
    IVar3 = objc_stub::FUN_1007f7d40(param_3);
    IVar1 = objc_stub::sessionWithConfiguration_delegate_delegateQueue_
                      ((ID)&_OBJC_CLASS___NSURLSession,IVar1,IVar3,0);
  }
  else {
    IVar1 = objc_stub::FUN_1007f7d20(param_3);
  }
  pcVar2 = &objc::class_t::SentryQueueableRequestManager;
  _objc_alloc();
  IVar1 = objc_stub::initWithSession_((ID)pcVar2,IVar1);
  pcVar2 = &objc::class_t::SentryEnvelopeRateLimit;
  _objc_alloc();
  IVar3 = objc_stub::FUN_1007ec100((ID)pcVar2,param_5);
  uVar4 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0xfffffffe,0);
  pcVar2 = &objc::class_t::SentryDispatchQueueWrapper;
  _objc_alloc();
  IVar5 = objc_stub::initWithName_attributes_((ID)pcVar2,"io.sentry.http-transport",uVar4);
  pcVar2 = &objc::class_t::SentryNSURLRequestBuilder;
  _objc_alloc();
  IVar6 = objc_stub::init((ID)pcVar2);
  pcVar2 = &objc::class_t::SentryHttpTransport;
  _objc_alloc();
  IVar3 = objc_stub::FUN_1007ebee0
                    ((ID)pcVar2,0x3fb999999999999a,param_3,param_4,IVar1,IVar6,param_5,IVar3,IVar5);
  IVar7 = objc_stub::FUN_1007e8e40(param_3);
  if ((int)IVar7 == 0) {
    local_80 = IVar3;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_80,1);
  }
  else {
    pcVar2 = &objc::class_t::SentrySpotlightTransport;
    _objc_alloc();
    IStack_70 = objc_stub::FUN_1007ebfe0((ID)pcVar2,param_3,IVar1,IVar6,IVar5);
    local_78 = IVar3;
    IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_78,2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

