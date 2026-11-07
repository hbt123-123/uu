// rea decompile_all
// name: FUN_1003cd6e8
// address: 0x1003cd6e8
// body: available
// range: 0x1003cd6e8-0x1003cd937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cd6e8(long param_1)

{
  long lVar1;
  ID self;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  FUN_1005cac3c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + lVar7;
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  lVar1 = _TtC8UUCommon18IPSReportCollector::timer;
  if (param_1 == 0) {
    (**(code **)(lVar9 + 0x68))(puVar8,1,lVar2);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar1 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar4 = puVar8;
      FUN_1005cc2b8();
      if (((ulong)puVar4 & 1) == 0) {
        _swift_release(lVar1);
      }
      else {
        IVar5 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar6 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)((long)auStack_80 + lVar7) = 0xe600000000000000;
        *(undefined8 *)((long)auStack_80 + lVar7 + 8) = 0x15e;
        FUN_1005cc010(thunk_FUN_1003fe348,0,puVar8,0x65746f6d65525555,0xe800000000000000,IVar5,
                      pcVar6,0x29286e616373);
        _swift_release(lVar1);
        _swift_bridgeObjectRelease(pcVar6);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar9 + 8))(puVar8,lVar2);
  }
  else {
    lVar7 = *(long *)(param_1 + _TtC8UUCommon18IPSReportCollector::timer);
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = lVar7;
      _swift_getObjectType(lVar7);
      _swift_unknownObjectRetain(lVar7);
      __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar2);
      _swift_unknownObjectRelease(lVar7);
      uVar3 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    _swift_unknownObjectRelease(uVar3);
    FUN_1003c6f80();
    _swift_release(param_1);
  }
  return;
}

