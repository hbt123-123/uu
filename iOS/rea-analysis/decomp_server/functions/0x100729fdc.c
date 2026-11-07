// rea decompile_all
// name: SAHTTPSession::init
// address: 0x100729fdc
// body: available
// range: 0x100729fdc-0x10072a10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAHTTPSession::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::SAHTTPSession;
  local_30 = param_1;
  IVar1 = NSObject::init((ID)&local_30,"init");
  if (IVar1 != 0) {
    IVar2 = SASecurityPolicy::defaultPolicy((ID)&objc::class_t::SASecurityPolicy);
    *(ID *)(IVar1 + 8) = IVar2;
    puVar3 = &_OBJC_CLASS___NSOperationQueue;
    _objc_alloc_init();
    *(undefined **)(IVar1 + 0x10) = puVar3;
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_cn_sensorsdata_SAHTTPSession__p);
    objc_stub::setName_(*(ID *)(IVar1 + 0x10),IVar2);
    objc_stub::setMaxConcurrentOperationCount_(*(ID *)(IVar1 + 0x10),1);
    IVar2 = NSURLSessionConfiguration::ephemeralSessionConfiguration
                      ((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
    NSURLSessionConfiguration::setTimeoutIntervalForRequest_(IVar2,0x403e000000000000);
    NSURLSessionConfiguration::setHTTPShouldUsePipelining_(IVar2,0);
    IVar2 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                      ((ID)&_OBJC_CLASS___NSURLSession,IVar2,IVar1,*(undefined8 *)(IVar1 + 0x10));
    *(ID *)(IVar1 + 0x18) = IVar2;
  }
  return IVar1;
}

