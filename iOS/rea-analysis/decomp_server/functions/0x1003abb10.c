// rea decompile_all
// name: FUN_1003abb10
// address: 0x1003abb10
// body: available
// range: 0x1003abb10-0x1003ac203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003abb10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  ID IVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ID IVar18;
  undefined1 auVar19 [16];
  undefined8 local_d0;
  undefined **local_c8;
  undefined1 *puStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  ulong local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  uVar10 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar9 = uVar10 - extraout_x12;
  local_90 = uVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined1 *)(uVar9 - extraout_x12_00);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  ppuVar4 = &local_68;
  FUN_1003da148();
  puVar11 = local_68;
  lVar12 = *(long *)(local_68 + 0x10);
  local_b8 = local_68;
  local_a0 = lVar14;
  local_98 = lVar3;
  if (lVar12 == 0) {
    pcVar13 = *(code **)(lVar14 + 0x68);
    local_b0 = 0x80000001008b37b0;
    local_a8 = 0x8000000100820900;
    _swift_bridgeObjectRetain(param_2);
    puVar17 = puVar15;
  }
  else {
    local_b0 = 0x80000001008b37b0;
    local_a8 = 0x8000000100820900;
    local_84 = 3;
    local_88 = 4;
    local_c8 = ppuVar4;
    puStack_c0 = puVar15;
    _swift_bridgeObjectRetain(local_68);
    local_d0 = param_2;
    _swift_bridgeObjectRetain(param_2);
    puVar16 = (undefined8 *)(puVar11 + 0x30);
    uVar9 = local_90;
    local_78 = uVar10;
    do {
      uVar1 = *puVar16;
      local_70 = puVar15;
      (*(code *)PTR____chkstk_darwin_100995498)(puVar16[-1],local_78);
      if ((extraout_x12_01 & 1) == 0) {
        puVar15[-0x20] = 0;
        *(undefined8 *)(puVar15 + -0x18) = extraout_x8_00;
        *(undefined8 *)(puVar15 + -0x10) = uVar1;
        local_80 = *(code **)(lVar14 + 0x68);
        (*local_80)(uVar9,local_84,lVar3);
        lVar2 = DAT_100a89358;
        _swift_bridgeObjectRetain(uVar1);
        if (lVar2 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar18 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar2 = DAT_100a8e098;
        uVar10 = uVar9;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar6 = uVar9;
          FUN_1005cc2b8();
          if ((uVar6 & 1) == 0) {
            _swift_release(lVar2);
          }
          else {
            IVar5 = 0xd00000000000009d;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009d,local_b0);
            pcVar8 = "lastPathComponent";
            IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(code **)(puVar15 + -0x40) = thunk_FUN_1003afb48;
            *(long *)(puVar15 + -0x38) = (long)puVar15 + -0x30;
            *(undefined8 *)(puVar15 + -0x58) = 0x4e;
            *(undefined8 *)(puVar15 + -0x60) = local_a8;
            FUN_1005cc010(thunk_FUN_1003a85e4,(long)puVar15 + -0x50,uVar9,0x65746f6d65525555,
                          0xe800000000000000,IVar5,pcVar8,0xd00000000000001d);
            _swift_release(lVar2);
            lVar3 = local_98;
            _swift_bridgeObjectRelease(pcVar8);
            lVar14 = local_a0;
          }
        }
      }
      else {
        puVar15[-0x20] = 1;
        *(undefined8 *)(puVar15 + -0x18) = extraout_x8_00;
        *(undefined8 *)(puVar15 + -0x10) = uVar1;
        local_80 = *(code **)(lVar14 + 0x68);
        (*local_80)();
        lVar2 = DAT_100a89358;
        _swift_bridgeObjectRetain(uVar1);
        if (lVar2 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar18 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar2 = DAT_100a8e098;
        uVar10 = local_78;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar10 = local_78;
          uVar9 = local_78;
          FUN_1005cc2b8();
          if ((uVar9 & 1) == 0) {
            _swift_release(lVar2);
            uVar9 = local_90;
          }
          else {
            IVar5 = 0xd00000000000009d;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009d,local_b0);
            pcVar8 = "lastPathComponent";
            IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(code **)(puVar15 + -0x40) = FUN_1003afb48;
            *(long *)(puVar15 + -0x38) = (long)puVar15 + -0x30;
            *(undefined8 *)(puVar15 + -0x58) = 0x50;
            *(undefined8 *)(puVar15 + -0x60) = local_a8;
            lVar3 = local_98;
            FUN_1005cc010(thunk_FUN_1003a85e4,(long)puVar15 + -0x50,uVar10,0x65746f6d65525555,
                          0xe800000000000000,IVar5,pcVar8,0xd00000000000001d);
            _swift_release(lVar2);
            lVar14 = local_a0;
            _swift_bridgeObjectRelease(pcVar8);
            uVar9 = local_90;
          }
        }
      }
      _objc_msgSend(IVar18,"unlock");
      _swift_bridgeObjectRelease(uVar1);
      (**(code **)(lVar14 + 8))(uVar10,lVar3);
      puVar15 = local_70;
      puVar11 = local_b8;
      puVar16 = puVar16 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(local_b8);
    param_2 = local_d0;
    pcVar13 = local_80;
    puVar17 = puStack_c0;
    ppuVar4 = local_c8;
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined ***)(puVar15 + -0x20) = ppuVar4;
  *(undefined8 *)(puVar15 + -0x18) = param_2;
  *(undefined **)(puVar15 + -0x10) = puVar11;
  (*pcVar13)(puVar17,2,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar18 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar12 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar7 = puVar17;
    FUN_1005cc2b8();
    if (((ulong)puVar7 & 1) == 0) {
      _swift_release(lVar12);
    }
    else {
      IVar5 = 0xd00000000000009d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009d,local_b0);
      pcVar8 = "lastPathComponent";
      IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(code **)(puVar15 + -0x40) = FUN_1003afb64;
      *(undefined1 **)(puVar15 + -0x38) = puVar15 + -0x30;
      *(undefined8 *)(puVar15 + -0x58) = 0x53;
      *(undefined8 *)(puVar15 + -0x60) = local_a8;
      lVar3 = local_98;
      FUN_1005cc010(FUN_1003a85e4,puVar15 + -0x50,puVar17,0x65746f6d65525555,0xe800000000000000,
                    IVar5,pcVar8,0xd00000000000001d);
      _swift_release(lVar12);
      lVar14 = local_a0;
      _swift_bridgeObjectRelease(pcVar8);
    }
  }
  _objc_msgSend(IVar18,"unlock");
  _swift_bridgeObjectRelease(local_b8);
  _swift_bridgeObjectRelease(param_2);
  (**(code **)(lVar14 + 8))(puVar17,lVar3);
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = ppuVar4;
  return auVar19;
}

