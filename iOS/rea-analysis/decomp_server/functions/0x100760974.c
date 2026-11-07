// rea decompile_all
// name: SentryNetworkTracker::addBreadcrumbForSessionTask:
// address: 0x100760974
// body: available
// range: 0x100760974-0x100760df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100760df0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryNetworkTracker::addBreadcrumbForSessionTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  ID self;
  ID IVar6;
  
  IVar1 = objc_stub::FUN_1007ed2a0(param_1);
  if ((int)IVar1 != 0) {
    IVar1 = param_3;
    _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_BREADCRUMB_1009e8f10);
    if (IVar1 != 0) {
      IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSNumber);
      IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
      if (((int)IVar2 != 0) && (IVar1 = objc_stub::boolValue(IVar1), (IVar1 & 1) != 0)) {
        return;
      }
    }
    IVar1 = param_3;
    _objc_getAssociatedObject(param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_START_DATE_1009e8f08);
    IVar2 = objc_stub::FUN_1007f0a40(param_3);
    IVar2 = objc_stub::FUN_1007f7d00(param_1,IVar2);
    IVar3 = objc_stub::FUN_1007ea320(param_1,param_3,IVar2);
    pcVar4 = &objc::class_t::SentryBreadcrumb;
    _objc_alloc();
    IVar3 = objc_stub::FUN_1007ebc60((ID)pcVar4,IVar3,&cf_http);
    pcVar4 = &objc::class_t::_TtC6Sentry12UrlSanitized;
    _objc_alloc();
    IVar5 = objc_stub::FUN_1007e78c0(param_3);
    IVar5 = objc_stub::URL(IVar5);
    IVar5 = objc_stub::FUN_1007ec640((ID)pcVar4,IVar5);
    objc_stub::setType_(IVar3,&cf_http);
    self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar6 = objc_stub::FUN_1007f0ca0(IVar5);
    objc_stub::setObject_forKeyedSubscript_(self,IVar6,&cf_url);
    IVar6 = objc_stub::FUN_1007e78c0(param_3);
    IVar6 = objc_stub::FUN_1007e49e0(IVar6);
    objc_stub::setObject_forKeyedSubscript_(self,IVar6,&cf_method);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_request_start);
    IVar1 = objc_stub::FUN_1007e73c0(param_3);
    IVar1 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_request_body_size);
    IVar1 = objc_stub::FUN_1007e73a0(param_3);
    IVar1 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_response_body_size);
    if (IVar2 != 0xffffffffffffffff) {
      IVar1 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_status_code);
      IVar1 = objc_stub::FUN_1007edca0((ID)&_OBJC_CLASS___NSHTTPURLResponse,IVar2);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_reason);
      IVar1 = objc_stub::FUN_1007ecfe0(param_1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_1007ea6e0
                          ((ID)&objc::class_t::_TtC6Sentry20URLSessionTaskHelper,param_3);
        objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_graphql_operation_name);
      }
    }
    IVar1 = objc_stub::FUN_1007ef960(IVar5);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007ef960(IVar5);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_http_query);
    }
    IVar1 = objc_stub::FUN_1007ea0e0(IVar5);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007ea0e0(IVar5);
      objc_stub::setObject_forKeyedSubscript_(self,IVar1,&cf_http_fragment);
    }
    objc_stub::setData_(IVar3,self);
    objc_stub::addBreadcrumb_((ID)&objc::class_t::SentrySDK,IVar3);
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
    _objc_setAssociatedObject
              (param_3,&PTR_cf_SENTRY_NETWORK_REQUEST_TRACKER_BREADCRUMB_1009e8f10,IVar1,1);
  }
  return;
}

