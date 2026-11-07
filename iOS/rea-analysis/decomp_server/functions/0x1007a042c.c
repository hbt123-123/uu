// rea decompile_all
// name: SentryCrashReportSink::handleConvertedEvent:report:sentReports:
// address: 0x1007a042c
// body: available
// range: 0x1007a042c-0x1007a060b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a0608 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryCrashReportSink::handleConvertedEvent_report_sentReports_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
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
  objc_stub::addObject_(param_5,param_4);
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_1007ec200((ID)self,IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(param_4,&cf_attachments);
  if (IVar2 != 0) {
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar2 = objc_stub::objectForKeyedSubscript_(param_4,&cf_attachments);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_130,auStack_e8,0x10);
    if (IVar3 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(IVar2);
          }
          objc_stub::FUN_1007e4e00(IVar1,*(undefined8 *)(lStack_128 + IVar5 * 8));
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_130,auStack_e8,0x10);
      } while (IVar3 != 0);
    }
  }
  objc_stub::FUN_1007e64c0((ID)&objc::class_t::SentrySDK,param_3,IVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

