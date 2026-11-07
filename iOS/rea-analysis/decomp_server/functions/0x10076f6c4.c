// rea decompile_all
// name: SentryTracer::finishInternal
// address: 0x10076f6c4
// body: available
// range: 0x10076f6c4-0x10076f90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076f90c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::finishInternal(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_1007e9d20(param_1,2,1);
  if ((IVar1 & 1) != 0) {
    return;
  }
  IVar1 = objc_stub::FUN_1007f7220(param_1);
  IVar2 = objc_stub::FUN_1007ed300(param_1);
  if ((int)IVar2 == 0) {
    IVar3 = *(ID *)(param_1 + (long)_hub);
    IVar2 = objc_stub::scope(IVar3);
    objc_stub::captureTransaction_withScope_(IVar3,IVar1,IVar2);
  }
  else {
    IVar2 = objc_stub::FUN_1007f5f60(param_1);
    if (IVar2 == 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
      if ((int)IVar2 != 0) {
        IVar2 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          );
        IVar2 = objc_stub::lastPathComponent(IVar2);
        objc_stub::stringByDeletingPathExtension(IVar2);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_Atransactionwithaprofileshouldhaveastarttimestampalready_Wewillassignthecurrenttimebutthiswillbeincorrect_
                  );
        IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,3);
      }
      IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar2 = objc_stub::dateProvider(IVar2);
      IVar2 = objc_stub::date(IVar2);
    }
    IVar3 = objc_stub::FUN_1007eaee0(param_1);
    IVar4 = objc_stub::FUN_1007e8880(param_1);
    FUN_1007521dc(IVar3,IVar4,IVar1,IVar2);
  }
  return;
}

