// rea decompile_all
// name: FUN_10078b584
// address: 0x10078b584
// body: available
// range: 0x10078b584-0x10078b6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078b6ec to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10078b584(undefined8 param_1,ID param_2)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_1007e7120(param_2);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e7120(param_2);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_device);
    if (IVar1 != 0) {
      self = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      IVar1 = objc_stub::FUN_1007e7120(param_2);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_device);
      IVar1 = objc_stub::initWithDictionary_((ID)self,IVar1);
      goto LAB_10078b668;
    }
  }
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
LAB_10078b668:
  IVar2 = objc_stub::autoupdatingCurrentLocale((ID)&_OBJC_CLASS___NSLocale);
  IVar2 = objc_stub::objectForKey_(IVar2,*(undefined8 *)PTR__NSLocaleIdentifier_100995348);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_locale);
  objc_stub::FUN_1007f2080(param_2,IVar1,&cf_device);
  return 0;
}

