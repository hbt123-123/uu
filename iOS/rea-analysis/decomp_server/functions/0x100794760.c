// rea decompile_all
// name: SentryScope::serialize
// address: 0x100794760
// body: available
// range: 0x100794760-0x100794abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100794ab8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::serialize(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::FUN_1007f6d40(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f6d40(param_1);
    objc_stub::setValue_forKey_(self,IVar1,&cf_tags);
  }
  IVar1 = objc_stub::FUN_1007e9860(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e9860(param_1);
    objc_stub::setValue_forKey_(self,IVar1,&cf_extra);
  }
  IVar2 = objc_stub::span(param_1);
  IVar1 = 0;
  if (IVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    IVar1 = objc_stub::span(param_1);
    _objc_sync_exit(uVar3);
  }
  IVar1 = objc_stub::FUN_1007e6120(param_1,IVar1);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_traceContext);
  IVar1 = objc_stub::context(param_1);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(self,IVar1,&cf_context);
  }
  IVar1 = objc_stub::userObject(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_user);
  IVar1 = objc_stub::FUN_1007e8940(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_dist);
  IVar1 = objc_stub::FUN_1007e9320(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_environment);
  IVar1 = objc_stub::replayId(param_1);
  objc_stub::setValue_forKey_(self,IVar1,&cf_replay_id);
  IVar1 = objc_stub::FUN_1007e9c40(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e9c40(param_1);
    objc_stub::setValue_forKey_(self,IVar1,&cf_fingerprint);
  }
  IVar1 = objc_stub::FUN_1007eda60(param_1);
  if (IVar1 != 0) {
    FUN_10078990c();
    objc_stub::setValue_forKey_(self,IVar1,&cf_level);
  }
  IVar1 = objc_stub::FUN_1007f16e0(param_1);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 != 0) {
    objc_stub::setValue_forKey_(self,IVar1,&cf_breadcrumbs);
  }
  return self;
}

