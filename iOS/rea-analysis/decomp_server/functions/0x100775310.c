// rea decompile_all
// name: SentryBreadcrumb::serialize
// address: 0x100775310
// body: available
// range: 0x100775310-0x1007754cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007754c8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryBreadcrumb::serialize(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::level(param_1);
  FUN_10078990c();
  objc_stub::setValue_forKey_(self,IVar1,&cf_level);
  IVar1 = objc_stub::timestamp(param_1);
  FUN_1007868c4(IVar1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_timestamp);
  IVar1 = objc_stub::FUN_1007e6840(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_category);
  IVar1 = objc_stub::type(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_type);
  IVar1 = objc_stub::FUN_1007eee20(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_origin);
  IVar1 = objc_stub::message(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_message);
  IVar1 = objc_stub::data(param_1);
  FUN_10077cc54(IVar1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_data);
  return self;
}

