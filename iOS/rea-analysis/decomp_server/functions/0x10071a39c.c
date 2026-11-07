// rea decompile_all
// name: SALog::log:
// address: 0x10071a39c
// body: available
// range: 0x10071a39c-0x10071a54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071a548 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SALog::log_(ID param_1,SEL param_2,ID param_3)

{
  dispatch_group_t pdVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  undefined *puStack_158;
  ID local_150;
  ID local_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  self = loggers(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_140,auStack_100,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_130;
    do {
      IVar5 = 0;
      do {
        if (*local_130 != lVar4) {
          _objc_enumerationMutation(self);
        }
        pdVar1 = DAT_100b2c7b0;
        self_00 = *(ID *)(lStack_138 + IVar5 * 8);
        IVar3 = objc_stub::loggerQueue(self_00);
        local_170 = PTR___NSConcreteStackBlock_100995490;
        local_168 = 0xc2000000;
        local_160 = FUN_10071a54c;
        puStack_158 = &DAT_1009e7980;
        local_150 = self_00;
        local_148 = param_3;
        _dispatch_group_async(pdVar1,IVar3,&local_170);
        _dispatch_group_wait(DAT_100b2c7b0,0xffffffffffffffff);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (self,&local_140,auStack_100,0x10);
    } while (IVar2 != 0);
  }
  _dispatch_semaphore_signal(DAT_100b2c7b8);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

