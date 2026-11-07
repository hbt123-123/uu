// rea decompile_all
// name: FUN_10016c760
// address: 0x10016c760
// body: available
// range: 0x10016c760-0x10016c8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10016c760(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  (**(code **)(unaff_x20 + 0x130))();
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  _swift_beginAccess(lVar3 + 0x10,auStack_68,1,0);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(lVar3 + 0x18,auStack_80,1,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  _swift_retain(lVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(lVar3 + 0x28,auStack_98,1,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _swift_beginAccess(lVar3 + 0x38,auStack_b0,1,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _swift_beginAccess(lVar3 + 0x48,auStack_c8,1,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = uVar5;
  *(undefined8 *)(lVar3 + 0x50) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _swift_beginAccess(lVar3 + 0x58,auStack_e0,1,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x60);
  *(undefined8 *)(lVar3 + 0x58) = uVar5;
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  _swift_release(param_1);
  _swift_beginAccess(lVar3 + 0x68,auStack_f8,1,0);
  *(undefined8 *)(lVar3 + 0x68) = uVar5;
  _swift_release(lVar3);
  return lVar3;
}

