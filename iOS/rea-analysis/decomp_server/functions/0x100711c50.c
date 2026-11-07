// rea decompile_all
// name: SABaseEventObject::jsonObject
// address: 0x100711c50
// body: available
// range: 0x100711c50-0x100711fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100711fb0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SABaseEventObject::jsonObject(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = properties(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_properties);
  IVar1 = distinctId(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_distinct_id);
  IVar1 = loginId(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_login_id);
  IVar1 = anonymousId(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_anonymous_id);
  IVar1 = objc_stub::type(param_1);
  IVar1 = typeWithEventType_((ID)&objc::class_t::SABaseEventObject,IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_type);
  IVar1 = objc_stub::time(param_1);
  IVar1 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_time);
  IVar1 = objc_stub::lib(param_1);
  IVar1 = jsonObject(IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_lib);
  IVar1 = trackId(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__track_id);
  IVar1 = objc_stub::event(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_event);
  IVar1 = project(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_project);
  IVar1 = token(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_token);
  IVar1 = identities(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_identities);
  IVar1 = objc_stub::hybridH5(param_1);
  if ((IVar1 & 1) == 0) {
    NSMutableDictionary::setObject_forKeyedSubscript_(self,0,&cf__hybrid_h5);
  }
  else {
    IVar1 = objc_stub::hybridH5(param_1);
    IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__hybrid_h5);
  }
  return self;
}

