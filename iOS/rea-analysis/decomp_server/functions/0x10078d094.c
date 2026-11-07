// rea decompile_all
// name: SentryCrash::setUserInfo:
// address: 0x10078d094
// body: available
// range: 0x10078d094-0x10078d27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setUserInfo_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long local_68;
  
  _objc_sync_enter();
  if (param_3 == 0) {
    IVar2 = 0;
  }
  else {
    local_68 = 0;
    IVar2 = objc_stub::encode_options_error_
                      ((ID)&objc::class_t::SentryCrashJSONCodec,param_3,2,&local_68);
    lVar1 = local_68;
    FUN_100789a90();
    if (lVar1 != 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Couldnotserializeuserinfo___);
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
      }
      goto LAB_10078d238;
    }
  }
  *(ID *)(param_1 + 0x28) = param_3;
  _objc_retainAutorelease();
  objc_stub::bytes(IVar2);
  thunk_FUN_100737634();
LAB_10078d238:
  _objc_sync_exit(param_1);
  return;
}

