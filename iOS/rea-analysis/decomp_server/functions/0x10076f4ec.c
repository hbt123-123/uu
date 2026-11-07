// rea decompile_all
// name: SentryTracer::hasUnfinishedChildSpansToWaitFor
// address: 0x10076f4ec
// body: available
// range: 0x10076f4ec-0x10076f6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076f6a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryTracer::hasUnfinishedChildSpansToWaitFor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ID self;
  ID IVar8;
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
  IVar1 = objc_stub::configuration(param_1);
  IVar1 = objc_stub::FUN_1007f81c0(IVar1);
  if ((int)IVar1 == 0) {
    bVar6 = 0;
  }
  else {
    lVar7 = (long)_children;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    _objc_sync_enter();
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    IVar1 = *(ID *)(param_1 + lVar7);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar7 = *local_120;
      do {
        IVar8 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_128 + IVar8 * 8);
          IVar4 = objc_stub::FUN_1007f5960(param_1);
          if (IVar4 == 0) {
LAB_10076f608:
            IVar4 = objc_stub::FUN_1007ecf80(self);
            if ((int)IVar4 == 0) {
              bVar6 = 1;
              goto LAB_10076f650;
            }
          }
          else {
            uVar5 = objc_stub::FUN_1007f5960(param_1);
            (**(code **)(uVar5 + 0x10))(uVar5,self);
            if ((uVar5 & 1) == 0) goto LAB_10076f608;
          }
          IVar8 = IVar8 + 1;
        } while (IVar3 != IVar8);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
    bVar6 = 0;
LAB_10076f650:
    _objc_sync_exit(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

