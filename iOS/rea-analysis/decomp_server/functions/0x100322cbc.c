// rea decompile_all
// name: FUN_100322cbc
// address: 0x100322cbc
// body: available
// range: 0x100322cbc-0x100322e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100322de4 to 0x10031f86c FUN_10031f86c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100322e6c to 0x1007dbf2c _$sScTss5NeverORs_rlE5valuexvg (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100322cbc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar1 = 0x30;
    _swift_task_alloc();
    *(long *)(unaff_x22 + 0x30) = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    *(undefined1 *)(lVar1 + 0x28) = 1;
    lVar2 = 0x30;
    _swift_task_alloc();
    *(long *)(unaff_x22 + 0x38) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = uVar7;
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined1 *)(lVar2 + 0x28) = 1;
    plVar5 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    uVar3 = 0xff;
    FUN_100277ad0(0xff);
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    uVar4 = 0;
    FUN_1002d9e30(0,uVar7,uVar3,puVar6);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100322e70;
    FUN_10031f86c(*(undefined8 *)(unaff_x22 + 0x10),&DAT_10081a318,lVar1,FUN_10032adb4,lVar2,0,0,
                  uVar4);
    return;
  }
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_100996060 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  uVar3 = 0xff;
  FUN_100277ad0(0xff);
  puVar6 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar4 = 0;
  FUN_1002d9e30(0,uVar7,uVar3,puVar6);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100322ee0;
  __sScTss5NeverORs_rlE5valuexvg
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),uVar4);
  return;
}

