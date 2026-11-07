// rea decompile_all
// name: SentryClient::attachmentsForEvent:scope:
// address: 0x10073d888
// body: available
// range: 0x10073d888-0x10073da03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073d9fc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073da00 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryClient::attachmentsForEvent_scope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::attachments(param_4);
  IVar2 = attachmentProcessors(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 != 0) {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    IVar2 = attachmentProcessors(param_1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_120,auStack_d8,0x10);
    if (IVar3 != 0) {
      lVar4 = *local_110;
      do {
        IVar5 = 0;
        do {
          if (*local_110 != lVar4) {
            _objc_enumerationMutation(IVar2);
          }
          IVar1 = objc_stub::processAttachments_forEvent_
                            (*(ID *)(lStack_118 + IVar5 * 8),IVar1,param_3);
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_120,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

