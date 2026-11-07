// rea decompile_all
// name: SAIdentifier::decodeIdentities
// address: 0x10070d280
// body: available
// range: 0x10070d280-0x10070d393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070d390 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAIdentifier::decodeIdentities(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  undefined *puVar2;
  
  IVar1 = SAStoreManager::sharedInstance((ID)&objc::class_t::SAStoreManager);
  self = SABaseStoreManager::objectForKey_(IVar1,0x1009ef170);
  puVar2 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar1 = self;
  _objc_opt_isKindOfClass(self,puVar2);
  if (((IVar1 & 1) != 0) && (IVar1 = objc_stub::hasPrefix_(self,&cf_Base64_), (int)IVar1 != 0)) {
    IVar1 = objc_stub::length(0x1009ef250);
    IVar1 = objc_stub::substringFromIndex_(self,IVar1);
    puVar2 = &_OBJC_CLASS___NSData;
    _objc_alloc();
    IVar1 = objc_stub::initWithBase64EncodedString_options_((ID)puVar2,IVar1,1);
    if (IVar1 != 0) {
      IVar1 = NSJSONSerialization::JSONObjectWithData_options_error_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar1,1,0);
      return IVar1;
    }
  }
  return 0;
}

