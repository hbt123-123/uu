// rea decompile_all
// name: SATrackTimer::resumeAllEventTimers:
// address: 0x10070e178
// body: available
// range: 0x10070e178-0x10070e4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070e4d0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SATrackTimer::resumeAllEventTimers_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar1 = eventIds(param_1);
  IVar1 = objc_stub::allKeys(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1b0,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar7 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        uVar8 = *(undefined8 *)(lStack_1a8 + IVar6 * 8);
        puVar3 = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar4 = eventIds(param_1);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar8);
        IVar4 = objc_stub::initWithDictionary_((ID)puVar3,IVar4);
        if (IVar4 != 0) {
          IVar5 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_3);
          objc_stub::setValue_forKey_(IVar4,IVar5,&cf_eventBegin);
          IVar5 = eventIds(param_1);
          objc_stub::setObject_forKeyedSubscript_(IVar5,IVar4,uVar8);
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_1b0,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = (long *)0x0;
  IVar1 = eventNames(param_1);
  IVar1 = objc_stub::allKeys(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1f0,auStack_170,0x10);
  if (IVar2 != 0) {
    lVar7 = *local_1e0;
    do {
      IVar6 = 0;
      do {
        if (*local_1e0 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        uVar8 = *(undefined8 *)(lStack_1e8 + IVar6 * 8);
        puVar3 = &_OBJC_CLASS___NSMutableDictionary;
        _objc_alloc();
        IVar4 = eventNames(param_1);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar8);
        IVar4 = objc_stub::initWithDictionary_((ID)puVar3,IVar4);
        if (IVar4 != 0) {
          IVar5 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_3);
          objc_stub::setValue_forKey_(IVar4,IVar5,&cf_eventBegin);
          IVar5 = eventNames(param_1);
          objc_stub::setObject_forKeyedSubscript_(IVar5,IVar4,uVar8);
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_1f0,auStack_170,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

