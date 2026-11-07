// rea decompile_all
// name: FUN_10010683c
// address: 0x10010683c
// body: available
// range: 0x10010683c-0x100106a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010683c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  
  lVar1 = unaff_x22 + 0x10;
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x53) = *(undefined8 *)(unaff_x22 + 0xa3);
  *(undefined8 *)(unaff_x22 + 0x4b) = *(undefined8 *)(unaff_x22 + 0x9b);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  if (lVar8 != 0) {
    puVar6 = (undefined8 *)0x20;
    _swift_task_alloc();
    puVar6[2] = lVar1;
    FUN_1003fb4ec(FUN_10010a358,puVar6,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                  0x800000010088abe0,0x188,0);
    _swift_task_dealloc();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_100109f9c();
    _swift_allocError(&DAT_10099d560,puVar6,0,0);
    *puVar6 = uVar3;
    puVar6[1] = uVar5;
    puVar6[2] = lVar8;
    _swift_willThrow();
    _swift_bridgeObjectRetain(uVar5);
    FUN_100006cc8(uVar2,uVar4);
    FUN_100040bb4(lVar1,&DAT_100a78a38,&DAT_10080d8a8);
    _swift_bridgeObjectRelease(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001001069a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_1003fb48c(FUN_1001071e4,0,0xd000000000000097,0x8000000100889170,0xd000000000000022,
                0x800000010088abe0,0x184,0);
  FUN_100006cc8(uVar2,uVar4);
  FUN_100040bb4(lVar1,&DAT_100a78a38,&DAT_10080d8a8);
  _swift_bridgeObjectRelease(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100106a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x168));
  return;
}

