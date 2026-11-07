// rea decompile_all
// name: SentryNetworkTrackingIntegration::installWithOptions:
// address: 0x10073b710
// body: available
// range: 0x10073b710-0x10073b87b inclusive
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

bool SentryNetworkTrackingIntegration::installWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID local_40;
  class_t *pcStack_38;
  
  IVar2 = objc_stub::enableSwizzling(param_3);
  if ((IVar2 & 1) == 0) {
    SentryBaseIntegration::logWithOptionName_(param_1,0x100a091f0);
  }
  else {
    pcStack_38 = &objc::class_t::SentryNetworkTrackingIntegration;
    local_40 = param_1;
    bVar1 = SentryBaseIntegration::shouldBeEnabledWithOptions_
                      ((ID)&local_40,"shouldBeEnabledWithOptions:",param_3);
    if (bVar1 != 0) {
      IVar2 = SentryNetworkTracker::sharedInstance((ID)&objc::class_t::SentryNetworkTracker);
      SentryNetworkTracker::enableNetworkTracking(IVar2);
    }
    IVar2 = objc_stub::enableNetworkBreadcrumbs(param_3);
    if ((int)IVar2 != 0) {
      IVar2 = SentryNetworkTracker::sharedInstance((ID)&objc::class_t::SentryNetworkTracker);
      SentryNetworkTracker::enableNetworkBreadcrumbs(IVar2);
    }
    IVar2 = objc_stub::enableCaptureFailedRequests(param_3);
    if ((int)IVar2 != 0) {
      IVar2 = SentryNetworkTracker::sharedInstance((ID)&objc::class_t::SentryNetworkTracker);
      SentryNetworkTracker::enableCaptureFailedRequests(IVar2);
    }
    IVar2 = objc_stub::enableGraphQLOperationTracking(param_3);
    if ((int)IVar2 != 0) {
      IVar2 = SentryNetworkTracker::sharedInstance((ID)&objc::class_t::SentryNetworkTracker);
      SentryNetworkTracker::enableGraphQLOperationTracking(IVar2);
    }
    if ((((bVar1 & 1) != 0) ||
        (IVar2 = objc_stub::enableNetworkBreadcrumbs(param_3), (IVar2 & 1) != 0)) ||
       (IVar2 = objc_stub::enableCaptureFailedRequests(param_3), (int)IVar2 != 0)) {
      swizzleURLSessionTask((ID)&objc::class_t::SentryNetworkTrackingIntegration);
      return 1;
    }
  }
  return 0;
}

