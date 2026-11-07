// rea decompile_all
// name: SentryMetricKitIntegration::captureEventNotPerThread:params:diagnosticJSON:
// address: 0x1007464f8
// body: available
// range: 0x1007464f8-0x10074678f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074678c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryMetricKitIntegration::captureEventNotPerThread_params_diagnosticJSON_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  class_t *self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = createEvent_(param_1,param_4);
  self_00 = &objc::class_t::SentryThread;
  _objc_alloc();
  IVar1 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,0);
  IVar1 = objc_stub::initWithThreadId_((ID)self_00,IVar1);
  IVar2 = objc_stub::handled(param_4);
  IVar2 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((uint)IVar2 ^ 1));
  objc_stub::setCrashed_(IVar1,IVar2);
  IVar2 = objc_stub::objectEnumerator(param_3);
  IVar2 = convertMXFramesToSentryStacktrace_(param_1,IVar2);
  objc_stub::setStacktrace_(IVar1,IVar2);
  IVar2 = objc_stub::exceptions(self);
  IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,0);
  IVar3 = objc_stub::stacktrace(IVar1);
  objc_stub::setStacktrace_(IVar2,IVar3);
  IVar3 = objc_stub::threadId(IVar1);
  objc_stub::setThreadId_(IVar2,IVar3);
  local_60 = IVar1;
  IVar1 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_60,1);
  objc_stub::setThreads_(self,IVar1);
  IVar1 = extractDebugMetaFromMXFrames_(param_1,param_3);
  objc_stub::setDebugMeta_(self,IVar1);
  captureEvent_withDiagnosticJSON_(param_1,self,param_5);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

