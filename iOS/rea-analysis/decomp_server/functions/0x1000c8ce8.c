// rea decompile_all
// name: FUN_1000c8ce8
// address: 0x1000c8ce8
// body: available
// range: 0x1000c8ce8-0x1000c8fbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000c8ce8(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *self;
  undefined8 *puVar3;
  ID self_00;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___pbDistributor) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___jsonDistributor) = 0
  ;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___simpleActionHandler)
       = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___channelEchoHandler)
       = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___launchAppHandler) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___systemMetricsHandler
   ) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___inputEventHandler) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___rpcRequestHandler) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___qosStatsHandler) = 0
  ;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___clipboardHandler) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___terminalHandler) = 0
  ;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___fileTransferHandler)
       = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___portMappingHandler)
       = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___pbRpcManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::controllerAbility) = 0;
  *(undefined4 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::handle) = param_1;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::_peerState);
  _swift_beginAccess(puVar3,auStack_58,0x21,0);
  uVar1 = 0;
  local_70 = param_2;
  FUN_100005c50(0);
  FUN_10039f5b8(&local_68,&local_70,uVar1);
  *puVar3 = local_68;
  puVar3[1] = uStack_60;
  _swift_endAccess(auStack_58);
  uVar1 = 0;
  FUN_100401b14(0);
  local_90 = param_1;
  local_88 = param_2;
  FUN_1003fb48c(uVar1,FUN_1000cdbdc,auStack_a0,0xd00000000000009c,0x8000000100885110,
                0x5f3a5f2874696e69,0xea0000000000293a,0x29,0);
  uVar1 = 0;
  FUN_1000cdbe8();
  _swift_allocObject();
  FUN_1000cb3a0();
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::wakeUpActivity) = uVar1;
  puVar2 = (undefined8 *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  self = (undefined8 *)
         NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  puVar3 = self;
  FUN_1003a9e68();
  _objc_msgSend((ID)self,"addObserver:selector:name:object:",puVar2,
                "handleRemoteAssistFileTransferSettingChanged",*puVar3,0);
  self_00 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  puVar3 = puVar2;
  FUN_1003a9f48();
  NSNotificationCenter::addObserver_selector_name_object_
            (self_00,"addObserver:selector:name:object:",puVar2,"handleAbilityConfigChanged",*puVar3
             ,0);
  return puVar2;
}

