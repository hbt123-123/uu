// rea decompile_all
// name: FUN_10009faac
// address: 0x10009faac
// body: available
// range: 0x10009faac-0x10009fc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009fc44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009faac(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4c8);
  pcVar3 = *(code **)(unaff_x22 + 0x4c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x4b0);
  lVar13 = *(long *)(unaff_x22 + 0x4a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x450);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x438);
  _swift_willThrow();
  pcVar8 = *(code **)(lVar13 + 8);
  (*pcVar8)(uVar9,uVar11);
  _swift_task_dealloc(uVar9);
  (*pcVar3)(uVar10,uVar12);
  _swift_task_dealloc(uVar10);
  (*pcVar8)(uVar14,uVar11);
  _swift_task_dealloc(uVar14);
  FUN_10009385c(uVar6,uVar7,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  (*pcVar8)(uVar4,uVar11);
  (*pcVar3)(uVar5,uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x450));
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010009fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

