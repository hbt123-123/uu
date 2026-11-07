// rea decompile_all
// name: FUN_10039e2e4
// address: 0x10039e2e4
// body: available
// range: 0x10039e2e4-0x10039e51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10039e2e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  char *pcVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + lVar1;
  (**(code **)(lVar10 + 0x68))(puVar9,1,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar6 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar2 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar4 = puVar9;
    FUN_1005cc2b8();
    if (((ulong)puVar4 & 1) == 0) {
      _swift_release(lVar2);
    }
    else {
      IVar5 = 0xd000000000000099;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000099,0x80000001008b0170);
      pcVar8 = "lastPathComponent";
      IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
      *(undefined8 *)((long)auStack_90 + lVar1) = 0xe600000000000000;
      *(undefined8 *)((long)auStack_90 + lVar1 + 8) = 0x13;
      FUN_1005cc010(FUN_1003fd990,0,puVar9,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar8,
                    0x74696e696564);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(pcVar8);
    }
  }
  _objc_msgSend(IVar6,"unlock");
  (**(code **)(lVar10 + 8))(puVar9,lVar3);
  IVar6 = *(ID *)(unaff_x20 + 0x18);
  _objc_msgSend(IVar6,"lock");
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRelease(uVar7);
  _objc_msgSend(IVar6,"unlock");
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}

