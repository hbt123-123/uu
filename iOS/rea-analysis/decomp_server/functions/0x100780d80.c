// rea decompile_all
// name: SentryCrashReportConverter::debugMetaForThreads:
// address: 0x100780d80
// body: available
// range: 0x100780d80-0x10078112f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100781128 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10078112c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::debugMetaForThreads_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID local_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  long lStack_288;
  long *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  long lStack_248;
  long *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [133];
  char acStack_83 [19];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = &_OBJC_CLASS___NSMutableSet;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  lStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = (long *)0x0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  local_2d8 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_250,auStack_108,0x10);
  if (local_2d8 != 0) {
    lVar4 = *local_240;
    do {
      IVar6 = 0;
      do {
        if (*local_240 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        lStack_288 = 0;
        local_290 = 0;
        uStack_278 = 0;
        local_280 = (long *)0x0;
        uStack_268 = 0;
        local_270 = 0;
        uStack_258 = 0;
        uStack_260 = 0;
        IVar1 = objc_stub::stacktrace(*(ID *)(lStack_248 + IVar6 * 8));
        IVar1 = objc_stub::frames(IVar1);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_290,auStack_188,0x10);
        if (IVar2 != 0) {
          lVar5 = *local_280;
          do {
            IVar7 = 0;
            do {
              if (*local_280 != lVar5) {
                _objc_enumerationMutation(IVar1);
              }
              IVar8 = *(ID *)(lStack_288 + IVar7 * 8);
              IVar3 = objc_stub::imageAddress(IVar8);
              if (IVar3 != 0) {
                IVar3 = objc_stub::imageAddress(IVar8);
                IVar3 = objc_stub::containsObject_(self_00,IVar3);
                if ((IVar3 & 1) == 0) {
                  IVar3 = objc_stub::imageAddress(IVar8);
                  objc_stub::addObject_(self_00,IVar3);
                }
              }
              IVar7 = IVar7 + 1;
            } while (IVar2 != IVar7);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar1,&local_290,auStack_188,0x10);
          } while (IVar2 != 0);
        }
        IVar6 = IVar6 + 1;
      } while (IVar6 != local_2d8);
      local_2d8 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_250,auStack_108,0x10);
    } while (local_2d8 != 0);
  }
  IVar6 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  IVar1 = objc_stub::FUN_1007e5de0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_2d0,auStack_208,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_2c0;
    do {
      IVar7 = 0;
      do {
        if (*local_2c0 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        IVar8 = *(ID *)(lStack_2c8 + IVar7 * 8);
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar8,&cf_image_addr);
        objc_stub::unsignedLongLongValue(IVar3);
        _snprintf(acStack_83,0x13,"0x%016llx");
        IVar3 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_83,1);
        IVar3 = objc_stub::containsObject_(self_00,IVar3);
        if ((int)IVar3 != 0) {
          IVar3 = objc_stub::FUN_1007e7e80(param_1,IVar8);
          objc_stub::addObject_(IVar6,IVar3);
        }
        IVar7 = IVar7 + 1;
      } while (IVar2 != IVar7);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_2d0,auStack_208,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

