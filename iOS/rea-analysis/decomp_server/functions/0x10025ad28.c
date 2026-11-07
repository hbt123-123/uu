// rea decompile_all
// name: FUN_10025ad28
// address: 0x10025ad28
// body: available
// range: 0x10025ad28-0x10025ae8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025ad28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_beginAccess(param_1 + 0x20,auStack_98,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRelease(uVar6);
  _swift_beginAccess(param_1 + 0x28,auStack_c8,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_e0,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRelease(uVar6);
  _swift_beginAccess(param_1 + 0x30,auStack_f8,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x30,auStack_110,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

