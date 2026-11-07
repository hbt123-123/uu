// rea decompile_all
// name: SentryRequest::serialize
// address: 0x100782fe8
// body: available
// range: 0x100782fe8-0x100783217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100783214 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryRequest::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_1007e5ea0(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e5ea0(param_1);
    IVar1 = objc_stub::intValue(IVar1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007e5ea0(param_1);
      objc_stub::setValue_forKey_(self_00,IVar1,&cf_body_size);
    }
  }
  IVar1 = objc_stub::FUN_1007e72a0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_cookies);
  IVar1 = objc_stub::FUN_1007ea0e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_fragment);
  IVar1 = objc_stub::FUN_1007eae20(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007eae20(param_1);
    FUN_10077cc54(IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_headers);
  }
  IVar1 = objc_stub::method(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_method);
  IVar1 = objc_stub::FUN_1007efa00(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_query_string);
  IVar1 = objc_stub::url(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_url);
  _objc_sync_exit(param_1);
  return self_00;
}

