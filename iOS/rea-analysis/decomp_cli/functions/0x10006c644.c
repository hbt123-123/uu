// rea decompile_all
// name: FUN_10006c644
// address: 0x10006c644
// body: available
// range: 0x10006c644-0x10006c7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006c6b8 to 0x100075c10 FUN_100075c10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010006c688) */

void FUN_10006c644(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 8);
  FUN_1000786bc(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xb8)
               );
  FUN_10005b984(unaff_x22 + 0x10,unaff_x22 + 0x60);
  puVar3 = &DAT_100104408;
  FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
  puVar4 = &DAT_100104410;
  FUN_10000eb08(&DAT_100104410,&DAT_1000d4810);
  lVar5 = unaff_x22 + 0x88;
  _swift_dynamicCast(lVar5,unaff_x22 + 0x60,puVar3,puVar4,0xe);
  if ((int)lVar5 == 0) {
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    FUN_10006c8b0(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x30);
    FUN_100001400(unaff_x22 + 0x10,uVar2);
    (**(code **)(lVar5 + 0x20))(uVar2,lVar5);
    FUN_100001428(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006c7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_10006c8f8(unaff_x22 + 0x88,unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  FUN_100001400(unaff_x22 + 0x38,uVar2);
  piVar7 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10006c7e4;
                    /* WARNING: Could not recover jumptable at 0x00010006c77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar2,lVar5);
  return;
}

