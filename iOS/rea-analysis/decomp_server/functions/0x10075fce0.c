// rea decompile_all
// name: SentryNetworkTracker::captureFailedRequests:
// address: 0x10075fce0
// body: available
// range: 0x10075fce0-0x100760843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100760840 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::captureFailedRequests_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  class_t *pcVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  long lVar12;
  ID self;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  cfstringStruct *local_108;
  ID IStack_100;
  ID local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007ecc80(param_1);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 == 0) goto LAB_100760208;
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,
               &cf_captureFailedRequestsEnabledisdisabled_notcapturingHTTPClienterrors_);
  }
  else {
    IVar1 = objc_stub::FUN_1007e78c0(param_3);
    if ((IVar1 == 0) || (IVar1 = objc_stub::FUN_1007f0a40(param_3), IVar1 == 0)) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 == 0) goto LAB_100760208;
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_RequestorResponsearenull_notcapturingHTTPClienterrors_);
    }
    else {
      IVar1 = objc_stub::FUN_1007f0a40(param_3);
      IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSHTTPURLResponse);
      IVar1 = objc_stub::isKindOfClass_(IVar1,IVar2);
      if ((IVar1 & 1) != 0) {
        IVar1 = objc_stub::FUN_1007f0a40(param_3);
        IVar2 = objc_stub::FUN_1007e78c0(param_3);
        IVar3 = objc_stub::statusCode(IVar1);
        IVar3 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar3);
        IVar4 = objc_stub::statusCode(IVar1);
        IVar4 = objc_stub::FUN_1007e7020(param_1,IVar4);
        if ((IVar4 & 1) == 0) {
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 == 0) goto LAB_100760208;
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf_Responsestatuscodeisn_twithintheallowedranges_notcapturingHTTPClienterrors_
                    );
        }
        else {
          IVar4 = objc_stub::URL(IVar2);
          IVar5 = objc_stub::options((ID)&objc::class_t::SentrySDK);
          IVar5 = objc_stub::FUN_1007e98a0(IVar5);
          IVar4 = objc_stub::FUN_1007ed500(param_1,IVar4,IVar5);
          if ((IVar4 & 1) != 0) {
            objc_stub::statusCode(IVar1);
            IVar4 = objc_stub::stringWithFormat_
                              ((ID)&_OBJC_CLASS___NSString,&cf_HTTPClientErrorwithstatuscode__ld);
            pcVar6 = &objc::class_t::SentryEvent;
            _objc_alloc();
            IVar5 = objc_stub::initWithLevel_((ID)pcVar6,4);
            IVar7 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
            IVar7 = objc_stub::getClient(IVar7);
            IVar7 = objc_stub::threadInspector(IVar7);
            IVar7 = objc_stub::getCurrentThreads(IVar7);
            pcVar6 = &objc::class_t::SentryException;
            _objc_alloc();
            IVar4 = objc_stub::initWithValue_type_((ID)pcVar6,IVar4,&cf_HTTPClientError);
            pcVar6 = &objc::class_t::SentryMechanism;
            _objc_alloc();
            IVar8 = objc_stub::initWithType_((ID)pcVar6,&cf_HTTPClientError);
            objc_stub::setMechanism_(IVar4,IVar8);
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            lStack_148 = 0;
            local_150 = 0;
            uStack_138 = 0;
            local_140 = (long *)0x0;
            IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar7,&local_150,auStack_f0,0x10);
            if (IVar8 != 0) {
              lVar12 = *local_140;
              do {
                IVar11 = 0;
                do {
                  if (*local_140 != lVar12) {
                    _objc_enumerationMutation(IVar7);
                  }
                  self = *(ID *)(lStack_148 + IVar11 * 8);
                  IVar9 = objc_stub::FUN_1007e77a0(self);
                  IVar9 = objc_stub::boolValue(IVar9);
                  if ((int)IVar9 != 0) {
                    IVar7 = objc_stub::stacktrace(self);
                    IVar8 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
                    objc_stub::FUN_1007f4bc0(IVar7,IVar8);
                    objc_stub::setStacktrace_(IVar4,IVar7);
                    goto LAB_10076040c;
                  }
                  IVar11 = IVar11 + 1;
                } while (IVar8 != IVar11);
                IVar8 = objc_stub::countByEnumeratingWithState_objects_count_
                                  (IVar7,&local_150,auStack_f0,0x10);
              } while (IVar8 != 0);
            }
LAB_10076040c:
            pcVar6 = &objc::class_t::SentryRequest;
            _objc_alloc();
            IVar7 = objc_stub::init((ID)pcVar6);
            pcVar6 = &objc::class_t::_TtC6Sentry12UrlSanitized;
            _objc_alloc();
            IVar8 = objc_stub::FUN_1007e78c0(param_3);
            IVar8 = objc_stub::URL(IVar8);
            IVar8 = objc_stub::FUN_1007ec640((ID)pcVar6,IVar8);
            IVar11 = objc_stub::FUN_1007f0ca0(IVar8);
            objc_stub::FUN_1007f5440(IVar7,IVar11);
            IVar11 = objc_stub::FUN_1007e49e0(IVar2);
            objc_stub::setMethod_(IVar7,IVar11);
            IVar11 = objc_stub::FUN_1007ea0e0(IVar8);
            objc_stub::FUN_1007f30e0(IVar7,IVar11);
            IVar8 = objc_stub::FUN_1007ef960(IVar8);
            objc_stub::FUN_1007f4380(IVar7,IVar8);
            IVar8 = objc_stub::FUN_1007e73c0(param_3);
            IVar8 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar8);
            objc_stub::FUN_1007f1da0(IVar7,IVar8);
            IVar8 = objc_stub::FUN_1007e52e0(IVar2);
            if (IVar8 != 0) {
              IVar2 = objc_stub::FUN_1007e52e0(IVar2);
              IVar2 = objc_stub::copy(IVar2);
              IVar2 = objc_stub::FUN_1007f0c80
                                ((ID)&objc::class_t::_TtC6Sentry19HTTPHeaderSanitizer,IVar2);
              objc_stub::FUN_1007f3260(IVar7,IVar2);
            }
            local_f8 = IVar4;
            IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_f8,1);
            objc_stub::setExceptions_(IVar5,IVar2);
            objc_stub::FUN_1007f4620(IVar5,IVar7);
            puVar10 = &_OBJC_CLASS___NSMutableDictionary;
            _objc_alloc();
            IVar2 = objc_stub::init((ID)puVar10);
            puVar10 = &_OBJC_CLASS___NSMutableDictionary;
            _objc_alloc();
            IVar4 = objc_stub::init((ID)puVar10);
            objc_stub::setValue_forKey_(IVar4,IVar3,&cf_status_code);
            IVar3 = objc_stub::FUN_1007e5300(IVar1);
            if (IVar3 != 0) {
              IVar1 = objc_stub::FUN_1007e5300(IVar1);
              IVar1 = objc_stub::FUN_1007f0c80
                                ((ID)&objc::class_t::_TtC6Sentry19HTTPHeaderSanitizer,IVar1);
              objc_stub::setValue_forKey_(IVar4,IVar1,&cf_headers);
            }
            IVar1 = objc_stub::FUN_1007e73a0(param_3);
            if (IVar1 != 0) {
              IVar1 = objc_stub::FUN_1007e73a0(param_3);
              IVar1 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
              objc_stub::setValue_forKey_(IVar4,IVar1,&cf_body_size);
            }
            objc_stub::setObject_forKeyedSubscript_(IVar2,IVar4,&cf_response);
            IVar1 = objc_stub::FUN_1007ecfe0(param_1);
            if (((int)IVar1 != 0) &&
               (IVar1 = objc_stub::FUN_1007ea6e0
                                  ((ID)&objc::class_t::_TtC6Sentry20URLSessionTaskHelper,param_3),
               IVar1 != 0)) {
              local_108 = &cf_operation_name;
              IStack_100 = IVar1;
              IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                                ((ID)&_OBJC_CLASS___NSDictionary,&IStack_100,&local_108,1);
              objc_stub::setObject_forKeyedSubscript_(IVar2,IVar1,&cf_graphql);
            }
            objc_stub::setContext_(IVar5,IVar2);
            objc_stub::captureEvent_((ID)&objc::class_t::SentrySDK,IVar5);
            goto LAB_100760208;
          }
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 == 0) goto LAB_100760208;
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf_Requesturlisn_twithintherequesttargets_notcapturingHTTPClienterrors_);
        }
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        goto LAB_100760208;
      }
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 == 0) goto LAB_100760208;
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Responseisn_taknowntype_notcapturingHTTPClienterrors_);
    }
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
LAB_100760208:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

