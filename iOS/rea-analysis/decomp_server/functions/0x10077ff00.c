// rea decompile_all
// name: SentryCrashReportConverter::registersForThreadIndex:
// address: 0x10077ff00
// body: available
// range: 0x10077ff00-0x100780147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100780140 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100780144 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::registersForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 uVar7;
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
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::objectAtIndexedSubscript_(IVar1,param_3);
  self = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_registers);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_basic);
  IVar2 = objc_stub::allKeys(IVar2);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_150,auStack_108,0x10);
  if (IVar3 != 0) {
    lVar5 = *local_140;
    do {
      IVar6 = 0;
      do {
        if (*local_140 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        uVar7 = *(undefined8 *)(lStack_148 + IVar6 * 8);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_registers);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_basic);
        IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar7);
        objc_stub::unsignedLongLongValue(IVar4);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar4 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        objc_stub::setValue_forKey_(self,IVar4,uVar7);
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_150,auStack_108,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

