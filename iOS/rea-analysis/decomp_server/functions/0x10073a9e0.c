// rea decompile_all
// name: FUN_10073a9e0
// address: 0x10073a9e0
// body: available
// range: 0x10073a9e0-0x10073ab27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073aa20 to 0x10073ab28 FUN_10073ab28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073ab0c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10073a9e0(undefined8 param_1)

{
  ID IVar1;
  
  if (DAT_100b3a878 != 0) {
    IVar1 = objc_stub::setHub_(DAT_100b3a878,param_1);
    FUN_10073ab28();
    return IVar1;
  }
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      );
    IVar1 = NSString::lastPathComponent(IVar1);
    NSString::stringByDeletingPathExtension(IVar1);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Nolaunchtracerpresenttostop_);
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    return 0;
  }
  return IVar1;
}

