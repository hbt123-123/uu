// rea decompile_all
// name: SAEventStore::updateRecords:status:
// address: 0x100729214
// body: available
// range: 0x100729214-0x10072947b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100729478 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool SAEventStore::updateRecords_status_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  bool bVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  ID self_00;
  ID self_01;
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
  IVar2 = recordCaches(param_1);
  uVar3 = count(IVar2);
  if (uVar3 == 0) {
    IVar2 = database(param_1);
    bVar1 = updateRecords_status_(IVar2,param_3,param_4);
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
    local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_1b0,auStack_f0,0x10);
    if (local_1f8 != 0) {
      lVar6 = *local_1a0;
      do {
        IVar2 = 0;
        do {
          if (*local_1a0 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          self_00 = *(ID *)(lStack_1a8 + IVar2 * 8);
          lStack_1e8 = 0;
          local_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          self = recordCaches(param_1);
          IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                            (self,&local_1f0,auStack_170,0x10);
          if (IVar4 != 0) {
            lVar8 = *local_1e0;
            do {
              IVar7 = 0;
              do {
                if (*local_1e0 != lVar8) {
                  _objc_enumerationMutation(self);
                }
                self_01 = *(ID *)(lStack_1e8 + IVar7 * 8);
                IVar5 = objc_stub::recordID(self_01);
                IVar5 = objc_stub::isEqualToString_(self_00,IVar5);
                if ((int)IVar5 != 0) {
                  objc_stub::setStatus_(self_01,(ulong)param_4);
                  goto LAB_1007293bc;
                }
                IVar7 = IVar7 + 1;
              } while (IVar4 != IVar7);
              IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                                (self,&local_1f0,auStack_170,0x10);
            } while (IVar4 != 0);
          }
LAB_1007293bc:
          IVar2 = IVar2 + 1;
        } while (IVar2 != local_1f8);
        local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                              (param_3,&local_1b0,auStack_f0,0x10);
      } while (local_1f8 != 0);
    }
    bVar1 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar1;
}

