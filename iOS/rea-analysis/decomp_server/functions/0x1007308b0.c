// rea decompile_all
// name: SAPropertyPluginManager::registerPropertyPlugin:
// address: 0x1007308b0
// body: available
// range: 0x1007308b0-0x100730b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100730b70 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAPropertyPluginManager::registerPropertyPlugin_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,"properties");
  if ((IVar1 & 1) != 0) {
    IVar1 = param_3;
    _objc_opt_respondsToSelector(param_3,"priority");
    if (((IVar1 & 1) == 0) || (IVar1 = objc_stub::priority(param_3), IVar1 != 0x555558c0)) {
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = (long *)0x0;
      IVar1 = plugins(param_1);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_1f0,auStack_168,0x10);
      if (IVar2 != 0) {
        lVar6 = *local_1e0;
        do {
          IVar7 = 0;
          do {
            if (*local_1e0 != lVar6) {
              _objc_enumerationMutation(IVar1);
            }
            IVar5 = *(ID *)(lStack_1e8 + IVar7 * 8);
            IVar3 = IVar5;
            _objc_opt_class();
            IVar4 = param_3;
            _objc_opt_class();
            if (IVar3 == IVar4) {
              IVar1 = plugins(param_1);
              objc_stub::removeObject_(IVar1,IVar5);
              goto LAB_100730aa8;
            }
            IVar7 = IVar7 + 1;
          } while (IVar2 != IVar7);
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar1,&local_1f0,auStack_168,0x10);
        } while (IVar2 != 0);
      }
LAB_100730aa8:
      IVar1 = plugins(param_1);
    }
    else {
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      lStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = (long *)0x0;
      IVar1 = superPlugins(param_1);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_1b0,auStack_e8,0x10);
      if (IVar2 != 0) {
        lVar6 = *local_1a0;
        do {
          IVar7 = 0;
          do {
            if (*local_1a0 != lVar6) {
              _objc_enumerationMutation(IVar1);
            }
            IVar5 = *(ID *)(lStack_1a8 + IVar7 * 8);
            IVar3 = IVar5;
            _objc_opt_class();
            IVar4 = param_3;
            _objc_opt_class();
            if (IVar3 == IVar4) {
              IVar1 = superPlugins(param_1);
              objc_stub::removeObject_(IVar1,IVar5);
              goto LAB_100730ae8;
            }
            IVar7 = IVar7 + 1;
          } while (IVar2 != IVar7);
          IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar1,&local_1b0,auStack_e8,0x10);
        } while (IVar2 != 0);
      }
LAB_100730ae8:
      IVar1 = superPlugins(param_1);
    }
    objc_stub::addObject_(IVar1,param_3);
    IVar1 = param_3;
    _objc_opt_respondsToSelector(param_3,"prepare");
    if ((IVar1 & 1) != 0) {
      objc_stub::prepare(param_3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

