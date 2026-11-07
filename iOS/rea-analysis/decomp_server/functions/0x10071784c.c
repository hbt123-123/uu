// rea decompile_all
// name: SASerialQueueInterceptor::interceptorWithParam:
// address: 0x10071784c
// body: available
// range: 0x10071784c-0x10071790b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100717908 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SASerialQueueInterceptor::interceptorWithParam_(ID param_1,SEL param_2,ID param_3)

{
  class_t *self;
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  
  self = &objc::class_t::SASerialQueueInterceptor;
  _objc_alloc_init();
  uVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sync);
  puVar2 = &_OBJC_CLASS___NSNumber;
  _objc_opt_class(&_OBJC_CLASS___NSNumber);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar1 & 1) != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sync);
    IVar3 = objc_stub::boolValue(IVar3);
    objc_stub::setIsSync_((ID)self,IVar3);
  }
  return (ID)self;
}

