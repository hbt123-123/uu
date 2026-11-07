// rea decompile_all
// name: SentryCrashReportConverter::initWithReport:inAppLogic:
// address: 0x10077ea54
// body: available
// range: 0x10077ea54-0x10077ee4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportConverter::initWithReport_inAppLogic_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  undefined *self_00;
  ID IVar2;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryCrashReportConverter;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    objc_stub::FUN_1007f45e0(self,param_3);
    objc_stub::setInAppLogic_(self,param_4);
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_user);
    if (IVar1 == 0) {
      IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSDictionary);
    }
    self_00 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::initWithDictionary_((ID)self_00,IVar1);
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sentry_sdk_scope);
    objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
    objc_stub::removeObjectForKey_(IVar1,&cf_sentry_sdk_scope);
    objc_stub::FUN_1007f54e0(self,IVar1);
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_crash);
    if (IVar1 == 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_crash);
    }
    else {
      IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_crash);
    }
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_binary_images);
    if (IVar2 == 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_binary_images);
      objc_stub::FUN_1007f1d60(self,IVar2);
    }
    else {
      IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_binary_images);
      objc_stub::FUN_1007f1d60(self,IVar2);
    }
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_diagnosis);
    objc_stub::FUN_1007f25c0(self,IVar2);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_error);
    objc_stub::FUN_1007f2ce0(self,IVar2);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_threads);
    objc_stub::FUN_1007eb400(self,IVar1);
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_system);
    objc_stub::FUN_1007f4ee0(self,IVar1);
    IVar1 = objc_stub::FUN_1007f6c80(self);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_application_stats);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007f6c80(self);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_application_stats);
      objc_stub::FUN_1007f1ba0(self,IVar1);
    }
  }
  return self;
}

