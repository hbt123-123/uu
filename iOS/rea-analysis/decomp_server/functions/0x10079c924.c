// rea decompile_all
// name: SentryDependencyContainer::rateLimits
// address: 0x10079c924
// body: available
// range: 0x10079c924-0x10079ca83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079ca80 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencyContainer::rateLimits(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *pcVar3;
  class_t *self;
  ID IVar4;
  ID IVar5;
  
  uVar1 = DAT_100b2e250;
  _objc_sync_enter();
  IVar2 = *(ID *)(param_1 + 0xa0);
  if (IVar2 == 0) {
    pcVar3 = &objc::class_t::SentryRetryAfterHeaderParser;
    _objc_alloc();
    self = &objc::class_t::SentryHttpDateParser;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    IVar4 = objc_stub::dateProvider(param_1);
    IVar2 = objc_stub::FUN_1007ebaa0((ID)pcVar3,IVar2,IVar4);
    pcVar3 = &objc::class_t::SentryRateLimitParser;
    _objc_alloc();
    IVar4 = objc_stub::dateProvider(param_1);
    IVar4 = objc_stub::FUN_1007eb6c0((ID)pcVar3,IVar4);
    pcVar3 = &objc::class_t::SentryDefaultRateLimits;
    _objc_alloc();
    IVar5 = objc_stub::dateProvider(param_1);
    IVar2 = objc_stub::FUN_1007ec1e0((ID)pcVar3,IVar2,IVar4,IVar5);
    *(ID *)(param_1 + 0xa0) = IVar2;
    IVar2 = *(ID *)(param_1 + 0xa0);
  }
  _objc_sync_exit(uVar1);
  return IVar2;
}

