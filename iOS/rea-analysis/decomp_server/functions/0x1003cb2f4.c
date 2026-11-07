// rea decompile_all
// name: FUN_1003cb2f4
// address: 0x1003cb2f4
// body: available
// range: 0x1003cb2f4-0x1003cb87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003cb870) */

void FUN_1003cb2f4(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  char *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  long extraout_x12;
  ID IVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [16];
  undefined8 auStack_b0 [2];
  undefined8 local_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_1003d0d4c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1005cac3c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  uVar9 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = uVar9 - extraout_x12;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    (**(code **)(lVar13 + 0x68))(uVar11,1,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar7 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar10 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar9 = uVar11;
      FUN_1005cc2b8();
      if ((uVar9 & 1) == 0) {
        _swift_release(lVar10);
      }
      else {
        IVar4 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar5 = "lastPathComponent";
        IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
        *(undefined8 *)(uVar11 - 0x10) = 0xeb00000000293a5f;
        *(undefined8 *)(uVar11 - 8) = 0xbb;
        FUN_1005cc010(thunk_FUN_1003fe348,0,uVar11,0x65746f6d65525555,0xe800000000000000,IVar4,
                      pcVar5,0x286576726573626f);
        _swift_release(lVar10);
        _swift_bridgeObjectRelease(pcVar5);
      }
    }
    _objc_msgSend(IVar7,"unlock");
    pcVar6 = *(code **)(lVar13 + 8);
  }
  else {
    local_a0[0] = param_2;
    if ((*(byte *)(param_1 + _TtC8UUCommon18IPSReportCollector::stopped) & 1) == 0) {
      IVar7 = *(ID *)(param_1 + _TtC8UUCommon18IPSReportCollector::stopLock);
      _objc_msgSend(IVar7,"lock");
      bVar1 = *(byte *)(param_1 + _TtC8UUCommon18IPSReportCollector::stopRequested);
      _objc_msgSend(IVar7,"unlock");
      if ((bVar1 & 1) == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar2 = local_a0[0];
        *(undefined8 *)(uVar11 - 0x10) = local_a0[0];
        lVar3 = param_1 + _TtC8UUCommon18IPSReportCollector::state;
        _swift_beginAccess(lVar3,auStack_90,0x21,0);
        pcVar6 = FUN_10000d558;
        FUN_1003d09f4(FUN_10000d558,uVar11 - 0x20);
        if ((long)pcVar6 <= *(long *)(*(long *)(lVar3 + 8) + 0x10)) {
          FUN_1003d3084();
          _swift_endAccess(auStack_90);
          FUN_100082394(uVar2,lVar10,FUN_1003d0d4c);
          _swift_beginAccess(lVar3,auStack_90,0x21,0);
          uVar8 = *(ulong *)(lVar3 + 8);
          uVar11 = uVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(lVar3 + 8) = uVar8;
          uVar9 = uVar8;
          if ((uVar11 & 1) == 0) {
            uVar9 = 0;
            FUN_10039ea68(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
            *(ulong *)(lVar3 + 8) = uVar9;
          }
          uVar11 = *(ulong *)(uVar9 + 0x10);
          uVar8 = uVar9;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar11) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_10039ea68(uVar8,uVar11 + 1,1,uVar9);
          }
          *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
          FUN_1000823d8(lVar10,uVar8 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                                       ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)) +
                               *(long *)(lVar12 + 0x48) * uVar11,FUN_1003d0d4c);
          *(ulong *)(lVar3 + 8) = uVar8;
          _swift_endAccess(auStack_90);
          FUN_1003cb87c();
          _swift_release(param_1);
          return;
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003cb82c);
        (*pcVar6)();
      }
    }
    (**(code **)(lVar13 + 0x68))(uVar9,2,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar7 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar10 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar8 = uVar9;
      FUN_1005cc2b8();
      if ((uVar8 & 1) == 0) {
        _swift_release(lVar10);
      }
      else {
        IVar4 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar5 = "lastPathComponent";
        IVar4 = _objc_msgSend(IVar4,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar4);
        *(undefined8 *)(uVar11 - 0x10) = 0xeb00000000293a5f;
        *(undefined8 *)(uVar11 - 8) = 0xbf;
        FUN_1005cc010(FUN_1003fe250,0,uVar9,0x65746f6d65525555,0xe800000000000000,IVar4,pcVar5,
                      0x286576726573626f);
        _swift_release(lVar10);
        _swift_bridgeObjectRelease(pcVar5);
      }
    }
    _objc_msgSend(IVar7,"unlock");
    _swift_release(param_1);
    pcVar6 = *(code **)(lVar13 + 8);
    uVar11 = uVar9;
  }
  (*pcVar6)(uVar11,lVar3);
  return;
}

