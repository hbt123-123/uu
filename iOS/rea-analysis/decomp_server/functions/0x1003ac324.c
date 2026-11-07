// rea decompile_all
// name: FUN_1003ac324
// address: 0x1003ac324
// body: available
// range: 0x1003ac324-0x1003ac733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003ac324(undefined8 param_1,code *param_2)

{
  long *plVar1;
  ID self;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  ID IVar9;
  char *pcVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [24];
  long local_78 [3];
  
  uVar16 = *unaff_x20;
  lVar3 = 0;
  FUN_1005cac3c();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_90 + lVar13;
  uVar4 = 0;
  FUN_10070613c(0);
  FUN_100706078();
  uVar12 = uVar4;
  FUN_1003ded2c();
  _swift_release(uVar4);
  FUN_100237814(0);
  FUN_100235b04();
  pcVar17 = param_2;
  thunk_FUN_10023744c(uVar12,param_2,0,1,1);
  _swift_bridgeObjectRelease(param_2);
  if (DAT_100a892e0 != -1) {
    pcVar17 = FUN_1003db370;
    _swift_once(&DAT_100a892e0,FUN_1003db370);
  }
  plVar1 = DAT_100a8cce8;
  plVar5 = DAT_100a8cce8;
  _swift_retain(DAT_100a8cce8);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(local_78);
  _swift_release(plVar1);
  FUN_100006cc8(plVar5,pcVar17);
  if (local_78[0] == 0) {
    uVar12 = 0;
    puVar15 = (undefined8 *)0xe000000000000000;
  }
  else {
    _swift_beginAccess(local_78[0] + 0x40,local_78,0,0);
    uVar12 = *(undefined8 *)(local_78[0] + 0x40);
    puVar15 = *(undefined8 **)(local_78[0] + 0x48);
    _swift_bridgeObjectRetain(puVar15);
    _swift_release(local_78[0]);
  }
  FUN_100234fbc(uVar12,puVar15);
  _swift_bridgeObjectRelease();
  FUN_100234a54();
  _swift_beginAccess();
  puVar11 = (ulong *)*puVar15;
  puVar6 = &DAT_1009b81a8;
  _swift_allocObject(&DAT_1009b81a8,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar7 = &DAT_1009b81d0;
  _swift_allocObject(&DAT_1009b81d0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = uVar16;
  pcVar17 = *(code **)((*(ulong *)PTR__swift_isaMask_100995ee0 & *puVar11) + 0x110);
  _swift_retain(puVar6);
  (*pcVar17)(FUN_1003afb40,puVar7);
  _swift_release(puVar6);
  *(undefined1 *)(unaff_x20 + 6) = 1;
  (**(code **)(lVar18 + 0x68))(puVar14,2,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar2 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar8 = puVar14;
    FUN_1005cc2b8();
    if (((ulong)puVar8 & 1) == 0) {
      _swift_release(lVar2);
    }
    else {
      IVar9 = 0xd00000000000009d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009d,0x80000001008b37b0);
      pcVar10 = "lastPathComponent";
      IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
      *(undefined8 *)((long)auStack_a0 + lVar13) = 0xee002928746e756f;
      *(undefined8 *)((long)auStack_a0 + lVar13 + 8) = 0x72;
      FUN_1005cc010(FUN_1003fdb04,0,puVar14,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar10,
                    0x43466769666e6f63);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  (**(code **)(lVar18 + 8))(puVar14,lVar3);
  lVar13 = unaff_x20[8];
  if (lVar13 != 0) {
    uVar12 = unaff_x20[7];
    _swift_bridgeObjectRetain(lVar13);
    thunk_FUN_100237ed8(uVar12,lVar13);
    _swift_bridgeObjectRelease(lVar13);
  }
  lVar13 = unaff_x20[10];
  if (lVar13 != 0) {
    uVar12 = unaff_x20[9];
    _swift_bridgeObjectRetain(lVar13);
    FUN_100234d20(uVar12,lVar13);
    _swift_bridgeObjectRelease(lVar13);
  }
  return;
}

