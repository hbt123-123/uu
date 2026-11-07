// rea decompile_all
// name: FUN_1004fb604
// address: 0x1004fb604
// body: available
// range: 0x1004fb604-0x1004fb8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004fb83c to 0x1004fafb0 FUN_1004fafb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fb604(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xb8) & 1) == 0) {
    if (*(ulong *)(unaff_x22 + 0x90) >> 0x1f == 0) {
      if (*(ulong *)(unaff_x22 + 0x90) != 0) {
        plVar8 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa0) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_1004fb8f0;
        FUN_1004fafb0(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78));
        return;
      }
      lVar12 = *(long *)(unaff_x22 + 0x98);
      lVar6 = *(long *)(unaff_x22 + 0x78);
      lVar4 = *(long *)(unaff_x22 + 0x80);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      lVar5 = *(long *)(lVar6 + 0x18);
      *(undefined **)(unaff_x22 + 0x68) = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1004f9894(lVar4 + *(int *)(lVar6 + 0x34),unaff_x22 + 0x38);
      uVar3 = *(undefined1 *)(lVar4 + *(int *)(lVar6 + 0x38));
      puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar6 + 0x3c));
      uVar10 = *puVar1;
      uVar2 = *(undefined1 *)(puVar1 + 1);
      puVar9 = &DAT_100aaa108;
      FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
      FUN_100537714(uVar11,unaff_x22 + 0x68,unaff_x22 + 0x38,uVar3,uVar10,uVar2,lVar5,puVar9,
                    *(undefined8 *)(lVar6 + 0x28),&PTR_PTR_1009d1680);
      if (lVar12 == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        uVar10 = 0;
        goto LAB_1004fb6b4;
      }
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar6 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10),PTR___sSciTL_100996088,
                 PTR___s13AsyncIteratorSciTl_100995fe8);
      lVar4 = 0;
      __sSqMa(0,lVar6);
      (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar11,lVar4);
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar11,1,1,lVar6);
      plVar7 = (long *)0x0;
      FUN_10054df34();
      _swift_allocObject();
      *(undefined1 *)(plVar7 + 2) = 0;
      plVar7[3] = -0x2fffffffffffffc4;
      plVar7[4] = -0x7ffffffeff743700;
      plVar7[5] = 0x29287478656e;
      plVar7[6] = -0x1a00000000000000;
      plVar7[7] = (long)&DAT_d000000000000028;
      plVar7[8] = -0x7ffffffeff7437c0;
      plVar7[9] = 0xb2;
      plVar8 = plVar7;
      FUN_1004f9a1c();
      _swift_allocError(&DAT_1009d16f0,plVar8,0,0);
      *plVar8 = (long)plVar7;
      _swift_willThrow();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x10),
               PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
    lVar5 = 0;
    __sSqMa(0,lVar4);
    (**(code **)(*(long *)(lVar5 + -8) + 8))(uVar10,lVar5);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar10,1,1,lVar4);
    lVar5 = *(long *)(lVar6 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar10 = 1;
LAB_1004fb6b4:
    (*UNRECOVERED_JUMPTABLE)(uVar11,uVar10,1,lVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004fb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

