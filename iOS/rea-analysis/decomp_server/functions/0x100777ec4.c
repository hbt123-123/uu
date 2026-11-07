// rea decompile_all
// name: SentryHttpTransport::initWithOptions:cachedEnvelopeSendDelay:fileManager:requestManager:requestBuilder:rateLimits:envelopeRateLimit:dispatchQueueWrapper:
// address: 0x100777ec4
// body: available
// range: 0x100777ec4-0x10077812f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x50 bytes */

ID SentryHttpTransport::
   initWithOptions_cachedEnvelopeSendDelay_fileManager_requestManager_requestBuilder_rateLimits_envelopeRateLimit_dispatchQueueWrapper_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10)

{
  ID self;
  dispatch_group_t pdVar1;
  ID IVar2;
  objc_super local_80;
  
  local_80.super_class = &objc::class_t::SentryHttpTransport;
  local_80.receiver = param_1;
  self = _objc_msgSendSuper2(&local_80,"init");
  if (self != 0) {
    objc_stub::setOptions_(self,param_3);
    *(double *)(self + 0x10) = param_4;
    objc_stub::FUN_1007f4660(self,param_6);
    objc_stub::FUN_1007f4640(self,param_7);
    objc_stub::setFileManager_(self,param_5);
    objc_stub::setRateLimits_(self,param_8);
    objc_stub::FUN_1007f2b80(self,param_9);
    objc_stub::FUN_1007f2680(self,param_10);
    pdVar1 = _dispatch_group_create();
    objc_stub::FUN_1007f2660(self,pdVar1);
    *(undefined2 *)(self + 8) = 0;
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    objc_stub::FUN_1007f2640(self,IVar2);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
    objc_stub::FUN_1007f3d60(self,IVar2);
    IVar2 = objc_stub::FUN_1007e92a0(self);
    objc_stub::setDelegate_(IVar2,self);
    IVar2 = objc_stub::fileManager(self);
    objc_stub::setDelegate_(IVar2,self);
    objc_stub::sendAllCachedEnvelopes(self);
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::FUN_1007efbe0(IVar2);
    objc_stub::FUN_1007e4fe0(IVar2,self);
  }
  return self;
}

