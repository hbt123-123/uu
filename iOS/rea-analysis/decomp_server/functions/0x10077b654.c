// rea decompile_all
// name: FUN_10077b654
// address: 0x10077b654
// body: available
// range: 0x10077b654-0x10077b79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10077b654(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  
  uVar1 = DAT_100abb418;
  param_1 = param_1 & 2;
  uVar2 = param_1;
  if ((param_1 == DAT_100abb418) &&
     (IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1),
     uVar2 = DAT_100abb418, (int)IVar3 != 0)) {
    IVar3 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryReachability.m"
                      );
    IVar3 = objc_stub::lastPathComponent(IVar3);
    objc_stub::stringByDeletingPathExtension(IVar3);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,
               &
               cf_Nochangeinreachabilitystate_SentryConnectivityShouldReportChangewillreturnNOforflags_u_sentry_current_reachability_state_u
              );
    IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
    uVar2 = DAT_100abb418;
  }
  DAT_100abb418 = uVar2;
  return param_1 != uVar1;
}

