// rea decompile_all
// name: FUN_1003fd764
// address: 0x1003fd764
// body: available
// range: 0x1003fd764-0x1003fd98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003fd764(void)

{
  long lVar1;
  ID self;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ID IVar6;
  char *pcVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  undefined8 auStack_70 [2];
  
  lVar4 = 0;
  FUN_1005cac3c();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + lVar1;
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar2 = DAT_100a8e098;
  if (DAT_100a8e098 == 0) {
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar9 + 0x68))(puVar8,3,lVar4);
    _objc_msgSend(self,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar5 = puVar8;
      FUN_1005cc2b8();
      if (((ulong)puVar5 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        IVar6 = 0xd000000000000081;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000081,0x80000001008b5420)
        ;
        pcVar7 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        *(undefined8 *)((long)auStack_70 + lVar1) = 0xe700000000000000;
        *(undefined8 *)((long)auStack_70 + lVar1 + 8) = 0xe0;
        FUN_1005cc010(FUN_1003fec7c,0,puVar8,0x65746f6d65525555,0xe800000000000000,IVar6,pcVar7,
                      0x29286873756c66);
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(pcVar7);
      }
    }
    _objc_msgSend(self,"unlock");
    (**(code **)(lVar9 + 8))(puVar8,lVar4);
  }
  else {
    _swift_retain(DAT_100a8e098);
    FUN_1005cce64(1);
    _swift_release(lVar2);
    _objc_msgSend(self,"unlock");
  }
  return lVar2 != 0;
}

