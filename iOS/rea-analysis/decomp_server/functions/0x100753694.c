// rea decompile_all
// name: SentryOptions::setDsn:
// address: 0x100753694
// body: available
// range: 0x100753694-0x10075381f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setDsn_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  class_t *self;
  ID IVar2;
  long local_58;
  
  self = &objc::class_t::SentryDsn;
  _objc_alloc();
  local_58 = 0;
  IVar2 = objc_stub::FUN_1007ec300((ID)self,param_3,&local_58);
  lVar1 = local_58;
  objc_stub::FUN_1007f4080(param_1,IVar2);
  if (lVar1 == 0) {
    *(ID *)(param_1 + 0x28) = param_3;
  }
  else {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryOptions.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_CouldnotparsetheDSN____);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
    }
  }
  return;
}

