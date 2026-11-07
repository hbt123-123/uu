// rea decompile_all
// name: SentryBreadcrumbTracker::addBreadcrumbWithType:withCategory:withLevel:withDataKey:withDataValue:
// address: 0x100789f3c
// body: available
// range: 0x100789f3c-0x10078a097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078a094 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

void SentryBreadcrumbTracker::
     addBreadcrumbWithType_withCategory_withLevel_withDataKey_withDataValue_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               ID param_7)

{
  ID self;
  ID IVar1;
  class_t *self_00;
  ID local_68;
  ID IStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  self_00 = &objc::class_t::SentryBreadcrumb;
  _objc_alloc();
  self = objc_stub::FUN_1007ebc60((ID)self_00,param_5,param_4);
  objc_stub::setType_(self,param_3);
  local_68 = param_6;
  IStack_60 = param_7;
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&IStack_60,&local_68,1);
  objc_stub::setData_(self,IVar1);
  IVar1 = objc_stub::delegate(param_1);
  objc_stub::addBreadcrumb_(IVar1,self);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

