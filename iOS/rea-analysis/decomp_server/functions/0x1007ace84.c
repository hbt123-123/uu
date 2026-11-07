// rea decompile_all
// name: SentryFileManager::allFilesContentInFolder:
// address: 0x1007ace84
// body: available
// range: 0x1007ace84-0x1007ad003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007acffc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007ad000 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManager::allFilesContentInFolder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _objc_sync_enter();
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self_00 = objc_stub::FUN_1007e52c0(param_1,param_3);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_130,auStack_e8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(self_00);
        }
        IVar2 = objc_stub::FUN_1007ea680(param_1,param_3,*(undefined8 *)(lStack_128 + IVar4 * 8));
        if (IVar2 != 0) {
          objc_stub::addObject_(self,IVar2);
        }
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_e8,0x10);
    } while (IVar1 != 0);
  }
  _objc_sync_exit(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

