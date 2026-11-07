// rea decompile_all
// name: FUN_10009f4a8
// address: 0x10009f4a8
// body: available
// range: 0x10009f4a8-0x10009fa2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009fa2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009f4a8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong *puVar27;
  code *pcVar28;
  long lVar29;
  long unaff_x22;
  long lVar30;
  undefined8 uVar31;
  
  lVar13 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x4e0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x4c8);
  pcVar19 = *(code **)(unaff_x22 + 0x4c0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x4b0);
  lVar29 = *(long *)(unaff_x22 + 0x4a0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x450);
  uVar9 = *(long *)(unaff_x22 + 0x4a8) + 0xf;
  lVar20 = *(long *)(unaff_x22 + 0x448);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x438);
  lVar30 = *(long *)(unaff_x22 + 0x430);
  puVar27 = *(ulong **)(unaff_x22 + 0x388);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x390));
  uVar8 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar27) + 0x80))(uVar9);
  FUN_1000add24(uVar8,0x65707974,0xe400000000000000,0x767265732d63616d,0xea00000000007265);
  pcVar28 = *(code **)(lVar29 + 8);
  uVar12 = uVar23;
  (*pcVar28)(uVar9);
  _swift_task_dealloc();
  __s10Foundation3URLV14absoluteStringSSvg();
  (*pcVar28)(uVar8,uVar23);
  _swift_task_dealloc(uVar8);
  puVar10 = (undefined8 *)0x20;
  _swift_task_alloc();
  puVar10[2] = uVar9;
  puVar10[3] = uVar12;
  FUN_1003fb48c(FUN_10009fef4,puVar10,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x74,0);
  _swift_task_dealloc();
  FUN_1003a1d38();
  uVar2 = *puVar10;
  puVar4 = (undefined8 *)puVar10[1];
  puVar11 = &DAT_100a75980;
  FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
  _swift_allocObject();
  uVar31 = 4;
  *(undefined8 *)(puVar11 + 0x18) = 8;
  *(undefined8 *)(puVar11 + 0x10) = 4;
  puVar10 = puVar4;
  _swift_bridgeObjectRetain();
  FUN_1003a0d24();
  puVar7 = PTR___sSSN_1009957f8;
  uVar3 = *puVar10;
  uVar5 = puVar10[1];
  *(undefined **)(unaff_x22 + 0x2f8) = PTR___sSSN_1009957f8;
  *(ulong *)(unaff_x22 + 0x2e0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar12;
  FUN_10003e8bc(unaff_x22 + 0x2e0,puVar11 + 0x30);
  *(undefined8 *)(puVar11 + 0x20) = uVar3;
  *(undefined8 *)(puVar11 + 0x28) = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  puVar10 = (undefined8 *)(unaff_x22 + 0x2e0);
  FUN_10003f094();
  FUN_1003a0d8c();
  uVar5 = *puVar10;
  uVar6 = puVar10[1];
  uVar12 = *(undefined8 *)(lVar30 + 0x10);
  lVar29 = *(long *)(lVar30 + 0x18);
  *(undefined **)(unaff_x22 + 0x318) = puVar7;
  uVar3 = 0;
  if (lVar29 != 0) {
    uVar3 = uVar12;
  }
  lVar1 = -0x2000000000000000;
  if (lVar29 != 0) {
    lVar1 = lVar29;
  }
  *(undefined8 *)(unaff_x22 + 0x300) = uVar3;
  *(long *)(unaff_x22 + 0x308) = lVar1;
  FUN_10003e8bc(unaff_x22 + 0x300,puVar11 + 0x60);
  *(undefined8 *)(puVar11 + 0x50) = uVar5;
  *(undefined8 *)(puVar11 + 0x58) = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(lVar29);
  puVar10 = (undefined8 *)(unaff_x22 + 0x300);
  FUN_10003f094();
  FUN_1003a0db4();
  uVar5 = *puVar10;
  uVar6 = puVar10[1];
  uVar12 = *(undefined8 *)(lVar30 + 0x20);
  lVar29 = *(long *)(lVar30 + 0x28);
  *(undefined **)(unaff_x22 + 0x338) = puVar7;
  uVar3 = 0;
  if (lVar29 != 0) {
    uVar3 = uVar12;
  }
  lVar1 = -0x2000000000000000;
  if (lVar29 != 0) {
    lVar1 = lVar29;
  }
  *(undefined8 *)(unaff_x22 + 800) = uVar3;
  *(long *)(unaff_x22 + 0x328) = lVar1;
  FUN_10003e8bc(unaff_x22 + 800,puVar11 + 0x90);
  *(undefined8 *)(puVar11 + 0x80) = uVar5;
  *(undefined8 *)(puVar11 + 0x88) = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(lVar29);
  puVar10 = (undefined8 *)(unaff_x22 + 800);
  FUN_10003f094();
  FUN_1003a0684();
  uVar5 = *puVar10;
  uVar6 = puVar10[1];
  uVar12 = *(undefined8 *)(lVar30 + 0x30);
  lVar29 = *(long *)(lVar30 + 0x38);
  *(undefined **)(unaff_x22 + 0x358) = puVar7;
  uVar3 = 0;
  if (lVar29 != 0) {
    uVar3 = uVar12;
  }
  lVar30 = -0x2000000000000000;
  if (lVar29 != 0) {
    lVar30 = lVar29;
  }
  *(undefined8 *)(unaff_x22 + 0x340) = uVar3;
  *(long *)(unaff_x22 + 0x348) = lVar30;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(lVar29);
  _swift_bridgeObjectRelease(uVar16);
  FUN_10003e8bc(unaff_x22 + 0x340,puVar11 + 0xc0);
  *(undefined8 *)(puVar11 + 0xb0) = uVar5;
  *(undefined8 *)(puVar11 + 0xb8) = uVar6;
  FUN_10003f094(unaff_x22 + 0x340);
  FUN_1000f6590(uVar2,puVar4,puVar11,0,0,0,0);
  _swift_bridgeObjectRelease(puVar4);
  _swift_setDeallocating(puVar11);
  _swift_arrayDestroy(puVar11 + 0x20,4,&DAT_1009b7a40);
  _swift_deallocClassInstance(puVar11,0x20,7);
  uVar9 = lVar20 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  __s10Foundation4DateVACycfC(uVar9);
  __s10Foundation4DateV17timeIntervalSinceySdACF(uVar26);
  (*pcVar19)(uVar9,uVar24);
  _swift_task_dealloc(uVar9);
  lVar29 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar29 + 0x10) = uVar31;
  FUN_1003fb48c(FUN_10009fefc,lVar29,0xd000000000000093,0x800000010087fc10,0xd00000000000002b,
                0x800000010087fcb0,0x7a,0);
  _swift_task_dealloc(lVar29);
  (*pcVar28)(uVar14,uVar23);
  _swift_task_dealloc(uVar14);
  (*pcVar19)(uVar21,uVar24);
  _swift_task_dealloc(uVar21);
  (*pcVar28)(uVar15,uVar23);
  _swift_task_dealloc(uVar15);
  FUN_10009385c(uVar22,uVar18,uVar17);
  _swift_bridgeObjectRelease(uVar17);
  (*pcVar28)(uVar25,uVar23);
  (*pcVar19)(uVar26,uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010009fa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

