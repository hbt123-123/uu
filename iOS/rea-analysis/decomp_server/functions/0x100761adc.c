// rea decompile_all
// name: SentryAppState::serialize
// address: 0x100761adc
// body: available
// range: 0x100761adc-0x100761d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100761d54 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryAppState::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::releaseName(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::releaseName(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_release_name);
  }
  IVar1 = objc_stub::osVersion(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_os_version);
  IVar1 = objc_stub::FUN_1007f80e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_vendor_id);
  IVar1 = objc_stub::FUN_1007ecd00(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_is_debugging);
  IVar1 = objc_stub::FUN_1007f6c60(param_1);
  FUN_1007868c4(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_system_boot_timestamp);
  IVar1 = objc_stub::FUN_1007ecb60(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_is_active);
  IVar1 = objc_stub::FUN_1007f8260(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_was_terminated);
  IVar1 = objc_stub::FUN_1007ecb40(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_is_anr_ongoing);
  IVar1 = objc_stub::FUN_1007ed3e0(param_1);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_is_sdk_running);
  return self_00;
}

