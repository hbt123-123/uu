// rea decompile_all
// name: FUN_10063ceb8
// address: 0x10063ceb8
// body: available
// range: 0x10063ceb8-0x10063d097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063ceb8(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong local_98;
  long lStack_90;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(lVar8 + 0x10);
  if (lVar7 - 0x10U < 0xfffffffffffffff1) {
    FUN_10063d688();
    _swift_allocError(&DAT_1009e2e18,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  else {
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if (lVar9 == 0) {
      local_98 = 0;
      lStack_90 = 0;
    }
    else {
      lStack_90 = lVar9 + 0x20;
      local_98 = *(long *)(lVar9 + 0x10) << 1 | 1;
    }
    lVar4 = unaff_x20 + 0x48;
    _swift_beginAccess(lVar4,auStack_78,0,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
    FUN_10063d098();
    lVar5 = lVar4;
    _swift_allocObject();
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(param_4);
    _swift_retain(param_6);
    FUN_10063d0d8(lVar8,lVar8 + 0x20,0,lVar7 << 1 | 1,lVar9,lStack_90,0,local_98,uVar2,uVar1,uVar3);
    puVar6 = &DAT_1009e2cd0;
    _swift_allocObject(&DAT_1009e2cd0,0x18,7);
    _swift_weakInit(puVar6 + 0x10);
    uVar1 = *(undefined8 *)(lVar5 + 0x30);
    uVar2 = *(undefined8 *)(lVar5 + 0x38);
    *(code **)(lVar5 + 0x30) = FUN_10063c828;
    *(undefined **)(lVar5 + 0x38) = puVar6;
    _swift_retain(puVar6);
    FUN_10007ed2c(uVar1,uVar2);
    _swift_release(puVar6);
    param_1[3] = lVar4;
    param_1[4] = (long)&PTR_PTR_1009e2e80;
    *param_1 = lVar5;
  }
  return;
}

