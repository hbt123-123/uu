// rea decompile_all
// name: SentryMetricKitIntegration::didReceiveCrashDiagnostic:callStackTree:timeStampBegin:timeStampEnd:
// address: 0x100745464
// body: available
// range: 0x100745464-0x1007455fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007455f8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryMetricKitIntegration::
     didReceiveCrashDiagnostic_callStackTree_timeStampBegin_timeStampEnd_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  class_t *self;
  ID self_00;
  
  objc_stub::exceptionType(param_3);
  objc_stub::exceptionCode(param_3);
  objc_stub::signal(param_3);
  IVar1 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,&cf_MachExceptionType___Code___Signal___);
  self = &objc::class_t::SentryMXExceptionParams;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setHandled_(self_00,0);
  objc_stub::setLevel_(self_00,4);
  objc_stub::setExceptionValue_(self_00,IVar1);
  objc_stub::setExceptionType_(self_00,&cf_MXCrashDiagnostic);
  objc_stub::setExceptionMechanism_(self_00,&cf_MXCrashDiagnostic);
  objc_stub::setTimeStampBegin_(self_00,param_5);
  IVar1 = objc_stub::JSONRepresentation(param_3);
  captureMXEvent_params_diagnosticJSON_(param_1,param_4,self_00,IVar1);
  return;
}

