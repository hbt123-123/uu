// rea decompile_all
// name: FUN_1001ae628
// address: 0x1001ae628
// body: available
// range: 0x1001ae628-0x1001ae8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001ae628(void)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *self;
  long lVar4;
  undefined8 uVar5;
  ID self_00;
  undefined8 uVar6;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar1 = _TtC14UURemoteServer15StreamerManager::controlled;
  IVar2 = StreamerWrapper::shared((ID)&objc::class_t::StreamerWrapper,"shared");
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  lVar1 = _TtC14UURemoteServer15StreamerManager::seqGenerator;
  lVar3 = 0;
  FUN_100121d70();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(lVar3 + 0x10) = IVar2;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  lVar1 = _TtC14UURemoteServer15StreamerManager::roomConfigFetcher;
  lVar3 = 0;
  FUN_1001ba574();
  _swift_allocObject();
  lVar4 = 0;
  FUN_1001b9b9c();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 300;
  *(long *)(lVar3 + 0x10) = lVar4;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  lVar1 = _TtC14UURemoteServer15StreamerManager::serialQueue;
  uVar5 = 0;
  FUN_100004b70();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::recreateRoomTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::networkReachabilityManager) = 0
  ;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wasNetworkReachable) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::isSystemSleeping) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem) = 0;
  lVar1 = _TtC14UURemoteServer15StreamerManager::logPath;
  FUN_100401b14(0);
  if (DAT_100a73bb0 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  uVar5 = DAT_100b36258;
  uVar6 = DAT_100b36260;
  FUN_1003fbee4();
  _swift_bridgeObjectRetain(uVar6);
  __sSS6appendyySSF(0x656d61657274532f,0xe900000000000072);
  _swift_bridgeObjectRelease(uVar6);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = uVar6;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  lVar1 = _TtC14UURemoteServer15StreamerManager::controlled;
  _objc_msgSend(*(ID *)(IVar2 + _TtC14UURemoteServer15StreamerManager::controlled),"setDelegate:",
                IVar2);
  self_00 = *(ID *)(IVar2 + lVar1);
  uVar5 = *(undefined8 *)(IVar2 + _TtC14UURemoteServer15StreamerManager::logPath);
  uVar6 = ((undefined8 *)(IVar2 + _TtC14UURemoteServer15StreamerManager::logPath))[1];
  _swift_bridgeObjectRetain(uVar6);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _objc_msgSend(self_00,"ControlledInitializeWithLogPath:configPath:",uVar5,uVar6);
  return IVar2;
}

