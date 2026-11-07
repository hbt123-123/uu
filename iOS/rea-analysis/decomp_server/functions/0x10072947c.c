// rea decompile_all
// name: SAEventStore::deleteRecords:
// address: 0x10072947c
// body: available
// range: 0x10072947c-0x1007296d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007296d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SAEventStore::deleteRecords_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  ID self;
  ulong uVar7;
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
  IVar2 = recordCaches(param_1);
  uVar3 = count(IVar2);
  if (uVar3 == 0) {
    IVar2 = database(param_1);
    bVar1 = deleteRecords_(IVar2,param_3);
  }
  else {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_130,auStack_f0,0x10);
    if (IVar2 != 0) {
      lVar5 = *local_120;
      do {
        IVar6 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          self = *(ID *)(lStack_128 + IVar6 * 8);
          IVar4 = recordCaches(param_1);
          uVar3 = count(IVar4);
          if (uVar3 != 0) {
            uVar7 = 0;
            do {
              IVar4 = recordCaches(param_1);
              IVar4 = objc_stub::objectAtIndexedSubscript_(IVar4,uVar7);
              IVar4 = objc_stub::recordID(IVar4);
              IVar4 = objc_stub::isEqualToString_(self,IVar4);
              if ((int)IVar4 != 0) {
                IVar4 = recordCaches(param_1);
                objc_stub::removeObjectAtIndex_(IVar4,uVar7);
                break;
              }
              uVar7 = uVar7 + 1;
              IVar4 = recordCaches(param_1);
              uVar3 = count(IVar4);
            } while (uVar7 < uVar3);
          }
          IVar6 = IVar6 + 1;
        } while (IVar6 != IVar2);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_130,auStack_f0,0x10);
      } while (IVar2 != 0);
    }
    bVar1 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar1;
}

