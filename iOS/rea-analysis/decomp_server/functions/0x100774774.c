// rea decompile_all
// name: SentrySpan::serialize
// address: 0x100774774
// body: available
// range: 0x100774774-0x100774d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100774d7c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100774d80 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpan::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *self;
  ID self_00;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *pcStack_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_98 = &cf_trace;
  local_c0 = &cf_type;
  pcStack_b8 = &cf_span_id;
  IVar1 = objc_stub::FUN_1007f5c00(param_1);
  local_90 = objc_stub::FUN_1007f1600(IVar1);
  local_b0 = &cf_trace_id;
  IVar1 = objc_stub::traceId(param_1);
  local_88 = objc_stub::sentryIdString(IVar1);
  local_a8 = &cf_op;
  local_80 = objc_stub::FUN_1007eed80(param_1);
  local_a0 = &cf_origin;
  local_78 = objc_stub::FUN_1007eee20(param_1);
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_98,&local_c0,5);
  IVar1 = objc_stub::mutableCopy(IVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar3 = objc_stub::count(*(ID *)(param_1 + 0x10));
  if (IVar3 != 0) {
    IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x10));
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_tags);
  }
  _objc_sync_exit(uVar2);
  IVar3 = objc_stub::FUN_1007f0c20(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_1007f0c20(param_1);
    FUN_1007a3cac();
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_sampled);
  }
  IVar3 = objc_stub::FUN_1007f5ba0(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_1007f5ba0(param_1);
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_description);
  }
  IVar3 = objc_stub::FUN_1007eefc0(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::FUN_1007eefc0(param_1);
    IVar3 = objc_stub::FUN_1007f1600(IVar3);
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_parent_span_id);
  }
  IVar3 = objc_stub::status(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::status(param_1);
    FUN_100745114();
    objc_stub::setValue_forKey_(IVar1,IVar3,&cf_status);
  }
  IVar3 = objc_stub::timestamp(param_1);
  objc_stub::timeIntervalSince1970(IVar3);
  IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::setValue_forKey_(IVar1,IVar3,&cf_timestamp);
  IVar3 = objc_stub::FUN_1007f5f60(param_1);
  objc_stub::timeIntervalSince1970(IVar3);
  IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  objc_stub::setValue_forKey_(IVar1,IVar3,&cf_start_timestamp);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar3 = objc_stub::mutableCopy(*(ID *)(param_1 + 8));
  IVar4 = objc_stub::frames(param_1);
  if (IVar4 != 0) {
    IVar4 = objc_stub::frames(param_1);
    IVar4 = objc_stub::count(IVar4);
    if (IVar4 != 0) {
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar4 = objc_stub::frames(param_1);
      IVar4 = objc_stub::count(IVar4);
      IVar4 = objc_stub::initWithCapacity_((ID)self,IVar4);
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_170 = (long *)0x0;
      self_00 = objc_stub::frames(param_1);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_180,auStack_140,0x10);
      if (IVar5 != 0) {
        lVar7 = *local_170;
        do {
          IVar8 = 0;
          do {
            if (*local_170 != lVar7) {
              _objc_enumerationMutation(self_00);
            }
            IVar6 = objc_stub::serialize(*(ID *)(lStack_178 + IVar8 * 8));
            objc_stub::addObject_(IVar4,IVar6);
            IVar8 = IVar8 + 1;
          } while (IVar5 != IVar8);
          IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                            (self_00,&local_180,auStack_140,0x10);
        } while (IVar5 != 0);
      }
      objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_call_stack);
    }
  }
  IVar4 = objc_stub::count(IVar3);
  if (IVar4 != 0) {
    IVar3 = objc_stub::copy(IVar3);
    FUN_10077cc54();
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_data);
  }
  _objc_sync_exit(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar3 = objc_stub::count(*(ID *)(param_1 + 0x10));
  if (IVar3 != 0) {
    IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x10));
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_tags);
  }
  _objc_sync_exit(uVar2);
  IVar3 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    IVar3 = objc_stub::setObject_forKeyedSubscript_(IVar1,*(long *)(param_1 + 0x98),&cf_profiler_id)
    ;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}

