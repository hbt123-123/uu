// rea decompile_all
// name: SentryDefaultRateLimits::initWithRetryAfterHeaderParser:andRateLimitParser:currentDateProvider:
// address: 0x100796b28
// body: available
// range: 0x100796b28-0x100796c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryDefaultRateLimits::initWithRetryAfterHeaderParser_andRateLimitParser_currentDateProvider_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  class_t *pcVar1;
  ID IVar2;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryDefaultRateLimits;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"init");
  if (self != 0) {
    pcVar1 = &objc::class_t::SentryConcurrentRateLimitsDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)pcVar1);
    objc_stub::setRateLimits_(self,IVar2);
    objc_stub::FUN_1007f46c0(self,param_3);
    objc_stub::FUN_1007f43e0(self,param_4);
    objc_stub::setCurrentDateProvider_(self,param_5);
    pcVar1 = &objc::class_t::SentryDateUtil;
    _objc_alloc();
    IVar2 = objc_stub::FUN_1007eb6c0((ID)pcVar1,param_5);
    objc_stub::FUN_1007f2460(self,IVar2);
  }
  return self;
}

