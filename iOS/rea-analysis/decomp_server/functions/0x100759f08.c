// rea decompile_all
// name: SentryCrashReportFilterSubset::filterReports:onCompletion:
// address: 0x100759f08
// body: available
// range: 0x100759f08-0x10075a22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075a22c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterSubset::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  ID local_210;
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
  local_210 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_1b0,auStack_f0,0x10);
  if (local_210 != 0) {
    lVar5 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_1a8 + IVar6 * 8);
        self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = objc_stub::FUN_1007ed800(param_1);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self_00,&local_1f0,auStack_170,0x10);
        if (IVar2 != 0) {
          lVar7 = *local_1e0;
          do {
            IVar4 = 0;
            do {
              if (*local_1e0 != lVar7) {
                _objc_enumerationMutation(self_00);
              }
              IVar9 = *(ID *)(lStack_1e8 + IVar4 * 8);
              lVar3 = lVar8;
              FUN_1007ad5ac(lVar8,IVar9);
              if (lVar3 == 0) {
                IVar6 = objc_stub::class(param_1);
                IVar6 = objc_stub::description(IVar6);
                FUN_10079f85c(IVar6,0,&cf_Reportdidnothavekeypath__);
                if (param_4 != 0) {
                  (**(code **)(param_4 + 0x10))(param_4,IVar1,0,IVar6);
                }
                goto LAB_10075a1dc;
              }
              IVar9 = objc_stub::lastPathComponent(IVar9);
              objc_stub::setObject_forKey_(self,lVar3,IVar9);
              IVar4 = IVar4 + 1;
            } while (IVar2 != IVar4);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (self_00,&local_1f0,auStack_170,0x10);
          } while (IVar2 != 0);
        }
        objc_stub::addObject_(IVar1,self);
        IVar6 = IVar6 + 1;
      } while (IVar6 != local_210);
      local_210 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_1b0,auStack_f0,0x10);
    } while (local_210 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
LAB_10075a1dc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

