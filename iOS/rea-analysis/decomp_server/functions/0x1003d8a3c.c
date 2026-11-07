// rea decompile_all
// name: FUN_1003d8a3c
// address: 0x1003d8a3c
// body: available
// range: 0x1003d8a3c-0x1003d8ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003d8a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  _swift_allocObject();
  lVar4 = _TtC8UUCommon14FileDataMapper::lock;
  puVar2 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"init");
  *(ID *)(unaff_x20 + lVar4) = IVar3;
  puVar8 = (undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::cache);
  puVar8[1] = 0xf000000000000000;
  *puVar8 = 0;
  puVar8 = (undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileChanged);
  *puVar8 = 0;
  puVar8[1] = 0;
  pcVar6 = *(code **)(lVar5 + 0x10);
  local_80 = param_1;
  (*pcVar6)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileURL,param_1,lVar1);
  *(undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileLock) = param_2;
  (*pcVar6)(auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),param_1,lVar1);
  lVar4 = 0;
  FUN_1003e9b0c();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 0;
  puVar8 = (undefined8 *)(lVar4 + 0x10);
  *puVar8 = 0;
  *(undefined8 *)(lVar4 + _TtC8UUCommon11FileMonitor::dispatchSource) = 0;
  (**(code **)(lVar5 + 0x20))
            (lVar4 + _TtC8UUCommon11FileMonitor::fileURL,
             auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar1);
  *(undefined8 *)(lVar4 + _TtC8UUCommon11FileMonitor::monitorQueue) = param_3;
  *(undefined8 *)(lVar4 + _TtC8UUCommon11FileMonitor::autoRecoverSecond) = param_4;
  *(undefined1 *)(lVar4 + _TtC8UUCommon11FileMonitor::createFileIfNeed) = 1;
  *(long *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileMonitor) = lVar4;
  puVar2 = &DAT_1009b9e98;
  _swift_allocObject(&DAT_1009b9e98,0x18,7);
  _swift_weakInit(puVar2 + 0x10,unaff_x20);
  _swift_beginAccess(puVar8,auStack_78,1,0);
  uVar7 = *puVar8;
  uVar9 = *(undefined8 *)(lVar4 + 0x18);
  *puVar8 = thunk_FUN_1003d952c;
  *(undefined **)(lVar4 + 0x18) = puVar2;
  _swift_unknownObjectRetain(param_2);
  _swift_retain(lVar4);
  _swift_retain(puVar2);
  FUN_10008317c(uVar7,uVar9);
  _swift_release(lVar4);
  _swift_release(puVar2);
  FUN_1003e91b4();
  _swift_unknownObjectRelease(param_2);
  (**(code **)(lVar5 + 8))(local_80,lVar1);
  return unaff_x20;
}

