// rea decompile_all
// name: SentryANRTrackingIntegration::anrDetectedWithType:
// address: 0x100787478
// body: available
// range: 0x100787478-0x100787963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078783c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100787960 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackingIntegration::anrDetectedWithType_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID self;
  ID IVar4;
  ID self_00;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007f07a0(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackingIntegration.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_AppHangTrackingpaused_Ignoringreportedapphang_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      IVar1 = 0;
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        return;
      }
      goto LAB_100787960;
    }
  }
  else {
    IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
    IVar1 = objc_stub::getClient(IVar1);
    IVar1 = objc_stub::threadInspector(IVar1);
    IVar1 = objc_stub::FUN_1007ea3e0(IVar1);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 == 0) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackingIntegration.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_Gettingcurrentthreadreturnedanemptylist_Can_tcreateAppHangeventwithoutastacktrace_
                  );
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
      }
    }
    else {
      IVar2 = objc_stub::options(param_1);
      objc_stub::FUN_1007e5560(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_atleast_lims);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Apphangingfor___);
      pcVar3 = &objc::class_t::SentryEvent;
      _objc_alloc();
      self = objc_stub::initWithLevel_((ID)pcVar3,4);
      IVar4 = objc_stub::FUN_1007ea600
                        ((ID)&objc::class_t::_TtC6Sentry23SentryAppHangTypeMapper,param_3);
      pcVar3 = &objc::class_t::SentryException;
      _objc_alloc();
      IVar2 = objc_stub::initWithValue_type_((ID)pcVar3,IVar2,IVar4);
      pcVar3 = &objc::class_t::SentryMechanism;
      _objc_alloc();
      IVar4 = objc_stub::initWithType_((ID)pcVar3,&cf_AppHang);
      objc_stub::setMechanism_(IVar2,IVar4);
      IVar4 = objc_stub::objectAtIndexedSubscript_(IVar1,0);
      IVar4 = objc_stub::stacktrace(IVar4);
      objc_stub::setStacktrace_(IVar2,IVar4);
      IVar4 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
      self_00 = objc_stub::stacktrace(IVar2);
      objc_stub::FUN_1007f4bc0(self_00,IVar4);
      objc_stub::enumerateObjectsUsingBlock_(IVar1,&PTR___NSConcreteGlobalBlock_1009e9680);
      local_70 = IVar2;
      IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
      objc_stub::setExceptions_(self,IVar2);
      objc_stub::setThreads_(self,IVar1);
      objc_stub::captureEvent_((ID)&objc::class_t::SentrySDK,self);
    }
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
LAB_100787960:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar1);
}

