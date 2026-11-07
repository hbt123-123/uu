// rea decompile_all
// name: SAPropertyPluginManager::propertiesWithPlugins:filter:
// address: 0x10073147c
// body: available
// range: 0x10073147c-0x100731707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100731704 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x20 bytes */

ID SAPropertyPluginManager::propertiesWithPlugins_filter_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  dispatch_semaphore_t dsema;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  dispatch_time_t timeout;
  long lVar4;
  ID IVar5;
  ID self_01;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  ID local_100;
  dispatch_semaphore_t local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  self_00 = objc_stub::sortedArrayUsingComparator_(param_3,&PTR___NSConcreteGlobalBlock_1009e83d8);
  dsema = _dispatch_semaphore_create(0);
  local_120 = PTR___NSConcreteStackBlock_100995490;
  local_118 = 0xc2000000;
  local_110 = FUN_1007317b0;
  puStack_108 = &DAT_1009e8018;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = (long *)0x0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_100 = self;
  local_f8 = dsema;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_160,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_150;
    do {
      IVar5 = 0;
      do {
        if (*local_150 != lVar4) {
          _objc_enumerationMutation(self_00);
        }
        self_01 = *(ID *)(lStack_158 + IVar5 * 8);
        objc_stub::setHandler_(self_01,&local_120);
        objc_stub::setFilter_(self_01,param_4);
        IVar2 = objc_stub::properties(self_01);
        IVar3 = self_01;
        _objc_opt_respondsToSelector(self_01,"prepare");
        if (((IVar3 & 1) == 0) || (IVar2 != 0)) {
          if (IVar2 != 0) {
            NSMutableDictionary::addEntriesFromDictionary_(self,IVar2);
          }
        }
        else {
          timeout = _dispatch_time(0,500000000);
          _dispatch_semaphore_wait(dsema,timeout);
        }
        objc_stub::setFilter_(self_01,0);
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_160,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

