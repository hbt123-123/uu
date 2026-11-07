// rea decompile_all
// name: SentryAppState::initWithReleaseName:osVersion:vendorId:isDebugging:systemBootTimestamp:
// address: 0x1007615c0
// body: available
// range: 0x1007615c0-0x1007616f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x34 bytes */

ID SentryAppState::initWithReleaseName_osVersion_vendorId_isDebugging_systemBootTimestamp_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  double extraout_d0;
  objc_super local_80;
  
  local_80.super_class = &objc::class_t::SentryAppState;
  local_80.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_80,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x10) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
    *(ID *)(IVar1 + 0x20) = param_5;
    *(char *)(IVar1 + 8) = (char)param_6;
    objc_stub::timeIntervalSince1970(param_7);
    self = &_OBJC_CLASS___NSDate;
    _objc_alloc();
    IVar2 = objc_stub::FUN_1007ec380((ID)self,(long)extraout_d0);
    *(ID *)(IVar1 + 0x28) = IVar2;
    *(undefined4 *)(IVar1 + 9) = 0x1000000;
  }
  return IVar1;
}

