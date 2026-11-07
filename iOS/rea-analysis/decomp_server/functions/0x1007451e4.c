// rea decompile_all
// name: SentryMetricKitIntegration::installWithOptions:
// address: 0x1007451e4
// body: available
// range: 0x1007451e4-0x1007453f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryMetricKitIntegration::installWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  class_t *self;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SentryMetricKitIntegration;
  local_50 = param_1;
  IVar1 = SentryBaseIntegration::installWithOptions_((ID)&local_50,param_3);
  if ((bool)IVar1 != 0) {
    IVar2 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer)
    ;
    IVar2 = SentryDependencyContainer::metricKitManager(IVar2);
    setMetricKitManager_(param_1,IVar2);
    IVar2 = metricKitManager(param_1);
    objc_stub::setDelegate_(IVar2,param_1);
    IVar2 = metricKitManager(param_1);
    objc_stub::receiveReports(IVar2);
    puVar3 = &_OBJC_CLASS___NSMeasurementFormatter;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    setMeasurementFormatter_(param_1,IVar2);
    puVar3 = &_OBJC_CLASS___NSLocale;
    _objc_alloc();
    IVar2 = objc_stub::initWithLocaleIdentifier_((ID)puVar3,&cf_en_US);
    IVar4 = measurementFormatter(param_1);
    objc_stub::setLocale_(IVar4,IVar2);
    IVar2 = measurementFormatter(param_1);
    objc_stub::setUnitOptions_(IVar2,1);
    self = &objc::class_t::SentryInAppLogic;
    _objc_alloc();
    IVar2 = objc_stub::inAppIncludes(param_3);
    IVar4 = objc_stub::inAppExcludes(param_3);
    IVar2 = objc_stub::initWithInAppIncludes_inAppExcludes_((ID)self,IVar2,IVar4);
    setInAppLogic_(param_1,IVar2);
    IVar2 = objc_stub::enableMetricKitRawPayload(param_3);
    setAttachDiagnosticAsAttachment_(param_1,(bool)IVar2);
  }
  return (bool)IVar1;
}

