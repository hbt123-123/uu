// rea decompile_all
// name: FUN_10078b3c8
// address: 0x10078b3c8
// body: available
// range: 0x10078b3c8-0x10078b543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078b540 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10078b3c8(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar1 = objc_stub::serialize(param_2);
  IVar1 = objc_stub::initWithDictionary_((ID)self,IVar1);
  IVar2 = objc_stub::options(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::releaseName(IVar2);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_release);
  IVar2 = objc_stub::options(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::dist(IVar2);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_dist);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar2 = objc_stub::crashReporter(IVar2);
  objc_stub::FUN_1007f5540(IVar2,IVar1);
  IVar1 = objc_stub::FUN_1007f0e60(*(ID *)(param_1 + 0x20));
  objc_stub::FUN_1007e4fe0(param_2,IVar1);
  return 0;
}

