// rea decompile_all
// name: SentryMetricKitIntegration::createEvent:
// address: 0x100746790
// body: available
// range: 0x100746790-0x1007469b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007469b0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007469b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMetricKitIntegration::createEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *pcVar5;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar5 = &objc::class_t::SentryEvent;
  _objc_alloc();
  IVar1 = objc_stub::level(param_3);
  IVar1 = objc_stub::initWithLevel_((ID)pcVar5,IVar1);
  IVar2 = objc_stub::timeStampBegin(param_3);
  objc_stub::setTimestamp_(IVar1,IVar2);
  pcVar5 = &objc::class_t::SentryException;
  _objc_alloc();
  IVar2 = objc_stub::exceptionValue(param_3);
  IVar3 = objc_stub::exceptionType(param_3);
  IVar2 = objc_stub::initWithValue_type_((ID)pcVar5,IVar2,IVar3);
  pcVar5 = &objc::class_t::SentryMechanism;
  _objc_alloc();
  IVar3 = objc_stub::exceptionMechanism(param_3);
  IVar3 = objc_stub::initWithType_((ID)pcVar5,IVar3);
  IVar4 = objc_stub::handled(param_3);
  IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar4);
  objc_stub::setHandled_(IVar3,IVar4);
  IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
  objc_stub::setSynthetic_(IVar3,IVar4);
  objc_stub::setMechanism_(IVar2,IVar3);
  local_60 = IVar2;
  IVar2 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_60,1);
  objc_stub::setExceptions_(IVar1,IVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

