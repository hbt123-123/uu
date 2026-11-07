// rea decompile_all
// name: FUN_1007ab12c
// address: 0x1007ab12c
// body: available
// range: 0x1007ab12c-0x1007ab2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ab2f4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1007ab12c(ID param_1)

{
  ID IVar1;
  ID IVar2;
  long local_68;
  
  FUN_1007aaf7c();
  IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::path(param_1);
  IVar1 = objc_stub::fileExistsAtPath_(IVar1,IVar2);
  if ((int)IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    local_68 = 0;
    IVar1 = objc_stub::FUN_1007e8620((ID)&_OBJC_CLASS___NSDictionary,param_1,&local_68);
    if ((local_68 != 0) &&
       (IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3),
       (int)IVar2 != 0)) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Encounterederrortryingtoretrieveapplaunchprofileconfig___);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,3);
    }
  }
  return IVar1;
}

