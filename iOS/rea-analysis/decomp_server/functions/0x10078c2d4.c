// rea decompile_all
// name: SentryProfiler::start
// address: 0x10078c2d4
// body: available
// range: 0x10078c2d4-0x10078c6c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078c4cc to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10078c6c4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfiler::start(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  void *pvVar2;
  undefined ***pppuVar3;
  long lVar4;
  long *plVar5;
  long local_98 [3];
  long *local_80;
  undefined **local_78;
  ID IStack_70;
  undefined ***local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = param_1;
  FUN_10074e840();
  if ((int)IVar1 == 0) {
    plVar5 = (long *)(param_1 + 8);
    if (*plVar5 != 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
      if ((int)IVar1 == 0) goto LAB_10078c690;
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Thereisalreadyaprivateprofilerinstancepresent_willnotstartanewone_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
      goto LAB_10078c478;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Startingprofiler_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    self = &objc::class_t::SentryProfilerState;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
    objc_stub::setState_(param_1,IVar1);
    pvVar2 = operator_new(0x98);
    local_78 = &PTR_FUN_1009e9780;
    IStack_70 = IVar1;
    local_60 = &local_78;
    thunk_FUN_1007444e8(pvVar2,&local_78,0x65);
    if (local_60 == &local_78) {
      lVar4 = 4;
      pppuVar3 = &local_78;
LAB_10078c628:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (local_60 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = local_60;
      goto LAB_10078c628;
    }
    FUN_10078cc14(plVar5,pvVar2);
    local_80 = (long *)0x0;
    FUN_1007448f8(*plVar5,local_98);
    if (local_80 == local_98) {
      lVar4 = 4;
      plVar5 = local_98;
LAB_10078c67c:
      (**(code **)(*plVar5 + lVar4 * 8))();
    }
    else if (local_80 != (long *)0x0) {
      lVar4 = 5;
      plVar5 = local_80;
      goto LAB_10078c67c;
    }
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_DisablingprofilingwhenrunningwithTSAN);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
LAB_10078c478:
      IVar1 = 0;
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
        return;
      }
      goto LAB_10078c6c4;
    }
  }
LAB_10078c690:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
LAB_10078c6c4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar1);
}

