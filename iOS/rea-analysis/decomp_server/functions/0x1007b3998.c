// rea decompile_all
// name: SentryCoreDataTracker::descriptionFromRequest:
// address: 0x1007b3998
// body: available
// range: 0x1007b3998-0x1007b3b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b3b0c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCoreDataTracker::descriptionFromRequest_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID self_01;
  
  self = &_OBJC_CLASS___NSMutableString;
  _objc_alloc();
  objc_stub::FUN_1007e91c0(param_3);
  self_00 = objc_stub::initWithFormat_((ID)self,&cf_SELECT____);
  IVar1 = objc_stub::FUN_1007ef3a0(param_3);
  if (IVar1 != 0) {
    self_01 = *(ID *)(param_1 + 8);
    IVar1 = objc_stub::FUN_1007ef3a0(param_3);
    objc_stub::FUN_1007ef3c0(self_01,IVar1);
    objc_stub::appendFormat_(self_00,&cf_WHERE__);
  }
  IVar1 = objc_stub::FUN_1007f5ac0(param_3);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f5ac0(param_3);
    objc_stub::FUN_1007f5aa0(param_1,IVar1);
    objc_stub::appendFormat_(self_00,&cf_SORTBY__);
  }
  return self_00;
}

