// rea decompile_all
// name: SentryTransaction::serialize
// address: 0x1007770d4
// body: available
// range: 0x1007770d4-0x1007779a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007779a0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007779a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTransaction::serialize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  objc_super local_190;
  cfstringStruct *local_180;
  ID local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  local_190.super_class = &objc::class_t::SentryTransaction;
  local_190.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_190,"serialize");
  IVar2 = objc_stub::initWithDictionary_((ID)puVar1,IVar2);
  puVar1 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)puVar1);
  lStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  IVar4 = objc_stub::spans(param_1);
  IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar4,&local_1d0,auStack_f0,0x10);
  if (IVar5 != 0) {
    lVar7 = *local_1c0;
    do {
      IVar8 = 0;
      do {
        if (*local_1c0 != lVar7) {
          _objc_enumerationMutation(IVar4);
        }
        IVar6 = objc_stub::serialize(*(ID *)(lStack_1c8 + IVar8 * 8));
        objc_stub::addObject_(IVar3,IVar6);
        IVar8 = IVar8 + 1;
      } while (IVar5 != IVar8);
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar4,&local_1d0,auStack_f0,0x10);
    } while (IVar5 != 0);
  }
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_spans);
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)puVar1);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_contexts);
  if (IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_contexts);
    objc_stub::addEntriesFromDictionary_(IVar3,IVar4);
  }
  IVar4 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar5 = objc_stub::trace(param_1);
  IVar5 = objc_stub::FUN_1007ef740(IVar5);
  objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_profiler_id);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_profile);
  IVar4 = objc_stub::trace(param_1);
  IVar4 = objc_stub::serialize(IVar4);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_trace);
  objc_stub::setValue_forKey_(IVar2,IVar3,&cf_contexts);
  IVar3 = objc_stub::trace(param_1);
  IVar3 = objc_stub::FUN_1007f6d40(IVar3);
  FUN_10077cc54();
  IVar3 = objc_stub::mutableCopy(IVar3);
  IVar4 = objc_stub::trace(param_1);
  IVar4 = objc_stub::FUN_1007f6d40(IVar4);
  FUN_10077cc54(IVar4);
  objc_stub::addEntriesFromDictionary_(IVar3,IVar4);
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
  if (IVar4 == 0) {
LAB_1007774fc:
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_tags);
  }
  else {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 == 0) goto LAB_1007774fc;
    IVar4 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_tags);
    objc_stub::addEntriesFromDictionary_(IVar4,IVar5);
    objc_stub::addEntriesFromDictionary_(IVar4,IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_tags);
  }
  IVar3 = objc_stub::trace(param_1);
  IVar3 = objc_stub::data(IVar3);
  FUN_10077cc54();
  IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
  if (IVar4 != 0) {
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
    IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((int)IVar4 != 0) {
      IVar4 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_extra);
      objc_stub::addEntriesFromDictionary_(IVar4,IVar5);
      objc_stub::addEntriesFromDictionary_(IVar4,IVar3);
      objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_extra);
      goto LAB_10077763c;
    }
  }
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_extra);
LAB_10077763c:
  IVar3 = objc_stub::trace(param_1);
  IVar3 = objc_stub::FUN_1007ee2c0(IVar3);
  IVar3 = objc_stub::count(IVar3);
  if (IVar3 != 0) {
    IVar3 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    lStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    local_200 = (long *)0x0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    IVar4 = objc_stub::trace(param_1);
    IVar4 = objc_stub::FUN_1007ee2c0(IVar4);
    IVar4 = objc_stub::allKeys(IVar4);
    IVar5 = objc_stub::countByEnumeratingWithState_objects_count_(IVar4,&local_210,auStack_170,0x10)
    ;
    if (IVar5 != 0) {
      lVar7 = *local_200;
      do {
        IVar8 = 0;
        do {
          if (*local_200 != lVar7) {
            _objc_enumerationMutation(IVar4);
          }
          uVar9 = *(undefined8 *)(lStack_208 + IVar8 * 8);
          IVar6 = objc_stub::trace(param_1);
          IVar6 = objc_stub::FUN_1007ee2c0(IVar6);
          IVar6 = objc_stub::objectForKeyedSubscript_(IVar6,uVar9);
          IVar6 = objc_stub::serialize(IVar6);
          objc_stub::setObject_forKeyedSubscript_(IVar3,IVar6,uVar9);
          IVar8 = IVar8 + 1;
        } while (IVar5 != IVar8);
        IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar4,&local_210,auStack_170,0x10);
      } while (IVar5 != 0);
    }
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_measurements);
  }
  IVar3 = objc_stub::trace(param_1);
  if (IVar3 != 0) {
    IVar3 = objc_stub::trace(param_1);
    IVar3 = objc_stub::FUN_1007f7700(IVar3);
    IVar3 = objc_stub::name(IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_transaction);
    local_180 = &cf_source;
    IVar3 = objc_stub::trace(param_1);
    IVar3 = objc_stub::FUN_1007f7700(IVar3);
    IVar3 = objc_stub::FUN_1007ee7c0(IVar3);
    local_178 = objc_stub::FUN_1007f67c0(param_1,IVar3);
    IVar3 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_178,&local_180,1);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_transaction_info);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

