// rea decompile_all
// name: SentryNSURLRequest::initStoreRequestWithDsn:andData:didFailWithError:
// address: 0x1007629c0
// body: available
// range: 0x1007629c0-0x100762bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryNSURLRequest::initStoreRequestWithDsn_andData_didFailWithError_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  objc_super local_70;
  
  IVar1 = objc_stub::FUN_1007ea900(param_3);
  local_70.super_class = &objc::class_t::SentryNSURLRequest;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"initWithURL:cachePolicy:timeoutInterval:",
                              0x402e000000000000,IVar1,1);
  if (IVar1 != 0) {
    IVar2 = objc_stub::url(param_3);
    FUN_100762bbc(IVar2);
    objc_stub::setHTTPMethod_(IVar1,&cf_POST);
    objc_stub::setValue_forHTTPHeaderField_(IVar1,IVar2,&cf_X_Sentry_Auth);
    objc_stub::setValue_forHTTPHeaderField_(IVar1,&cf_application_json,&cf_Content_Type);
    objc_stub::FUN_1007f0f40((ID)&objc::class_t::SentryMeta);
    objc_stub::FUN_1007f8120((ID)&objc::class_t::SentryMeta);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
    objc_stub::setValue_forHTTPHeaderField_(IVar1,IVar2,&cf_User_Agent);
    objc_stub::setValue_forHTTPHeaderField_(IVar1,&cf_gzip,&cf_Content_Encoding);
    FUN_10078991c(param_4,0xffffffffffffffff,param_5);
    objc_stub::setHTTPBody_(IVar1,param_4);
  }
  return IVar1;
}

