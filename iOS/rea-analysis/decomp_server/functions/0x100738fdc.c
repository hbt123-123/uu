// rea decompile_all
// name: SentryQueueableRequestManager::initWithSession:
// address: 0x100738fdc
// body: available
// range: 0x100738fdc-0x1007390c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryQueueableRequestManager::initWithSession_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SentryQueueableRequestManager;
  local_40 = param_1;
  self = NSObject::init((ID)&local_40,"init");
  if (self != 0) {
    NSObject::setSession_(self,param_3);
    self_00 = &_OBJC_CLASS___NSOperationQueue;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    NSObject::setQueue_(self,IVar1);
    IVar1 = NSObject::queue(self);
    NSObject::setName_(IVar1,&cf_io_sentry_QueueableRequestManager_OperationQueue);
    IVar1 = NSObject::queue(self);
    NSObject::setMaxConcurrentOperationCount_(IVar1,3);
  }
  return self;
}

