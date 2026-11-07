// rea decompile_all
// name: SentryNSURLRequest::initEnvelopeRequestWithURL:andData:authHeader:didFailWithError:
// address: 0x100762ed0
// body: available
// range: 0x100762ed0-0x10076315b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryNSURLRequest::initEnvelopeRequestWithURL_andData_authHeader_didFailWithError_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  ID self;
  ID IVar1;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryNSURLRequest;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"initWithURL:cachePolicy:timeoutInterval:",0x402e000000000000
                             ,param_3,1);
  if (self != 0) {
    objc_stub::setHTTPMethod_(self,&cf_POST);
    if (param_5 != 0) {
      objc_stub::setValue_forHTTPHeaderField_(self,param_5,&cf_X_Sentry_Auth);
    }
    objc_stub::setValue_forHTTPHeaderField_(self,&cf_application_x_sentry_envelope,&cf_Content_Type)
    ;
    objc_stub::FUN_1007f0f40((ID)&objc::class_t::SentryMeta);
    objc_stub::FUN_1007f8120((ID)&objc::class_t::SentryMeta);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
    objc_stub::setValue_forHTTPHeaderField_(self,IVar1,&cf_User_Agent);
    objc_stub::setValue_forHTTPHeaderField_(self,&cf_gzip,&cf_Content_Encoding);
    FUN_10078991c(param_4,0xffffffffffffffff,param_6);
    objc_stub::setHTTPBody_(self,param_4);
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSURLRequest.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Constructedrequest___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  return self;
}

