// rea decompile_all
// name: FUN_1003bf0a8
// address: 0x1003bf0a8
// body: available
// range: 0x1003bf0a8-0x1003c0563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003bfcc8) */
/* WARNING: Removing unreachable block (ram,0x0001003c0530) */
/* WARNING: Removing unreachable block (ram,0x0001003bfd30) */
/* WARNING: Removing unreachable block (ram,0x0001003bfd50) */
/* WARNING: Removing unreachable block (ram,0x0001003bff00) */
/* WARNING: Removing unreachable block (ram,0x0001003bfd64) */
/* WARNING: Removing unreachable block (ram,0x0001003bff08) */
/* WARNING: Removing unreachable block (ram,0x0001003c0548) */

void FUN_1003bf0a8(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  void *aBlock;
  undefined8 uVar20;
  long *plVar21;
  byte *pbVar22;
  ID IVar23;
  code *pcVar24;
  char *pcVar25;
  undefined4 in_w3;
  long extraout_x8;
  byte *pbVar26;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar27;
  long extraout_x8_02;
  long lVar28;
  long lVar29;
  long extraout_x8_03;
  long lVar30;
  long extraout_x8_04;
  long lVar31;
  long extraout_x8_05;
  long lVar32;
  long extraout_x8_06;
  long lVar33;
  code *pcVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar41;
  code *pcVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  undefined1 auStack_1e0 [16];
  long alStack_1d0 [2];
  byte abStack_1c0 [8];
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 *local_1a0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c0;
  long lStack_b8;
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar15 = &DAT_100a8c198;
  FUN_100004bb4(&DAT_100a8c198,&DAT_100822510);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar26 = abStack_1c0 + -extraout_x8;
  lVar5 = 0;
  FUN_1005cac3c();
  lVar43 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar43 + 0x40));
  uVar47 = (long)pbVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar36 = uVar47 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = 0;
  local_1a8 = uVar36 - extraout_x12_00;
  FUN_1003c5a40();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar44 = (uVar36 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar27 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar27 + 0x40));
  lVar37 = lVar44 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar28 = lVar37 - extraout_x12_01;
  lVar8 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar29 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar29 + 0x40));
  lVar30 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar31 = lVar30 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar46 = lVar31 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar32 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar32 + 0x40));
  lVar33 = lVar46 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lVar41 = *(long *)(unaff_x20 + 0x78);
  if (lVar41 != 0) {
    _swift_retain(lVar41);
    FUN_1003c1c30(0,0);
    _swift_release(lVar41);
  }
  IVar11 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar12 = 0x656c646e75424643;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c646e75424643,0xef6e6f6973726556);
  IVar11 = NSBundle::objectForInfoDictionaryKey_(IVar11,"objectForInfoDictionaryKey:",uVar12);
  if (IVar11 == 0) {
    uStack_88 = 0;
    local_90 = (undefined8 *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar11);
    _swift_unknownObjectRelease(IVar11);
  }
  lStack_b8 = uStack_88;
  local_c0 = local_90;
  local_a8 = (undefined *)lStack_78;
  local_b0 = (code *)uStack_80;
  if (lStack_78 == 0) {
    FUN_100040bb4(&local_c0,&DAT_100a766e0,&DAT_10080bdb0);
    uVar20 = 0;
    uVar12 = 0;
  }
  else {
    puVar17 = &local_d8;
    puVar15 = PTR___sSSN_1009957f8;
    _swift_dynamicCast(puVar17,&local_c0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    in_w3 = SUB84(puVar15,0);
    uVar20 = uStack_d0;
    uVar12 = local_d8;
    if ((int)puVar17 == 0) {
      uVar12 = 0;
      uVar20 = 0;
    }
  }
  lVar41 = *(long *)(unaff_x20 + 0x48);
  if (lVar41 == 0) {
    _swift_bridgeObjectRelease();
    (**(code **)(lVar43 + 0x68))(uVar36,4,lVar5);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar11 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar6 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar45 = uVar36;
      FUN_1005cc2b8();
      if ((uVar45 & 1) == 0) {
        _swift_release(lVar6);
      }
      else {
        IVar23 = 0xd00000000000008a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008a,0x80000001008b3b80)
        ;
        pcVar25 = "lastPathComponent";
        IVar23 = _objc_msgSend(IVar23,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar23);
        *(undefined8 *)(lVar33 + -0x10) = 0xe700000000000000;
        *(undefined8 *)(lVar33 + -8) = 0x52;
        in_w3 = 0x65525555;
        FUN_1005cc010(FUN_1003fdbfc,0,uVar36,0x65746f6d65525555,0xe800000000000000,IVar23,pcVar25,
                      0x29287472617473);
        _swift_release(lVar6);
        _swift_bridgeObjectRelease(pcVar25);
      }
    }
    _objc_msgSend(IVar11,"unlock");
    (**(code **)(lVar43 + 8))(uVar36,lVar5);
  }
  else {
    uVar38 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar39 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar40 = *(undefined8 *)(unaff_x20 + 0x38);
    local_1b8 = lVar44;
    _swift_bridgeObjectRetain(uVar40);
    _swift_bridgeObjectRetain_n(lVar41,2);
    __s10Foundation4DateVACycfC(lVar33);
    puVar17 = (undefined8 *)&DAT_100a8af60;
    FUN_100004bb4(&DAT_100a8af60,&DAT_10081f7f0);
    _swift_initStaticObject();
    lVar44 = 0;
    local_1a0 = puVar17;
    FUN_1003c5934();
    _swift_allocObject();
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __s8Dispatch0A3QoSV7utilityACvgZ(lVar46);
    puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_c0 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
    puVar17 = &DAT_100a750d0;
    FUN_100005c90(&DAT_100a750d0,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar15 = &DAT_100a750d8;
    FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
    puVar13 = &DAT_100a750e0;
    FUN_1000d61d8(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar31,&local_c0,puVar15,puVar13,lVar9,puVar17);
    (**(code **)(lVar29 + 0x68))
              (lVar30,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar8);
    uVar14 = 0xd00000000000001f;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001f,0x80000001008b3c70,lVar46,lVar31,lVar30,0);
    *(undefined8 *)(lVar44 + 0x10) = uVar14;
    puVar17 = (undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::state);
    puVar15 = puVar16;
    FUN_100406944();
    *puVar17 = puVar15;
    puVar17[1] = puVar16;
    iVar3 = *(int *)(lVar6 + 0x18);
    lVar8 = 0;
    FUN_1003c63e0();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)puVar17 + (long)iVar3,1,1,lVar8);
    *(undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::timer) = 0;
    *(undefined1 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::stopped) = 0;
    lVar8 = _TtC8UUCommon18IPSReportCollector::stopLock;
    puVar15 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar11 = _objc_msgSend((ID)puVar15,"init");
    *(ID *)(lVar44 + lVar8) = IVar11;
    *(undefined1 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::stopRequested) = 0;
    *(undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::attempt) = 0;
    puVar17 = (undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::budget);
    *puVar17 = 0;
    puVar17[1] = 0;
    lVar8 = _TtC8UUCommon18IPSReportCollector::pendingReports;
    FUN_100406ad0();
    *(undefined **)(lVar44 + lVar8) = puVar16;
    *(undefined1 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::pendingAssociationAllowed) = 1;
    *(undefined8 *)(lVar44 + 0x18) = uVar38;
    *(long *)(lVar44 + 0x20) = lVar41;
    local_1b0 = lVar41;
    (**(code **)(lVar32 + 0x10))(lVar44 + _TtC8UUCommon18IPSReportCollector::startup,lVar33,lVar10);
    *(undefined8 **)(lVar44 + _TtC8UUCommon18IPSReportCollector::retryDelays) = local_1a0;
    puVar17 = (undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::submission);
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined8 *)(lVar44 + 0x28) = uVar39;
    *(undefined8 *)(lVar44 + 0x30) = uVar40;
    *(undefined8 *)(lVar44 + 0x38) = uVar12;
    *(undefined8 *)(lVar44 + 0x40) = uVar20;
    IVar11 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    puVar17 = (undefined8 *)
              NSFileManager::URLsForDirectory_inDomains_(IVar11,"URLsForDirectory:inDomains:",5,1);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar17,lVar7);
    puVar15 = &DAT_100a75a28;
    FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
    lVar9 = *(long *)(lVar27 + 0x48);
    uVar36 = (ulong)*(byte *)(lVar27 + 0x50);
    uVar45 = uVar36 + 0x20 & (uVar36 ^ 0xffffffffffffffff);
    puVar16 = puVar15;
    _swift_allocObject();
    *(undefined8 *)(puVar16 + 0x18) = 2;
    *(undefined8 *)(puVar16 + 0x10) = 1;
    pcVar24 = (code *)0xe800000000000000;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC
              (puVar16 + uVar45,0x7972617262694c2f,0xe800000000000000);
    local_c0 = puVar17;
    FUN_10005f374(puVar16);
    lVar8 = local_c0[2];
    if (lVar8 == 0) {
      puVar17 = local_c0;
      _swift_bridgeObjectRelease();
      puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_1a0 = local_c0;
      pcVar24 = (code *)((long)local_c0 + uVar45);
      pcVar34 = *(code **)(lVar27 + 0x10);
      puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        (*pcVar34)(lVar28,pcVar24,lVar7);
        __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                  (lVar37,0xd000000000000016,0x80000001008b3c90,1);
        puVar18 = puVar15;
        _swift_allocObject(puVar15,uVar45 + lVar9 * 2,uVar36 | 7);
        *(undefined8 *)(puVar18 + 0x18) = 4;
        *(undefined8 *)(puVar18 + 0x10) = 2;
        puVar1 = puVar18 + uVar45;
        (*pcVar34)(puVar1,lVar37,lVar7);
        __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
                  (puVar1 + lVar9,0x64657269746552,0xe700000000000000,1);
        pcVar42 = *(code **)(lVar27 + 8);
        (*pcVar42)(lVar37,lVar7);
        (*pcVar42)(lVar28,lVar7);
        lVar29 = *(long *)(puVar16 + 0x10);
        if (SCARRY8(lVar29,2)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1003c04c8);
          (*pcVar24)();
        }
        puVar19 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar19 == 0) ||
           (uVar35 = *(ulong *)(puVar16 + 0x18) >> 1, (long)uVar35 < lVar29 + 2)) {
          FUN_100033f0c();
          uVar35 = *(ulong *)(puVar19 + 0x18) >> 1;
          puVar16 = puVar19;
        }
        if ((long)(uVar35 - *(long *)(puVar16 + 0x10)) < 2) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1003c04cc);
          (*pcVar24)();
        }
        _swift_arrayInitWithCopy
                  (puVar16 + *(long *)(puVar16 + 0x10) * lVar9 + uVar45,puVar1,2,lVar7);
        _swift_bridgeObjectRelease(puVar18);
        if (SCARRY8(*(long *)(puVar16 + 0x10),2)) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1003c04d0);
          (*pcVar24)();
        }
        *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 2;
        pcVar24 = pcVar24 + lVar9;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      puVar17 = local_1a0;
      _swift_bridgeObjectRelease(local_1a0);
    }
    *(undefined **)(lVar44 + _TtC8UUCommon18IPSReportCollector::roots) = puVar16;
    if (DAT_100a89338 != -1) {
      puVar17 = &DAT_100a89338;
      pcVar24 = FUN_1003e728c;
      _swift_once(&DAT_100a89338,FUN_1003e728c);
    }
    IVar11 = DAT_100b368f0;
    if (DAT_100b368f0 != 0) {
      FUN_1003c5534();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar24);
      pcVar25 = "getDataForKey:";
      IVar11 = _objc_msgSend(IVar11,"getDataForKey:",puVar17);
      if (IVar11 != 0) {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar11);
        uVar12 = 0;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONDecoderCACycfc();
        puVar15 = &DAT_100a8c1a0;
        FUN_100005c90(&DAT_100a8c1a0,FUN_1003c5a40,&TargetProtocolConformanceDescriptor_1008224a8);
        lVar7 = local_1b8;
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (local_1b8,lVar6,IVar11,pcVar25,lVar6,puVar15);
        FUN_100006cdc(IVar11,pcVar25);
        _swift_release(uVar12);
        lVar6 = _TtC8UUCommon18IPSReportCollector::state;
        _swift_beginAccess(lVar44 + _TtC8UUCommon18IPSReportCollector::state,&local_c0,0x21,0);
        FUN_1003c17a0(lVar7,lVar44 + lVar6);
        _swift_endAccess(&local_c0);
      }
    }
    puVar17 = (undefined8 *)(lVar44 + _TtC8UUCommon18IPSReportCollector::state);
    in_w3 = 0;
    _swift_beginAccess(puVar17,&local_90,1);
    uVar12 = *puVar17;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar33 + -0x10) = lVar33;
    _swift_bridgeObjectRetain(uVar12);
    pcVar24 = FUN_1003c1760;
    FUN_1003c13c4(FUN_1003c1760,lVar33 + -0x20,uVar12);
    _swift_bridgeObjectRelease(uVar12);
    uVar12 = *puVar17;
    *puVar17 = pcVar24;
    _swift_bridgeObjectRelease(uVar12);
    uVar12 = puVar17[1];
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar33 + -0x10) = lVar33;
    _swift_bridgeObjectRetain(uVar12);
    pcVar24 = FUN_1003c177c;
    FUN_1003be79c(FUN_1003c177c,lVar33 + -0x20,uVar12);
    uVar12 = puVar17[1];
    puVar17[1] = pcVar24;
    _swift_bridgeObjectRelease(uVar12);
    (**(code **)(lVar32 + 8))(lVar33,lVar10);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
    *(long *)(unaff_x20 + 0x78) = lVar44;
    _swift_release(uVar12);
    FUN_1003d2c9c(0);
    _swift_allocObject();
    FUN_1003d1da0(0x40ac200000000000,uVar38,local_1b0,10);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x80);
    *(undefined8 *)(unaff_x20 + 0x80) = uVar38;
    _swift_release(uVar12);
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  puVar15 = &DAT_1009b9338;
  _swift_allocObject(&DAT_1009b9338,0x20,7);
  *(long *)(puVar15 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar15 + 0x18) = uVar12;
  local_a0 = FUN_1003c13a4;
  local_c0 = (undefined8 *)PTR___NSConcreteStackBlock_100995490;
  lStack_b8 = 0x42000000;
  local_b0 = thunk_FUN_1000a8c3c;
  local_a8 = &DAT_1009b9350;
  local_98 = puVar15;
  aBlock = __Block_copy(&local_c0);
  puVar15 = local_98;
  _swift_retain_n(uVar12,2);
  _swift_retain(unaff_x20);
  _swift_release(puVar15);
  SentrySDK::startWithConfigureOptions_
            ((ID)&objc::class_t::SentrySDK,"startWithConfigureOptions:",(ID)aBlock,in_w3);
  __Block_release(aBlock);
  lVar6 = *(long *)(unaff_x20 + 0x78);
  if (lVar6 != 0) {
    _swift_retain(lVar6);
    FUN_1003c2700();
    _swift_release(lVar6);
  }
  SentrySDK::startSession((ID)&objc::class_t::SentrySDK,"startSession");
  uVar20 = 0;
  FUN_100401b14(0);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar11 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  FUN_1003fd404(&local_c0,uVar20);
  lVar6 = lStack_b8;
  puVar17 = local_c0;
  pcVar25 = "unlock";
  _objc_msgSend(IVar11,"unlock");
  if (lVar6 != 0) {
    if (DAT_100a89308 != -1) {
      pcVar24 = FUN_1003dc3b8;
      _swift_once(&DAT_100a89308,FUN_1003dc3b8);
      pcVar25 = (char *)pcVar24;
    }
    plVar4 = DAT_100a8cd10;
    plVar21 = DAT_100a8cd10;
    _swift_retain(DAT_100a8cd10);
    FUN_1003d8888();
    (**(code **)(*plVar4 + 0x128))(pbVar26);
    _swift_release(plVar4);
    FUN_100006cc8(plVar21,pcVar25);
    lVar7 = 0;
    FUN_1003f84d4();
    pbVar22 = pbVar26;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(pbVar26,1,lVar7);
    if ((int)pbVar22 == 0) {
      bVar2 = *pbVar26;
      FUN_100040bb4(pbVar26,&DAT_100a8c198,&DAT_100822510);
      if ((bVar2 != 2) && ((bVar2 & 1) == 0)) {
        _swift_bridgeObjectRelease(lVar6);
        (**(code **)(lVar43 + 0x68))(uVar47,2,lVar5);
        _objc_msgSend(IVar11,"lock");
        lVar6 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          uVar36 = uVar47;
          FUN_1005cc2b8();
          if ((uVar36 & 1) == 0) {
            _swift_release(lVar6);
          }
          else {
            IVar23 = 0xd00000000000008a;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000008a,0x80000001008b3b80);
            pcVar25 = "lastPathComponent";
            IVar23 = _objc_msgSend(IVar23,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar23);
            *(undefined8 *)(lVar33 + -0x10) = 0xe700000000000000;
            *(undefined8 *)(lVar33 + -8) = 0x8e;
            FUN_1005cc010(FUN_1003fdc78,0,uVar47,0x65746f6d65525555,0xe800000000000000,IVar23,
                          pcVar25,0x29287472617473);
            _swift_release(lVar6);
            _swift_bridgeObjectRelease(pcVar25);
          }
        }
        _objc_msgSend(IVar11,"unlock");
        _swift_release(uVar12);
        (**(code **)(lVar43 + 8))(uVar47,lVar5);
        return;
      }
    }
    else {
      FUN_100040bb4(pbVar26,&DAT_100a8c198,&DAT_100822510);
    }
    local_c0 = (undefined8 *)0x0;
    lStack_b8 = -0x2000000000000000;
    __ss11_StringGutsV4growyySiF(0x3c);
    __sSS6appendyySSF(0x100000000000003a,0x80000001008b3c30);
    __sSS6appendyySSF(puVar17,lVar6);
    _swift_bridgeObjectRelease(lVar6);
    lVar5 = lStack_b8;
    puVar17 = local_c0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_c0,lStack_b8);
    _swift_bridgeObjectRelease(lVar5);
    SentrySDK::captureMessage_((ID)&objc::class_t::SentrySDK,"captureMessage:",(ID)puVar17);
  }
  _swift_release(uVar12);
  return;
}

