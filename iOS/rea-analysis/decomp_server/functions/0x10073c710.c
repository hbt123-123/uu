// rea decompile_all
// name: SentryClient::buildExceptionEvent:
// address: 0x10073c710
// body: available
// range: 0x10073c710-0x10073c86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073c864 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073c868 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClient::buildExceptionEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar3 = &objc::class_t::SentryEvent;
  _objc_alloc();
  self = objc_stub::initWithLevel_((ID)pcVar3,4);
  pcVar3 = &objc::class_t::SentryException;
  _objc_alloc();
  IVar1 = objc_stub::reason(param_3);
  IVar2 = objc_stub::name(param_3);
  local_50 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,IVar2);
  IVar1 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
  objc_stub::setExceptions_(self,IVar1);
  IVar1 = objc_stub::userInfo(param_3);
  setUserInfo_withEvent_(param_1,IVar1,self);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

