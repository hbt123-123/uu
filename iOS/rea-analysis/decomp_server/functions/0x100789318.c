// rea decompile_all
// name: SentryStacktrace::fixDuplicateFrames
// address: 0x100789318
// body: available
// range: 0x100789318-0x100789637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100789614 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryStacktrace::fixDuplicateFrames(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::frames(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (1 < IVar1) {
    IVar1 = objc_stub::FUN_1007f01e0(param_1);
    if (IVar1 == 0) {
      return;
    }
    IVar1 = objc_stub::frames(param_1);
    IVar1 = objc_stub::lastObject(IVar1);
    IVar2 = objc_stub::frames(param_1);
    IVar3 = objc_stub::frames(param_1);
    IVar3 = objc_stub::count(IVar3);
    IVar2 = objc_stub::objectAtIndex_(IVar2,IVar3 - 2);
    IVar1 = objc_stub::FUN_1007f6b80(IVar1);
    IVar3 = objc_stub::FUN_1007f6b80(IVar2);
    IVar1 = objc_stub::isEqualToString_(IVar1,IVar3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007f01e0(param_1);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_lr);
      IVar2 = objc_stub::FUN_1007ec9c0(IVar2);
      IVar1 = objc_stub::isEqualToString_(IVar1,IVar2);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::frames(param_1);
        IVar1 = objc_stub::mutableCopy(IVar1);
        IVar2 = objc_stub::frames(param_1);
        IVar2 = objc_stub::count(IVar2);
        objc_stub::removeObjectAtIndex_(IVar1,IVar2 - 2);
        objc_stub::setFrames_(param_1,IVar1);
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 != 0) {
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryStacktrace.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,&cf_Foundduplicateframe_removingonewithlinkregister
                    );
          IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        }
      }
    }
  }
  return;
}

