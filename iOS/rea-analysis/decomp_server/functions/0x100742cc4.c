// rea decompile_all
// name: SentryRateLimitParser::parse:
// address: 0x100742cc4
// body: available
// range: 0x100742cc4-0x1007430d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007430cc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007430d0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryRateLimitParser::parse_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID self_00;
  long lVar7;
  ID self_01;
  long lVar8;
  ID IVar9;
  ID IVar10;
  ID local_1f8;
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
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 0) {
    IVar1 = *(ID *)PTR____NSDictionary0___1009953b0;
  }
  else {
    IVar1 = NSMutableDictionary::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar2 = removeAllWhitespaces_(param_1,param_3);
    lStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = (long *)0x0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    IVar2 = objc_stub::componentsSeparatedByString_(IVar2,&cf__);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1b0,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar7 = *local_1a0;
      do {
        IVar9 = 0;
        do {
          if (*local_1a0 != lVar7) {
            _objc_enumerationMutation(IVar2);
          }
          self = objc_stub::componentsSeparatedByString_(*(ID *)(lStack_1a8 + IVar9 * 8),&cf__);
          IVar4 = objc_stub::objectAtIndexedSubscript_(self,0);
          IVar4 = parseRateLimitSeconds_(param_1,IVar4);
          if ((IVar4 != 0) && (IVar5 = objc_stub::intValue(IVar4), 0 < (int)IVar5)) {
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            local_1f0 = 0;
            uStack_1d8 = 0;
            local_1e0 = (long *)0x0;
            IVar5 = objc_stub::objectAtIndexedSubscript_(self,1);
            IVar5 = parseCategories_(param_1,IVar5);
            local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                                  (IVar5,&local_1f0,auStack_170,0x10);
            if (local_1f8 != 0) {
              lVar8 = *local_1e0;
              do {
                IVar10 = 0;
                do {
                  if (*local_1e0 != lVar8) {
                    _objc_enumerationMutation(IVar5);
                  }
                  self_01 = *(ID *)(lStack_1e8 + IVar10 * 8);
                  IVar6 = objc_stub::integerValue(self_01);
                  FUN_1007495d4();
                  if ((IVar6 == 8) && (IVar6 = objc_stub::count(self), 4 < IVar6)) {
                    IVar6 = objc_stub::objectAtIndexedSubscript_(self,4);
                    self_00 = objc_stub::componentsSeparatedByString_(IVar6,&cf__);
                    IVar6 = objc_stub::length(IVar6);
                    if ((IVar6 == 0) ||
                       (IVar6 = objc_stub::containsObject_(self_00,&cf_custom), (int)IVar6 != 0)) {
                      IVar6 = NSMutableDictionary::objectForKeyedSubscript_(IVar1,self_01);
                      IVar6 = getLongerRateLimit_andRateLimitInSeconds_(param_1,IVar6,IVar4);
                      NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,IVar6,self_01);
                    }
                  }
                  else {
                    IVar6 = NSMutableDictionary::objectForKeyedSubscript_(IVar1,self_01);
                    IVar6 = getLongerRateLimit_andRateLimitInSeconds_(param_1,IVar6,IVar4);
                    NSMutableDictionary::setObject_forKeyedSubscript_(IVar1,IVar6,self_01);
                  }
                  IVar10 = IVar10 + 1;
                } while (local_1f8 != IVar10);
                local_1f8 = objc_stub::countByEnumeratingWithState_objects_count_
                                      (IVar5,&local_1f0,auStack_170,0x10);
              } while (local_1f8 != 0);
            }
          }
          IVar9 = IVar9 + 1;
        } while (IVar9 != IVar3);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1b0,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

