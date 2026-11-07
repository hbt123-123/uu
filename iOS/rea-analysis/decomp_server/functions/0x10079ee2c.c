// rea decompile_all
// name: SentryCrashStackEntryMapper::sentryCrashStackEntryToSentryFrame:
// address: 0x10079ee2c
// body: available
// range: 0x10079ee2c-0x10079f18f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079f188 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10079f18c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryCrashStackEntryMapper::sentryCrashStackEntryToSentryFrame_
             (ID param_1,SEL param_2,AnonymousStructure4 param_3)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  undefined8 *puVar3;
  char acStack_5b [19];
  long local_48;
  
  puVar3 = (undefined8 *)param_3.field0_0x0;
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = &objc::class_t::SentryFrame;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  if (puVar3[4] != 0) {
    _snprintf(acStack_5b,0x13,"0x%016llx");
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
    objc_stub::FUN_1007f4e80(self_00,IVar1);
  }
  _snprintf(acStack_5b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
  objc_stub::setInstructionAddress_(self_00,IVar1);
  if (puVar3[3] != 0) {
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,puVar3[3],4);
    objc_stub::FUN_1007f3120(self_00,IVar1);
  }
  if ((puVar3[2] == 0) && (puVar3[1] == 0)) {
    IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar1 = objc_stub::FUN_1007e5d60(IVar1);
    IVar1 = objc_stub::FUN_1007eb0c0(IVar1,*puVar3);
    objc_stub::address(IVar1);
    _snprintf(acStack_5b,0x13,"0x%016llx");
    IVar2 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
    objc_stub::setImageAddress_(self_00,IVar2);
    IVar2 = objc_stub::name(IVar1);
    objc_stub::setPackage_(self_00,IVar2);
    IVar2 = objc_stub::inAppLogic(param_1);
    IVar1 = objc_stub::name(IVar1);
    IVar1 = objc_stub::isInApp_(IVar2,IVar1);
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
    objc_stub::setInApp_(self_00,IVar1);
  }
  else {
    _snprintf(acStack_5b,0x13,"0x%016llx");
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_5b,1);
    objc_stub::setImageAddress_(self_00,IVar1);
    if (puVar3[1] != 0) {
      IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,puVar3[1],4);
      objc_stub::setPackage_(self_00,IVar1);
      IVar2 = objc_stub::inAppLogic(param_1);
      IVar1 = objc_stub::isInApp_(IVar2,IVar1);
      IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
      objc_stub::setInApp_(self_00,IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}

