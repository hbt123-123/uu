// rea decompile_all
// name: FUN_1003dd174
// address: 0x1003dd174
// body: available
// range: 0x1003dd174-0x1003dd45f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1003dd174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  local_98 = param_1;
  local_90 = param_4;
  local_88 = param_7;
  local_80 = param_2;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = (long)puVar10 - extraout_x12;
  FUN_100004bb4(param_5,param_6);
  _swift_allocObject();
  lVar5 = DAT_100a8ca90;
  uVar2 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  *(undefined8 *)(param_5 + lVar5) = uVar2;
  lVar5 = DAT_100a8ca98;
  uVar2 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  *(undefined8 *)(param_5 + lVar5) = uVar2;
  pcVar6 = *(code **)(lVar8 + 0x10);
  (*pcVar6)(lVar7,param_1,lVar1);
  lVar5 = _TtC8UUCommon14FileDataMapper::lock;
  puVar3 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)puVar3,"init");
  *(ID *)(param_5 + lVar5) = IVar4;
  puVar9 = (undefined8 *)(param_5 + _TtC8UUCommon14FileDataMapper::cache);
  puVar9[1] = 0xf000000000000000;
  *puVar9 = 0;
  puVar9 = (undefined8 *)(param_5 + _TtC8UUCommon14FileDataMapper::fileChanged);
  *puVar9 = 0;
  puVar9[1] = 0;
  (*pcVar6)(param_5 + _TtC8UUCommon14FileDataMapper::fileURL,lVar7,lVar1);
  *(undefined8 *)(param_5 + _TtC8UUCommon14FileDataMapper::fileLock) = local_80;
  (*pcVar6)(puVar10,lVar7,lVar1);
  lVar5 = 0;
  FUN_1003e9b0c();
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = 0;
  puVar9 = (undefined8 *)(lVar5 + 0x10);
  *puVar9 = 0;
  *(undefined8 *)(lVar5 + _TtC8UUCommon11FileMonitor::dispatchSource) = 0;
  (**(code **)(lVar8 + 0x20))(lVar5 + _TtC8UUCommon11FileMonitor::fileURL,puVar10,lVar1);
  *(undefined8 *)(lVar5 + _TtC8UUCommon11FileMonitor::monitorQueue) = param_3;
  *(undefined8 *)(lVar5 + _TtC8UUCommon11FileMonitor::autoRecoverSecond) = local_90;
  *(undefined1 *)(lVar5 + _TtC8UUCommon11FileMonitor::createFileIfNeed) = 1;
  *(long *)(param_5 + _TtC8UUCommon14FileDataMapper::fileMonitor) = lVar5;
  puVar3 = &DAT_1009ba2b8;
  _swift_allocObject(&DAT_1009ba2b8,0x18,7);
  _swift_weakInit(puVar3 + 0x10,param_5);
  _swift_beginAccess(puVar9,auStack_78,1,0);
  uVar11 = *puVar9;
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  *puVar9 = local_88;
  *(undefined **)(lVar5 + 0x18) = puVar3;
  _swift_unknownObjectRetain(local_80);
  _swift_retain(lVar5);
  _swift_retain(puVar3);
  FUN_10008317c(uVar11,uVar2);
  _swift_release(lVar5);
  _swift_release(puVar3);
  FUN_1003e91b4();
  pcVar6 = *(code **)(lVar8 + 8);
  (*pcVar6)(local_98,lVar1);
  (*pcVar6)(lVar7,lVar1);
  return param_5;
}

