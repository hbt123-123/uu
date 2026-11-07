// rea decompile_all
// name: SentryTracer::deadlineTimeoutExceeded
// address: 0x10076ddb4
// body: available
// range: 0x10076ddb4-0x10076e007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076e004 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::deadlineTimeoutExceeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID self;
  ID IVar6;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m")
    ;
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Sentrytracerdeadlineexceeded);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
  }
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_1007ecf80(param_1);
  _objc_sync_exit(param_1);
  IVar3 = 0;
  if ((IVar1 & 1) == 0) {
    lVar5 = (long)_children;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    _objc_sync_enter();
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    IVar1 = *(ID *)(param_1 + lVar5);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_120,auStack_d8,0x10);
    if (IVar3 != 0) {
      lVar5 = *local_110;
      do {
        IVar6 = 0;
        do {
          if (*local_110 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_118 + IVar6 * 8);
          IVar4 = objc_stub::FUN_1007ecf80(self);
          if ((IVar4 & 1) == 0) {
            objc_stub::FUN_1007e9d60(self,2);
          }
          IVar6 = IVar6 + 1;
        } while (IVar3 != IVar6);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_120,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
    _objc_sync_exit(uVar2);
    *(undefined8 *)(param_1 + (long)_finishStatus) = 2;
    IVar3 = objc_stub::finishInternal(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}

