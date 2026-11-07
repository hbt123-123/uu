// rea decompile_all
// name: SentryNSTimerFactory::scheduledTimerWithTimeInterval:repeats:block:
// address: 0x100784c7c
// body: available
// range: 0x100784c7c-0x100784de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100784de4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryNSTimerFactory::scheduledTimerWithTimeInterval_repeats_block_
             (ID param_1,SEL param_2,double param_3,bool param_4,ID param_5,uint param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread,(ulong)param_4,param_5,(ulong)param_6)
  ;
  if (((IVar1 & 1) == 0) &&
     (IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3),
     (int)IVar1 != 0)) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryNSTimerFactory.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,
               &
               cf_Timersmustbescheduledfromthemainthread_ortheymayneverfire_SeetheattributeonthedeclarationinNSTimer_h_Seehttps___stackoverflow_com_questions_8304702_how_do_i_create_a_nstimer_on_a_background_threadformoreinfo_
              );
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
  }
  IVar1 = objc_stub::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,param_3,(ulong)param_4,param_5);
  return IVar1;
}

