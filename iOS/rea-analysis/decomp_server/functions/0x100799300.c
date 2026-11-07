// rea decompile_all
// name: FUN_100799300
// address: 0x100799300
// body: available
// range: 0x100799300-0x1007993cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007993cc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100799300(long param_1,ID param_2)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  objc_stub::absoluteNSDateInterval(param_2);
  IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_timestamp);
  IVar1 = objc_stub::value(param_2);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_value);
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),self);
  return 0;
}

