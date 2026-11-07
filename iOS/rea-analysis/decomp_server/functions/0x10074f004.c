// rea decompile_all
// name: FUN_10074f004
// address: 0x10074f004
// body: available
// range: 0x10074f004-0x10074f197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10074f004(long param_1)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar2 = param_1;
  if (*(char *)(lVar3 + 0x18) != '\0') {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_ANRstopped_);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
    IVar1 = objc_stub::dispatchQueueWrapper(*(ID *)(param_1 + 0x20));
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0xc2000000;
    local_68 = FUN_10074f198;
    puStack_60 = &DAT_1009e8720;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    objc_stub::dispatchAsyncWithBlock_(IVar1,&local_78);
    lVar2 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  }
  *(undefined1 *)(lVar3 + 0x18) = 0;
  return lVar2;
}

