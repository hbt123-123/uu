// rea decompile_all
// name: SentryANRTrackerV1::initWithTimeoutInterval:crashWrapper:dispatchQueueWrapper:threadWrapper:
// address: 0x10074e848
// body: available
// range: 0x10074e848-0x10074e977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryANRTrackerV1::initWithTimeoutInterval_crashWrapper_dispatchQueueWrapper_threadWrapper_
             (ID param_1,SEL param_2,double param_3,ID param_4,ID param_5,ID param_6)

{
  ID self;
  ID IVar1;
  undefined *self_00;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryANRTrackerV1;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    objc_stub::setTimeoutInterval_(self,param_3);
    objc_stub::FUN_1007f2180(self,param_4);
    objc_stub::FUN_1007f26a0(self,param_5);
    objc_stub::FUN_1007f5020(self,param_6);
    IVar1 = objc_stub::weakObjectsHashTable((ID)&_OBJC_CLASS___NSHashTable);
    objc_stub::FUN_1007f3980(self,IVar1);
    self_00 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    *(ID *)(self + 8) = IVar1;
    *(undefined8 *)(self + 0x10) = 1;
  }
  return self;
}

