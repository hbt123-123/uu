// rea decompile_all
// name: FUN_10040494c
// address: 0x10040494c
// body: available
// range: 0x10040494c-0x100404b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040494c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID self;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 local_70;
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = (long)&local_90 + lVar1;
  local_70 = param_1;
  (**(code **)(lVar8 + 0x68))(uVar7,2,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar2 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar4 = uVar7;
    FUN_1005cc2b8();
    if ((uVar4 & 1) == 0) {
      _swift_release(lVar2);
    }
    else {
      local_88 = 0x80000001008b60f0;
      IVar5 = 0xd000000000000096;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000096,0x80000001008b6050);
      pcVar6 = "lastPathComponent";
      local_90 = param_3;
      IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(undefined8 *)((long)auStack_a0 + lVar1) = param_2;
      *(undefined1 **)((long)auStack_a0 + lVar1 + 8) = auStack_80;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 8) = param_4;
      *(undefined8 *)((long)auStack_c0 + lVar1) = local_88;
      FUN_1005cc010(local_90,auStack_b0 + lVar1,uVar7,0x65746f6d65525555,0xe800000000000000,IVar5,
                    pcVar6,0xd000000000000057);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(pcVar6);
    }
  }
  _objc_msgSend(self,"unlock");
  (**(code **)(lVar8 + 8))(uVar7,lVar3);
  return;
}

