// rea decompile_all
// name: FUN_10070a398
// address: 0x10070a398
// body: available
// range: 0x10070a398-0x10070a5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070a5ec to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10070a398(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  ID IVar10;
  ID local_1f8;
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
  IVar1 = objc_stub::sensorsdata_KVO_observers(param_1);
  if (IVar1 != 0) {
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = (long *)0x0;
    IVar1 = objc_stub::sensorsdata_KVO_observers(param_1);
    local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1b0,auStack_f0,0x10);
    if (local_1f8 != 0) {
      lVar5 = *local_1a0;
      do {
        IVar7 = 0;
        do {
          if (*local_1a0 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          uVar9 = *(undefined8 *)(lStack_1a8 + IVar7 * 8);
          IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__p);
          lStack_1e8 = 0;
          local_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          IVar3 = objc_stub::sensorsdata_KVO_observerInfos(param_1);
          IVar2 = objc_stub::objectForKeyedSubscript_(IVar3,IVar2);
          IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar2,&local_1f0,auStack_170,0x10);
          if (IVar3 != 0) {
            lVar6 = *local_1e0;
            do {
              IVar8 = 0;
              do {
                if (*local_1e0 != lVar6) {
                  _objc_enumerationMutation(IVar2);
                }
                IVar10 = *(ID *)(lStack_1e8 + IVar8 * 8);
                IVar4 = objc_stub::keyPath(IVar10);
                IVar10 = objc_stub::context(IVar10);
                IVar10 = objc_stub::pointerValue(IVar10);
                objc_stub::removeObserver_forKeyPath_context_(param_1,uVar9,IVar4,IVar10);
                IVar8 = IVar8 + 1;
              } while (IVar3 != IVar8);
              IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                                (IVar2,&local_1f0,auStack_170,0x10);
            } while (IVar3 != 0);
          }
          IVar7 = IVar7 + 1;
        } while (IVar7 != local_1f8);
        local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar1,&local_1b0,auStack_f0,0x10);
      } while (local_1f8 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

