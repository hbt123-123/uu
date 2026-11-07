// rea decompile_all
// name: FUN_10011b21c
// address: 0x10011b21c
// body: available
// range: 0x10011b21c-0x10011b34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011b21c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = _TtC14UURemoteServer15InputController::lastLeftButtonTimeStamp;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___mouseButtonState) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___isCapital) =
       2;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___lock) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer15InputController::lastPostedMousePoint);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGesture) = 0x1d;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventSubtypeGestureTouchBegin) = 1;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventSubtypeGestureTouchMoved) = 2;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventSubtypeGestureTouchEnded) = 3;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventSubtypeGestureTouchCanceled) = 4;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGestureTouchID) = 0x87;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGestureTouchPhase) =
       0x88;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGestureTouchPositionX)
       = 0x89;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGestureTouchPositionY)
       = 0x8a;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer15InputController::kCGEventGestureTouchPressure) =
       0x8b;
  return;
}

