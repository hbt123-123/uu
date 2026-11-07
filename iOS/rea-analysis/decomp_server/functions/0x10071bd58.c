// rea decompile_all
// name: SAFlowObject::initWithDictionary:
// address: 0x10071bd58
// body: available
// range: 0x10071bd58-0x10071bfcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071bfc8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlowObject::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  ID self;
  ID IVar5;
  class_t *self_00;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ID local_100;
  class_t *pcStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcStack_f8 = &objc::class_t::SAFlowObject;
  local_100 = param_1;
  IVar1 = NSObject::init((ID)&local_100,"init");
  if (IVar1 != 0) {
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_id);
    uVar7 = *(undefined8 *)(IVar1 + 8);
    *(ID *)(IVar1 + 8) = IVar2;
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,uVar7,&cf_name);
    uVar7 = *(undefined8 *)(IVar1 + 0x10);
    *(ID *)(IVar1 + 0x10) = IVar2;
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,uVar7,&cf_param);
    uVar7 = *(undefined8 *)(IVar1 + 0x28);
    *(ID *)(IVar1 + 0x28) = IVar2;
    IVar2 = objc_stub::objectForKeyedSubscript_(param_3,uVar7,&cf_tasks);
    uVar3 = objc_stub::firstObject(IVar2);
    puVar4 = &_OBJC_CLASS___NSDictionary;
    _objc_opt_class(&_OBJC_CLASS___NSDictionary);
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar3 & 1) == 0) {
      *(ID *)(IVar1 + 0x18) = IVar2;
    }
    else {
      self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_140,auStack_f0,0x10);
      if (IVar5 != 0) {
        lVar8 = *local_130;
        do {
          IVar9 = 0;
          do {
            if (*local_130 != lVar8) {
              _objc_enumerationMutation(IVar2);
            }
            uVar7 = *(undefined8 *)(lStack_138 + IVar9 * 8);
            self_00 = &objc::class_t::SATaskObject;
            _objc_alloc();
            IVar6 = objc_stub::initWithDictionary_((ID)self_00,uVar7);
            NSMutableArray::addObject_(self,IVar6);
            IVar9 = IVar9 + 1;
          } while (IVar5 != IVar9);
          IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_140,auStack_f0,0x10);
        } while (IVar5 != 0);
      }
      *(ID *)(IVar1 + 0x20) = self;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

