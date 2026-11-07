// rea decompile_all
// name: FUN_1007764e8
// address: 0x1007764e8
// body: available
// range: 0x1007764e8-0x100776727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100776724 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1007764e8(void)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  iVar1 = 1;
  FUN_1007070fc(1,0xb,0,0);
  if (iVar1 != 0) {
    IVar2 = 0x1b;
    FUN_1007767a0();
    IVar3 = objc_stub::length(IVar2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 == 0) {
        return IVar2;
      }
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.mm"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_ModelnameusingHW_PRODUCT___);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      return IVar2;
    }
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryDevice.mm"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_ModelnamefromHW_PRODUCTwasempty_)
      ;
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
  }
  IVar2 = 2;
  FUN_1007767a0(2);
  return IVar2;
}

