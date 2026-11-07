// rea decompile_all
// name: SentryMetricKitIntegration::convertMXFramesToSentryStacktrace:
// address: 0x100746d3c
// body: available
// range: 0x100746d3c-0x100747017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100747010 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100747014 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMetricKitIntegration::convertMXFramesToSentryStacktrace_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  ID self_00;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [133];
  char acStack_83 [19];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_150,auStack_108,0x10)
  ;
  if (IVar2 != 0) {
    lVar6 = *local_140;
    do {
      IVar7 = 0;
      do {
        if (*local_140 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        self_00 = *(ID *)(lStack_148 + IVar7 * 8);
        pcVar3 = &objc::class_t::SentryFrame;
        _objc_alloc();
        self = objc_stub::init((ID)pcVar3);
        IVar4 = objc_stub::binaryName(self_00);
        objc_stub::setPackage_(self,IVar4);
        IVar4 = inAppLogic(param_1);
        IVar5 = objc_stub::binaryName(self_00);
        IVar4 = objc_stub::isInApp_(IVar4,IVar5);
        IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar4);
        objc_stub::setInApp_(self,IVar4);
        objc_stub::address(self_00);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        objc_stub::setInstructionAddress_(self,IVar4);
        objc_stub::address(self_00);
        objc_stub::offsetIntoBinaryTextSegment(self_00);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        objc_stub::setImageAddress_(self,IVar4);
        NSMutableArray::addObject_(IVar1,self);
        IVar7 = IVar7 + 1;
      } while (IVar2 != IVar7);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_150,auStack_108,0x10);
    } while (IVar2 != 0);
  }
  pcVar3 = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar1 = objc_stub::initWithFrames_registers_
                    ((ID)pcVar3,IVar1,*(undefined8 *)PTR____NSDictionary0___1009953b0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

