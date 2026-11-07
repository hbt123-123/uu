// rea decompile_all
// name: FUN_1000a0fb0
// address: 0x1000a0fb0
// body: available
// range: 0x1000a0fb0-0x1000a109f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a109c to 0x1000a0b38 FUN_1000a0b38 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0fb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = 0;
  FUN_1000a0e9c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  lVar4 = 0x50;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  *(long *)(lVar4 + 0x10) = lVar3;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x28) = uVar9;
  *(undefined8 *)(lVar4 + 0x20) = uVar8;
  *(undefined8 *)(lVar4 + 0x38) = uVar7;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *(undefined8 *)(lVar4 + 0x40) = uVar1;
  plVar5 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000a10a0;
  FUN_1000a0b38(0,0,0xd00000000000001b,0x8000000100880870,FUN_1000a2098,lVar4);
  return;
}

