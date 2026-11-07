// rea decompile_all
// name: FUN_1003220d8
// address: 0x1003220d8
// body: available
// range: 0x1003220d8-0x1003221cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003221c8 to 0x10031f86c FUN_10031f86c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003220d8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar1 = 0x30;
  _swift_task_alloc();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  uVar3 = 0xff;
  FUN_100277ad0(0xff);
  puVar4 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar5 = 0;
  FUN_1002d9bd8(0,uVar6,uVar3,puVar4);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1003221cc;
  FUN_10031f86c(*(undefined8 *)(unaff_x22 + 0x10),&DAT_10081a780,lVar1,thunk_FUN_10032d308,
                *(undefined8 *)(unaff_x22 + 0x28),0,0,uVar5);
  return;
}

