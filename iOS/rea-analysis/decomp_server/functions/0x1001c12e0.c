// rea decompile_all
// name: FUN_1001c12e0
// address: 0x1001c12e0
// body: available
// range: 0x1001c12e0-0x1001c144b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c12e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar2 = _TtC14UURemoteServer12InputHandler::controller;
  uVar3 = 0;
  FUN_10011b154();
  _swift_allocObject();
  FUN_10011b21c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _TtC14UURemoteServer12InputHandler::keyCodeStates;
  puVar4 = &DAT_100a7cfc0;
  FUN_100004bb4(&DAT_100a7cfc0,&DAT_1008119e8);
  puVar5 = puVar4;
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _TtC14UURemoteServer12InputHandler::mouseStates;
  _swift_allocObject(puVar4,0x20,7);
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _TtC14UURemoteServer12InputHandler::mouseEdgePointCompensator;
  lVar6 = 0;
  FUN_1000f56d8();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(lVar6 + 0x10) = 0x3fe0000000000000;
  *(long *)(unaff_x20 + lVar2) = lVar6;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::maxAbsRemainCount) = 0x14;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer12InputHandler::___lazy_storage___remainAbsCount);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::lastHeartTime);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::checkHeartTimer) = 0;
  FUN_1001c1504();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}

