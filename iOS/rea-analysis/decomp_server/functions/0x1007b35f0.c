// rea decompile_all
// name: SentryCoreDataTracker::groupEntitiesOperations:
// address: 0x1007b35f0
// body: available
// range: 0x1007b35f0-0x1007b37b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b37b0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::groupEntitiesOperations_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::initWithCapacity_((ID)self,3);
  IVar1 = objc_stub::FUN_1007ec860(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007ec860(param_3);
    IVar1 = objc_stub::FUN_1007e7380(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_INSERTED);
  }
  IVar1 = objc_stub::FUN_1007f7ca0(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f7ca0(param_3);
    IVar1 = objc_stub::FUN_1007e7380(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_UPDATED);
  }
  IVar1 = objc_stub::FUN_1007e8400(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e8400(param_3);
    IVar1 = objc_stub::FUN_1007e7380(param_1,IVar1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_DELETED);
  }
  return self_00;
}

