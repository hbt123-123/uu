// rea decompile_all
// name: SentryCoreDataTracker::initWithThreadInspector:processInfoWrapper:
// address: 0x1007b2570
// body: available
// range: 0x1007b2570-0x1007b2633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCoreDataTracker::initWithThreadInspector_processInfoWrapper_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryCoreDataTracker;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar1 != 0) {
    self = &objc::class_t::SentryPredicateDescriptor;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(IVar1 + 8) = IVar2;
    *(ID *)(IVar1 + 0x10) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
  }
  return IVar1;
}

