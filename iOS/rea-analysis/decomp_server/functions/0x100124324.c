// rea decompile_all
// name: FUN_100124324
// address: 0x100124324
// body: available
// range: 0x100124324-0x100124463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100124324(undefined4 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::___lazy_storage___roomStateHandler) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::___lazy_storage___signalPushHandler) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::___lazy_storage___eventReportHandler) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) = 0;
  lVar1 = 0;
  FUN_100123b34();
  _swift_allocObject();
  *(undefined4 *)(lVar1 + 0x10) = param_1;
  _swift_beginAccess(lVar1 + 0x18,auStack_48,0x21,0);
  local_60 = 4;
  uVar2 = 0;
  FUN_100005c3c(0);
  FUN_10039f5b8(&local_58,&local_60,uVar2);
  *(undefined8 *)(lVar1 + 0x18) = local_58;
  *(undefined8 *)(lVar1 + 0x20) = uStack_50;
  _swift_endAccess(auStack_48);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::room) = lVar1;
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100124464,0,0xd000000000000098,0x800000010088de90,0x293a5f2874696e69,
                0xe800000000000000,0x18,0);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}

