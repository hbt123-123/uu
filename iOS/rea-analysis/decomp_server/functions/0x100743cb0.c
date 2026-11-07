// rea decompile_all
// name: SentryTransactionContext::commonInitWithName:source:sampleRate:sampleRand:parentSampled:parentSampleRate:parentSampleRand:
// address: 0x100743cb0
// body: available
// range: 0x100743cb0-0x100743ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100743ec0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

void SentryTransactionContext::
     commonInitWithName_source_sampleRate_sampleRand_parentSampled_parentSampleRate_parentSampleRand_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               unsigned_long_long param_7,ID param_8,ID param_9)

{
  ID IVar1;
  
  IVar1 = NSString::stringWithString_((ID)&_OBJC_CLASS___NSString,param_3);
  *(ID *)(param_1 + (long)_name) = IVar1;
  *(long_long *)(param_1 + (long)_nameSource) = param_4;
  setSampleRate_(param_1,param_5);
  setSampleRand_(param_1,param_6);
  setParentSampled_(param_1,param_7);
  setParentSampleRate_(param_1,param_8);
  setParentSampleRand_(param_1,param_9);
  getThreadInfo(param_1);
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransactionContext.mm"
                      );
    IVar1 = NSString::lastPathComponent(IVar1);
    NSString::stringByDeletingPathExtension(IVar1);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Createdtransactioncontextwithname__)
    ;
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
  }
  return;
}

