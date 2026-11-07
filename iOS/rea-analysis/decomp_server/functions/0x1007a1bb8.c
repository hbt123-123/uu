// rea decompile_all
// name: SentryCoreDataTrackingIntegration::installWithOptions:
// address: 0x1007a1bb8
// body: available
// range: 0x1007a1bb8-0x1007a1d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCoreDataTrackingIntegration::installWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  class_t *self_00;
  ID IVar2;
  ID IVar3;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryCoreDataTrackingIntegration;
  local_60.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_60,"installWithOptions:",param_3);
  if ((bool)IVar1 != 0) {
    self = &objc::class_t::SentryCoreDataTracker;
    _objc_alloc();
    self_00 = &objc::class_t::SentryThreadInspector;
    _objc_alloc();
    IVar2 = objc_stub::initWithOptions_((ID)self_00,param_3);
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar3 = objc_stub::FUN_1007ef620(IVar3);
    IVar2 = objc_stub::FUN_1007ec360((ID)self,IVar2,IVar3);
    objc_stub::FUN_1007f52e0(param_1,IVar2);
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryCoreDataSwizzling);
    IVar3 = objc_stub::tracker(param_1);
    objc_stub::FUN_1007f6180(IVar2,IVar3);
  }
  return (bool)IVar1;
}

