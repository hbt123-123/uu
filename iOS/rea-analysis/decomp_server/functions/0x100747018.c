// rea decompile_all
// name: SentryMetricKitIntegration::extractDebugMetaFromMXCallStacks:
// address: 0x100747018
// body: available
// range: 0x100747018-0x100747253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074724c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100747250 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryMetricKitIntegration::extractDebugMetaFromMXCallStacks_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  ID self;
  long lVar8;
  ID IVar9;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_1b0,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar8 = *local_1a0;
    do {
      IVar9 = 0;
      do {
        if (*local_1a0 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        IVar3 = objc_stub::flattenedRootFrames(*(ID *)(lStack_1a8 + IVar9 * 8));
        IVar3 = extractDebugMetaFromMXFrames_(param_1,IVar3);
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar3,&local_1f0,auStack_170,0x10);
        if (IVar4 != 0) {
          lVar7 = *local_1e0;
          do {
            IVar6 = 0;
            do {
              if (*local_1e0 != lVar7) {
                _objc_enumerationMutation(IVar3);
              }
              self = *(ID *)(lStack_1e8 + IVar6 * 8);
              IVar5 = objc_stub::debugID(self);
              NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,self,IVar5);
              IVar6 = IVar6 + 1;
            } while (IVar4 != IVar6);
            IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar3,&local_1f0,auStack_170,0x10);
          } while (IVar4 != 0);
        }
        IVar9 = IVar9 + 1;
      } while (IVar9 != IVar2);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_1b0,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = NSMutableDictionary::allValues(IVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

