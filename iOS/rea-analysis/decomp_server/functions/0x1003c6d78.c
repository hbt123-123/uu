// rea decompile_all
// name: FUN_1003c6d78
// address: 0x1003c6d78
// body: available
// range: 0x1003c6d78-0x1003c6f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c6d78(long param_1)

{
  long lVar1;
  ID self;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + lVar1;
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    (**(code **)(lVar8 + 0x68))(puVar7,1,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar2 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar4 = puVar7;
      FUN_1005cc2b8();
      if (((ulong)puVar4 & 1) == 0) {
        _swift_release(lVar2);
      }
      else {
        IVar5 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar6 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)((long)auStack_80 + lVar1) = 0xe700000000000000;
        *(undefined8 *)((long)auStack_80 + lVar1 + 8) = 0xa9;
        FUN_1005cc010(thunk_FUN_1003fe348,0,puVar7,0x65746f6d65525555,0xe800000000000000,IVar5,
                      pcVar6,0x29287472617473);
        _swift_release(lVar2);
        _swift_bridgeObjectRelease(pcVar6);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
  }
  else {
    FUN_1003c6f80();
    _swift_release(param_1);
  }
  return;
}

