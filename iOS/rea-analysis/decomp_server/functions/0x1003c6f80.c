// rea decompile_all
// name: FUN_1003c6f80
// address: 0x1003c6f80
// body: available
// range: 0x1003c6f80-0x1003cb2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c6f80(void)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uid_t uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ID IVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 *puVar21;
  void *aBlock;
  ID IVar22;
  char *pcVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar25;
  long extraout_x8_04;
  long lVar26;
  long extraout_x8_05;
  long lVar27;
  long extraout_x8_06;
  long lVar28;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  ID IVar29;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  code *pcVar30;
  byte bVar31;
  int iVar32;
  undefined8 *puVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  uint uVar42;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  undefined8 uVar43;
  long unaff_x20;
  long lVar44;
  long lVar45;
  ulong uVar46;
  undefined *puVar47;
  long lVar48;
  code *pcVar49;
  undefined *puVar50;
  ulong uVar51;
  undefined8 uVar52;
  undefined8 auStack_4e0 [2];
  undefined1 auStack_4d0 [16];
  long alStack_4c0 [2];
  undefined1 auStack_4b0 [16];
  long alStack_4a0 [2];
  long alStack_490 [2];
  ID aIStack_480 [2];
  undefined8 uStack_470;
  ulong local_468 [3];
  undefined *local_450;
  undefined8 local_448;
  undefined8 local_440;
  long local_438;
  long local_430;
  uint local_424;
  long local_420;
  long local_418;
  ID local_410;
  char *local_408;
  code *local_400;
  undefined4 local_3f4;
  ulong local_3f0;
  long local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  ulong local_3c8;
  code *local_3c0;
  undefined8 uStack_3b8;
  long *local_3a8;
  undefined *local_3a0;
  code *local_398;
  long local_390;
  long local_388;
  ulong local_380;
  long local_378;
  long local_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  ulong local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  long local_318;
  long local_310;
  long local_308;
  long local_300;
  long local_2f8;
  long local_2f0;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_2a0;
  long local_298;
  ulong local_290;
  ulong local_288;
  undefined8 *local_280;
  ulong local_278;
  ulong local_270;
  long local_268;
  long local_260;
  long local_258;
  ulong local_250;
  ulong local_248;
  ulong local_240;
  long local_238;
  ulong local_230;
  long local_228;
  long *local_220;
  long local_218;
  undefined8 local_210;
  ulong local_208;
  long local_200;
  long local_1f8;
  ID local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  ulong local_1c8;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  undefined1 auStack_148 [56];
  undefined *local_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *local_c8;
  long local_b8 [2];
  undefined1 auStack_a8 [31];
  undefined1 local_89;
  undefined *local_88;
  long local_80 [2];
  
  lVar11 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2c8 = *(long *)(lVar11 + -8);
  local_2c0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2c8 + 0x40));
  lVar24 = (long)&uStack_470 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  local_2d0 = lVar24;
  __s8Dispatch0A3QoSVMa();
  local_2e0 = *(long *)(lVar11 + -8);
  local_2d8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2e0 + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  local_2e8 = lVar24;
  __s8Dispatch0A12TimeIntervalOMa();
  local_2f8 = *(long *)(lVar11 + -8);
  local_2f0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2f8 + 0x40));
  lVar24 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_300 = lVar24;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar24 = lVar24 - extraout_x12;
  lVar11 = 0;
  local_308 = lVar24;
  __s8Dispatch0A4TimeVMa();
  local_320 = *(long *)(lVar11 + -8);
  local_310 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_320 + 0x40));
  lVar24 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_328 = lVar24;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar24 = lVar24 - extraout_x12_00;
  lVar11 = 0;
  local_318 = lVar24;
  __sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa();
  local_338 = *(long *)(lVar11 + -8);
  local_330 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_338 + 0x40));
  lVar24 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  local_340 = lVar24;
  FUN_1003d0d4c();
  lVar25 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  puVar33 = (undefined8 *)(lVar24 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_280 = puVar33;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = (long)puVar33 - extraout_x12_01;
  puVar19 = &DAT_100a8c7c8;
  FUN_100004bb4(&DAT_100a8c7c8,&DAT_100822520);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  lVar34 = lVar26 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_2b8 = lVar34;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar34 = lVar34 - extraout_x12_02;
  lVar13 = 0;
  local_1e0 = lVar34;
  FUN_1003c5f68();
  lVar27 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar27 + 0x40));
  lVar34 = lVar34 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar35 = lVar34 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar36 = lVar35 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100995498)();
  plVar37 = (long *)(lVar36 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar24 = 0;
  local_208 = (long)plVar37 - extraout_x12_06;
  FUN_1005cac3c();
  lVar28 = *(long *)(lVar24 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar28 + 0x40));
  uVar38 = ((long)plVar37 - extraout_x12_06) - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_270 = uVar38;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar38 = uVar38 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar51 = uVar38 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar46 = uVar51 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_278 = uVar46 - extraout_x12_10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = (uVar46 - extraout_x12_10) - extraout_x12_11;
  local_250 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_12;
  local_288 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_13;
  local_2a0 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_14;
  local_2a8 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_15;
  local_2b0 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_16;
  local_1c8 = uVar39;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar39 = uVar39 - extraout_x12_17;
  uVar14 = 0;
  local_348 = uVar39;
  FUN_1003c63e0();
  local_1d8 = *(long *)(uVar14 - 8);
  local_240 = uVar14;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_1d8 + 0x40));
  lVar40 = uVar39 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_1e8 = lVar40;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar40 = lVar40 - extraout_x12_18;
  local_378 = lVar40;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar40 = lVar40 - extraout_x12_19;
  local_368 = lVar40;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar40 = lVar40 - extraout_x12_20;
  puVar19 = &DAT_100a76718;
  local_358 = lVar40;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  lVar40 = lVar40 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_1d0 = lVar40;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar40 = lVar40 - extraout_x12_21;
  puVar19 = &DAT_100a76710;
  local_350 = lVar40;
  FUN_100004bb4(&DAT_100a76710,&DAT_10080b210);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar40 = lVar40 - extraout_x8_10;
  lVar11 = 0;
  local_268 = lVar40;
  __s10Foundation17URLResourceValuesVMa();
  local_260 = *(long *)(lVar11 + -8);
  local_258 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_260 + 0x40));
  uVar14 = lVar40 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_100a766c8;
  local_290 = uVar14;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = uVar14 - extraout_x8_12;
  lVar11 = 0;
  local_230 = uVar14;
  __s10Foundation3URLVMa();
  lVar40 = *(long *)(lVar11 + -8);
  local_1b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar40 + 0x40));
  lVar11 = uVar14 - (extraout_x8_13 + 0xfU & 0xfffffffffffffff0);
  local_298 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  IVar29 = lVar11 - extraout_x12_22;
  puVar19 = &DAT_100a8c688;
  local_210 = IVar29;
  FUN_100004bb4(&DAT_100a8c688,&DAT_100822420);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  uVar14 = IVar29 - (extraout_x8_14 + 0xfU & 0xfffffffffffffff0);
  local_248 = uVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar41 = uVar14 - extraout_x12_23;
  local_370 = lVar41;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar41 = lVar41 - extraout_x12_24;
  lVar11 = 0;
  local_228 = lVar41;
  __s10Foundation4DateVMa();
  lVar48 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar48 + 0x40));
  lVar41 = lVar41 - (extraout_x8_15 + 0xfU & 0xfffffffffffffff0);
  local_360 = lVar41;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar14 = lVar41 - extraout_x12_25;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar19 = &DAT_100a8c198;
  local_1b8 = uVar14 - extraout_x12_26;
  FUN_100004bb4(&DAT_100a8c198,&DAT_100822510);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar41 = (uVar14 - extraout_x12_26) - extraout_x8_16;
  if ((*(byte *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopped) & 1) == 0) {
    IVar29 = *(ID *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopLock);
    local_200 = lVar48;
    _objc_msgSend(IVar29,"lock");
    lVar48 = local_200;
    local_1f8 = _TtC8UUCommon18IPSReportCollector::stopRequested;
    bVar31 = *(byte *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopRequested);
    pcVar23 = "unlock";
    local_1f0 = IVar29;
    _objc_msgSend(IVar29,"unlock");
    if ((bVar31 & 1) == 0) {
      if (DAT_100a89308 != -1) {
        pcVar30 = FUN_1003dc3b8;
        _swift_once(&DAT_100a89308,FUN_1003dc3b8);
        pcVar23 = (char *)pcVar30;
      }
      plVar1 = DAT_100a8cd10;
      plVar16 = DAT_100a8cd10;
      _swift_retain(DAT_100a8cd10);
      FUN_1003d8888();
      (**(code **)(*plVar1 + 0x128))(lVar41);
      _swift_release(plVar1);
      FUN_100006cc8(plVar16,pcVar23);
      lVar17 = 0;
      FUN_1003f84d4();
      lVar45 = lVar41;
      (**(code **)(*(long *)(lVar17 + -8) + 0x30))(lVar41,1,lVar17);
      if ((int)lVar45 == 0) {
        bVar31 = *(byte *)(lVar41 + 3);
        FUN_100040bb4(lVar41,&DAT_100a8c198,&DAT_100822510);
        lVar45 = _TtC8UUCommon18IPSReportCollector::timer;
        if ((bVar31 != 2) && ((bVar31 & 1) == 0)) {
          lVar11 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer);
          if (lVar11 == 0) {
            uVar43 = 0;
          }
          else {
            lVar12 = lVar11;
            _swift_getObjectType(lVar11);
            _swift_unknownObjectRetain(lVar11);
            __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar12);
            _swift_unknownObjectRelease(lVar11);
            uVar43 = *(undefined8 *)(unaff_x20 + lVar45);
          }
          *(undefined8 *)(unaff_x20 + lVar45) = 0;
          _swift_unknownObjectRelease(uVar43);
          (**(code **)(lVar28 + 0x68))(uVar51,2,lVar24);
          if (DAT_100a89358 != -1) {
            _swift_once(&DAT_100a89358,FUN_1003fba60);
          }
          IVar29 = DAT_100a8e090;
          _objc_msgSend(DAT_100a8e090,"lock");
          lVar11 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            uVar14 = uVar51;
            FUN_1005cc2b8();
            if ((uVar14 & 1) == 0) {
              _swift_release(lVar11);
            }
            else {
              IVar15 = 0xd000000000000090;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000090,0x80000001008b3cb0);
              pcVar23 = "lastPathComponent";
              IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar15);
              *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
              *(undefined8 *)(lVar41 + -8) = 0xe2;
              FUN_1005cc010(FUN_1003fe154,0,uVar51,0x65746f6d65525555,0xe800000000000000,IVar15,
                            pcVar23,0x29286e616373);
              _swift_release(lVar11);
              _swift_bridgeObjectRelease(pcVar23);
            }
          }
          _objc_msgSend(IVar29,"unlock");
          pcVar30 = *(code **)(lVar28 + 8);
          goto LAB_1003c7ae8;
        }
      }
      else {
        FUN_100040bb4(lVar41,&DAT_100a8c198,&DAT_100822510);
      }
      IVar29 = local_210;
      lVar45 = _TtC8UUCommon18IPSReportCollector::timer;
      local_3a8 = (long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::budget);
      if (*local_3a8 < 3) {
        if (SBORROW8(0xa00000,local_3a8[1])) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb22c);
          (*pcVar30)();
        }
        if (0 < 0xa00000 - local_3a8[1]) {
          local_430 = _TtC8UUCommon18IPSReportCollector::attempt;
          local_388 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::attempt);
          local_438 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::retryDelays);
          local_390 = *(long *)(local_438 + 0x10);
          __s10Foundation4DateVACycfC(uVar14);
          pcVar30 = (code *)0x3fc999999999999a;
          __s10Foundation4DateV18addingTimeIntervalyACSdF(local_1b8);
          local_398 = *(code **)(lVar48 + 8);
          (*local_398)(uVar14,lVar11);
          puVar19 = PTR___swiftEmptyArrayStorage_100995ea0;
          local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
          local_80[0] = 0;
          local_89 = 0;
          plVar1 = (long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::state);
          _swift_beginAccess(plVar1,auStack_a8,0,0);
          lVar48 = 0;
          FUN_1003c5a40();
          local_420 = lVar48;
          local_220 = plVar1;
          FUN_1003d0f50((long)plVar1 + (long)*(int *)(lVar48 + 0x18),local_228);
          lVar48 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::roots);
          uVar51 = *(ulong *)(lVar48 + 0x10);
          local_408 = "Logs/DiagnosticReports";
          lVar45 = local_1e8;
          local_238 = lVar11;
          local_1c0 = lVar24;
          if (uVar51 == 0) {
            local_418 = 0;
            local_424 = 0;
            local_218 = 0;
          }
          else {
            local_418 = 0;
            local_424 = 0;
            local_218 = 0;
            local_468[2] = uVar51 - 1;
            local_3d0 = *(undefined8 *)PTR__NSURLIsRegularFileKey_100995380;
            local_3d8 = *(undefined8 *)PTR__NSURLIsSymbolicLinkKey_100995388;
            local_3e0 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
            local_3f4 = 3;
            pcVar30 = (code *)0x3;
            uStack_3b8 = 6;
            local_3c0 = (code *)0x3;
            uVar39 = local_1b0;
            uVar38 = 0;
            local_3f0 = uVar51;
            local_3e8 = lVar48;
            local_3c8 = uVar14;
            local_3a0 = puVar19;
            do {
              while( true ) {
                if (*(ulong *)(lVar48 + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
                  pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb1ec);
                  (*pcVar30)();
                }
                local_400 = *(code **)(lVar40 + 0x10);
                (*local_400)(IVar29,lVar48 + ((ulong)*(byte *)(lVar40 + 0x50) + 0x20 &
                                             ((ulong)*(byte *)(lVar40 + 0x50) ^ 0xffffffffffffffff))
                                    + *(long *)(lVar40 + 0x48) * uVar38,uVar39);
                IVar15 = local_1f0;
                _objc_msgSend(local_1f0,"lock");
                bVar31 = *(byte *)(unaff_x20 + local_1f8);
                _objc_msgSend(IVar15,"unlock");
                uVar51 = local_2b0;
                if ((bVar31 & 1) != 0) {
                  (**(code **)(lVar28 + 0x68))(local_2b0,2,lVar24);
                  puVar19 = local_3a0;
                  if (DAT_100a89358 != -1) {
                    _swift_once(&DAT_100a89358,FUN_1003fba60);
                  }
                  IVar15 = DAT_100a8e090;
                  _objc_msgSend(DAT_100a8e090,"lock");
                  lVar12 = DAT_100a8e098;
                  if (DAT_100a8e098 != 0) {
                    _swift_retain(DAT_100a8e098);
                    uVar14 = uVar51;
                    FUN_1005cc2b8();
                    if ((uVar14 & 1) == 0) {
                      _swift_release(lVar12);
                    }
                    else {
                      IVar22 = 0xd000000000000090;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                      pcVar23 = "lastPathComponent";
                      IVar22 = _objc_msgSend(IVar22,"lastPathComponent");
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (IVar22);
                      *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
                      *(undefined8 *)(lVar41 + -8) = 0xf3;
                      FUN_1005cc010(thunk_FUN_1003fdf64,0,uVar51,0x65746f6d65525555,
                                    0xe800000000000000,IVar22,pcVar23,0x29286e616373);
                      _swift_release(lVar12);
                      lVar11 = local_238;
                      _swift_bridgeObjectRelease(pcVar23);
                    }
                  }
                  _objc_msgSend(IVar15,"unlock");
                  (**(code **)(lVar28 + 8))(uVar51,lVar24);
                  (*local_398)(local_1b8,lVar11);
                  (**(code **)(lVar40 + 8))(IVar29,local_1b0);
                  FUN_100040bb4(local_228,&DAT_100a8c688,&DAT_100822420);
                  _swift_bridgeObjectRelease(puVar19);
                  return;
                }
                __s10Foundation4DateVACycfC(uVar14);
                uVar51 = uVar14;
                __s10Foundation4DateV1loiySbAC_ACtFZ(uVar14,local_1b8);
                (*local_398)(uVar14,lVar11);
                if ((uVar51 & 1) == 0) {
                  local_424 = 1;
                  local_89 = 1;
                  (**(code **)(lVar40 + 8))(IVar29,local_1b0);
                  puVar19 = local_3a0;
                  goto LAB_1003c902c;
                }
                local_380 = uVar38;
                NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                puVar19 = &DAT_100a76708;
                FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
                puVar18 = puVar19;
                _swift_allocObject();
                uVar4 = local_3d0;
                uVar52 = local_3d8;
                uVar43 = local_3e0;
                *(undefined8 *)(puVar18 + 0x18) = uStack_3b8;
                *(code **)(puVar18 + 0x10) = local_3c0;
                *(undefined8 *)(puVar18 + 0x20) = local_3d0;
                *(undefined8 *)(puVar18 + 0x28) = local_3d8;
                *(undefined8 *)(puVar18 + 0x30) = local_3e0;
                IVar15 = IVar29;
                pcVar30 = local_3c0;
                __sSo13NSFileManagerC10FoundationE10enumerator2at26includingPropertiesForKeys7options12errorHandlerSo21NSDirectoryEnumeratorCSgAC3URLV_SaySo16NSURLResourceKeyaGSgSo0M18EnumerationOptionsVSbAM_s5Error_ptcSgtF
                          (IVar29,puVar18,5,FUN_1003cc12c,0);
                _swift_bridgeObjectRelease(puVar18);
                if (IVar15 != 0) break;
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(ID *)(lVar41 + -0x10) = IVar29;
                uVar51 = local_1c8;
                (**(code **)(lVar28 + 0x68))(local_1c8,local_3f4,local_1c0);
                if (DAT_100a89358 != -1) {
                  _swift_once(&DAT_100a89358,FUN_1003fba60);
                }
                IVar15 = DAT_100a8e090;
                _objc_msgSend(DAT_100a8e090,"lock");
                uVar46 = local_380;
                uVar14 = local_3c8;
                lVar11 = DAT_100a8e098;
                if (DAT_100a8e098 != 0) {
                  _swift_retain(DAT_100a8e098);
                  uVar39 = uVar51;
                  FUN_1005cc2b8();
                  if ((uVar39 & 1) == 0) {
                    _swift_release(lVar11);
                  }
                  else {
                    IVar29 = 0xd000000000000090;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                    pcVar23 = "lastPathComponent";
                    IVar29 = _objc_msgSend(IVar29,"lastPathComponent");
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                              (IVar29);
                    (*(code *)PTR____chkstk_darwin_100995498)(0);
                    *(code **)(lVar41 + -0x30) = FUN_1003d0fec;
                    *(long *)(lVar41 + -0x28) = lVar41 + -0x20;
                    *(undefined8 *)(lVar41 + -0x48) = 0x101;
                    *(undefined8 *)(lVar41 + -0x50) = 0xe600000000000000;
                    FUN_1005cc010(thunk_FUN_1003a85e4,lVar41 + -0x40,local_1c8,0x65746f6d65525555,
                                  0xe800000000000000,IVar29,pcVar23,0x29286e616373);
                    _swift_release(lVar11);
                    IVar29 = local_210;
                    _swift_bridgeObjectRelease(pcVar23);
                    uVar51 = local_1c8;
                  }
                }
                _objc_msgSend(IVar15,"unlock");
                lVar24 = local_1c0;
                (**(code **)(lVar28 + 8))(uVar51,local_1c0);
                uVar39 = local_1b0;
                (**(code **)(lVar40 + 8))(IVar29,local_1b0);
                lVar11 = local_238;
                lVar48 = local_3e8;
                puVar19 = local_3a0;
                uVar38 = uVar46 + 1;
                if (local_3f0 == uVar46 + 1) goto LAB_1003c902c;
              }
              local_468[1] = uVar43;
              local_448 = uVar52;
              local_440 = uVar4;
              local_468[0] = local_380 + 1;
              uVar39 = local_1b0;
              local_450 = puVar19;
              local_410 = IVar15;
              uVar51 = local_380;
              uVar14 = local_3c8;
              lVar24 = local_298;
LAB_1003c8234:
              IVar29 = _objc_msgSend(local_410,"nextObject");
              if (IVar29 == 0) {
                puStack_108 = (undefined *)0x0;
                local_110 = (undefined *)0x0;
                puStack_f8 = (undefined *)0x0;
                pcStack_100 = (code *)0x0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_110);
                uVar39 = local_1b0;
                _swift_unknownObjectRelease(IVar29);
              }
              uVar38 = local_230;
              puStack_e8 = puStack_108;
              local_f0 = local_110;
              local_d8 = puStack_f8;
              local_e0 = pcStack_100;
              pcVar30 = pcStack_100;
              if (puStack_f8 == (undefined *)0x0) {
                FUN_100040bb4(&local_f0,&DAT_100a766e0,&DAT_10080bdb0);
                uVar38 = local_230;
                (**(code **)(lVar40 + 0x38))(local_230,1,1,uVar39);
LAB_1003c8c00:
                FUN_100040bb4(uVar38,&DAT_100a766c8,&DAT_10080b1d0);
                pcVar49 = *(code **)(lVar40 + 8);
                goto LAB_1003c8c5c;
              }
              uVar46 = local_230;
              _swift_dynamicCast(local_230,&local_f0,PTR___sypN_100995e88 + 8,uVar39,6);
              (**(code **)(lVar40 + 0x38))(uVar38,(uint)uVar46 ^ 1,1,uVar39);
              uVar46 = uVar38;
              (**(code **)(lVar40 + 0x30))(uVar38,1,uVar39);
              if ((int)uVar46 == 1) goto LAB_1003c8c00;
              (**(code **)(lVar40 + 0x20))(lVar24,uVar38,uVar39);
              IVar29 = local_1f0;
              _objc_msgSend(local_1f0,"lock");
              bVar31 = *(byte *)(unaff_x20 + local_1f8);
              _objc_msgSend(IVar29,"unlock");
              lVar48 = local_1c0;
              uVar39 = local_348;
              if ((bVar31 & 1) != 0) {
                (**(code **)(lVar28 + 0x68))(local_348,2,local_1c0);
                IVar29 = local_210;
                if (DAT_100a89358 != -1) {
                  _swift_once(&DAT_100a89358,FUN_1003fba60);
                }
                IVar15 = DAT_100a8e090;
                _objc_msgSend(DAT_100a8e090,"lock");
                puVar19 = local_3a0;
                lVar24 = DAT_100a8e098;
                if (DAT_100a8e098 != 0) {
                  _swift_retain(DAT_100a8e098);
                  uVar14 = uVar39;
                  FUN_1005cc2b8();
                  if ((uVar14 & 1) == 0) {
                    _swift_release(lVar24);
                  }
                  else {
                    IVar22 = 0xd000000000000090;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                    pcVar23 = "lastPathComponent";
                    IVar22 = _objc_msgSend(IVar22,"lastPathComponent");
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                              (IVar22);
                    *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
                    *(undefined8 *)(lVar41 + -8) = 0x106;
                    FUN_1005cc010(thunk_FUN_1003fdf64,0,uVar39,0x65746f6d65525555,0xe800000000000000
                                  ,IVar22,pcVar23,0x29286e616373);
                    _swift_release(lVar24);
                    lVar11 = local_238;
                    _swift_bridgeObjectRelease(pcVar23);
                  }
                }
                _objc_msgSend(IVar15,"unlock");
                (**(code **)(lVar28 + 8))(uVar39,lVar48);
                uVar14 = local_1b0;
                pcVar30 = *(code **)(lVar40 + 8);
                (*pcVar30)(local_298,local_1b0);
                (*local_398)(local_1b8,lVar11);
                (*pcVar30)(IVar29,uVar14);
                FUN_100040bb4(local_228,&DAT_100a8c688,&DAT_100822420);
                _swift_bridgeObjectRelease(puVar19);
                return;
              }
              __s10Foundation4DateVACycfC(uVar14);
              uVar39 = uVar14;
              __s10Foundation4DateV1loiySbAC_ACtFZ(uVar14,local_1b8);
              uVar38 = uVar14;
              lVar48 = lVar11;
              (*local_398)(uVar14,lVar11);
              if ((uVar39 & 1) != 0) {
                __s10Foundation3URLV17lastPathComponentSSvg();
                local_f0 = *(undefined **)(unaff_x20 + 0x18);
                puStack_e8 = *(undefined **)(unaff_x20 + 0x20);
                _swift_bridgeObjectRetain();
                __sSS6appendyySSF(0x2d,0xe100000000000000);
                puVar19 = puStack_e8;
                puVar18 = local_f0;
                puVar50 = puStack_e8;
                __sSS9hasPrefixySbSSF(local_f0,puStack_e8,uVar38,lVar48);
                _swift_bridgeObjectRelease(lVar48);
                _swift_bridgeObjectRelease();
                if (((ulong)puVar18 & 1) == 0) {
                  pcVar30 = *(code **)(lVar40 + 8);
LAB_1003c8424:
                  uVar39 = local_1b0;
                  (*pcVar30)(lVar24,local_1b0);
                }
                else {
                  __s10Foundation3URLV13pathExtensionSSvg();
                  if ((puVar19 == (undefined *)0x737069) &&
                     (puVar50 == (undefined *)0xe300000000000000)) {
                    _swift_bridgeObjectRelease(0xe300000000000000);
LAB_1003c8480:
                    uVar52 = local_440;
                    uVar43 = local_448;
                    puVar19 = local_450;
                    _swift_initStackObject(local_450,auStack_148);
                    *(undefined8 *)(puVar19 + 0x18) = uStack_3b8;
                    *(code **)(puVar19 + 0x10) = local_3c0;
                    *(undefined8 *)(puVar19 + 0x20) = uVar52;
                    *(undefined8 *)(puVar19 + 0x28) = uVar43;
                    *(ulong *)(puVar19 + 0x30) = local_468[1];
                    puVar18 = puVar19;
                    FUN_100128084(puVar19);
                    _swift_setDeallocating(puVar19);
                    uVar43 = 0;
                    FUN_10000603c(0);
                    _swift_arrayDestroy(puVar19 + 0x20,3,uVar43);
                    lVar45 = local_218;
                    lVar48 = local_268;
                    __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                              (local_268,puVar18);
                    if (lVar45 == 0) {
                      local_218 = lVar45;
                      _swift_bridgeObjectRelease(puVar18);
                      lVar17 = local_258;
                      lVar45 = local_260;
                      (**(code **)(local_260 + 0x38))(lVar48,0,1,local_258);
                      uVar39 = local_290;
                      uVar38 = local_290;
                      (**(code **)(lVar45 + 0x20))(local_290,lVar48,lVar17);
                      __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
                      lVar45 = local_1e8;
                      uVar9 = (uint)uVar38;
                      if (((uVar9 & 0xff) == 2) || ((uVar38 & 1) == 0)) {
                        (**(code **)(local_260 + 8))(uVar39,local_258);
                        pcVar30 = *(code **)(lVar40 + 8);
                        goto LAB_1003c8424;
                      }
                      __s10Foundation17URLResourceValuesV14isSymbolicLinkSbSgvg();
                      uVar39 = local_290;
                      lVar48 = local_350;
                      if (((uVar9 & 0xff) == 2) || ((uVar9 & 1) == 0)) {
                        __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg
                                  (local_350);
                        lVar44 = lVar48;
                        (**(code **)(local_200 + 0x30))(lVar48,1,lVar11);
                        lVar20 = local_200;
                        lVar17 = local_360;
                        if ((int)lVar44 == 1) {
                          (**(code **)(local_260 + 8))(uVar39,local_258);
                          uVar39 = local_1b0;
                          (**(code **)(lVar40 + 8))(lVar24,local_1b0);
                          FUN_100040bb4(lVar48,&DAT_100a76718,&DAT_10080ccc0);
                        }
                        else {
                          (**(code **)(local_200 + 0x20))(local_360,lVar48,lVar11);
                          lVar45 = local_358;
                          lVar48 = local_418 + 1;
                          if (SCARRY8(local_418,1)) {
                    /* WARNING: Does not return */
                            pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2f0);
                            (*pcVar30)();
                          }
                          local_418 = lVar48;
                          local_80[0] = lVar48;
                          (*local_400)(local_358,lVar24,local_1b0);
                          uVar14 = local_240;
                          lVar44 = (long)*(int *)(local_240 + 0x14);
                          (**(code **)(lVar20 + 0x10))(lVar45 + lVar44,lVar17,lVar11);
                          lVar11 = local_370;
                          FUN_1003d0f50(local_228,local_370);
                          lVar48 = lVar11;
                          (**(code **)(local_1d8 + 0x30))(lVar11,1,uVar14);
                          lVar24 = local_368;
                          if ((int)lVar48 == 1) {
                            FUN_100040bb4(lVar11,&DAT_100a8c688,&DAT_100822420);
LAB_1003c8938:
                            FUN_100082394(local_358,local_378,FUN_1003c63e0);
                            puVar19 = local_3a0;
                            _swift_isUniquelyReferenced_nonNull_native();
                            if (((ulong)puVar19 & 1) == 0) {
                              puVar19 = (undefined *)0x0;
                              FUN_10039ea4c(0,*(long *)(local_3a0 + 0x10) + 1,1);
                              local_3a0 = puVar19;
                            }
                            uVar14 = *(ulong *)(local_3a0 + 0x10);
                            if (*(ulong *)(local_3a0 + 0x18) >> 1 <= uVar14) {
                              puVar19 = (undefined *)(ulong)(1 < *(ulong *)(local_3a0 + 0x18));
                              FUN_10039ea4c(puVar19,uVar14 + 1,1,local_3a0);
                              local_3a0 = puVar19;
                            }
                            puVar18 = local_3a0;
                            *(ulong *)(local_3a0 + 0x10) = uVar14 + 1;
                            uVar51 = (ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff);
                            puVar19 = local_3a0 + uVar51;
                            lVar24 = *(long *)(local_1d8 + 0x48);
                            FUN_1000823d8(local_378,puVar19 + lVar24 * uVar14,FUN_1003c63e0);
                            puVar50 = *(undefined **)(puVar18 + 0x10);
                            puVar18 = puVar50;
                            local_f0 = puVar19;
                            puStack_e8 = puVar50;
                            __ss22_minimumMergeRunLengthyS2iF();
                            lVar11 = local_218;
                            if ((long)puVar18 < (long)puVar50) {
                              puVar47 = (undefined *)((ulong)puVar50 >> 1);
                              puVar19 = PTR___swiftEmptyArrayStorage_100995ea0;
                              if ((undefined *)0x1 < puVar50) {
                                puVar19 = puVar47;
                                __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                                          (puVar47,local_240);
                                *(undefined **)(puVar19 + 0x10) = puVar47;
                              }
                              lVar11 = local_218;
                              local_110 = puVar19 + uVar51;
                              puStack_108 = puVar47;
                              FUN_1003cedb4(&local_110,local_b8,&local_f0,puVar18);
                              *(undefined8 *)(puVar19 + 0x10) = 0;
                              local_218 = lVar11;
                              _swift_bridgeObjectRelease(puVar19);
                            }
                            else {
                              local_218 = lVar11;
                              if (puVar50 != (undefined *)0x0) {
                                FUN_1003cf910(0,puVar50,1,&local_f0);
                                local_218 = lVar11;
                              }
                            }
                            local_88 = local_3a0;
                            if (0xc < *(ulong *)(local_3a0 + 0x10)) {
                              puVar19 = local_3a0;
                              _swift_isUniquelyReferenced_nonNull_native();
                              if (((ulong)puVar19 & 1) == 0) {
                                FUN_10040a47c();
                              }
                              if (*(long *)(local_3a0 + 0x10) == 0) {
                    /* WARNING: Does not return */
                                pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2f4);
                                (*pcVar30)();
                              }
                              lVar11 = *(long *)(local_3a0 + 0x10) + -1;
                              *(long *)(local_3a0 + 0x10) = lVar11;
                              local_88 = local_3a0;
                              FUN_1000d27dc(local_3a0 + lVar11 * lVar24 + uVar51,FUN_1003c63e0);
                            }
                            FUN_1000d27dc(local_358,FUN_1003c63e0);
                            lVar11 = local_238;
                            (*local_398)(local_360);
                            (**(code **)(local_260 + 8))(local_290,local_258);
                            (**(code **)(lVar40 + 8))(local_298,local_1b0);
                            uVar39 = local_1b0;
                            lVar45 = local_1e8;
                            uVar51 = local_380;
                            uVar14 = local_3c8;
                            lVar24 = local_298;
                          }
                          else {
                            FUN_1000823d8(lVar11,local_368,FUN_1003c63e0);
                            lVar48 = (long)*(int *)(uVar14 + 0x14);
                            uVar14 = lVar24 + lVar48;
                            lVar11 = lVar45 + lVar44;
                            __s10Foundation4DateV2eeoiySbAC_ACtFZ();
                            if ((uVar14 & 1) == 0) {
                              uVar51 = lVar24 + lVar48;
                              __s10Foundation4DateV1goiySbAC_ACtFZ(uVar51,lVar45 + lVar44);
                              FUN_1000d27dc(lVar24,FUN_1003c63e0);
joined_r0x0001003c8840:
                              if ((uVar51 & 1) != 0) goto LAB_1003c8938;
                            }
                            else {
                              __s10Foundation3URLV4pathSSvg();
                              uVar51 = uVar14;
                              lVar24 = lVar11;
                              __s10Foundation3URLV4pathSSvg();
                              if ((uVar51 != uVar14) || (lVar24 != lVar11)) {
                                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          ();
                                _swift_bridgeObjectRelease(lVar11);
                                _swift_bridgeObjectRelease(lVar24);
                                FUN_1000d27dc(local_368,FUN_1003c63e0);
                                goto joined_r0x0001003c8840;
                              }
                              _swift_bridgeObjectRelease(lVar11);
                              _swift_bridgeObjectRelease(lVar24);
                              FUN_1000d27dc(local_368,FUN_1003c63e0);
                            }
                            FUN_1000d27dc(local_358,FUN_1003c63e0);
                            lVar11 = local_238;
                            (*local_398)(local_360,local_238);
                            (**(code **)(local_260 + 8))(local_290,local_258);
                            uVar39 = local_1b0;
                            lVar24 = local_298;
                            (**(code **)(lVar40 + 8))(local_298,local_1b0);
                            lVar45 = local_1e8;
                            uVar51 = local_380;
                            uVar14 = local_3c8;
                          }
                        }
                      }
                      else {
                        (**(code **)(local_260 + 8))(local_290,local_258);
                        uVar39 = local_1b0;
                        (**(code **)(lVar40 + 8))(lVar24,local_1b0);
                      }
                    }
                    else {
                      _swift_errorRelease(lVar45);
                      _swift_bridgeObjectRelease(puVar18);
                      uVar39 = local_1b0;
                      (**(code **)(lVar40 + 8))(lVar24,local_1b0);
                      (**(code **)(local_260 + 0x38))(lVar48,1,1,local_258);
                      FUN_100040bb4(lVar48,&DAT_100a76710,&DAT_10080b210);
                      local_218 = 0;
                      lVar45 = local_1e8;
                    }
                  }
                  else {
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              ();
                    _swift_bridgeObjectRelease(puVar50);
                    uVar39 = local_1b0;
                    if (((ulong)puVar19 & 1) != 0) goto LAB_1003c8480;
                    (**(code **)(lVar40 + 8))(lVar24,local_1b0);
                  }
                }
                goto LAB_1003c8234;
              }
              pcVar49 = *(code **)(lVar40 + 8);
              (*pcVar49)(lVar24,local_1b0);
              local_424 = 1;
              local_89 = 1;
LAB_1003c8c5c:
              lVar24 = local_1c0;
              IVar29 = local_210;
              lVar48 = local_3e8;
              (*pcVar49)(local_210,local_1b0);
              uVar39 = local_1b0;
              puVar19 = local_3a0;
              uVar38 = local_468[0];
            } while (local_468[2] != uVar51);
          }
LAB_1003c902c:
          uVar51 = local_240;
          uVar14 = local_248;
          lVar11 = local_418;
          if (local_418 < 0xd) {
            uVar43 = 1;
            lVar40 = local_228;
            (**(code **)(local_1d8 + 0x30))(local_228,1,local_240);
            if ((int)lVar40 != 1) goto LAB_1003c9078;
          }
          else {
LAB_1003c9078:
            if (*(long *)(puVar19 + 0x10) == 0) {
              uVar43 = 1;
            }
            else {
              FUN_100082394(puVar19 + *(long *)(local_1d8 + 0x48) * (*(long *)(puVar19 + 0x10) + -1)
                                      + ((ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff)),
                            uVar14,FUN_1003c63e0);
              uVar43 = 0;
            }
          }
          lVar40 = local_1d8;
          (**(code **)(local_1d8 + 0x38))(uVar14,uVar43,1,uVar51);
          plVar1 = local_220;
          _swift_beginAccess(local_220,&local_f0,0x21,0);
          FUN_1003d0d60(uVar14,(long)plVar1 + (long)*(int *)(local_420 + 0x18));
          _swift_endAccess(&local_f0);
          FUN_1003cb87c();
          lVar48 = local_228;
          (**(code **)(lVar40 + 0x30))(local_228,1,uVar51);
          lVar40 = _TtC8UUCommon18IPSReportCollector::pendingReports;
          if ((int)lVar48 == 1) {
            local_210 = CONCAT44(local_210._4_4_,(uint)(lVar11 < 0xd) & (local_424 ^ 1));
          }
          else {
            local_210 = (ulong)local_210._4_4_ << 0x20;
          }
          _swift_beginAccess(unaff_x20 + _TtC8UUCommon18IPSReportCollector::pendingReports,
                             &local_110,0,0);
          lVar11 = *(long *)(unaff_x20 + lVar40);
          uVar51 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
          uVar14 = 0xffffffffffffffff;
          if ((long)uVar51 < 0x40) {
            uVar14 = ~(-1L << (uVar51 & 0x3f));
          }
          uVar14 = uVar14 & *(ulong *)(lVar11 + 0x40);
          _swift_bridgeObjectRetain_n(lVar11,2);
          lVar48 = 0;
          local_1b0 = 0;
          uVar39 = local_208;
          while( true ) {
            for (; local_208 = uVar39, uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
              uVar38 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
              uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
              uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
              FUN_100082394(*(long *)(lVar11 + 0x38) +
                            *(long *)(lVar27 + 0x48) *
                            (LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) | lVar48 << 6),uVar39,
                            FUN_1003c5f68);
              plVar1 = (long *)(uVar39 + (long)*(int *)(lVar13 + 0x20));
              lVar17 = *plVar1;
              uVar39 = plVar1[1];
              uVar9 = (uint)(uVar39 >> 0x20);
              uVar42 = uVar9 >> 0x1e;
              if (uVar9 >> 0x1e < 2) {
                if (uVar42 == 0) {
                  uVar39 = uVar39 >> 0x30 & 0xff;
                }
                else {
                  iVar32 = (int)((ulong)lVar17 >> 0x20);
                  if (SBORROW4(iVar32,(int)lVar17)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb23c);
                    (*pcVar30)();
                  }
                  uVar39 = (ulong)(iVar32 - (int)lVar17);
                }
              }
              else if (uVar42 == 2) {
                uVar39 = *(long *)(lVar17 + 0x18) - *(long *)(lVar17 + 0x10);
                if (SBORROW8(*(long *)(lVar17 + 0x18),*(long *)(lVar17 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb238);
                  (*pcVar30)();
                }
              }
              else {
                uVar39 = 0;
              }
              bVar8 = SCARRY8(local_1b0,uVar39);
              local_1b0 = local_1b0 + uVar39;
              if (bVar8) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb20c);
                (*pcVar30)();
              }
              FUN_1000d27dc(local_208,FUN_1003c5f68);
              uVar39 = local_208;
            }
            bVar8 = SCARRY8(lVar48,1);
            lVar48 = lVar48 + 1;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb1c8);
              (*pcVar30)();
            }
            if ((long)(uVar51 + 0x3f >> 6) <= lVar48) break;
            uVar14 = ((ulong *)(lVar11 + 0x40))[lVar48];
          }
          _swift_bridgeObjectRelease(lVar11);
          _swift_release(lVar11);
          uVar14 = *(ulong *)(puVar19 + 0x10);
          if (uVar14 == 0) {
            bVar31 = (byte)local_210;
          }
          else {
            local_1c8 = _TtC8UUCommon18IPSReportCollector::startup;
            local_240 = CONCAT44(local_240._4_4_,4);
            local_248 = CONCAT44(local_248._4_4_,1);
            local_230 = uVar14 - 1;
            uVar51 = 0;
            lVar11 = local_238;
            local_3a0 = puVar19;
            local_208 = uVar14;
LAB_1003c936c:
            do {
              while( true ) {
                if (*(ulong *)(puVar19 + 0x10) <= uVar51) {
                    /* WARNING: Does not return */
                  pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb1e8);
                  (*pcVar30)();
                }
                FUN_100082394(puVar19 + *(long *)(local_1d8 + 0x48) * uVar51 +
                                        ((ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff)),
                              lVar45,FUN_1003c63e0);
                IVar29 = local_1f0;
                _objc_msgSend(local_1f0,"lock");
                bVar31 = *(byte *)(unaff_x20 + local_1f8);
                _objc_msgSend(IVar29,"unlock");
                uVar14 = local_2a0;
                if ((bVar31 & 1) != 0) {
                  (**(code **)(lVar28 + 0x68))(local_2a0,2,lVar24);
                  if (DAT_100a89358 != -1) {
                    _swift_once(&DAT_100a89358,FUN_1003fba60);
                  }
                  IVar29 = DAT_100a8e090;
                  _objc_msgSend(DAT_100a8e090,"lock");
                  lVar12 = DAT_100a8e098;
                  if (DAT_100a8e098 != 0) {
                    _swift_retain(DAT_100a8e098);
                    uVar51 = uVar14;
                    FUN_1005cc2b8();
                    if ((uVar51 & 1) == 0) {
                      _swift_release(lVar12);
                    }
                    else {
                      IVar15 = 0xd000000000000090;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                      pcVar23 = "lastPathComponent";
                      IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (IVar15);
                      *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
                      *(undefined8 *)(lVar41 + -8) = 0x123;
                      lVar45 = local_1e8;
                      FUN_1005cc010(FUN_1003fdfe0,0,uVar14,0x65746f6d65525555,0xe800000000000000,
                                    IVar15,pcVar23,0x29286e616373);
                      _swift_release(lVar12);
                      lVar11 = local_238;
                      _swift_bridgeObjectRelease(pcVar23);
                    }
                  }
                  _objc_msgSend(IVar29,"unlock");
                  (**(code **)(lVar28 + 8))(uVar14,lVar24);
                  (*local_398)(local_1b8,lVar11);
                  FUN_1000d27dc(lVar45,FUN_1003c63e0);
                  FUN_100040bb4(local_228,&DAT_100a8c688,&DAT_100822420);
                  _swift_bridgeObjectRelease(puVar19);
                  return;
                }
                uVar43 = *(undefined8 *)(unaff_x20 + 0x18);
                uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
                uVar52 = *(undefined8 *)(unaff_x20 + 0x28);
                uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
                uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
                uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
                uVar10 = _getuid();
                *(uid_t *)(lVar41 + -0x10) = uVar10;
                lVar24 = local_218;
                FUN_1003c2bb8(plVar37,lVar45,uVar43,uVar5,uVar52,uVar6,uVar4,uVar7,
                              unaff_x20 + local_1c8);
                plVar1 = local_220;
                local_218 = lVar24;
                if (lVar24 == 0) break;
                (*(code *)PTR____chkstk_darwin_100995498)();
                lVar45 = local_1e8;
                lVar11 = local_218;
                *(long *)(lVar41 + -0x10) = local_1e8;
                *(long *)(lVar41 + -8) = lVar11;
                lVar24 = local_1c0;
                uVar14 = local_270;
                (**(code **)(lVar28 + 0x68))(local_270,local_240 & 0xffffffff,local_1c0);
                if (DAT_100a89358 != -1) {
                  _swift_once(&DAT_100a89358,FUN_1003fba60);
                }
                IVar29 = DAT_100a8e090;
                _objc_msgSend(DAT_100a8e090,"lock");
                lVar11 = DAT_100a8e098;
                if (DAT_100a8e098 != 0) {
                  _swift_retain(DAT_100a8e098);
                  uVar39 = uVar14;
                  FUN_1005cc2b8();
                  if ((uVar39 & 1) == 0) {
                    _swift_release(lVar11);
                  }
                  else {
                    IVar15 = 0xd000000000000090;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                    pcVar23 = "lastPathComponent";
                    IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                              (IVar15);
                    (*(code *)PTR____chkstk_darwin_100995498)(0);
                    *(code **)(lVar41 + -0x30) = FUN_1003d0fa0;
                    *(long *)(lVar41 + -0x28) = lVar41 + -0x20;
                    *(undefined8 *)(lVar41 + -0x48) = 0x137;
                    *(undefined8 *)(lVar41 + -0x50) = 0xe600000000000000;
                    FUN_1005cc010(FUN_1003a85e4,lVar41 + -0x40,local_270,0x65746f6d65525555,
                                  0xe800000000000000,IVar15,pcVar23,0x29286e616373);
                    _swift_release(lVar11);
                    lVar24 = local_1c0;
                    _swift_bridgeObjectRelease(pcVar23);
                    uVar14 = local_270;
                  }
                }
                _objc_msgSend(IVar29,"unlock");
                _swift_errorRelease(local_218);
                (**(code **)(lVar28 + 8))(uVar14,lVar24);
                local_218 = 0;
                lVar11 = local_238;
                puVar19 = local_3a0;
LAB_1003c9a78:
                FUN_1000d27dc(lVar45,FUN_1003c63e0);
                bVar8 = local_230 == uVar51;
                uVar51 = uVar51 + 1;
                if (bVar8) {
LAB_1003c9e44:
                  bVar31 = (byte)local_210;
                  goto LAB_1003c9e4c;
                }
              }
              lVar48 = *plVar37;
              uVar14 = plVar37[1];
              _swift_beginAccess(local_220,&local_f0,0x20,0);
              lVar24 = local_1c0;
              lVar45 = *plVar1;
              if (*(long *)(lVar45 + 0x10) == 0) {
                bVar8 = true;
                lVar17 = local_200;
              }
              else {
                _swift_bridgeObjectRetain(lVar45);
                lVar20 = lVar48;
                uVar39 = uVar14;
                FUN_1001a2c70(lVar48);
                lVar17 = local_200;
                bVar8 = (uVar39 & 1) == 0;
                if (!bVar8) {
                  (**(code **)(local_200 + 0x10))
                            (local_1d0,
                             *(long *)(lVar45 + 0x38) + *(long *)(local_200 + 0x48) * lVar20,lVar11)
                  ;
                }
                _swift_bridgeObjectRelease(lVar45);
              }
              lVar45 = local_1d0;
              (**(code **)(lVar17 + 0x38))(local_1d0,bVar8,1,lVar11);
              _swift_endAccess(&local_f0);
              lVar20 = lVar45;
              (**(code **)(lVar17 + 0x30))(lVar45,1,lVar11);
              FUN_100040bb4(lVar45,&DAT_100a76718,&DAT_10080ccc0);
              if ((int)lVar20 == 1) {
                _swift_beginAccess(unaff_x20 + lVar40,&local_f0,0x20,0);
                lVar11 = *(long *)(unaff_x20 + lVar40);
                if (*(long *)(lVar11 + 0x10) == 0) {
                  bVar8 = true;
                }
                else {
                  _swift_bridgeObjectRetain(lVar11);
                  lVar45 = lVar48;
                  uVar39 = uVar14;
                  FUN_1001a2c70(lVar48);
                  bVar8 = (uVar39 & 1) == 0;
                  if (!bVar8) {
                    FUN_100082394(*(long *)(lVar11 + 0x38) + *(long *)(lVar27 + 0x48) * lVar45,
                                  local_1e0,FUN_1003c5f68);
                  }
                  _swift_bridgeObjectRelease(lVar11);
                }
                lVar11 = local_1e0;
                pcVar49 = *(code **)(lVar27 + 0x38);
                (*pcVar49)(local_1e0,bVar8,1,lVar13);
                _swift_endAccess(&local_f0);
                lVar45 = lVar11;
                (**(code **)(lVar27 + 0x30))(lVar11,1,lVar13);
                FUN_100040bb4(lVar11,&DAT_100a8c7c8,&DAT_100822520);
                lVar11 = local_2b8;
                puVar19 = local_3a0;
                if ((int)lVar45 != 1) {
                  uVar51 = uVar51 + 1;
                  FUN_1000d27dc(plVar37,FUN_1003c5f68);
                  lVar45 = local_1e8;
                  FUN_1000d27dc(local_1e8,FUN_1003c63e0);
                  lVar11 = local_238;
                  puVar19 = local_3a0;
                  if (local_208 == uVar51) goto LAB_1003c9e44;
                  goto LAB_1003c936c;
                }
                if (*(ulong *)(*(long *)(unaff_x20 + lVar40) + 0x10) < 3) {
                  plVar1 = (long *)((long)plVar37 + (long)*(int *)(lVar13 + 0x20));
                  lVar45 = *plVar1;
                  uVar9 = (uint)((ulong)plVar1[1] >> 0x20);
                  uVar42 = uVar9 >> 0x1e;
                  if (uVar9 >> 0x1e < 2) {
                    if (uVar42 == 0) {
                      uVar39 = (ulong)plVar1[1] >> 0x30 & 0xff;
                    }
                    else {
                      iVar32 = (int)((ulong)lVar45 >> 0x20);
                      if (SBORROW4(iVar32,(int)lVar45)) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2cc);
                        (*pcVar30)();
                      }
                      uVar39 = (ulong)(iVar32 - (int)lVar45);
                    }
                  }
                  else if (uVar42 == 2) {
                    uVar39 = *(long *)(lVar45 + 0x18) - *(long *)(lVar45 + 0x10);
                    if (SBORROW8(*(long *)(lVar45 + 0x18),*(long *)(lVar45 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2c8);
                      (*pcVar30)();
                    }
                  }
                  else {
                    uVar39 = 0;
                  }
                  if (SCARRY8(local_1b0,uVar39)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb288);
                    (*pcVar30)();
                  }
                  if ((long)(local_1b0 + uVar39) < 0xa00001) {
                    FUN_100082394(plVar37,local_2b8,FUN_1003c5f68);
                    (*pcVar49)(lVar11,0,1,lVar13);
                    _swift_beginAccess(unaff_x20 + lVar40,&local_f0,0x21,0);
                    _swift_bridgeObjectRetain(uVar14);
                    FUN_1003c1ac4(lVar11,lVar48,uVar14);
                    _swift_endAccess(&local_f0);
                    lVar45 = local_1e8;
                    lVar11 = local_238;
                    lVar48 = *plVar1;
                    uVar9 = (uint)((ulong)plVar1[1] >> 0x20);
                    uVar42 = uVar9 >> 0x1e;
                    if (uVar9 >> 0x1e < 2) {
                      if (uVar42 == 0) {
                        uVar14 = (ulong)plVar1[1] >> 0x30 & 0xff;
                      }
                      else {
                        iVar32 = (int)((ulong)lVar48 >> 0x20);
                        if (SBORROW4(iVar32,(int)lVar48)) {
                    /* WARNING: Does not return */
                          pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2d0);
                          (*pcVar30)();
                        }
                        uVar14 = (ulong)(iVar32 - (int)lVar48);
                      }
                    }
                    else {
                      uVar14 = 0;
                      if ((uVar42 == 2) &&
                         (uVar14 = *(long *)(lVar48 + 0x18) - *(long *)(lVar48 + 0x10),
                         SBORROW8(*(long *)(lVar48 + 0x18),*(long *)(lVar48 + 0x10)))) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2d4);
                        (*pcVar30)();
                      }
                    }
                    bVar8 = SCARRY8(local_1b0,uVar14);
                    local_1b0 = local_1b0 + uVar14;
                    if (bVar8) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2a4);
                      (*pcVar30)();
                    }
                    FUN_1000d27dc(plVar37,FUN_1003c5f68);
                    goto LAB_1003c9a78;
                  }
                }
              }
              else {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(long **)(lVar41 + -0x10) = plVar37;
                uVar14 = local_2a8;
                (**(code **)(lVar28 + 0x68))(local_2a8,local_248 & 0xffffffff,lVar24);
                if (DAT_100a89358 != -1) {
                  _swift_once(&DAT_100a89358,FUN_1003fba60);
                }
                IVar29 = DAT_100a8e090;
                _objc_msgSend(DAT_100a8e090,"lock");
                lVar11 = DAT_100a8e098;
                if (DAT_100a8e098 != 0) {
                  _swift_retain(DAT_100a8e098);
                  uVar39 = uVar14;
                  FUN_1005cc2b8();
                  if ((uVar39 & 1) == 0) {
                    _swift_release(lVar11);
                  }
                  else {
                    IVar15 = 0xd000000000000090;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                    pcVar23 = "lastPathComponent";
                    IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
                    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                              (IVar15);
                    (*(code *)PTR____chkstk_darwin_100995498)(0);
                    *(code **)(lVar41 + -0x30) = FUN_1003d0fa8;
                    *(long *)(lVar41 + -0x28) = lVar41 + -0x20;
                    *(undefined8 *)(lVar41 + -0x48) = 299;
                    *(undefined8 *)(lVar41 + -0x50) = 0xe600000000000000;
                    FUN_1005cc010(thunk_FUN_1003a85e4,lVar41 + -0x40,uVar14,0x65746f6d65525555,
                                  0xe800000000000000,IVar15,pcVar23,0x29286e616373);
                    _swift_release(lVar11);
                    lVar24 = local_1c0;
                    _swift_bridgeObjectRelease(pcVar23);
                  }
                }
                _objc_msgSend(IVar29,"unlock");
                (**(code **)(lVar28 + 8))(uVar14,lVar24);
              }
              puVar19 = local_3a0;
              FUN_1000d27dc(plVar37,FUN_1003c5f68);
              lVar45 = local_1e8;
              FUN_1000d27dc(local_1e8,FUN_1003c63e0);
              local_210 = local_210 & 0xffffffff00000000;
              bVar31 = 0;
              bVar8 = local_230 != uVar51;
              uVar51 = uVar51 + 1;
              lVar11 = local_238;
            } while (bVar8);
          }
LAB_1003c9e4c:
          local_1d8 = _TtC8UUCommon18IPSReportCollector::pendingAssociationAllowed;
          *(byte *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::pendingAssociationAllowed) =
               *(byte *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::pendingAssociationAllowed) &
               bVar31 & 1;
          lVar40 = *(long *)(unaff_x20 + lVar40);
          lVar11 = lVar40;
          _swift_bridgeObjectRetain();
          FUN_1003cc5f8();
          _swift_bridgeObjectRelease(lVar40);
          local_b8[0] = 0;
          uVar14 = *(ulong *)(lVar11 + 0x10);
          if (uVar14 == 0) {
            pcVar30 = *(code **)(lVar28 + 0x68);
          }
          else {
            local_1e0 = 0;
            uVar51 = 0;
            local_1c8 = (ulong)*(byte *)(lVar27 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar27 + 0x50) ^ 0xffffffffffffffff);
            local_1d0 = lVar11 + local_1c8;
            do {
              if (*(ulong *)(lVar11 + 0x10) <= uVar51) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb1e4);
                (*pcVar30)();
              }
              lVar40 = *(long *)(lVar27 + 0x48);
              local_1b0 = uVar51;
              FUN_100082394(local_1d0 + lVar40 * uVar51,lVar36,FUN_1003c5f68);
              lVar48 = local_220[1];
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(long *)(lVar41 + -0x10) = lVar36;
              _swift_bridgeObjectRetain(lVar48);
              pcVar49 = FUN_1003d0fb0;
              FUN_1003be79c(FUN_1003d0fb0,lVar41 + -0x20,lVar48);
              if ((*(char *)(unaff_x20 + local_1d8) == '\x01') && (*(long *)(pcVar49 + 0x10) == 1))
              {
                uVar51 = 0;
                local_f0 = PTR___swiftEmptyArrayStorage_100995ea0;
                puVar19 = PTR___swiftEmptyArrayStorage_100995ea0;
                lVar24 = local_1d0;
                do {
                  if (*(ulong *)(lVar11 + 0x10) <= uVar51) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb124);
                    (*pcVar30)();
                  }
                  FUN_100082394(lVar24,lVar35,FUN_1003c5f68);
                  if (*(long *)(pcVar49 + 0x10) == 0) {
LAB_1003ca03c:
                    FUN_1000d27dc(lVar35,FUN_1003c5f68);
                  }
                  else {
                    FUN_100082394(pcVar49 + ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
                                            ((ulong)*(byte *)(lVar25 + 0x50) ^ 0xffffffffffffffff)),
                                  lVar26,FUN_1003d0d4c);
                    __s10Foundation4DateV17timeIntervalSinceySdACF
                              ((long)*(int *)(lVar12 + 0x14),lVar35 + *(int *)(lVar13 + 0x14));
                    pcVar30 = (code *)ABS((double)pcVar30);
                    if ((1.0 < (double)pcVar30) ||
                       ((puVar2 = (ulong *)(lVar26 + *(int *)(lVar12 + 0x18)), uVar39 = *puVar2,
                        puVar3 = (ulong *)(lVar35 + *(int *)(lVar13 + 0x18)),
                        uVar39 != *puVar3 || puVar2[1] != puVar3[1] &&
                        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                   (), (uVar39 & 1) == 0)))) {
                      FUN_1000d27dc(lVar26,FUN_1003d0d4c);
                      goto LAB_1003ca03c;
                    }
                    puVar2 = (ulong *)(lVar26 + *(int *)(lVar12 + 0x1c));
                    uVar39 = puVar2[1];
                    if ((uVar39 == 0) ||
                       (uVar38 = *puVar2, puVar2 = (ulong *)(lVar35 + *(int *)(lVar13 + 0x1c)),
                       uVar38 == *puVar2 && uVar39 == puVar2[1])) {
                      FUN_1000d27dc(lVar26,FUN_1003d0d4c);
                    }
                    else {
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                ();
                      FUN_1000d27dc(lVar26,FUN_1003d0d4c);
                      if ((uVar38 & 1) == 0) goto LAB_1003ca03c;
                    }
                    FUN_1000823d8(lVar35,lVar34,FUN_1003c5f68);
                    puVar18 = puVar19;
                    _swift_isUniquelyReferenced_nonNull_native();
                    local_f0 = puVar19;
                    if (((ulong)puVar18 & 1) == 0) {
                      FUN_1003ffbbc(0,*(long *)(puVar19 + 0x10) + 1,1);
                    }
                    uVar39 = *(ulong *)(local_f0 + 0x10);
                    if (*(ulong *)(local_f0 + 0x18) >> 1 <= uVar39) {
                      FUN_1003ffbbc(1 < *(ulong *)(local_f0 + 0x18),uVar39 + 1,1);
                    }
                    puVar19 = local_f0;
                    *(ulong *)(local_f0 + 0x10) = uVar39 + 1;
                    FUN_1000823d8(lVar34,local_f0 + uVar39 * lVar40 + local_1c8,FUN_1003c5f68);
                  }
                  uVar51 = uVar51 + 1;
                  lVar24 = lVar24 + lVar40;
                } while (uVar14 != uVar51);
                lVar24 = *(long *)(puVar19 + 0x10);
                _swift_release(puVar19);
                bVar8 = lVar24 == 1;
                lVar24 = local_1c0;
                if ((bVar8) || (local_388 == local_390)) {
LAB_1003ca290:
                  puVar33 = local_280;
                  plVar37 = (long *)(lVar36 + *(int *)(lVar13 + 0x20));
                  lVar40 = *plVar37;
                  uVar51 = plVar37[1];
                  uVar9 = (uint)(uVar51 >> 0x20);
                  uVar42 = uVar9 >> 0x1e;
                  if (uVar9 >> 0x1e < 2) {
                    if (uVar42 == 0) {
                      uVar51 = uVar51 >> 0x30 & 0xff;
                    }
                    else {
                      iVar32 = (int)((ulong)lVar40 >> 0x20);
                      if (SBORROW4(iVar32,(int)lVar40)) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb230);
                        (*pcVar30)();
                      }
                      uVar51 = (ulong)(iVar32 - (int)lVar40);
                    }
joined_r0x0001003ca354:
                    if (*local_3a8 < 3) {
LAB_1003ca368:
                      if (SBORROW8(0xa00000,local_3a8[1])) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb228);
                        (*pcVar30)();
                      }
                      if ((long)uVar51 <= 0xa00000 - local_3a8[1]) {
                        if ((bVar8) && (*(long *)(pcVar49 + 0x10) != 0)) {
                          FUN_100082394(pcVar49 + ((ulong)*(byte *)(lVar25 + 0x50) + 0x20 &
                                                  ((ulong)*(byte *)(lVar25 + 0x50) ^
                                                  0xffffffffffffffff)),local_280,FUN_1003d0d4c);
                          _swift_bridgeObjectRelease(pcVar49);
                          uVar43 = *puVar33;
                          pcVar49 = (code *)puVar33[1];
                          _swift_bridgeObjectRetain(pcVar49);
                          FUN_1000d27dc(puVar33,FUN_1003d0d4c);
                        }
                        else {
                          _swift_bridgeObjectRelease(pcVar49);
                          uVar43 = 0;
                          pcVar49 = (code *)0x0;
                        }
                        FUN_1003cc7e4(lVar36,uVar43,pcVar49);
                        goto LAB_1003ca43c;
                      }
                    }
                  }
                  else {
                    if (uVar42 == 2) {
                      uVar51 = *(long *)(lVar40 + 0x18) - *(long *)(lVar40 + 0x10);
                      if (SBORROW8(*(long *)(lVar40 + 0x18),*(long *)(lVar40 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb234);
                        (*pcVar30)();
                      }
                      goto joined_r0x0001003ca354;
                    }
                    if (*local_3a8 < 3) {
                      uVar51 = 0;
                      goto LAB_1003ca368;
                    }
                  }
                  _swift_bridgeObjectRelease(pcVar49);
                  lVar40 = local_1e0 + 1;
                  lVar48 = local_1e0 + 1;
                  if (SCARRY8(local_1e0,1)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb208);
                    (*pcVar30)();
                  }
                }
                else {
LAB_1003ca43c:
                  _swift_bridgeObjectRelease(pcVar49);
                  lVar40 = local_1e0;
                  lVar48 = local_b8[0];
                }
              }
              else {
                if (local_388 == local_390) {
                  bVar8 = false;
                  goto LAB_1003ca290;
                }
                _swift_bridgeObjectRelease(pcVar49);
                lVar40 = local_1e0;
                lVar48 = local_b8[0];
              }
              local_b8[0] = lVar48;
              local_1e0 = lVar40;
              uVar51 = local_1b0 + 1;
              FUN_1000d27dc(lVar36,FUN_1003c5f68);
            } while (uVar51 != uVar14);
            pcVar30 = *(code **)(lVar28 + 0x68);
            if (0 < local_1e0) {
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(long **)(lVar41 + -0x10) = local_b8;
              *(long *)(lVar41 + -8) = unaff_x20;
              uVar14 = local_288;
              (*pcVar30)(local_288,2,lVar24);
              if (DAT_100a89358 != -1) {
                _swift_once(&DAT_100a89358,FUN_1003fba60);
              }
              IVar29 = DAT_100a8e090;
              _objc_msgSend(DAT_100a8e090,"lock");
              lVar24 = DAT_100a8e098;
              if (DAT_100a8e098 != 0) {
                _swift_retain(DAT_100a8e098);
                uVar51 = uVar14;
                FUN_1005cc2b8();
                if ((uVar51 & 1) == 0) {
                  _swift_release(lVar24);
                }
                else {
                  IVar15 = 0xd000000000000090;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
                  pcVar23 = "lastPathComponent";
                  IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                            (IVar15);
                  (*(code *)PTR____chkstk_darwin_100995498)(0);
                  *(code **)(lVar41 + -0x30) = FUN_1003d0fe4;
                  *(long *)(lVar41 + -0x28) = lVar41 + -0x20;
                  *(undefined8 *)(lVar41 + -0x50) = 0xe600000000000000;
                  *(undefined8 *)(lVar41 + -0x48) = 0x14f;
                  FUN_1005cc010(thunk_FUN_1003a85e4,lVar41 + -0x40,local_288,0x65746f6d65525555,
                                0xe800000000000000,IVar15,pcVar23,0x29286e616373);
                  _swift_release(lVar24);
                  uVar14 = local_288;
                  _swift_bridgeObjectRelease(pcVar23);
                }
              }
              _objc_msgSend(IVar29,"unlock");
              lVar24 = local_1c0;
              (**(code **)(lVar28 + 8))(uVar14,local_1c0);
            }
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(lVar41 + -0x30) = unaff_x20;
          *(long **)(lVar41 + -0x28) = local_80;
          *(undefined ***)(lVar41 + -0x20) = &local_88;
          *(long *)(lVar41 + -0x18) = lVar11;
          *(undefined1 **)(lVar41 + -0x10) = &local_89;
          uVar14 = local_250;
          (*pcVar30)(local_250,2,lVar24);
          if (DAT_100a89358 != -1) {
            _swift_once(&DAT_100a89358,FUN_1003fba60);
          }
          IVar29 = DAT_100a8e090;
          _objc_msgSend(DAT_100a8e090,"lock");
          lVar24 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            uVar51 = uVar14;
            FUN_1005cc2b8();
            if ((uVar51 & 1) == 0) {
              _swift_release(lVar24);
            }
            else {
              IVar15 = 0xd000000000000090;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
              pcVar23 = "lastPathComponent";
              IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar15);
              (*(code *)PTR____chkstk_darwin_100995498)(0);
              *(code **)(lVar41 + -0x50) = FUN_1003d0fcc;
              *(long *)(lVar41 + -0x48) = lVar41 + -0x40;
              *(undefined8 *)(lVar41 + -0x70) = 0xe600000000000000;
              *(undefined8 *)(lVar41 + -0x68) = 0x151;
              FUN_1005cc010(thunk_FUN_1003a85e4,lVar41 + -0x60,local_250,0x65746f6d65525555,
                            0xe800000000000000,IVar15,pcVar23,0x29286e616373);
              _swift_release(lVar24);
              _swift_bridgeObjectRelease(pcVar23);
              uVar14 = local_250;
            }
          }
          _objc_msgSend(IVar29,"unlock");
          _swift_bridgeObjectRelease(lVar11);
          pcVar49 = *(code **)(lVar28 + 8);
          (*pcVar49)(uVar14,local_1c0);
          IVar15 = local_1f0;
          if (local_388 != local_390) {
            _objc_msgSend(local_1f0,"lock");
            bVar31 = *(byte *)(unaff_x20 + local_1f8);
            _objc_msgSend(IVar15,"unlock");
            puVar19 = PTR___swiftEmptyArrayStorage_100995ea0;
            if ((bVar31 & 1) == 0) {
              uVar14 = *(ulong *)(unaff_x20 + local_430);
              if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2c0);
                (*pcVar30)();
              }
              if (*(ulong *)(local_438 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x1003cb2c4);
                (*pcVar30)();
              }
              uVar52 = *(undefined8 *)(local_438 + uVar14 * 8 + 0x20);
              *(ulong *)(unaff_x20 + local_430) = uVar14 + 1;
              FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
              uVar43 = *(undefined8 *)(unaff_x20 + 0x10);
              local_f0 = puVar19;
              puVar33 = &DAT_100a7cd48;
              FUN_100005c90(&DAT_100a7cd48,
                            PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa_100995fa8,
                            PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVs10SetAlgebraACMc_100995fb8
                           );
              puVar19 = &DAT_100a7cd50;
              FUN_100004bb4(&DAT_100a7cd50,&DAT_100822530);
              puVar21 = &DAT_100a7cd58;
              FUN_1000d61d8(&DAT_100a7cd58,&DAT_100a7cd50,&DAT_100822530);
              lVar24 = local_330;
              lVar11 = local_340;
              __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                        (local_340,&local_f0,puVar19,puVar21,local_330,puVar33);
              lVar34 = lVar11;
              __sSo18OS_dispatch_sourceC8DispatchE15makeTimerSource5flags5queueSo0a1_b1_C6_timer_pAbCE0F5FlagsV_So0a1_b1_I0CSgtFZ
                        (lVar11,uVar43);
              (**(code **)(local_338 + 8))(lVar11,lVar24);
              lVar27 = lVar34;
              _swift_getObjectType(lVar34);
              lVar11 = local_328;
              __s8Dispatch0A4TimeV3nowACyFZ(local_328);
              lVar24 = local_318;
              __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_318,uVar52,lVar11);
              lVar12 = local_310;
              pcVar30 = *(code **)(local_320 + 8);
              (*pcVar30)(lVar11,local_310);
              lVar26 = local_2f0;
              lVar25 = local_2f8;
              lVar11 = local_308;
              (**(code **)(local_2f8 + 0x68))
                        (local_308,
                         *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO5neveryA2CmFWC_100995f18,
                         local_2f0);
              lVar13 = local_300;
              FUN_10041459c(local_300,lVar27);
              __sSo24OS_dispatch_source_timerP8DispatchE8schedule8deadline9repeating6leewayyAC0E4TimeV_AC0eJ8IntervalOAKtF
                        (lVar24,lVar11,lVar13,lVar27);
              pcVar49 = *(code **)(lVar25 + 8);
              (*pcVar49)(lVar13,lVar26);
              (*pcVar49)(lVar11,lVar26);
              (*pcVar30)(lVar24,lVar12);
              puVar19 = &DAT_1009b9548;
              _swift_allocObject(&DAT_1009b9548,0x18,7);
              _swift_weakInit(puVar19 + 0x10,unaff_x20);
              local_d0 = FUN_1003d0fdc;
              local_f0 = PTR___NSConcreteStackBlock_100995490;
              puStack_e8 = (undefined *)0x42000000;
              local_e0 = FUN_1000acdb4;
              local_d8 = &DAT_1009b9588;
              local_c8 = puVar19;
              aBlock = __Block_copy(&local_f0);
              _swift_retain(puVar19);
              lVar11 = local_2e8;
              __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_2e8,lVar27);
              lVar24 = local_2d0;
              thunk_FUN_1001e7cc4(local_2d0,lVar27);
              __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
                        (lVar11,lVar24,aBlock,lVar27);
              __Block_release(aBlock);
              (**(code **)(local_2c8 + 8))(lVar24,local_2c0);
              (**(code **)(local_2e0 + 8))(lVar11,local_2d8);
              puVar18 = local_c8;
              _swift_release(puVar19);
              _swift_release(puVar18);
              uVar43 = *(undefined8 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer);
              *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer) = lVar34;
              _swift_unknownObjectRetain(lVar34);
              _swift_unknownObjectRelease(uVar43);
              __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(lVar27);
              _swift_unknownObjectRelease(lVar34);
              lVar24 = local_238;
              goto LAB_1003caf90;
            }
          }
          lVar11 = _TtC8UUCommon18IPSReportCollector::timer;
          lVar24 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer);
          if (lVar24 == 0) {
            uVar43 = 0;
          }
          else {
            lVar12 = lVar24;
            _swift_getObjectType(lVar24);
            _swift_unknownObjectRetain(lVar24);
            __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar12);
            _swift_unknownObjectRelease(lVar24);
            uVar43 = *(undefined8 *)(unaff_x20 + lVar11);
          }
          *(undefined8 *)(unaff_x20 + lVar11) = 0;
          _swift_unknownObjectRelease(uVar43);
          uVar14 = local_278;
          (*pcVar30)(local_278,2,local_1c0);
          _objc_msgSend(IVar29,"lock");
          lVar24 = local_238;
          lVar11 = DAT_100a8e098;
          if (DAT_100a8e098 != 0) {
            _swift_retain(DAT_100a8e098);
            uVar51 = uVar14;
            FUN_1005cc2b8();
            if ((uVar51 & 1) == 0) {
              _swift_release(lVar11);
            }
            else {
              IVar15 = 0xd000000000000090;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000090,(ulong)local_408 | 0x8000000000000000);
              pcVar23 = "lastPathComponent";
              IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar15);
              *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
              *(undefined8 *)(lVar41 + -8) = 0x155;
              FUN_1005cc010(FUN_1003fe05c,0,uVar14,0x65746f6d65525555,0xe800000000000000,IVar15,
                            pcVar23,0x29286e616373);
              _swift_release(lVar11);
              lVar24 = local_238;
              _swift_bridgeObjectRelease(pcVar23);
            }
          }
          _objc_msgSend(IVar29,"unlock");
          (*pcVar49)(uVar14,local_1c0);
LAB_1003caf90:
          (*local_398)(local_1b8,lVar24);
          FUN_100040bb4(local_228,&DAT_100a8c688,&DAT_100822420);
          _swift_bridgeObjectRelease(local_88);
          return;
        }
      }
      lVar11 = *(long *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::timer);
      if (lVar11 == 0) {
        uVar43 = 0;
      }
      else {
        lVar12 = lVar11;
        _swift_getObjectType(lVar11);
        _swift_unknownObjectRetain(lVar11);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar12);
        _swift_unknownObjectRelease(lVar11);
        uVar43 = *(undefined8 *)(unaff_x20 + lVar45);
      }
      *(undefined8 *)(unaff_x20 + lVar45) = 0;
      _swift_unknownObjectRelease(uVar43);
      (**(code **)(lVar28 + 0x68))(uVar46,2,lVar24);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar29 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar11 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar14 = uVar46;
        FUN_1005cc2b8();
        if ((uVar14 & 1) == 0) {
          _swift_release(lVar11);
        }
        else {
          IVar15 = 0xd000000000000090;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000090,0x80000001008b3cb0);
          pcVar23 = "lastPathComponent";
          IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar15);
          *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
          *(undefined8 *)(lVar41 + -8) = 0xe8;
          FUN_1005cc010(FUN_1003fe0d8,0,uVar46,0x65746f6d65525555,0xe800000000000000,IVar15,pcVar23,
                        0x29286e616373);
          _swift_release(lVar11);
          _swift_bridgeObjectRelease(pcVar23);
        }
      }
      _objc_msgSend(IVar29,"unlock");
      pcVar30 = *(code **)(lVar28 + 8);
      uVar51 = uVar46;
      goto LAB_1003c7ae8;
    }
  }
  (**(code **)(lVar28 + 0x68))(uVar38,2,lVar24);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar29 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar11 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar14 = uVar38;
    FUN_1005cc2b8();
    if ((uVar14 & 1) == 0) {
      _swift_release(lVar11);
    }
    else {
      IVar15 = 0xd000000000000090;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0);
      pcVar23 = "lastPathComponent";
      IVar15 = _objc_msgSend(IVar15,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar15);
      *(undefined8 *)(lVar41 + -0x10) = 0xe600000000000000;
      *(undefined8 *)(lVar41 + -8) = 0xdc;
      FUN_1005cc010(FUN_1003fe1d0,0,uVar38,0x65746f6d65525555,0xe800000000000000,IVar15,pcVar23,
                    0x29286e616373);
      _swift_release(lVar11);
      _swift_bridgeObjectRelease(pcVar23);
    }
  }
  _objc_msgSend(IVar29,"unlock");
  pcVar30 = *(code **)(lVar28 + 8);
  uVar51 = uVar38;
LAB_1003c7ae8:
  (*pcVar30)(uVar51,lVar24);
  return;
}

