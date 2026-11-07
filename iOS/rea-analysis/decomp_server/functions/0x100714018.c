// rea decompile_all
// name: SACustomPropertyPlugin::properties
// address: 0x100714018
// body: available
// range: 0x100714018-0x10071422f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071422c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SACustomPropertyPlugin::properties(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *self;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  
  IVar1 = originalProperties(param_1);
  IVar1 = SAPropertyValidator::validProperties_((ID)&objc::class_t::SAPropertyValidator,IVar1);
  IVar2 = SAPropertyPlugin::filter(param_1);
  IVar2 = objc_stub::type(IVar2);
  if (0xf < IVar2) {
LAB_100714188:
    IVar1 = objc_stub::copy(IVar1);
    return IVar1;
  }
  IVar2 = SAPropertyPlugin::filter(param_1);
  IVar2 = objc_stub::hybridH5(IVar2);
  if ((int)IVar2 != 0) goto LAB_100714188;
  if (IVar1 == 0) {
    IVar1 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  }
  self = (cfstringStruct *)NSMutableDictionary::objectForKeyedSubscript_(IVar1,&cf__lib_method);
  IVar2 = SAPropertyPlugin::filter(param_1);
  IVar2 = objc_stub::lib(IVar2);
  IVar2 = objc_stub::method(IVar2);
  IVar2 = objc_stub::isEqualToString_(IVar2,&cf_autoTrack);
  pcVar4 = &cf_autoTrack;
  if ((IVar2 & 1) == 0) {
    if (self != (cfstringStruct *)0x0) {
      puVar3 = &_OBJC_CLASS___NSString;
      _objc_opt_class(&_OBJC_CLASS___NSString);
      pcVar4 = self;
      _objc_opt_isKindOfClass(self,puVar3);
      if (((ulong)pcVar4 & 1) == 0) goto LAB_1007141e8;
    }
    IVar2 = objc_stub::isEqualToString_((ID)self,&cf_code);
    if (((IVar2 & 1) != 0) ||
       (IVar2 = objc_stub::isEqualToString_((ID)self,&cf_autoTrack), pcVar4 = &cf_code,
       (IVar2 & 1) != 0)) goto LAB_1007141e8;
  }
  self = pcVar4;
LAB_1007141e8:
  NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,self,&cf__lib_method);
  IVar1 = NSMutableDictionary::copy(IVar1);
  return IVar1;
}

