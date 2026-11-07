// rea decompile_all
// name: SentryCrashReportFilterConcatenate::initWithSeparatorFmt:keysArray:
// address: 0x100759638
// body: available
// range: 0x100759638-0x1007597f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007597f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterConcatenate::initWithSeparatorFmt_keysArray_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID self_01;
  long lVar3;
  ID IVar4;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_100;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_100.super_class = &objc::class_t::SentryCrashReportFilterConcatenate;
  local_100.receiver = param_1;
  self = _objc_msgSendSuper2(&local_100,"init");
  if (self != 0) {
    self_00 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_4,&local_140,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(param_4);
          }
          self_01 = *(ID *)(lStack_138 + IVar4 * 8);
          IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
          IVar2 = objc_stub::isKindOfClass_(self_01,IVar2);
          if ((int)IVar2 == 0) {
            objc_stub::addObject_(self_00,self_01);
          }
          else {
            objc_stub::addObjectsFromArray_(self_00,self_01);
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_4,&local_140,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
    objc_stub::FUN_1007f49e0(self,param_3);
    objc_stub::FUN_1007f3860(self,self_00);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

