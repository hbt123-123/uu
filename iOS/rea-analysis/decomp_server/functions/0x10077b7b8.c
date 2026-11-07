// rea decompile_all
// name: FUN_10077b7b8
// address: 0x10077b7b8
// body: available
// range: 0x10077b7b8-0x10077be4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077be48 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10077b7b8(ulong param_1)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  ID self;
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
  
  IVar2 = DAT_100b2dff0;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  _objc_sync_enter();
  IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar3 != 0) {
    IVar3 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                      );
    IVar3 = NSString::lastPathComponent(IVar3);
    NSString::stringByDeletingPathExtension(IVar3);
    NSString::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,
               &cf_EnteredsynchronizedregionofSentryConnectivityCallbackwithflags__u);
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
  }
  IVar3 = objc_stub::count(DAT_100b2dff0);
  if (IVar3 == 0) {
    IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar3 != 0) {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                        );
      IVar3 = NSString::lastPathComponent(IVar3);
      NSString::stringByDeletingPathExtension(IVar3);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Noreachabilityobserversregistered_Nothingtodo_);
      IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    }
  }
  else {
    uVar4 = param_1;
    FUN_10077b654();
    if ((uVar4 & 1) == 0) {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 != 0) {
        IVar3 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                          );
        IVar3 = NSString::lastPathComponent(IVar3);
        NSString::stringByDeletingPathExtension(IVar3);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_SentryConnectivityShouldReportChangereturnedNOforflags_u_willnotreportchangetoobservers_
                  );
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      }
    }
    else {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 != 0) {
        IVar3 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                          );
        IVar3 = NSString::lastPathComponent(IVar3);
        NSString::stringByDeletingPathExtension(IVar3);
        NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Notifyingobservers___);
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      }
      IVar3 = DAT_100b2dff0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                        (DAT_100b2dff0,&local_130,auStack_f0,0x10);
      if (IVar5 != 0) {
        lVar7 = *local_120;
        pcVar1 = &cf_none;
        if ((param_1 & 2) != 0) {
          pcVar1 = &cf_wifi;
        }
        do {
          IVar8 = 0;
          do {
            if (*local_120 != lVar7) {
              _objc_enumerationMutation(IVar3);
            }
            self = *(ID *)(lStack_128 + IVar8 * 8);
            IVar6 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
            if ((int)IVar6 != 0) {
              IVar6 = NSString::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                                );
              IVar6 = NSString::lastPathComponent(IVar6);
              NSString::stringByDeletingPathExtension(IVar6);
              NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Notifying__);
              IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar6,1)
              ;
            }
            objc_stub::connectivityChanged_typeDescription_
                      (self,(ulong)((uint)param_1 >> 1 & 1),pcVar1);
            IVar8 = IVar8 + 1;
          } while (IVar5 != IVar8);
          IVar5 = objc_stub::countByEnumeratingWithState_objects_count_
                            (IVar3,&local_130,auStack_f0,0x10);
        } while (IVar5 != 0);
      }
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 != 0) {
        IVar3 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                          );
        IVar3 = NSString::lastPathComponent(IVar3);
        NSString::stringByDeletingPathExtension(IVar3);
        NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Finishednotifyingobservers_);
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      }
    }
  }
  _objc_sync_exit(IVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

