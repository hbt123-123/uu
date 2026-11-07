// rea decompile_all
// name: SentryCrashReportFilterConcatenate::filterReports:onCompletion:
// address: 0x1007597f8
// body: available
// range: 0x1007597f8-0x100759ab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100759ab4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterConcatenate::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  ID local_200;
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
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_200 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_1b0,auStack_f0,0x10);
  if (local_200 != 0) {
    lVar4 = *local_1a0;
    do {
      IVar5 = 0;
      do {
        if (*local_1a0 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + IVar5 * 8);
        self = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = objc_stub::keys(param_1);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self_00,&local_1f0,auStack_170,0x10);
        if (IVar2 != 0) {
          lVar9 = *local_1e0;
          bVar8 = true;
          do {
            IVar7 = 0;
            do {
              if (*local_1e0 != lVar9) {
                _objc_enumerationMutation(self_00);
              }
              uVar6 = *(undefined8 *)(lStack_1e8 + IVar7 * 8);
              if (!bVar8) {
                IVar3 = objc_stub::FUN_1007f1640(param_1);
                objc_stub::appendFormat_(self,IVar3);
              }
              FUN_1007ad5ac(uVar10,uVar6);
              objc_stub::appendFormat_(self,&cf___);
              bVar8 = false;
              IVar7 = IVar7 + 1;
            } while (IVar2 != IVar7);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (self_00,&local_1f0,auStack_170,0x10);
            bVar8 = false;
          } while (IVar2 != 0);
        }
        objc_stub::addObject_(IVar1,self);
        IVar5 = IVar5 + 1;
      } while (IVar5 != local_200);
      local_200 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_1b0,auStack_f0,0x10);
    } while (local_200 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

