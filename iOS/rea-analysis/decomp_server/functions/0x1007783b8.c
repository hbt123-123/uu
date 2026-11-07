// rea decompile_all
// name: SentryHttpTransport::sendEnvelope:
// address: 0x1007783b8
// body: available
// range: 0x1007783b8-0x1007785f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHttpTransport::sendEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  IVar1 = objc_stub::FUN_1007e92a0(param_1);
  IVar1 = objc_stub::FUN_1007f0620(IVar1,param_3);
  IVar2 = objc_stub::items(IVar1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_RateLimitisactiveforallenvelopeitems_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  else {
    IVar1 = objc_stub::FUN_1007e4de0(param_1,IVar1);
    _objc_initWeak(auStack_58,param_1);
    IVar2 = objc_stub::FUN_1007e8880(param_1);
    local_88 = PTR___NSConcreteStackBlock_100995490;
    local_80 = 0xc2000000;
    local_78 = FUN_10077861c;
    puStack_70 = &DAT_1009e92c8;
    _objc_copyWeak(auStack_60,auStack_58);
    local_68 = IVar1;
    objc_stub::dispatchAsyncWithBlock_(IVar2,&local_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}

