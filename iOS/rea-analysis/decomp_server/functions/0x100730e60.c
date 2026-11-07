// rea decompile_all
// name: SAPropertyPluginManager::currentPropertiesForPluginClasses:
// address: 0x100730e60
// body: available
// range: 0x100730e60-0x1007310df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007310d8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007310dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAPropertyPluginManager::currentPropertiesForPluginClasses_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
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
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar2 = plugins(param_1);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1b0,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar8 = *local_1a0;
    do {
      IVar9 = 0;
      do {
        if (*local_1a0 != lVar8) {
          _objc_enumerationMutation(IVar2);
        }
        uVar7 = *(undefined8 *)(lStack_1a8 + IVar9 * 8);
        uVar4 = uVar7;
        _objc_opt_class(uVar7);
        IVar5 = objc_stub::containsObject_(param_3,uVar4);
        if ((int)IVar5 != 0) {
          NSMutableArray::addObject_(IVar1,uVar7);
        }
        IVar9 = IVar9 + 1;
      } while (IVar3 != IVar9);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_1b0,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  IVar1 = propertiesWithPlugins_filter_(param_1,IVar1,0);
  IVar2 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  IVar3 = superPlugins(param_1);
  IVar9 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_1f0,auStack_170,0x10);
  if (IVar9 != 0) {
    lVar8 = *local_1e0;
    do {
      IVar5 = 0;
      do {
        if (*local_1e0 != lVar8) {
          _objc_enumerationMutation(IVar3);
        }
        uVar7 = *(undefined8 *)(lStack_1e8 + IVar5 * 8);
        uVar4 = uVar7;
        _objc_opt_class(uVar7);
        IVar6 = objc_stub::containsObject_(param_3,uVar4);
        if ((int)IVar6 != 0) {
          NSMutableArray::addObject_(IVar2,uVar7);
        }
        IVar5 = IVar5 + 1;
      } while (IVar9 != IVar5);
      IVar9 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar3,&local_1f0,auStack_170,0x10);
    } while (IVar9 != 0);
  }
  IVar2 = propertiesWithPlugins_filter_(param_1,IVar2,0);
  objc_stub::addEntriesFromDictionary_(IVar1,IVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

