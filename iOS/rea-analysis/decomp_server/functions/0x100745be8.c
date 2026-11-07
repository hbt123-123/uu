// rea decompile_all
// name: SentryMetricKitIntegration::captureMXEvent:params:diagnosticJSON:
// address: 0x100745be8
// body: available
// range: 0x100745be8-0x100745f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100745f00 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryMetricKitIntegration::captureMXEvent_params_diagnosticJSON_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::callStackPerThread(param_3);
  if ((int)IVar1 == 0) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::callStacks(param_3);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar5 = *local_120;
      do {
        IVar3 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          IVar4 = objc_stub::callStackRootFrames(*(ID *)(lStack_128 + IVar3 * 8));
          buildAndCaptureMXEventFor_params_diagnosticJSON_(param_1,IVar4,param_4,param_5);
          IVar3 = IVar3 + 1;
        } while (IVar2 != IVar3);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
  }
  else {
    IVar1 = createEvent_(param_1,param_4);
    IVar2 = convertToSentryThreads_(param_1,param_3);
    objc_stub::setThreads_(IVar1,IVar2);
    IVar2 = objc_stub::threads(IVar1);
    IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,0);
    IVar3 = objc_stub::handled(param_4);
    IVar3 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((uint)IVar3 ^ 1));
    objc_stub::setCrashed_(IVar2,IVar3);
    IVar3 = objc_stub::exceptions(IVar1);
    IVar3 = objc_stub::objectAtIndexedSubscript_(IVar3,0);
    IVar4 = objc_stub::stacktrace(IVar2);
    objc_stub::setStacktrace_(IVar3,IVar4);
    IVar2 = objc_stub::threadId(IVar2);
    objc_stub::setThreadId_(IVar3,IVar2);
    IVar2 = objc_stub::callStacks(param_3);
    IVar2 = extractDebugMetaFromMXCallStacks_(param_1,IVar2);
    objc_stub::setDebugMeta_(IVar1,IVar2);
    captureEvent_withDiagnosticJSON_(param_1,IVar1,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

