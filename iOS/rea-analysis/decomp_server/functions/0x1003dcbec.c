// rea decompile_all
// name: FUN_1003dcbec
// address: 0x1003dcbec
// body: available
// range: 0x1003dcbec-0x1003dd137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003dcbec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ID IVar13;
  undefined8 *puVar14;
  long local_d0;
  long local_c8;
  long local_c0;
  ID local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  IVar13 = lVar7 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = IVar13 - extraout_x12_02;
  if (DAT_100a893b0 != -1) {
    _swift_once(&DAT_100a893b0,FUN_100407484);
  }
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b369d8);
  pcVar9 = *(code **)(lVar8 + 0x10);
  local_98 = lVar8;
  (*pcVar9)(lVar12,lVar2,lVar1);
  if (DAT_100a891f8 != -1) {
    _swift_once(&DAT_100a891f8,FUN_1003aa154);
  }
  uVar5 = DAT_100b36760;
  FUN_100004b70(0);
  local_a0 = uVar5;
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  local_a8 = uVar5;
  if (DAT_100a892b0 != -1) {
    _swift_once(&DAT_100a892b0,FUN_1003b2590);
  }
  lVar8 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36898);
  (*pcVar9)(IVar13,lVar8,lVar1);
  IVar4 = IVar13;
  FUN_10039d308(IVar13,0xd000000000000015,0x80000001008b49d0,1);
  if (IVar4 == 0) {
    puVar3 = &_OBJC_CLASS___NSRecursiveLock;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar3,"init");
  }
  local_b8 = IVar13;
  (*pcVar9)(IVar13,lVar12,lVar1);
  puVar3 = &DAT_100a8cd28;
  FUN_100004bb4(&DAT_100a8cd28,&DAT_1008230e8);
  _swift_allocObject();
  local_c0 = lVar7;
  local_b0 = lVar12;
  (*pcVar9)(lVar7,IVar13,lVar1);
  lVar8 = DAT_100a8ca90;
  uVar5 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  *(undefined8 *)(puVar3 + lVar8) = uVar5;
  lVar8 = DAT_100a8ca98;
  uVar5 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  *(undefined8 *)(puVar3 + lVar8) = uVar5;
  (*pcVar9)(lVar11,lVar7,lVar1);
  lVar7 = _TtC8UUCommon14FileDataMapper::lock;
  puVar6 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar13 = _objc_msgSend((ID)puVar6,"init");
  *(ID *)(puVar3 + lVar7) = IVar13;
  puVar14 = (undefined8 *)(puVar3 + _TtC8UUCommon14FileDataMapper::cache);
  puVar14[1] = 0xf000000000000000;
  *puVar14 = 0;
  puVar14 = (undefined8 *)(puVar3 + _TtC8UUCommon14FileDataMapper::fileChanged);
  *puVar14 = 0;
  puVar14[1] = 0;
  (*pcVar9)(puVar3 + _TtC8UUCommon14FileDataMapper::fileURL,lVar11,lVar1);
  lVar7 = local_c8;
  *(ID *)(puVar3 + _TtC8UUCommon14FileDataMapper::fileLock) = IVar4;
  (*pcVar9)(local_c8,lVar11,lVar1);
  lVar12 = 0;
  FUN_1003e9b0c();
  _swift_allocObject();
  lVar8 = local_98;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  puVar14 = (undefined8 *)(lVar12 + 0x10);
  *puVar14 = 0;
  *(undefined8 *)(lVar12 + _TtC8UUCommon11FileMonitor::dispatchSource) = 0;
  local_d0 = lVar11;
  (**(code **)(local_98 + 0x20))(lVar12 + _TtC8UUCommon11FileMonitor::fileURL,lVar7,lVar1);
  *(undefined8 *)(lVar12 + _TtC8UUCommon11FileMonitor::monitorQueue) = local_a8;
  *(undefined8 *)(lVar12 + _TtC8UUCommon11FileMonitor::autoRecoverSecond) = 1;
  *(undefined1 *)(lVar12 + _TtC8UUCommon11FileMonitor::createFileIfNeed) = 1;
  *(long *)(puVar3 + _TtC8UUCommon14FileDataMapper::fileMonitor) = lVar12;
  puVar6 = &DAT_1009ba2b8;
  _swift_allocObject(&DAT_1009ba2b8,0x18,7);
  _swift_weakInit(puVar6 + 0x10,puVar3);
  _swift_beginAccess(puVar14,auStack_78,1,0);
  uVar5 = *puVar14;
  uVar10 = *(undefined8 *)(lVar12 + 0x18);
  *puVar14 = FUN_1003d952c;
  *(undefined **)(lVar12 + 0x18) = puVar6;
  _swift_unknownObjectRetain(IVar4);
  _swift_retain(lVar12);
  _swift_retain(puVar6);
  FUN_10008317c(uVar5,uVar10);
  _swift_release(lVar12);
  _swift_release(puVar6);
  FUN_1003e91b4();
  _swift_unknownObjectRelease(IVar4);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(local_b8,lVar1);
  (*pcVar9)(local_d0,lVar1);
  (*pcVar9)(local_c0,lVar1);
  (*pcVar9)(local_b0,lVar1);
  puVar6 = &DAT_1009ba2e0;
  _swift_allocObject(&DAT_1009ba2e0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = local_a0;
  puVar14 = (undefined8 *)(puVar3 + _TtC8UUCommon14FileDataMapper::fileChanged);
  _swift_beginAccess(puVar14,auStack_90,1,0);
  uVar5 = *puVar14;
  uVar10 = puVar14[1];
  *puVar14 = FUN_1003dd16c;
  puVar14[1] = puVar6;
  _swift_retain(puVar3);
  _swift_retain(puVar6);
  FUN_10008317c(uVar5,uVar10);
  _swift_release(puVar6);
  _swift_release(puVar3);
  DAT_100a8cd20 = puVar3;
  return;
}

