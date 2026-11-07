// rea decompile_all
// name: FUN_10009f2ac
// address: 0x10009f2ac
// body: available
// range: 0x10009f2ac-0x10009f3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009f3f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009f2ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4c8);
  pcVar11 = *(code **)(unaff_x22 + 0x4c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4b0);
  lVar6 = *(long *)(unaff_x22 + 0x4a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x450);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x438);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x4e0));
  (*pcVar11)(uVar5,uVar12);
  _swift_task_dealloc(uVar5);
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(uVar8,uVar13);
  _swift_task_dealloc(uVar8);
  FUN_10009385c(uVar9,uVar3,uVar10);
  _swift_bridgeObjectRelease(uVar10);
  (*pcVar7)(uVar4,uVar13);
  (*pcVar11)(uVar2,uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x450));
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010009f3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

