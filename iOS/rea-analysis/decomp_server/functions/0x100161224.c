// rea decompile_all
// name: FUN_100161224
// address: 0x100161224
// body: available
// range: 0x100161224-0x100161ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100161224(uint param_1)

{
  undefined4 uVar1;
  code cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  ulong uVar7;
  code **ppcVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  code *pcVar27;
  long lVar28;
  undefined1 auStack_470 [16];
  uint auStack_460 [4];
  ulong auStack_450 [4];
  ulong local_430;
  undefined *local_428;
  undefined *local_420;
  code **local_418;
  code *local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined7 uStack_397;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [192];
  code *local_1d0;
  undefined8 uStack_1c8;
  code *local_1c0;
  undefined *local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_90;
  undefined1 local_88;
  
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar12 = (undefined8 *)((long)auStack_450 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  lVar16 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  lVar28 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar26 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar28 - extraout_x8_02;
  IVar6 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar6 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar26 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar26 + 0x10);
    puVar24 = &DAT_10099fae8;
    _swift_allocObject(&DAT_10099fae8,0x1c,7);
    *(undefined **)(puVar24 + 0x10) = puVar26;
    *(uint *)(puVar24 + 0x18) = param_1;
    local_1b0 = FUN_10016bdf4;
    local_1d0 = (code *)PTR___NSConcreteStackBlock_100995490;
    uStack_1c8 = 0x42000000;
    local_1c0 = FUN_1000acdb4;
    local_1b8 = &DAT_10099fb00;
    puStack_1a8 = puVar24;
    pvVar9 = __Block_copy(&local_1d0);
    _swift_release(puStack_1a8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar28);
    local_1d0 = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
    puVar12 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar26 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar13 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar16,&local_1d0,puVar26,puVar13,lVar4,puVar12);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar28,lVar16,pvVar9);
    __Block_release(pvVar9);
    (**(code **)(lVar22 + 8))(lVar16,lVar4);
    (**(code **)(lVar25 + 8))(lVar28,lVar5);
    return;
  }
  puVar13 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks);
  _swift_beginAccess(puVar13,auStack_2a8,0,0);
  uVar7 = (ulong)param_1;
  FUN_100152fd0(uVar7,puVar13[1]);
  if ((uVar7 & 1) != 0) {
    uVar7 = (ulong)param_1;
    FUN_100152fd0(uVar7,*puVar13);
    if ((uVar7 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(lVar20 + -0x10) = param_1;
      FUN_1003fb48c(FUN_10016be44,lVar20 + -0x20,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001c,0x8000000100894430,0x291,0);
      return;
    }
  }
  auStack_450[2] = lVar3;
  _swift_beginAccess(puVar13,&local_1d0,0x21,0);
  uVar7 = (ulong)param_1;
  FUN_1001df654();
  auStack_450[1] = uVar7;
  if ((uVar7 >> 0x20 & 1) == 0) {
    puVar26 = (undefined *)(ulong)param_1;
    FUN_10006d93c(&local_3a8,puVar26);
    FUN_10004ba68(lVar20,puVar26);
    FUN_100040bb4(lVar20,&DAT_100a76718,&DAT_10080ccc0);
    FUN_1001df654(puVar26);
    ppcVar8 = &local_1d0;
    _swift_endAccess();
    FUN_1001533d4();
    FUN_10013c050();
    if (puVar26 != (undefined *)0x0) {
      if ((ulong)puVar26 >> 0x3e == 0) {
        puVar24 = *(undefined **)((undefined *)((ulong)puVar26 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar24 = puVar26;
        if (-1 < (long)puVar26) {
          puVar24 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (puVar24 != (undefined *)0x0) {
        if ((long)puVar24 < 1) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x100161ec4);
          (*pcVar27)();
        }
        puVar23 = (undefined *)0x0;
        uVar7 = (ulong)puVar26 & 0xc000000000000001;
        auStack_450[3] = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper;
        local_430 = uVar7;
        local_428 = puVar24;
        local_420 = puVar26;
        local_418 = ppcVar8;
        do {
          if (uVar7 == 0) {
            puVar21 = *(undefined **)(puVar26 + (long)puVar23 * 8 + 0x20);
            _swift_retain(puVar21);
            lVar3 = *(long *)(puVar21 + 0x88);
          }
          else {
            puVar21 = puVar23;
            FUN_10016a034(puVar23,puVar26);
            lVar3 = *(long *)(puVar21 + 0x88);
          }
          if ((lVar3 != 0) &&
             ((*(byte *)(lVar3 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::isDirectory) &
              1) == 0)) {
            uVar18 = *(undefined8 *)
                      (lVar3 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
            uVar15 = ((undefined8 *)
                     (lVar3 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
            uVar17 = *(undefined8 *)((long)ppcVar8 + auStack_450[3]);
            uVar1 = *(undefined4 *)(puVar21 + 0x14);
            _swift_bridgeObjectRetain();
            FUN_10018c264();
            puVar26 = &DAT_10099fb60;
            _swift_allocObject(&DAT_10099fb60,0x18,7);
            _swift_weakInit(puVar26 + 0x10,uVar17);
            puVar24 = &DAT_10099fb88;
            _swift_allocObject(&DAT_10099fb88,0x30,7);
            *(undefined **)(puVar24 + 0x10) = puVar26;
            *(undefined4 *)(puVar24 + 0x18) = uVar1;
            *(undefined8 *)(puVar24 + 0x20) = uVar18;
            *(undefined8 *)(puVar24 + 0x28) = uVar15;
            local_1b0 = FUN_10016be34;
            local_1d0 = (code *)PTR___NSConcreteStackBlock_100995490;
            uStack_1c8 = 0x42000000;
            local_1c0 = FUN_1000acdb4;
            local_1b8 = &DAT_10099fba0;
            puStack_1a8 = puVar24;
            pvVar9 = __Block_copy(&local_1d0);
            _swift_retain(puVar26);
            __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar28);
            local_3a8 = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
            puVar13 = &DAT_100a75a90;
            FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
            puVar10 = &DAT_100a75a98;
            FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
            puVar11 = &DAT_100a75aa0;
            FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
            puVar24 = local_428;
            __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                      (lVar16,&local_3a8,puVar10,puVar11,lVar4,puVar13);
            __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                      (0,lVar28,lVar16,pvVar9);
            __Block_release(pvVar9);
            _swift_release(puVar21);
            ppcVar8 = local_418;
            (**(code **)(lVar22 + 8))(lVar16,lVar4);
            (**(code **)(lVar25 + 8))(lVar28,lVar5);
            puVar21 = puStack_1a8;
            uVar7 = local_430;
            _swift_release(puVar26);
            puVar26 = local_420;
          }
          _swift_release(puVar21);
          puVar23 = puVar23 + 1;
        } while (puVar24 != puVar23);
      }
      _swift_bridgeObjectRelease(puVar26);
    }
  }
  else {
    _swift_endAccess(&local_1d0);
  }
  lVar3 = _TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
  lVar4 = *(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    puVar26 = &DAT_100a75aa8;
    FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
    FUN_100407cdc(&local_1d0,FUN_10016c5cc,lVar4,puVar26);
    _swift_release(lVar4);
    if ((((ulong)local_1d0 & 0x100000000) == 0) && ((uint)local_1d0 == param_1)) {
      lVar4 = *(long *)(unaff_x20 + lVar3);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        _swift_retain(lVar4);
        FUN_100407cdc(FUN_10016c5e0,lVar4,PTR___sytN_100995e90 + 8);
        _swift_release(lVar4);
        lVar4 = *(long *)(unaff_x20 + lVar3);
      }
      *(undefined8 *)(unaff_x20 + lVar3) = 0;
      _swift_release();
      FUN_1001533d4();
      uVar18 = *(undefined8 *)
                (lVar4 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
      local_3a8 = (code *)CONCAT44(local_3a8._4_4_,param_1);
      _swift_retain(uVar18);
      FUN_1003e37e8(&local_1d0,&local_3a8);
      _swift_release(uVar18);
      pcVar27 = local_1d0;
      if (local_1d0 != (code *)0x0) {
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar26 = &DAT_10099f868;
        _swift_allocObject(&DAT_10099f868,0x18,7);
        _swift_unknownObjectWeakInit(puVar26 + 0x10,lVar4);
        puVar24 = &DAT_10099fb38;
        _swift_allocObject(&DAT_10099fb38,0x20,7);
        *(code **)(puVar24 + 0x10) = pcVar27;
        *(undefined **)(puVar24 + 0x18) = puVar26;
        _swift_retain(pcVar27);
        _swift_retain(puVar26);
        pcVar14 = thunk_FUN_10016bb80;
        FUN_1003f1064(0x3ff0000000000000,thunk_FUN_10016bb80,puVar24);
        _swift_release(pcVar27);
        _swift_release(pcVar14);
        _swift_release(puVar26);
        _swift_release(puVar24);
      }
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(uint *)(lVar20 + -0x10) = param_1;
  pcVar27 = FUN_10016be00;
  FUN_1003fb45c(FUN_10016be00,lVar20 + -0x20,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000001c,0x8000000100894430,0x29b,7);
  if ((auStack_450[1] >> 0x20 & 1) == 0) {
    FUN_1001533d4();
    uVar18 = *(undefined8 *)
              (pcVar27 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_3a8 = (code *)CONCAT44(local_3a8._4_4_,param_1);
    _swift_retain(uVar18);
    FUN_1003e37e8(&local_1d0,&local_3a8);
    _swift_release(uVar18);
    if ((local_1d0 != (code *)0x0) &&
       (cVar2 = local_1d0[_TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result],
       pcVar27 = local_1d0, _swift_release(), cVar2 == (code)0x1)) goto LAB_100161bd4;
  }
  else {
LAB_100161bd4:
    FUN_1001533d4();
    uVar18 = *(undefined8 *)
              (pcVar27 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_3a8 = (code *)CONCAT44(local_3a8._4_4_,param_1);
    _swift_retain(uVar18);
    FUN_1003e37e8(&local_1d0,&local_3a8);
    _swift_release(uVar18);
    if ((local_1d0 != (code *)0x0) &&
       (cVar2 = local_1d0[_TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result],
       _swift_release(), cVar2 != (code)0x0)) goto LAB_100161d00;
  }
  pcVar27 = FUN_10016207c;
  FUN_1003fb45c(FUN_10016207c,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000001c,
                0x8000000100894430,0x29d,7);
  FUN_100153444();
  pcVar14 = pcVar27 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (pcVar14 == (code *)0x0) {
    _swift_release(pcVar27);
  }
  else {
    local_d0 = (ulong)param_1;
    local_1d0 = (code *)CONCAT71(local_1d0._1_7_,1);
    uStack_c0 = 0xc000000000000000;
    local_c8 = 0;
    local_90 = 0x1000000000000000;
    local_88 = 1;
    FUN_100193a8c(auStack_290,&local_d0);
    FUN_1001bd040(auStack_290,0,0);
    _swift_release();
    _swift_release(pcVar27);
    FUN_1000914e4(auStack_290);
    _swift_unknownObjectRelease(pcVar14);
    FUN_100006cdc(0,0xc000000000000000);
  }
LAB_100161d00:
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar18 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
  pcVar27 = (code *)(ulong)param_1;
  uStack_3a0 = 0;
  local_398 = 0;
  local_3a8 = pcVar27;
  FUN_10016b97c(&local_3a8);
  uStack_108 = uStack_2e0;
  local_110 = local_2e8;
  uStack_f8 = uStack_2d0;
  uStack_100 = uStack_2d8;
  uStack_e8 = uStack_2c0;
  local_f0 = local_2c8;
  local_e0 = local_2b8;
  uStack_148 = uStack_320;
  local_150 = local_328;
  uStack_138 = uStack_310;
  uStack_140 = uStack_318;
  uStack_128 = uStack_300;
  local_130 = local_308;
  uStack_118 = uStack_2f0;
  uStack_120 = uStack_2f8;
  uStack_188 = uStack_360;
  local_190 = local_368;
  uStack_178 = uStack_350;
  uStack_180 = local_358;
  uStack_168 = uStack_340;
  local_170 = local_348;
  uStack_158 = uStack_330;
  uStack_160 = local_338;
  local_1c0 = (code *)CONCAT71(uStack_397,local_398);
  uStack_1c8 = uStack_3a0;
  local_1d0 = local_3a8;
  local_1b8 = (undefined *)uStack_390;
  puStack_1a8 = (undefined *)uStack_380;
  local_1b0 = (code *)local_388;
  uStack_198 = uStack_370;
  uStack_1a0 = local_378;
  *puVar12 = 1;
  uVar7 = auStack_450[2];
  (**(code **)(lVar19 + 0x68))
            (puVar12,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             auStack_450[2]);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar18);
  uVar15 = 0;
  FUN_1000fd494(0);
  FUN_1005d68b4(&local_1d0,puVar12,uVar18,0,0,uVar15,&PTR_PTR_10099cbd8);
  (**(code **)(lVar19 + 8))(puVar12,uVar7);
  uVar18 = 0;
  FUN_1001536e4(0);
  FUN_10014637c(pcVar27);
  _swift_release(uVar18);
  FUN_1001533d4();
  FUN_100143100(pcVar27);
  return;
}

