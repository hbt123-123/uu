// rea decompile_all
// name: SentryInAppLogic::initWithInAppIncludes:inAppExcludes:
// address: 0x100756fc8
// body: available
// range: 0x100756fc8-0x100757257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100757254 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryInAppLogic::initWithInAppIncludes_inAppExcludes_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_200;
  long lStack_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long lStack_1b8;
  long *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  objc_super local_180;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_180.super_class = &objc::class_t::SentryInAppLogic;
  local_180.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_180,"init");
  if (IVar1 != 0) {
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::count(param_3);
    IVar3 = objc_stub::initWithCapacity_((ID)puVar2,IVar3);
    lStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = (long *)0x0;
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_1c0,auStack_f0,0x10);
    if (IVar4 != 0) {
      lVar6 = *local_1b0;
      do {
        IVar7 = 0;
        do {
          if (*local_1b0 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          IVar5 = objc_stub::FUN_1007edf60(*(ID *)(lStack_1b8 + IVar7 * 8));
          objc_stub::addObject_(IVar3,IVar5);
          IVar7 = IVar7 + 1;
        } while (IVar4 != IVar7);
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_1c0,auStack_f0,0x10);
      } while (IVar4 != 0);
    }
    *(ID *)(IVar1 + 8) = IVar3;
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::count(param_4);
    IVar3 = objc_stub::initWithCapacity_((ID)puVar2,IVar3);
    lStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    local_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_4,&local_200,auStack_170,0x10);
    if (IVar4 != 0) {
      lVar6 = *local_1f0;
      do {
        IVar7 = 0;
        do {
          if (*local_1f0 != lVar6) {
            _objc_enumerationMutation(param_4);
          }
          IVar5 = objc_stub::FUN_1007edf60(*(ID *)(lStack_1f8 + IVar7 * 8));
          objc_stub::addObject_(IVar3,IVar5);
          IVar7 = IVar7 + 1;
        } while (IVar4 != IVar7);
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_4,&local_200,auStack_170,0x10);
      } while (IVar4 != 0);
    }
    *(ID *)(IVar1 + 0x10) = IVar3;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

