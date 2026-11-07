// rea decompile_all
// name: SAModuleManager::properties
// address: 0x100708304
// body: available
// range: 0x100708304-0x100708547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100708540 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100708544 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAModuleManager::properties(ID param_1,SEL param_2)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID self_01;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
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
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self_00 = moduleNames(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self_00,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(self_00);
        }
        IVar5 = *(ID *)(lStack_128 + IVar4 * 8);
        self_01 = moduleWithName_(param_1,IVar5);
        if ((((self_01 != 0) && (IVar2 = self_01, func_0x00010080693c(), (int)IVar2 != 0)) &&
            (IVar2 = self_01, func_0x00010080693c(), (int)IVar2 != 0)) &&
           (((IVar2 = self_01, _objc_opt_respondsToSelector(self_01,"properties"), (IVar2 & 1) != 0
             || (IVar2 = self_01, _objc_opt_respondsToSelector(self_01,"isEnable"), (IVar2 & 1) == 0
                )) && (IVar2 = objc_stub::isEnable(self_01), (int)IVar2 != 0)))) {
          IVar2 = objc_stub::isEqualToString_(IVar5,&cf_Location);
          if ((IVar2 & 1) == 0) {
            IVar5 = objc_stub::isEqualToString_(IVar5,&cf_DeviceOrientation);
            IVar2 = properties(self_01);
            if ((IVar5 & 1) == 0) {
              IVar5 = objc_stub::count(IVar2);
              if (IVar5 == 0) goto LAB_1007084d0;
              goto LAB_1007084a0;
            }
          }
          else {
LAB_1007084a0:
            IVar2 = properties(self_01);
          }
          NSMutableDictionary::addEntriesFromDictionary_(self,IVar2);
        }
LAB_1007084d0:
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self_00,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

