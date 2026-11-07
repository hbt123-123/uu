// rea decompile_all
// name: SentryMetricProfiler::serializeTraceProfileMetricsBetween:and:
// address: 0x100797de8
// body: available
// range: 0x100797de8-0x100797fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100797fb4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryMetricProfiler::serializeTraceProfileMetricsBetween_and_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID self;
  ID self_00;
  ID self_01;
  ID self_02;
  ID IVar1;
  
  _objc_sync_enter();
  self = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x28));
  self_00 = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x18));
  self_01 = objc_stub::arrayWithArray_((ID)&_OBJC_CLASS___NSArray,*(undefined8 *)(param_1 + 0x10));
  _objc_sync_exit(param_1);
  self_02 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar1 = objc_stub::count(self_00);
  if (IVar1 != 0) {
    FUN_100798028(self_00,&cf_byte,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self_00,&cf_memory_footprint);
  }
  IVar1 = objc_stub::count(self);
  if (IVar1 != 0) {
    FUN_100798028(self,&cf_nanojoule,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self,&cf_cpu_energy_usage);
  }
  IVar1 = objc_stub::count(self_01);
  if (IVar1 != 0) {
    FUN_100798028(self_01,&cf_percent,param_3,param_4);
    objc_stub::setObject_forKeyedSubscript_(self_02,self_01,&cf_cpu_usage);
  }
  return self_02;
}

