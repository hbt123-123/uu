// rea decompile_all
// name: SentryClient::initWithOptions:transportAdapter:fileManager:deleteOldEnvelopeItems:threadInspector:debugImageProvider:random:locale:timezone:
// address: 0x10073c1a4
// body: available
// range: 0x10073c1a4-0x10073c3cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x54 bytes */

ID SentryClient::
   initWithOptions_transportAdapter_fileManager_deleteOldEnvelopeItems_threadInspector_debugImageProvider_random_locale_timezone_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::SentryClient;
  local_70 = param_1;
  self = NSObject::init((ID)&local_70,"init");
  if (self != 0) {
    *(undefined1 *)(self + 8) = 1;
    NSObject::setOptions_(self,param_3);
    NSObject::setTransportAdapter_(self,param_4);
    NSObject::setFileManager_(self,param_5);
    NSObject::setThreadInspector_(self,param_7);
    NSObject::setRandom_(self,param_9);
    NSObject::setDebugImageProvider_(self,param_8);
    NSObject::setLocale_(self,param_10);
    NSObject::setTimezone_(self,param_11);
    self_00 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    NSObject::setAttachmentProcessors_(self,IVar1);
    IVar1 = objc_stub::cacheDirectoryPath(param_3);
    SentryInstallation::cacheIDAsyncWithCacheDirectoryPath_
              ((ID)&objc::class_t::SentryInstallation,IVar1);
    if (param_6 != 0) {
      objc_stub::deleteOldEnvelopeItems(param_5);
    }
  }
  return self;
}

