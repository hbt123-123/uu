// rea decompile_all
// name: SAEventTrackerPluginManager::enableAllPlugins
// address: 0x10072f498
// body: available
// range: 0x10072f498-0x10072f58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072f588 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SAEventTrackerPluginManager::enableAllPlugins(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  self = plugins(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_100;
    do {
      IVar3 = 0;
      do {
        if (*local_100 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::setEnable_(*(ID *)(lStack_108 + IVar3 * 8),1);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

