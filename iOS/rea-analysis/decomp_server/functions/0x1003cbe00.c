// rea decompile_all
// name: FUN_1003cbe00
// address: 0x1003cbe00
// body: available
// range: 0x1003cbe00-0x1003cc08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cbe00(code *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ID self;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 auStack_90 [2];
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_78 + lVar1 + -8;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    (**(code **)(lVar9 + 0x68))(puVar8,1,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar2 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar4 = puVar8;
      FUN_1005cc2b8();
      if (((ulong)puVar4 & 1) == 0) {
        _swift_release(lVar2);
      }
      else {
        local_80 = 0x80000001008b4460;
        IVar5 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar6 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)((long)auStack_90 + lVar1 + 8) = 0xd1;
        *(undefined8 *)((long)auStack_90 + lVar1) = local_80;
        FUN_1005cc010(FUN_1003fe2cc,0,puVar8,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar6,
                      0xd000000000000011);
        _swift_release(lVar2);
        _swift_bridgeObjectRelease(pcVar6);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar9 + 8))(puVar8,lVar3);
  }
  else {
    *(undefined1 *)(param_3 + _TtC8UUCommon18IPSReportCollector::stopped) = 1;
    lVar1 = _TtC8UUCommon18IPSReportCollector::timer;
    lVar3 = *(long *)(param_3 + _TtC8UUCommon18IPSReportCollector::timer);
    uVar7 = 0;
    if (lVar3 != 0) {
      lVar9 = lVar3;
      _swift_getObjectType(lVar3);
      _swift_unknownObjectRetain(lVar3);
      __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar9);
      _swift_unknownObjectRelease(lVar3);
      uVar7 = *(undefined8 *)(param_3 + lVar1);
    }
    *(undefined8 *)(param_3 + lVar1) = 0;
    _swift_release();
    _swift_unknownObjectRelease(uVar7);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}

