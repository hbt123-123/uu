// rea decompile_all
// name: SentryMetricKitIntegration::didReceiveCpuExceptionDiagnostic:callStackTree:timeStampBegin:timeStampEnd:
// address: 0x1007455fc
// body: available
// range: 0x1007455fc-0x1007458b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007458b0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryMetricKitIntegration::
     didReceiveCpuExceptionDiagnostic_callStackTree_timeStampBegin_timeStampEnd_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  
  IVar1 = objc_stub::callStackPerThread(param_4);
  if ((int)IVar1 == 0) {
    IVar1 = measurementFormatter(param_1);
    IVar2 = objc_stub::totalCPUTime(param_3);
    objc_stub::stringFromMeasurement_(IVar1,IVar2);
    IVar1 = measurementFormatter(param_1);
    IVar2 = objc_stub::totalSampledTime(param_3);
    objc_stub::stringFromMeasurement_(IVar1,IVar2);
    IVar1 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,
                       &cf_MXCPUExceptiontotalCPUTime___totalSampledTime___);
    self = &objc::class_t::SentryMXExceptionParams;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    objc_stub::setHandled_(IVar2,1);
    objc_stub::setLevel_(IVar2,3);
    objc_stub::setExceptionValue_(IVar2,IVar1);
    objc_stub::setExceptionType_(IVar2,&cf_MXCPUException);
    objc_stub::setExceptionMechanism_(IVar2,&cf_mx_cpu_exception);
    objc_stub::setTimeStampBegin_(IVar2,param_5);
    IVar1 = objc_stub::JSONRepresentation(param_3);
    captureMXEvent_params_diagnosticJSON_(param_1,param_4,IVar2,IVar1);
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMetricKitIntegration.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_MXCPUExceptionDiagnosticsaren_texpectedtohavecallstacksperthread_Ignoringit_);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  return;
}

