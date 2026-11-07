// rea decompile_all
// name: SentryClient::initWithOptions:fileManager:deleteOldEnvelopeItems:transportAdapter:
// address: 0x10073bffc
// body: available
// range: 0x10073bffc-0x10073c1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x2c bytes */

ID SentryClient::initWithOptions_fileManager_deleteOldEnvelopeItems_transportAdapter_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  class_t *self;
  
  self = &objc::class_t::SentryThreadInspector;
  _objc_alloc();
  IVar1 = objc_stub::initWithOptions_((ID)self,param_3);
  IVar2 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar2 = SentryDependencyContainer::debugImageProvider(IVar2);
  IVar3 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar3 = SentryDependencyContainer::random(IVar3);
  IVar4 = NSLocale::autoupdatingCurrentLocale((ID)&_OBJC_CLASS___NSLocale);
  IVar5 = NSCalendar::autoupdatingCurrentCalendar((ID)&_OBJC_CLASS___NSCalendar);
  IVar5 = NSCalendar::timeZone(IVar5);
  IVar1 = initWithOptions_transportAdapter_fileManager_deleteOldEnvelopeItems_threadInspector_debugImageProvider_random_locale_timezone_
                    (param_1,param_3,param_6,param_4,param_5,IVar1,IVar2,IVar3,IVar4,IVar5);
  return IVar1;
}

