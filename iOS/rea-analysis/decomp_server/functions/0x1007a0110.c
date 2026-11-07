// rea decompile_all
// name: SentryCrashReportSink::sendReports:onCompletion:
// address: 0x1007a0110
// body: available
// range: 0x1007a0110-0x1007a042b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a0428 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportSink::sendReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  ID local_138;
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
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray,param_3,param_4,(ulong)param_5);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_138 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
  if (local_138 != 0) {
    lVar4 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        self = &objc::class_t::SentryCrashReportConverter;
        _objc_alloc();
        IVar2 = objc_stub::inAppLogic(param_1);
        IVar2 = objc_stub::FUN_1007ec1c0((ID)self,uVar5,IVar2);
        IVar3 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
        IVar3 = objc_stub::getClient(IVar3);
        if (IVar3 == 0) {
          IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
          if ((int)IVar2 != 0) {
            IVar2 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCrashReportSink.m"
                              );
            IVar2 = objc_stub::lastPathComponent(IVar2);
            objc_stub::stringByDeletingPathExtension(IVar2);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &
                       cf_Crashreportswerefoundbutno_SentrySDK_currentHubgetClient_isset_CannotsendcrashreportstoSentry_Thisisprobablyamisconfiguration_makesureyousettheclientwith_SentrySDK_currentHubbindClient_beforecallingstartCrashHandlerWithError__
                      );
            IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
          }
        }
        else {
          IVar2 = objc_stub::FUN_1007e71c0(IVar2);
          if (IVar2 != 0) {
            objc_stub::FUN_1007eab40(param_1,IVar2,uVar5,IVar1);
          }
        }
        IVar6 = IVar6 + 1;
      } while (local_138 != IVar6);
      local_138 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_130,auStack_f0,0x10);
    } while (local_138 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

