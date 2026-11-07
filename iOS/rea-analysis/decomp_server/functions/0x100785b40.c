// rea decompile_all
// name: PrivateSentrySDKOnly::collectProfileBetween:and:forTrace:
// address: 0x100785b40
// body: available
// range: 0x100785b40-0x100785cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100785ca4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100785ca8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID PrivateSentrySDKOnly::collectProfileBetween_and_forTrace_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             ID param_5)

{
  ID IVar1;
  void *pvVar2;
  void *local_50;
  cfstringStruct *local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  FUN_1007519d4(param_3,param_4,param_5,IVar1);
  if (param_3 != 0) {
    objc_stub::setObject_forKeyedSubscript_(param_3,&cf_cocoa,&cf_platform);
    local_48 = &cf_active_thread_id;
    FUN_10079abe4(&local_50);
    pvVar2 = local_50;
    FUN_10079b124(local_50);
    local_40 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,pvVar2);
    IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_40,&local_48,1);
    objc_stub::setObject_forKeyedSubscript_(param_3,IVar1,&cf_transaction);
    pvVar2 = local_50;
    local_50 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      thunk_FUN_10079ab58();
      operator_delete(pvVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

