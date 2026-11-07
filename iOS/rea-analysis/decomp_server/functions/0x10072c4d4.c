// rea decompile_all
// name: SAPresetPropertyObject::properties
// address: 0x10072c4d4
// body: available
// range: 0x10072c4d4-0x10072c727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072c724 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAPresetPropertyObject::properties(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  long_long lVar2;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = deviceModel(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__model);
  IVar1 = manufacturer(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__manufacturer);
  IVar1 = os(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__os);
  IVar1 = osVersion(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__os_version);
  IVar1 = lib(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__lib);
  IVar1 = appID(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__app_id);
  IVar1 = appName(param_1);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__app_name);
  lVar2 = screenHeight(param_1);
  IVar1 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,lVar2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__screen_height);
  lVar2 = screenWidth(param_1);
  IVar1 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,lVar2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__screen_width);
  lVar2 = timezoneOffset(param_1);
  IVar1 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,lVar2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf__timezone_offset);
  return self;
}

