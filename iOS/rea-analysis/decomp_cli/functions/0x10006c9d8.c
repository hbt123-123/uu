// rea decompile_all
// name: FUN_10006c9d8
// address: 0x10006c9d8
// body: available
// range: 0x10006c9d8-0x10006cbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006ca90 to 0x100075c10 FUN_100075c10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010006ca64) */

void FUN_10006c9d8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar2,0x1000e1c74,&TargetProtocolRequirement_1000e1c84);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar2,uVar3,0x1000e1c74,&TargetProtocolRequirement_1000e1c7c);
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  FUN_1000786bc(unaff_x22 + 0x10,0,uVar3,uVar4);
  FUN_10005b984(unaff_x22 + 0x10,unaff_x22 + 0x60);
  puVar5 = &DAT_100104408;
  FUN_10000eb08(&DAT_100104408,&DAT_1000d5bb0);
  puVar6 = &DAT_100104410;
  FUN_10000eb08(&DAT_100104410,&DAT_1000d4810);
  lVar7 = unaff_x22 + 0x88;
  _swift_dynamicCast(lVar7,unaff_x22 + 0x60,puVar5,puVar6,0xe);
  if ((int)lVar7 == 0) {
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    FUN_10006c8b0(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar7 = *(long *)(unaff_x22 + 0x30);
    FUN_100001400(unaff_x22 + 0x10,uVar2);
    (**(code **)(lVar7 + 0x20))(uVar2,lVar7);
    FUN_100001428(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006cbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_10006c8f8(unaff_x22 + 0x88,unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  FUN_100001400(unaff_x22 + 0x38,uVar2);
  piVar9 = *(int **)(lVar7 + 0x10);
  iVar1 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10006cbbc;
                    /* WARNING: Could not recover jumptable at 0x00010006cb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(uVar2,lVar7);
  return;
}

