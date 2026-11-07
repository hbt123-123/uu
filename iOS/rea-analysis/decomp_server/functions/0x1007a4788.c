// rea decompile_all
// name: SentryBaggage::toHTTPHeaderWithOriginalBaggage:
// address: 0x1007a4788
// body: available
// range: 0x1007a4788-0x1007a490f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a490c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBaggage::toHTTPHeaderWithOriginalBaggage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  ID IVar2;
  
  IVar1 = objc_stub::mutableCopy(param_3);
  if (IVar1 == 0) {
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self);
  }
  IVar2 = objc_stub::sentryIdString(*(ID *)(param_1 + 8));
  objc_stub::setValue_forKey_(IVar1,IVar2,&cf_sentry_trace_id);
  objc_stub::setValue_forKey_(IVar1,*(undefined8 *)(param_1 + 0x10),&cf_sentry_public_key);
  if (*(long *)(param_1 + 0x18) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x18),&cf_sentry_release);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x20),&cf_sentry_environment);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x28),&cf_sentry_transaction);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x38),&cf_sentry_user_segment);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x40),&cf_sentry_sample_rand);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x48),&cf_sentry_sample_rate);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x50),&cf_sentry_sampled);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    objc_stub::setValue_forKey_(IVar1,*(long *)(param_1 + 0x58),&cf_sentry_replay_id);
  }
  IVar1 = objc_stub::FUN_1007e8f40
                    ((ID)&objc::class_t::_TtC6Sentry26SentryBaggageSerialization,IVar1);
  return IVar1;
}

