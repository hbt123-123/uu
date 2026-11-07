// rea decompile_all
// name: FUN_1001064b0
// address: 0x1001064b0
// body: available
// range: 0x1001064b0-0x1001067cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100106744 to 0x1003f124c FUN_1003f124c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001064b0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar4 = *(long *)(unaff_x22 + 400);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar9 = *(long *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_beginAccess(lVar9 + lVar4,unaff_x22 + 0x100,0x21,0);
  _swift_bridgeObjectRetain(uVar5);
  uVar7 = *(undefined8 *)(lVar9 + lVar4);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar14 = *(undefined8 *)(lVar9 + lVar4);
  *(undefined8 *)(lVar9 + lVar4) = 0x8000000000000000;
  FUN_100061340(uVar3,uVar5,uVar15,uVar2,uVar7);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(lVar9 + lVar4) = uVar14;
  _swift_endAccess(unaff_x22 + 0x100);
  _swift_bridgeObjectRetain(uVar5);
  FUN_10010a314(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar5;
  puVar8 = (undefined8 *)0x20;
  _swift_task_alloc();
  puVar8[2] = unaff_x22 + 0x130;
  FUN_1003fb48c(FUN_10010a348,puVar8,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                0x800000010088abe0,0x176,0);
  _swift_task_dealloc();
  uVar6 = *(ulong *)(unaff_x22 + 0x138);
  uVar1 = *(ulong *)(unaff_x22 + 0x130) & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar1 = uVar6 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    lVar9 = 0x20;
    _swift_task_alloc();
    *(long *)(lVar9 + 0x10) = unaff_x22 + 0x130;
    FUN_1003fb48c(FUN_10010a350,lVar9,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                  0x800000010088abe0,0x17e,0);
    _swift_task_dealloc(lVar9);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
    *(undefined1 *)(unaff_x22 + 0x128) = 6;
    puVar10 = &DAT_100a78a38;
    FUN_100004bb4(&DAT_100a78a38,&DAT_10080d8a8);
    puVar11 = &DAT_100a78a40;
    FUN_10003f840(&DAT_100a78a40,&DAT_100a78a38,&DAT_10080d8a8,
                  &TargetProtocolConformanceDescriptor_100820bb0);
    puVar12 = &DAT_100a78a48;
    FUN_10003f840(&DAT_100a78a48,&DAT_100a78a38,&DAT_10080d8a8,
                  &TargetProtocolConformanceDescriptor_100820bd8);
    _swift_bridgeObjectRetain(uVar2);
    lVar9 = unaff_x22 + 0x118;
    FUN_10039e070(lVar9,puVar10,0,0,0,&DAT_1009b82f0,puVar10,&PTR_PTR_100a8bc30,puVar11,puVar12);
    *(long *)(unaff_x22 + 0x1b0) = lVar9;
    _swift_bridgeObjectRelease(uVar2);
    plVar13 = (long *)0x50;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b8) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_1001067cc;
    FUN_1003f124c(plVar13,unaff_x22 + 0x60);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  FUN_100109f9c();
  _swift_allocError(&DAT_10099d560,puVar8,0,0);
  puVar8[1] = 4;
  *puVar8 = 0;
  puVar8[2] = 0;
  _swift_willThrow();
  FUN_100006cc8(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001001067c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

