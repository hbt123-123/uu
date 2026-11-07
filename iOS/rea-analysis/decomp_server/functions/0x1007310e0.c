// rea decompile_all
// name: SAPropertyPluginManager::pluginsWithPluginClass:
// address: 0x1007310e0
// body: available
// range: 0x1007310e0-0x10073135f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100731358 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073135c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAPropertyPluginManager::pluginsWithPluginClass_(ID param_1,SEL param_2,CLASS param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  ID self_00;
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
  uVar5 = 0;
  if (param_3 != 0) {
    self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
    lStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = (long *)0x0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    IVar1 = customPlugins(param_1);
    IVar1 = objc_stub::allValues(IVar1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1b0,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar6 = *local_1a0;
      do {
        IVar7 = 0;
        do {
          if (*local_1a0 != lVar6) {
            _objc_enumerationMutation(IVar1);
          }
          self_00 = *(ID *)(lStack_1a8 + IVar7 * 8);
          IVar3 = objc_stub::count(self_00);
          if (IVar3 != 0) {
            IVar3 = objc_stub::firstObject(self_00);
            NSMutableArray::addObject_(self,IVar3);
          }
          IVar7 = IVar7 + 1;
        } while (IVar2 != IVar7);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_1b0,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
    IVar1 = plugins(param_1);
    NSMutableArray::addObjectsFromArray_(self,IVar1);
    IVar1 = superPlugins(param_1);
    NSMutableArray::addObjectsFromArray_(self,IVar1);
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = (long *)0x0;
    IVar1 = NSMutableArray::countByEnumeratingWithState_objects_count_
                      (self,&local_1f0,auStack_168,0x10);
    if (IVar1 != 0) {
      lVar6 = *local_1e0;
      do {
        IVar2 = 0;
        do {
          if (*local_1e0 != lVar6) {
            _objc_enumerationMutation(self);
          }
          uVar5 = *(ulong *)(lStack_1e8 + IVar2 * 8);
          uVar4 = uVar5;
          _objc_opt_isKindOfClass(uVar5,param_3);
          if ((uVar4 & 1) != 0) goto LAB_100731310;
          IVar2 = IVar2 + 1;
        } while (IVar1 != IVar2);
        IVar1 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (self,&local_1f0,auStack_168,0x10);
      } while (IVar1 != 0);
    }
    uVar5 = 0;
LAB_100731310:
    param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(param_1);
  }
  return uVar5;
}

