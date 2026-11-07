// rea decompile_all
// name: FUN_1001a3ddc
// address: 0x1001a3ddc
// body: available
// range: 0x1001a3ddc-0x1001a41b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001a3ddc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined *local_98 [3];
  long local_80;
  undefined **ppuStack_78;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  lVar1 = 0;
  local_b8 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  puVar7 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar6 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d0 = _TtC14UURemoteServer14AppListManager::dispatchQueue;
  uVar3 = 0;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  local_d8 = uVar3;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar1);
  local_98[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar6,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar6 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  puVar5 = &DAT_100a750e0;
  FUN_10003f840(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar8,local_98,puVar6,puVar5,lVar2,puVar4)
  ;
  (**(code **)(local_c8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_c0);
  uVar3 = 0xd00000000000001a;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001a,0x800000010089a610,lVar1,lVar8,puVar7,0);
  *(undefined8 *)(unaff_x20 + local_d0) = uVar3;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::lastUpdateRemoteTime) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::isUpdatingRemote) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::nextUpdateRemoteApps) = 0;
  lVar2 = _TtC14UURemoteServer14AppListManager::remoteDeviceApps;
  puVar6 = &DAT_100a7ca78;
  FUN_100004bb4(&DAT_100a7ca78,&DAT_100811520);
  _swift_allocObject();
  FUN_1003bda64();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::didFetchRemoteApps) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::refreshTimer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::refreshInterval) =
       0x4034000000000000;
  puVar4 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::specialAppMap);
  *(undefined4 *)((long)puVar4 + 0x2f) = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  lVar2 = _TtC14UURemoteServer14AppListManager::systemDirs;
  puVar6 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar2 = _TtC14UURemoteServer14AppListManager::appIconHandler;
  uVar3 = 0;
  FUN_100113a34();
  _swift_allocObject();
  FUN_100113a54();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::appIconUploadCount) = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::enableWhiteList) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::lastFetchWhiteListTime) = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::whiteList) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::whiteListUrl);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::refreshWhiteListInterval) =
       0x708;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::isSuspend) = 1;
  puVar6 = (undefined *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  lVar2 = *(long *)(puVar6 + _TtC14UURemoteServer14AppListManager::appIconHandler);
  local_80 = local_b8;
  ppuStack_78 = &PTR_PTR_1009a2048;
  local_98[0] = puVar6;
  _swift_beginAccess(lVar2 + 0x30,auStack_b0,0x21,0);
  _swift_retain(lVar2);
  FUN_1001a7394(local_98,lVar2 + 0x30);
  _swift_endAccess(auStack_b0);
  _swift_release(lVar2);
  return puVar6;
}

