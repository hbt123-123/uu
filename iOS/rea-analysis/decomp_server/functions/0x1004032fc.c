// rea decompile_all
// name: FUN_1004032fc
// address: 0x1004032fc
// body: available
// range: 0x1004032fc-0x100403cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004032fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  ID self;
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [16];
  long alStack_130 [2];
  undefined1 auStack_120 [16];
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  ulong local_f8;
  undefined1 *local_f0;
  ulong local_e8;
  ulong local_e0;
  code *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  FUN_1005cac3c();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  local_f0 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = (long)(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_f8 = uVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = uVar11 - extraout_x12_00;
  local_e0 = uVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = uVar11 - extraout_x12_01;
  local_e8 = uVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = uVar11 - extraout_x12_02;
  local_d8 = (code *)uVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = uVar11 - extraout_x12_03;
  local_c8 = 0x80000001008b60f0;
  pcVar13 = *(code **)(lVar14 + 0x68);
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  (*pcVar13)(uVar11,2,lVar4);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  self = DAT_100a8e090;
  local_d0 = s_Alamofire_Error_1008b6050;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar1 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar5 = uVar11;
    FUN_1005cc2b8();
    if ((uVar5 & 1) == 0) {
      _swift_release(lVar1);
    }
    else {
      IVar6 = 0xd000000000000096;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
      pcVar10 = "lastPathComponent";
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar11 - 0x10) = FUN_100403eac;
      *(undefined1 **)(uVar11 - 8) = auStack_c0;
      *(undefined8 *)(uVar11 - 0x28) = 0x12;
      *(undefined8 *)(uVar11 - 0x30) = local_c8;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar11 - 0x20,uVar11,0x65746f6d65525555,0xe800000000000000,
                    IVar6,pcVar10,0xd000000000000057);
      _swift_release(lVar1);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  pcVar12 = *(code **)(lVar14 + 8);
  (*pcVar12)(uVar11,lVar4);
  pcVar3 = local_d8;
  (*pcVar13)(local_d8,2,lVar4);
  _objc_msgSend(self,"lock");
  lVar14 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    pcVar7 = pcVar3;
    FUN_1005cc2b8();
    if (((ulong)pcVar7 & 1) == 0) {
      _swift_release(lVar14);
    }
    else {
      IVar6 = 0xd000000000000096;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
      pcVar10 = "lastPathComponent";
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar11 - 0x10) = thunk_FUN_100403ec0;
      *(undefined8 *)(uVar11 - 8) = 0;
      *(undefined8 *)(uVar11 - 0x28) = 0x13;
      *(undefined8 *)(uVar11 - 0x30) = local_c8;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar11 - 0x20,pcVar3,0x65746f6d65525555,0xe800000000000000,
                    IVar6,pcVar10,0xd000000000000057);
      _swift_release(lVar14);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  (*pcVar12)(pcVar3,lVar4);
  uVar5 = local_e8;
  local_d8 = pcVar13;
  (*pcVar13)(local_e8,2,lVar4);
  _objc_msgSend(self,"lock");
  lVar14 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar8 = uVar5;
    FUN_1005cc2b8();
    if ((uVar8 & 1) == 0) {
      _swift_release(lVar14);
    }
    else {
      IVar6 = 0xd000000000000096;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
      pcVar10 = "lastPathComponent";
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar11 - 0x10) = thunk_FUN_100404194;
      *(undefined8 *)(uVar11 - 8) = 0;
      *(undefined8 *)(uVar11 - 0x28) = 0x14;
      *(undefined8 *)(uVar11 - 0x30) = local_c8;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar11 - 0x20,uVar5,0x65746f6d65525555,0xe800000000000000,
                    IVar6,pcVar10,0xd000000000000057);
      _swift_release(lVar14);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  (*pcVar12)(uVar5,lVar4);
  uVar5 = local_e0;
  (*local_d8)(local_e0,2,lVar4);
  _objc_msgSend(self,"lock");
  lVar14 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar8 = uVar5;
    FUN_1005cc2b8();
    if ((uVar8 & 1) == 0) {
      _swift_release(lVar14);
    }
    else {
      IVar6 = 0xd000000000000096;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
      pcVar10 = "lastPathComponent";
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(uVar11 - 0x10) = thunk_FUN_1004044b0;
      *(undefined8 *)(uVar11 - 8) = 0;
      *(undefined8 *)(uVar11 - 0x28) = 0x15;
      *(undefined8 *)(uVar11 - 0x30) = local_c8;
      FUN_1005cc010(thunk_FUN_1003a85e4,uVar11 - 0x20,uVar5,0x65746f6d65525555,0xe800000000000000,
                    IVar6,pcVar10,0xd000000000000057);
      _swift_release(lVar14);
      _swift_bridgeObjectRelease(pcVar10);
    }
  }
  _objc_msgSend(self,"unlock");
  (*pcVar12)(uVar5,lVar4);
  FUN_1003a8798(0);
  FUN_1003a7e18(FUN_100404860,0);
  FUN_1003a9990(0);
  FUN_1003a8df4(FUN_100404b74,0);
  pcVar13 = local_d8;
  uVar5 = local_f8;
  if ((param_9 & 1) != 0) {
    local_e8 = param_11;
    local_e0 = param_12;
    (*local_d8)(local_f8,2,lVar4);
    _objc_msgSend(self,"lock");
    lVar14 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar5;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar14);
      }
      else {
        IVar6 = 0xd000000000000096;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
        pcVar10 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(uVar11 - 0x10) = thunk_FUN_100404c60;
        *(undefined8 *)(uVar11 - 8) = 0;
        *(undefined8 *)(uVar11 - 0x28) = 0x1e;
        *(undefined8 *)(uVar11 - 0x30) = local_c8;
        FUN_1005cc010(thunk_FUN_1003a85e4,uVar11 - 0x20,uVar5,0x65746f6d65525555,0xe800000000000000,
                      IVar6,pcVar10,0xd000000000000057);
        _swift_release(lVar14);
        _swift_bridgeObjectRelease(pcVar10);
      }
    }
    _objc_msgSend(self,"unlock");
    (*pcVar12)(uVar5,lVar4);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar5 = local_e0;
    *(ulong *)(uVar11 - 0x10) = local_e8;
    *(ulong *)(uVar11 - 8) = uVar5;
    puVar2 = local_f0;
    (*pcVar13)(local_f0,2);
    _objc_msgSend(self,"lock");
    lVar14 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar9 = puVar2;
      FUN_1005cc2b8();
      if (((ulong)puVar9 & 1) == 0) {
        _swift_release(lVar14);
      }
      else {
        IVar6 = 0xd000000000000096;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd000000000000096,(ulong)local_d0 | 0x8000000000000000);
        pcVar10 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(uVar11 - 0x30) = FUN_100404dbc;
        *(ulong *)(uVar11 - 0x28) = uVar11 - 0x20;
        *(undefined8 *)(uVar11 - 0x48) = 0x1f;
        *(undefined8 *)(uVar11 - 0x50) = local_c8;
        FUN_1005cc010(FUN_1003a85e4,uVar11 - 0x40,puVar2,0x65746f6d65525555,0xe800000000000000,IVar6
                      ,pcVar10,0xd000000000000057);
        _swift_release(lVar14);
        _swift_bridgeObjectRelease(pcVar10);
      }
    }
    _objc_msgSend(self,"unlock");
    (*pcVar12)(puVar2,lVar4);
  }
  return;
}

