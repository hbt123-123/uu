// rea decompile_all
// name: SAItemEventObject::jsonObject
// address: 0x100734128
// body: available
// range: 0x100734128-0x100734367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100734364 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAItemEventObject::jsonObject(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::type(param_1);
  if (((uint)IVar1 >> 0xb & 1) == 0) {
    IVar1 = SABaseEventObject::properties(param_1);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_properties);
  }
  else {
    NSMutableDictionary::setObject_forKeyedSubscript_(self,0,&cf_properties);
  }
  IVar1 = itemType(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_item_type);
  IVar1 = itemID(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_item_id);
  IVar1 = objc_stub::type(param_1);
  IVar1 = SABaseEventObject::typeWithEventType_((ID)&objc::class_t::SABaseEventObject,IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_type);
  IVar1 = objc_stub::time(param_1);
  IVar1 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_time);
  IVar1 = objc_stub::lib(param_1);
  IVar1 = jsonObject(IVar1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_lib);
  IVar1 = SABaseEventObject::project(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_project);
  IVar1 = SABaseEventObject::token(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_token);
  return self;
}

