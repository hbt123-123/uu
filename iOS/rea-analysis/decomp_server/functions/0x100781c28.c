// rea decompile_all
// name: SentryCrashReportConverter::enhanceValueFromNotableAddresses:
// address: 0x100781c28
// body: available
// range: 0x100781c28-0x100781fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100781fd0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportConverter::enhanceValueFromNotableAddresses_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
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
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_1007e75e0(param_1);
    IVar2 = objc_stub::threads(param_1);
    IVar2 = objc_stub::count(IVar2);
    if (IVar1 < IVar2) {
      IVar1 = objc_stub::threads(param_1);
      IVar2 = objc_stub::FUN_1007e75e0(param_1);
      IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,IVar2);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_notable_addresses);
      self = &_OBJC_CLASS___NSMutableOrderedSet;
      _objc_alloc();
      IVar2 = objc_stub::init((ID)self);
      if (IVar1 != 0) {
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (long *)0x0;
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
        if (IVar3 != 0) {
          lVar7 = *local_120;
          do {
            IVar6 = 0;
            do {
              if (*local_120 != lVar7) {
                _objc_enumerationMutation(IVar1);
              }
              IVar4 = objc_stub::objectForKeyedSubscript_
                                (IVar1,*(undefined8 *)(lStack_128 + IVar6 * 8));
              IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_type);
              IVar5 = objc_stub::isEqualToString_(IVar5,&cf_string);
              if (((int)IVar5 != 0) &&
                 (IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_value), IVar5 != 0)) {
                IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_value);
                IVar5 = objc_stub::componentsSeparatedByString_(IVar5,&cf__);
                IVar5 = objc_stub::count(IVar5);
                if (IVar5 < 3) {
                  IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_value);
                  objc_stub::addObject_(IVar2,IVar4);
                }
              }
              IVar6 = IVar6 + 1;
            } while (IVar3 != IVar6);
            IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar1,&local_130,auStack_f0,0x10);
          } while (IVar3 != 0);
        }
      }
      IVar1 = objc_stub::count(IVar2);
      if (IVar1 != 0) {
        IVar1 = objc_stub::array(IVar2);
        IVar1 = objc_stub::FUN_1007f5b00(IVar1,"localizedCaseInsensitiveCompare:");
        IVar1 = objc_stub::componentsJoinedByString_(IVar1,&cf_>);
        objc_stub::FUN_1007f55e0(param_3,IVar1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

