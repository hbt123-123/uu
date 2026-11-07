// rea decompile_all
// name: SentryFileManager::initWithOptions:dispatchQueueWrapper:error:
// address: 0x1007a7334
// body: available
// range: 0x1007a7334-0x1007a7687 inclusive
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

ID SentryFileManager::initWithOptions_dispatchQueueWrapper_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryFileManager;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 == 0) {
    return 0;
  }
  objc_stub::FUN_1007f2680(IVar1,param_4);
  objc_stub::FUN_1007e7700(IVar1,param_3);
  IVar2 = objc_stub::sentryPath(IVar1);
  IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,&cf_events);
  objc_stub::FUN_1007f2cc0(IVar1,IVar2);
  IVar2 = objc_stub::FUN_1007e9600(IVar1);
  objc_stub::FUN_1007f0340(IVar1,IVar2);
  uVar3 = objc_stub::sentryPath(IVar1);
  FUN_1007a6d54(uVar3,param_5);
  if ((uVar3 & 1) == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,5);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::sentryPath(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_FailedtocreateSentrySDKworkingdirectory___);
  }
  else {
    uVar3 = objc_stub::FUN_1007e92e0(IVar1);
    FUN_1007a6d54(uVar3,param_5);
    if ((uVar3 & 1) != 0) {
      objc_stub::FUN_1007f2260(IVar1,0);
      IVar2 = objc_stub::FUN_1007ee140(param_3);
      objc_stub::FUN_1007f3b20(IVar1,IVar2);
      return IVar1;
    }
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,5);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::FUN_1007e92e0(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_FailedtocreateSentrySDKenvelopesdirectory___);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,5);
  return 0;
}

