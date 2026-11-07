// rea decompile_all
// name: SentryHub::endSessionWithTimestamp:
// address: 0x1007667a8
// body: available
// range: 0x1007667a8-0x10076694b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100766948 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHub::endSessionWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar2 = *(ID *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  objc_stub::FUN_1007e82a0(param_1);
  _objc_sync_exit(uVar1);
  if (IVar2 == 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m");
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Nosessiontoendwithtimestamp_);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
  }
  else {
    objc_stub::FUN_1007e90c0(IVar2,param_3);
    objc_stub::FUN_1007e6740(param_1,IVar2);
    objc_stub::FUN_1007f15c0(*(ID *)(param_1 + 0x50),IVar2);
  }
  return;
}

