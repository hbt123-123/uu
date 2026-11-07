// rea decompile_all
// name: SentryCrashReportConverter::convertReportToEvent
// address: 0x10077f034
// body: available
// range: 0x10077f034-0x10077f7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077f6a0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertReportToEvent(ID param_1,SEL param_2)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  undefined *self_01;
  ID IVar3;
  
  self = &objc::class_t::SentryEvent;
  _objc_alloc();
  self_00 = objc_stub::initWithLevel_((ID)self,5);
  IVar1 = objc_stub::FUN_1007f0780(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
  IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007f0780(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
    FUN_10078681c(IVar1);
    objc_stub::setTimestamp_(self_00,IVar1);
  }
  else {
    IVar1 = objc_stub::FUN_1007f0780(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_report);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_timestamp);
    IVar1 = objc_stub::integerValue(IVar1);
    IVar1 = objc_stub::dateWithTimeIntervalSince1970_((ID)&_OBJC_CLASS___NSDate,(double)(long)IVar1)
    ;
    objc_stub::setTimestamp_(self_00,IVar1);
  }
  IVar1 = objc_stub::FUN_1007e71e0(param_1);
  objc_stub::setThreads_(self_00,IVar1);
  IVar1 = objc_stub::threads(self_00);
  IVar1 = objc_stub::FUN_1007e7e60(param_1,IVar1);
  objc_stub::setDebugMeta_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007e7180(param_1);
  objc_stub::setExceptions_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_dist);
  objc_stub::setDist_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_environment);
  objc_stub::setEnvironment_(self_00,IVar1);
  self_01 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_context);
  IVar1 = objc_stub::initWithDictionary_((ID)self_01,IVar1);
  IVar2 = objc_stub::FUN_1007f7e20(param_1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_traceContext);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_1007f7e20(param_1);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_traceContext);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_trace);
  }
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_app);
  if (IVar2 == 0) {
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  }
  else {
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_app);
    IVar2 = objc_stub::mutableCopy(IVar2);
  }
  IVar3 = objc_stub::FUN_1007e5720(param_1);
  IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_application_in_foreground);
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_in_foreground);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_app);
  objc_stub::setContext_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_extra);
  objc_stub::FUN_1007f2da0(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_tags);
  objc_stub::FUN_1007f4f20(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007e7240(param_1);
  objc_stub::setUser_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007e7140(param_1);
  objc_stub::setBreadcrumbs_(self_00,IVar1);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_release);
  objc_stub::setReleaseName_(self_00,IVar1);
  IVar1 = objc_stub::releaseName(self_00);
  if ((((IVar1 == 0) &&
       (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_identifier), IVar1 != 0)) &&
      (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_version), IVar1 != 0)) &&
     (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build), IVar1 != 0)) {
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_identifier);
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_version);
    objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
    objc_stub::setReleaseName_(self_00,IVar1);
  }
  IVar1 = objc_stub::dist(self_00);
  if ((IVar1 == 0) && (IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build), IVar1 != 0)
     ) {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_app_build);
    objc_stub::setDist_(self_00,IVar1);
  }
  return self_00;
}

