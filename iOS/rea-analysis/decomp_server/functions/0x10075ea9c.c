// rea decompile_all
// name: SentryNetworkTracker::urlSessionTaskResume:
// address: 0x10075ea9c
// body: available
// range: 0x10075ea9c-0x10075f253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075f250 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::urlSessionTaskResume_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self;
  
  IVar1 = objc_stub::state(param_3);
  if ((IVar1 & 0xfffffffffffffffe) == 2) {
    return;
  }
  IVar1 = objc_stub::FUN_1007ed520(param_1,param_3);
  if ((int)IVar1 == 0) {
    return;
  }
  IVar1 = objc_stub::options((ID)&objc::class_t::SentrySDK);
  if (IVar1 == 0) {
    return;
  }
  IVar1 = objc_stub::FUN_1007e78c0(param_3);
  IVar1 = objc_stub::URL(IVar1);
  if (IVar1 == 0) {
    return;
  }
  IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDK);
  IVar2 = objc_stub::parsedDsn(IVar2);
  IVar2 = objc_stub::url(IVar2);
  IVar3 = objc_stub::host(IVar1);
  IVar4 = objc_stub::host(IVar2);
  IVar3 = objc_stub::isEqualToString_(IVar3,IVar4);
  if ((IVar3 & 1) != 0) {
    IVar3 = objc_stub::path(IVar1);
    IVar2 = objc_stub::path(IVar2);
    IVar2 = objc_stub::containsString_(IVar3,IVar2);
    if ((IVar2 & 1) != 0) {
      return;
    }
  }
  IVar2 = objc_stub::FUN_1007ed2a0(param_1);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::date((ID)&_OBJC_CLASS___NSDate);
    _objc_setAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_START_DATE_1009e8f08,IVar2,1);
  }
  IVar2 = objc_stub::FUN_1007ed2c0(param_1);
  if ((IVar2 & 1) == 0) {
    objc_stub::FUN_1007e5200(param_1,param_3);
    return;
  }
  self = &objc::class_t::_TtC6Sentry12UrlSanitized;
  _objc_alloc();
  IVar2 = objc_stub::FUN_1007ec640((ID)self,IVar1);
  _objc_sync_enter();
  IVar1 = param_3;
  _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_1009e8f00);
  if (IVar1 == 0) {
    IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
    IVar1 = objc_stub::scope(IVar1);
    IVar1 = objc_stub::span(IVar1);
    if (IVar1 != 0) {
      IVar3 = objc_stub::FUN_1007e78c0(param_3);
      objc_stub::FUN_1007e49e0(IVar3);
      objc_stub::FUN_1007f0ca0(IVar2);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
      IVar3 = objc_stub::startChildWithOperation_description_(IVar1,&cf_http_client,IVar3);
      objc_stub::setOrigin_(IVar3,&cf_auto_http_ns_url_session);
      IVar4 = objc_stub::FUN_1007e78c0(param_3);
      IVar4 = objc_stub::FUN_1007e49e0(IVar4);
      objc_stub::setDataValue_forKey_(IVar3,IVar4,&cf_http_request_method);
      IVar4 = objc_stub::FUN_1007f0ca0(IVar2);
      objc_stub::setDataValue_forKey_(IVar3,IVar4,&cf_url);
      objc_stub::setDataValue_forKey_(IVar3,&cf_fetch,&cf_type);
      IVar4 = objc_stub::queryItems(IVar2);
      if (IVar4 != 0) {
        IVar4 = objc_stub::queryItems(IVar2);
        IVar4 = objc_stub::count(IVar4);
        if (IVar4 != 0) {
          IVar4 = objc_stub::FUN_1007ef960(IVar2);
          objc_stub::setDataValue_forKey_(IVar3,IVar4,&cf_http_query);
        }
      }
      IVar4 = objc_stub::FUN_1007ea0e0(IVar2);
      if (IVar4 != 0) {
        IVar2 = objc_stub::FUN_1007ea0e0(IVar2);
        objc_stub::setDataValue_forKey_(IVar3,IVar2,&cf_http_fragment);
      }
      if (IVar3 != 0) {
        IVar2 = objc_stub::class((ID)&objc::class_t::SentryNoOpSpan);
        IVar2 = objc_stub::isKindOfClass_(IVar3,IVar2);
        if ((int)IVar2 == 0) {
          IVar1 = objc_stub::getTracer_((ID)&objc::class_t::SentryTracer,IVar1);
          IVar1 = objc_stub::traceContext(IVar1);
          IVar1 = objc_stub::FUN_1007f71a0(IVar1);
          IVar2 = objc_stub::FUN_1007f7200(IVar3);
          objc_stub::FUN_1007e4d60(param_1,IVar1,IVar2,param_3);
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 != 0) {
            IVar1 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                              );
            IVar1 = objc_stub::lastPathComponent(IVar1);
            objc_stub::stringByDeletingPathExtension(IVar1);
            objc_stub::description(IVar3);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &cf_SentryNetworkTrackerautomaticallystartedHTTPspanforsessionTask___);
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          }
          _objc_setAssociatedObject
                    (param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_SPAN_1009e8f00,IVar3,1);
          goto LAB_10075f200;
        }
      }
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNetworkTracker.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Notransactionboundtoscope_Won_ttracknetworkoperation_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    objc_stub::FUN_1007e5200(param_1,param_3);
  }
LAB_10075f200:
  _objc_sync_exit(param_3);
  return;
}

