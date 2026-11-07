// rea decompile_all
// name: SentryHub::isIntegrationInstalled:
// address: 0x1007685cc
// body: available
// range: 0x1007685cc-0x1007686ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007686fc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryHub::isIntegrationInstalled_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  long lVar5;
  ID IVar6;
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = *(ID *)(param_1 + 0x60);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_110;
    do {
      IVar6 = 0;
      do {
        if (*local_110 != lVar5) {
          _objc_enumerationMutation(self);
        }
        IVar3 = objc_stub::isKindOfClass_(*(ID *)(lStack_118 + IVar6 * 8),param_3);
        if ((IVar3 & 1) != 0) {
          bVar4 = 1;
          goto LAB_1007686ac;
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar2 != 0);
  }
  bVar4 = 0;
LAB_1007686ac:
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

