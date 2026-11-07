// rea decompile_all
// name: SentryCrashReportConverter::convertBreadcrumbs
// address: 0x10077fa80
// body: available
// range: 0x10077fa80-0x10077fda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077fd9c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10077fda0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportConverter::convertBreadcrumbs(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  ID IVar2;
  class_t *self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self_01;
  long lVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  IVar1 = objc_stub::FUN_1007f7e20(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_breadcrumbs);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007f7e20(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_breadcrumbs);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
    if (IVar2 != 0) {
      lVar6 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          self_01 = *(ID *)(lStack_128 + IVar5 * 8);
          self_00 = &objc::class_t::SentryBreadcrumb;
          _objc_alloc();
          IVar3 = objc_stub::objectForKeyedSubscript_(self_01,&cf_level);
          IVar3 = objc_stub::FUN_1007f1580(param_1,IVar3);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_category);
          IVar3 = objc_stub::FUN_1007ebc60((ID)self_00,IVar3,IVar4);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_message);
          objc_stub::setMessage_(IVar3,IVar4);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_type);
          objc_stub::setType_(IVar3,IVar4);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_origin);
          objc_stub::setOrigin_(IVar3,IVar4);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_timestamp);
          FUN_10078681c(IVar4);
          objc_stub::setTimestamp_(IVar3,IVar4);
          IVar4 = objc_stub::objectForKeyedSubscript_(self_01,&cf_data);
          objc_stub::setData_(IVar3,IVar4);
          objc_stub::addObject_(self,IVar3);
          IVar5 = IVar5 + 1;
        } while (IVar2 != IVar5);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

