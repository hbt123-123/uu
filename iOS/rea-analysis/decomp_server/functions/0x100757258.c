// rea decompile_all
// name: SentryInAppLogic::isInApp:
// address: 0x100757258
// body: available
// range: 0x100757258-0x10075745b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100757458 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryInAppLogic::isInApp_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  bool bVar5;
  long lVar6;
  ID IVar7;
  undefined8 local_1e0;
  long lStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == 0) {
    bVar5 = 0;
  }
  else {
    IVar1 = objc_stub::lastPathComponent(param_3);
    IVar1 = objc_stub::FUN_1007edf60(IVar1);
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    local_190 = (long *)0x0;
    IVar2 = objc_stub::inAppIncludes(param_1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1a0,auStack_d8,0x10);
    if (IVar3 != 0) {
      lVar6 = *local_190;
      do {
        IVar7 = 0;
        do {
          if (*local_190 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          IVar4 = objc_stub::FUN_1007ed060
                            ((ID)&objc::class_t::SentryInAppLogic,IVar1,
                             *(undefined8 *)(lStack_198 + IVar7 * 8));
          if ((IVar4 & 1) != 0) {
            bVar5 = 1;
            goto LAB_100757410;
          }
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1a0,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = (long *)0x0;
    IVar2 = objc_stub::inAppExcludes(param_1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1e0,auStack_158,0x10)
    ;
    bVar5 = 0;
    if (IVar3 != 0) {
      lVar6 = *local_1d0;
      do {
        IVar7 = 0;
        do {
          if (*local_1d0 != lVar6) {
            _objc_enumerationMutation(IVar2);
          }
          IVar4 = objc_stub::hasPrefix_(IVar1,*(undefined8 *)(lStack_1d8 + IVar7 * 8));
          if ((IVar4 & 1) != 0) {
            bVar5 = 0;
            goto LAB_100757410;
          }
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1e0,auStack_158,0x10);
      } while (IVar3 != 0);
      bVar5 = 0;
    }
LAB_100757410:
    param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}

