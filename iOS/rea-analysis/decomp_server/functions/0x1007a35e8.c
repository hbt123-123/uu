// rea decompile_all
// name: SentrySwizzleInfo::getOriginalImplementation
// address: 0x1007a35e8
// body: available
// range: 0x1007a35e8-0x1007a3717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

undefined4 * SentrySwizzleInfo::getOriginalImplementation(ID param_1,SEL param_2)

{
  undefined4 *puVar1;
  ID IVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001007a3620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar1 + 4))();
    return puVar1;
  }
  IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySwizzle.m"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf__impProviderBlockcan_tbemissing);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
  }
  return (undefined4 *)0x0;
}

