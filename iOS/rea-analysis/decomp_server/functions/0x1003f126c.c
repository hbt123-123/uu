// rea decompile_all
// name: FUN_1003f126c
// address: 0x1003f126c
// body: available
// range: 0x1003f126c-0x1003f136f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f12f0 to 0x1003f17e4 FUN_1003f17e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003f136c to 0x1003f1d5c FUN_1003f1d5c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f126c(ulong param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x20);
  FUN_1003d9e80();
  if ((param_1 & 1) != 0) {
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1003f1370;
    FUN_1003f17e4(plVar1,*(undefined8 *)(unaff_x22 + 0x10),0,0,FUN_1003f2098,
                  *(undefined8 *)(unaff_x22 + 0x18),uVar2);
    return;
  }
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  uVar2 = *(undefined8 *)(lVar3 + 0x50);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003f13e0;
  FUN_1003f1d5c(*(undefined8 *)(unaff_x22 + 0x10),0,0,0x6e7973615f64726e,0xeb00000000292863,
                FUN_1003f2090,*(undefined8 *)(unaff_x22 + 0x18),uVar2);
  return;
}

