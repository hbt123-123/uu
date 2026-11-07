// rea decompile_all
// name: SentrySpanContext::serialize
// address: 0x10075ca2c
// body: available
// range: 0x10075ca2c-0x10075ccb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075ccac to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10075ccb0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpanContext::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *local_b8;
  cfstringStruct *pcStack_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_90 = &cf_trace;
  local_b8 = &cf_type;
  pcStack_b0 = &cf_span_id;
  IVar1 = objc_stub::FUN_1007f5c00(param_1);
  local_88 = objc_stub::FUN_1007f1600(IVar1);
  local_a8 = &cf_trace_id;
  IVar1 = objc_stub::traceId(param_1);
  local_80 = objc_stub::sentryIdString(IVar1);
  local_a0 = &cf_op;
  local_78 = objc_stub::FUN_1007eed80(param_1);
  local_98 = &cf_origin;
  local_70 = objc_stub::FUN_1007eee20(param_1);
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_90,&local_b8,5);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::FUN_1007f0c20(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_1007f0c20(param_1);
    FUN_1007a3cac();
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_sampled);
  }
  IVar2 = objc_stub::FUN_1007f5ba0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_1007f5ba0(param_1);
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_description);
  }
  IVar2 = objc_stub::FUN_1007eefc0(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_1007eefc0(param_1);
    IVar2 = objc_stub::FUN_1007f1600(IVar2);
    objc_stub::setValue_forKey_(IVar1,IVar2,&cf_parent_span_id);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

