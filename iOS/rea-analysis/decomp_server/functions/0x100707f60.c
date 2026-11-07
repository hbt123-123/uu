// rea decompile_all
// name: SAModuleManager::canHandleURL:
// address: 0x100707f60
// body: available
// range: 0x100707f60-0x1007080eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007080e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SAModuleManager::canHandleURL_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  long lVar5;
  ID IVar6;
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self = moduleNames(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(self);
        }
        IVar2 = moduleWithName_(param_1,*(ID *)(lStack_128 + IVar6 * 8));
        if ((((IVar2 != 0) && (IVar3 = IVar2, func_0x00010080693c(), (int)IVar3 != 0)) &&
            (IVar3 = IVar2, _objc_opt_respondsToSelector(IVar2,"canHandleURL:"), (IVar3 & 1) != 0))
           && (IVar2 = objc_stub::canHandleURL_(IVar2,param_3), (int)IVar2 != 0)) {
          bVar4 = 1;
          goto LAB_10070809c;
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar1 != 0);
  }
  bVar4 = 0;
LAB_10070809c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

