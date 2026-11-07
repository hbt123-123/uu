// rea decompile_all
// name: SAFlowObject::taskForID:
// address: 0x10071c09c
// body: available
// range: 0x10071c09c-0x10071c217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071c210 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10071c214 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAFlowObject::taskForID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
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
  puVar1 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((IVar4 & 1) == 0) {
    IVar4 = 0;
  }
  else {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = tasks(param_1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
    IVar4 = 0;
    if (IVar2 != 0) {
      lVar5 = *local_120;
      do {
        IVar6 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(self);
          }
          IVar4 = *(ID *)(lStack_128 + IVar6 * 8);
          IVar3 = objc_stub::taskID(IVar4);
          IVar3 = objc_stub::isEqualToString_(IVar3,param_3);
          if ((IVar3 & 1) != 0) goto LAB_10071c1d0;
          IVar6 = IVar6 + 1;
        } while (IVar2 != IVar6);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
      IVar4 = 0;
    }
  }
LAB_10071c1d0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar4;
}

