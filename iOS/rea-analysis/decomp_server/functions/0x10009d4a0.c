// rea decompile_all
// name: FUN_10009d4a0
// address: 0x10009d4a0
// body: available
// range: 0x10009d4a0-0x10009d563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009d55c to 0x1007df4fc _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10009d560 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009d4a0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x470) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x468));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x460));
    if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar2) goto LAB_10009d560;
    pcVar1 = FUN_10009d564;
  }
  else {
    _swift_release(*(undefined8 *)(lVar3 + 0x460));
    if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar2) {
LAB_10009d560:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_10009fa30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}

