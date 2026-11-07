// rea decompile_all
// name: FUN_10016ec04
// address: 0x10016ec04
// body: available
// range: 0x10016ec04-0x10016eef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10016ec04(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_b0 [16];
  undefined4 local_a0 [2];
  code *local_98;
  code *local_90;
  undefined4 local_74;
  code *local_70;
  byte local_68;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  local_74 = uVar1;
  _swift_retain(uVar5);
  FUN_1003e37e8(&local_70,&local_74);
  _swift_release(uVar5);
  if ((local_68 & 1) != 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_90 = (code *)CONCAT44(local_90._4_4_,uVar1);
    FUN_1003fb45c(FUN_10016f408,local_a0,0xd0000000000000a9,0x8000000100893700,0xd000000000000026,
                  0x8000000100895ab0,0x40,7);
    return (code *)0x0;
  }
  plVar6 = *(long **)(unaff_x20 + 0x20);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_90 = (code *)CONCAT44(local_90._4_4_,uVar1);
  pcVar7 = *(code **)(*plVar6 + 0xd0);
  _swift_retain(plVar6);
  pcVar2 = FUN_10016f410;
  (*pcVar7)(FUN_10016f410,local_a0);
  _swift_release(plVar6);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_98 = local_70;
  local_a0[0] = uVar1;
  local_90 = pcVar2;
  FUN_1003fb45c(FUN_10016f42c,auStack_b0,0xd0000000000000a9,0x8000000100893700,0xd000000000000026,
                0x8000000100895ab0,0x44,7);
  if ((ulong)pcVar2 >> 0x3e == 0) {
    pcVar7 = *(code **)(((ulong)pcVar2 & 0xffffffffffffff8) + 0x10);
    if (pcVar7 == (code *)0x0) goto LAB_10016eecc;
  }
  else {
    pcVar7 = (code *)((ulong)pcVar2 & 0xffffffffffffff8);
    if ((long)pcVar2 < 0) {
      pcVar7 = pcVar2;
    }
    pcVar4 = pcVar7;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (pcVar4 == (code *)0x0) goto LAB_10016eecc;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (local_70 == pcVar7) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    local_70 = (code *)0x0;
    local_68 = 1;
    local_74 = uVar1;
    _swift_retain(uVar5);
    FUN_1003e3634(&local_70,&local_74);
    _swift_release(uVar5);
    plVar6 = *(long **)(unaff_x20 + 0x20);
    puVar3 = &DAT_1009a0500;
    _swift_allocObject(&DAT_1009a0500,0x14,7);
    *(undefined4 *)(puVar3 + 0x10) = uVar1;
    pcVar7 = *(code **)(*plVar6 + 0xe8);
    _swift_retain(plVar6);
    (*pcVar7)(thunk_FUN_10016f410,puVar3);
    _swift_release(plVar6);
    _swift_release(puVar3);
    FUN_1003fb45c(FUN_10016f448);
    return pcVar2;
  }
LAB_10016eecc:
  _swift_bridgeObjectRelease(pcVar2);
  return (code *)0x0;
}

