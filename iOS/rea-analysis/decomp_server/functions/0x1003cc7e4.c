// rea decompile_all
// name: FUN_1003cc7e4
// address: 0x1003cc7e4
// body: available
// range: 0x1003cc7e4-0x1003cd307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003cc7e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  ID IVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar17;
  uint uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar19;
  long unaff_x20;
  ID IVar20;
  long lVar21;
  ulong uVar22;
  undefined8 auStack_110 [2];
  undefined8 auStack_100 [2];
  long alStack_f0 [2];
  long alStack_e0 [2];
  undefined8 auStack_d0 [4];
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  local_88 = param_3;
  local_80 = param_2;
  FUN_1005cac3c();
  lVar21 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  uVar13 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_a8 = uVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar22 = (uVar13 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar8 = &DAT_100a8c7c8;
  local_90 = uVar22 - extraout_x12_01;
  FUN_100004bb4(&DAT_100a8c7c8,&DAT_100822520);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (uVar22 - extraout_x12_01) - extraout_x8_00;
  puVar8 = &DAT_100a76718;
  local_98 = lVar16;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  puVar8 = &DAT_100a8c198;
  FUN_100004bb4(&DAT_100a8c198,&DAT_100822510);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar16 - extraout_x8_02;
  IVar20 = *(ID *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopLock);
  _objc_msgSend(IVar20,"lock");
  bVar4 = *(byte *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopRequested);
  pcVar14 = "unlock";
  _objc_msgSend(IVar20,"unlock");
  if ((bVar4 & 1) != 0) {
    (**(code **)(lVar21 + 0x68))(uVar13,2,lVar7);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar20 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar16 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar22 = uVar13;
      FUN_1005cc2b8();
      if ((uVar22 & 1) == 0) {
        _swift_release(lVar16);
      }
      else {
        IVar9 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar14 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        *(undefined8 *)(lVar19 + -0x10) = 0x80000001008b40a0;
        *(undefined8 *)(lVar19 + -8) = 0x174;
        FUN_1005cc010(FUN_1003fdee4,0,uVar13,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar14,
                      0xd00000000000001a);
        _swift_release(lVar16);
        _swift_bridgeObjectRelease(pcVar14);
      }
    }
    _objc_msgSend(IVar20,"unlock");
    (**(code **)(lVar21 + 8))(uVar13,lVar7);
    return;
  }
  local_b0 = lVar7;
  local_a0 = lVar21;
  if (DAT_100a89308 != -1) {
    pcVar17 = FUN_1003dc3b8;
    _swift_once(&DAT_100a89308,FUN_1003dc3b8);
    pcVar14 = (char *)pcVar17;
  }
  plVar1 = DAT_100a8cd10;
  plVar10 = DAT_100a8cd10;
  _swift_retain(DAT_100a8cd10);
  FUN_1003d8888();
  (**(code **)(*plVar1 + 0x128))(lVar19);
  _swift_release(plVar1);
  FUN_100006cc8(plVar10,pcVar14);
  lVar21 = 0;
  FUN_1003f84d4();
  lVar7 = lVar19;
  (**(code **)(*(long *)(lVar21 + -8) + 0x30))(lVar19,1,lVar21);
  if ((int)lVar7 == 0) {
    bVar4 = *(byte *)(lVar19 + 3);
    FUN_100040bb4(lVar19,&DAT_100a8c198,&DAT_100822510);
    if ((bVar4 != 2) && ((bVar4 & 1) == 0)) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 **)(lVar19 + -0x10) = param_1;
      lVar7 = local_a0;
      uVar22 = local_a8;
      (**(code **)(local_a0 + 0x68))(local_a8,2,local_b0);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar20 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar16 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar13 = uVar22;
        FUN_1005cc2b8();
        if ((uVar13 & 1) == 0) {
          _swift_release(lVar16);
        }
        else {
          IVar9 = 0xd000000000000090;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000090,0x80000001008b3cb0);
          pcVar14 = "lastPathComponent";
          IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar19 + -0x30) = FUN_1003d1010;
          *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
          *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b40a0;
          *(undefined8 *)(lVar19 + -0x48) = 0x178;
          uVar22 = local_a8;
          FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,local_a8,0x65746f6d65525555,
                        0xe800000000000000,IVar9,pcVar14,0xd00000000000001a);
          _swift_release(lVar16);
          _swift_bridgeObjectRelease(pcVar14);
        }
      }
      _objc_msgSend(IVar20,"unlock");
      pcVar17 = *(code **)(lVar7 + 8);
      lVar7 = local_b0;
      goto LAB_1003cd0b4;
    }
  }
  else {
    FUN_100040bb4(lVar19,&DAT_100a8c198,&DAT_100822510);
  }
  uVar6 = local_88;
  if (*(code **)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::submission) == (code *)0x0) {
    puVar12 = param_1;
    FUN_1003cd9c4(param_1,local_80,local_88);
    if (((ulong)puVar12 & 1) == 0) goto LAB_1003ccc08;
LAB_1003ccbc0:
    lVar7 = local_b0;
    lVar11 = 0;
    FUN_1003c5f68();
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar11 + 0x20));
    lVar21 = *plVar1;
    uVar22 = plVar1[1];
    uVar5 = (uint)(uVar22 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar22 = uVar22 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar21 >> 0x20);
        if (SBORROW4(iVar15,(int)lVar21)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1003cd2f0);
          (*pcVar17)();
        }
        uVar22 = (ulong)(iVar15 - (int)lVar21);
      }
    }
    else {
      uVar22 = 0;
      if ((uVar18 == 2) &&
         (uVar22 = *(long *)(lVar21 + 0x18) - *(long *)(lVar21 + 0x10),
         SBORROW8(*(long *)(lVar21 + 0x18),*(long *)(lVar21 + 0x10)))) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1003ccdd0);
        (*pcVar17)();
      }
    }
    plVar1 = (long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::budget);
    if (SCARRY8(*plVar1,1)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1003cd2d0);
      (*pcVar17)();
    }
    *plVar1 = *plVar1 + 1;
    if (SCARRY8(plVar1[1],uVar22)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1003cd2d4);
      (*pcVar17)();
    }
    plVar1[1] = plVar1[1] + uVar22;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    iVar15 = *(int *)(lVar11 + 0x14);
    lVar21 = 0;
    __s10Foundation4DateVMa();
    lVar11 = *(long *)(lVar21 + -8);
    (**(code **)(lVar11 + 0x10))(lVar16,(long)param_1 + (long)iVar15,lVar21);
    (**(code **)(lVar11 + 0x38))(lVar16,0,1,lVar21);
    _swift_beginAccess(unaff_x20 + _TtC8UUCommon18IPSReportCollector::state,auStack_78,0x21,0);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1003c1954(lVar16,uVar2,uVar3);
    _swift_endAccess(auStack_78);
    _swift_beginAccess(unaff_x20 + _TtC8UUCommon18IPSReportCollector::pendingReports,auStack_78,0x21
                       ,0);
    lVar16 = local_98;
    FUN_1003e8058(local_98,uVar2,uVar3);
    _swift_endAccess(auStack_78);
    FUN_100040bb4(lVar16,&DAT_100a8c7c8,&DAT_100822520);
    FUN_1003cb87c();
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar2 = local_80;
    *(undefined8 **)(lVar19 + -0x20) = param_1;
    *(undefined8 *)(lVar19 + -0x18) = uVar2;
    *(undefined8 *)(lVar19 + -0x10) = uVar6;
    uVar22 = local_90;
    lVar16 = local_a0;
    (**(code **)(local_a0 + 0x68))(local_90,2,lVar7);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar20 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar21 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar13 = uVar22;
      FUN_1005cc2b8();
      if ((uVar13 & 1) == 0) {
        _swift_release(lVar21);
      }
      else {
        IVar9 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar14 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar19 + -0x40) = FUN_1003d1004;
        *(long *)(lVar19 + -0x38) = lVar19 + -0x30;
        *(undefined8 *)(lVar19 + -0x60) = 0x80000001008b40a0;
        *(undefined8 *)(lVar19 + -0x58) = 0x184;
        uVar22 = local_90;
        FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x50,local_90,0x65746f6d65525555,
                      0xe800000000000000,IVar9,pcVar14,0xd00000000000001a);
        _swift_release(lVar21);
        _swift_bridgeObjectRelease(pcVar14);
      }
    }
  }
  else {
    puVar12 = param_1;
    (**(code **)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::submission))
              (param_1,local_80,local_88);
    if (((ulong)puVar12 & 1) != 0) goto LAB_1003ccbc0;
LAB_1003ccc08:
    lVar7 = local_b0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)(lVar19 + -0x10) = param_1;
    lVar16 = local_a0;
    (**(code **)(local_a0 + 0x68))(uVar22,4,lVar7);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar20 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar21 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar13 = uVar22;
      FUN_1005cc2b8();
      if ((uVar13 & 1) == 0) {
        _swift_release(lVar21);
      }
      else {
        IVar9 = 0xd000000000000090;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0)
        ;
        pcVar14 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar19 + -0x30) = FUN_1003d0ffc;
        *(long *)(lVar19 + -0x28) = lVar19 + -0x20;
        *(undefined8 *)(lVar19 + -0x50) = 0x80000001008b40a0;
        *(undefined8 *)(lVar19 + -0x48) = 0x17d;
        lVar16 = local_a0;
        FUN_1005cc010(thunk_FUN_1003a85e4,lVar19 + -0x40,uVar22,0x65746f6d65525555,
                      0xe800000000000000,IVar9,pcVar14,0xd00000000000001a);
        _swift_release(lVar21);
        _swift_bridgeObjectRelease(pcVar14);
      }
    }
  }
  _objc_msgSend(IVar20,"unlock");
  pcVar17 = *(code **)(lVar16 + 8);
LAB_1003cd0b4:
  (*pcVar17)(uVar22,lVar7);
  return;
}

