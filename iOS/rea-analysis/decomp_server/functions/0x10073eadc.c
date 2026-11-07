// rea decompile_all
// name: SentryClient::prepareEvent:withScope:alwaysAttachStacktrace:isCrashEvent:
// address: 0x10073eadc
// body: available
// range: 0x10073eadc-0x10073f76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073f764 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073f768 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClient::prepareEvent_withScope_alwaysAttachStacktrace_isCrashEvent_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  uint uVar9;
  long lVar10;
  ID IVar11;
  ID IVar12;
  unsigned_long_long uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  unsigned_long_long local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == 0) {
    IVar11 = 0;
    goto LAB_10073f724;
  }
  bVar3 = isDisabled(param_1);
  if (bVar3 != 0) {
    logDisabledMessage(param_1);
LAB_10073eb4c:
    IVar11 = 0;
    goto LAB_10073f724;
  }
  IVar11 = objc_stub::type(param_3);
  if (IVar11 == 0) {
    uVar9 = 1;
  }
  else {
    IVar11 = objc_stub::type(param_3);
    IVar11 = objc_stub::isEqualToString_(IVar11,&cf_transaction);
    uVar9 = (uint)IVar11 ^ 1;
  }
  IVar11 = objc_stub::type(param_3);
  if (IVar11 == 0) {
    uVar15 = 1;
  }
  else {
    IVar11 = objc_stub::type(param_3);
    IVar11 = objc_stub::isEqualToString_(IVar11,&cf_replay_video);
    uVar15 = (uint)IVar11 ^ 1;
  }
  IVar11 = objc_stub::type(param_3);
  if (IVar11 == 0) {
    uVar4 = 0;
  }
  else {
    IVar11 = objc_stub::type(param_3);
    IVar11 = objc_stub::isEqualToString_(IVar11,&cf_feedback);
    uVar4 = (uint)IVar11;
  }
  if ((uVar9 & uVar15) == 1) {
    IVar11 = options(param_1);
    IVar11 = objc_stub::sampleRate(IVar11);
    bVar3 = isSampled_(param_1,IVar11);
    if (bVar3 != 0) {
      IVar11 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar11 != 0) {
        IVar11 = NSString::stringWithUTF8String_
                           ((ID)&_OBJC_CLASS___NSString,
                            "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                           );
        IVar11 = NSString::lastPathComponent(IVar11);
        NSString::stringByDeletingPathExtension(IVar11);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Eventgotsampled_willnotsendtheevent);
        IVar11 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar11,1);
      }
      recordLostEvent_reason_(param_1,2,2);
      goto LAB_10073eb4c;
    }
  }
  IVar11 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar11 = NSBundle::infoDictionary(IVar11);
  if ((IVar11 != 0) && (IVar5 = objc_stub::dist(param_3), IVar5 == 0)) {
    IVar11 = NSBundle::objectForKeyedSubscript_(IVar11,&cf_CFBundleVersion);
    objc_stub::setDist_(param_3,IVar11);
  }
  IVar11 = options(param_1);
  IVar11 = objc_stub::releaseName(IVar11);
  IVar5 = objc_stub::releaseName(param_3);
  if ((IVar5 == 0) && (IVar11 != 0)) {
    objc_stub::setReleaseName_(param_3,IVar11);
  }
  IVar11 = options(param_1);
  IVar11 = objc_stub::dist(IVar11);
  if (IVar11 != 0) {
    objc_stub::setDist_(param_3,IVar11);
  }
  setSdk_(param_1,param_3);
  if (((uVar9 & uVar15 ^ 1 | uVar4) & 1) == 0) {
    if ((param_5 & 1) == 0) {
      IVar11 = options(param_1);
      IVar11 = objc_stub::attachStacktrace(IVar11);
      if ((IVar11 & 1) == 0) {
        IVar11 = objc_stub::exceptions(param_3);
        if (IVar11 == 0) {
          bVar1 = false;
        }
        else {
          IVar11 = objc_stub::exceptions(param_3);
          IVar11 = objc_stub::count(IVar11);
          bVar1 = IVar11 != 0;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    IVar11 = objc_stub::threads(param_3);
    if (IVar11 == 0) {
      bVar2 = false;
    }
    else {
      IVar11 = objc_stub::threads(param_3);
      IVar11 = objc_stub::count(IVar11);
      bVar2 = IVar11 != 0;
    }
    if (((param_6 & 1) == 0 && !(bool)(bVar1 ^ 1U)) && (!bVar2)) {
      IVar11 = threadInspector(param_1);
      IVar11 = objc_stub::getCurrentThreads(IVar11);
      objc_stub::setThreads_(param_3,IVar11);
    }
    IVar11 = objc_stub::debugMeta(param_3);
    if (IVar11 == 0) {
      bVar2 = false;
    }
    else {
      IVar11 = objc_stub::debugMeta(param_3);
      IVar11 = objc_stub::count(IVar11);
      bVar2 = IVar11 != 0;
    }
    if ((((param_6 & 1) == 0 && !(bool)(bVar1 ^ 1U)) && !bVar2) &&
       (IVar11 = objc_stub::threads(param_3), IVar11 != 0)) {
      IVar11 = debugImageProvider(param_1);
      IVar5 = objc_stub::threads(param_3);
      IVar11 = objc_stub::getDebugImagesFromCacheForThreads_(IVar11,IVar5);
      objc_stub::setDebugMeta_(param_3,IVar11);
    }
  }
  if ((param_6 & 1) == 0) {
    IVar11 = options(param_1);
    IVar11 = objc_stub::maxBreadcrumbs(IVar11);
    param_3 = objc_stub::applyToEvent_maxBreadcrumb_(param_4,param_3,IVar11);
  }
  if ((uVar15 & 1) == 0) {
    objc_stub::setBreadcrumbs_(param_3,0);
  }
  bVar3 = isWatchdogTermination_isCrashEvent_(param_1,param_3,param_6);
  if (bVar3 == 0) {
    if ((param_6 & 1) == 0) {
      applyExtraDeviceContextToEvent_(param_1,param_3);
      applyCultureContextToEvent_(param_1,param_3);
    }
  }
  else {
    removeExtraDeviceContextFromEvent_(param_1,param_3);
  }
  IVar11 = objc_stub::environment(param_3);
  if (IVar11 == 0) {
    IVar11 = options(param_1);
    IVar11 = objc_stub::environment(IVar11);
    objc_stub::setEnvironment_(param_3,IVar11);
  }
  setUserIdIfNoUserSet_(param_1,param_3);
  IVar11 = options(param_1);
  IVar11 = objc_stub::sendDefaultPii(IVar11);
  if ((int)IVar11 != 0) {
    IVar11 = objc_stub::user(param_3);
    IVar11 = objc_stub::ipAddress(IVar11);
    if (IVar11 == 0) {
      IVar11 = objc_stub::user(param_3);
      objc_stub::setIpAddress_(IVar11,&cf___auto__);
    }
  }
  IVar11 = objc_stub::type(param_3);
  if (IVar11 == 0) {
LAB_10073f320:
    bVar1 = false;
LAB_10073f324:
    bVar2 = false;
    local_f8 = 0;
    uVar13 = 1;
  }
  else {
    IVar11 = objc_stub::type(param_3);
    IVar11 = objc_stub::isEqualToString_(IVar11,&cf_transaction);
    if ((IVar11 & 1) == 0) goto LAB_10073f320;
    IVar11 = objc_stub::class((ID)&objc::class_t::SentryTransaction);
    IVar11 = objc_stub::isKindOfClass_(param_3,IVar11);
    if ((int)IVar11 == 0) {
      bVar1 = true;
      goto LAB_10073f324;
    }
    IVar11 = objc_stub::spans(param_3);
    local_f8 = objc_stub::count(IVar11);
    uVar13 = local_f8 + 1;
    bVar2 = true;
    bVar1 = true;
  }
  IVar5 = callEventProcessors_(param_1,param_3);
  if (IVar5 == 0) {
    recordLost_reason_(param_1,uVar9,1);
    if (bVar1) {
      recordLostSpanWithReason_quantity_(param_1,1,uVar13);
    }
    IVar11 = 0;
  }
  else {
    if (bVar2) {
      recordPartiallyDroppedSpans_withReason_withCurrentSpanCount_(param_1,IVar5,1,&local_f8);
    }
    if (bVar1) {
      IVar11 = options(param_1);
      IVar11 = objc_stub::beforeSendSpan(IVar11);
      if (IVar11 != 0) {
        IVar11 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
        lStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        local_130 = (long *)0x0;
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        IVar6 = objc_stub::spans(IVar5);
        IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar6,&local_140,auStack_f0,0x10);
        if (IVar7 != 0) {
          lVar10 = *local_130;
          do {
            IVar12 = 0;
            do {
              if (*local_130 != lVar10) {
                _objc_enumerationMutation(IVar6);
              }
              uVar14 = *(undefined8 *)(lStack_138 + IVar12 * 8);
              IVar8 = options(param_1);
              IVar8 = objc_stub::beforeSendSpan(IVar8);
              (**(code **)(IVar8 + 0x10))(IVar8,uVar14);
              if (IVar8 != 0) {
                NSMutableArray::addObject_(IVar11,IVar8);
              }
              IVar12 = IVar12 + 1;
            } while (IVar7 != IVar12);
            IVar7 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar6,&local_140,auStack_f0,0x10);
          } while (IVar7 != 0);
        }
        objc_stub::setSpans_(IVar5,IVar11);
        if (bVar2) {
          recordPartiallyDroppedSpans_withReason_withCurrentSpanCount_(param_1,IVar5,0,&local_f8);
        }
      }
    }
    IVar11 = options(param_1);
    IVar6 = objc_stub::beforeSend(IVar11);
    IVar11 = IVar5;
    if (IVar6 != 0) {
      IVar11 = options(param_1);
      IVar11 = objc_stub::beforeSend(IVar11);
      (**(code **)(IVar11 + 0x10))(IVar11,IVar5);
      if (IVar11 == 0) {
        recordLost_reason_(param_1,uVar9,0);
        if (bVar1) {
          recordLostSpanWithReason_quantity_(param_1,0,local_f8 + 1);
          IVar11 = 0;
        }
        goto LAB_10073f724;
      }
      if (bVar2) {
        recordPartiallyDroppedSpans_withReason_withCurrentSpanCount_(param_1,IVar11,0,&local_f8);
      }
    }
    if (param_6 != 0) {
      IVar5 = options(param_1);
      IVar5 = objc_stub::onCrashedLastRun(IVar5);
      if ((IVar5 != 0) &&
         (bVar3 = SentrySDK::crashedLastRunCalled((ID)&objc::class_t::SentrySDK), (bVar3 & 1) == 0))
      {
        SentrySDK::setCrashedLastRunCalled_((ID)&objc::class_t::SentrySDK,1);
        IVar5 = options(param_1);
        IVar5 = objc_stub::onCrashedLastRun(IVar5);
        (**(code **)(IVar5 + 0x10))(IVar5,IVar11);
      }
    }
  }
LAB_10073f724:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar11;
}

