// rea decompile_all
// name: FUN_1001eb0f4
// address: 0x1001eb0f4
// body: available
// range: 0x1001eb0f4-0x1001ebb37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eb0f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x8_02;
  long extraout_x12;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_180 [16];
  long alStack_170 [4];
  long alStack_150 [2];
  code *local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  local_108 = param_8;
  local_100 = param_7;
  local_f8 = param_5;
  lStack_f0 = param_6;
  local_e8 = param_4;
  local_e0 = param_2;
  local_d8 = param_3;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar12 = (undefined8 *)((long)alStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar17 = *(long *)(lVar5 + -8);
  local_110 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar15 - extraout_x12;
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar14 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_c8 = lVar14;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  lVar5 = _TtC14UURemoteServer15TerminalSession::tmuxCreationPending;
  if (param_1 == 0) {
    return;
  }
  local_118 = lVar14;
  if (*(char *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxCreationPending) != '\x01')
  goto LAB_1001eb59c;
  local_128 = lVar6;
  local_120 = lVar7;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar16 = 0xe700000000000000;
    uVar8 = 0x676e696e6e7572;
LAB_1001eb2bc:
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar8,uVar16,0x646574697865,0xe600000000000000,0);
    _swift_bridgeObjectRelease(uVar16);
    if ((uVar8 & 1) != 0) goto LAB_1001eb5ac;
    uVar16 = local_f8;
    lVar6 = lStack_f0;
    FUN_1000a300c();
    if (lVar6 == 0) {
      *(undefined1 *)(param_1 + lVar5) = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      lVar5 = local_100;
      *(long *)(lVar14 + -0x10) = param_1;
      *(long *)(lVar14 + -8) = lVar5;
      FUN_1003fb48c(FUN_1001ec880,lVar14 + -0x20,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000004a,0x80000001008a0160,0x106,0);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &DAT_1009a4538;
      _swift_allocObject(&DAT_1009a4538,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = local_108;
      *(undefined8 *)(puVar11 + 0x18) = param_9;
      local_90 = FUN_100102840;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      puStack_98 = &DAT_1009a4550;
      local_88 = puVar11;
      pvVar10 = __Block_copy(&local_b0);
      goto LAB_1001eb694;
    }
    if (lVar6 == 1) {
      local_130 = param_9;
      if (SCARRY8(local_100,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ebb38);
        (*pcVar3)();
      }
      if (local_100 + 1 < param_10) {
        local_138 = *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::ioQueue);
        alStack_150[1] = param_1;
        __s8Dispatch0A4TimeV3nowACyFZ(lVar15);
        *puVar12 = param_11;
        (**(code **)(lVar19 + 0x68))
                  (puVar12,*(undefined4 *)
                            PTR___s8Dispatch0A12TimeIntervalO12millisecondsyACSicACmFWC_100995f10,
                   lVar4);
        __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(lVar18,lVar15,puVar12);
        (**(code **)(lVar19 + 8))(puVar12,lVar4);
        lVar6 = local_110;
        local_140 = *(code **)(lVar17 + 8);
        (*local_140)(lVar15,local_110);
        puVar11 = &DAT_1009a43d0;
        _swift_allocObject(&DAT_1009a43d0,0x18,7);
        _swift_weakInit(puVar11 + 0x10,param_1);
        puVar9 = &DAT_1009a44e8;
        _swift_allocObject(&DAT_1009a44e8,0x68,7);
        uVar2 = local_d8;
        uVar1 = local_e8;
        lVar5 = lStack_f0;
        uVar16 = local_130;
        *(undefined **)(puVar9 + 0x10) = puVar11;
        *(undefined8 *)(puVar9 + 0x18) = local_f8;
        *(long *)(puVar9 + 0x20) = lStack_f0;
        *(long *)(puVar9 + 0x28) = local_100;
        *(undefined8 *)(puVar9 + 0x30) = local_e8;
        *(long *)(puVar9 + 0x38) = param_10;
        *(undefined8 *)(puVar9 + 0x40) = param_11;
        *(undefined8 *)(puVar9 + 0x48) = local_108;
        *(undefined8 *)(puVar9 + 0x50) = local_130;
        *(undefined8 *)(puVar9 + 0x58) = local_e0;
        *(undefined8 *)(puVar9 + 0x60) = local_d8;
        local_90 = FUN_1001ec874;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        puStack_98 = &DAT_1009a4500;
        local_88 = puVar9;
        pvVar10 = __Block_copy(&local_b0);
        _swift_retain(uVar2);
        _swift_retain(uVar16);
        _swift_retain(puVar11);
        _swift_bridgeObjectRetain(lVar5);
        _swift_retain(uVar1);
        lVar4 = local_118;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
        local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar12 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar9 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar13 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar7 = local_c8;
        lVar5 = local_128;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_c8,&local_b8,puVar9,puVar13,local_128,puVar12);
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar18,lVar4,lVar7,pvVar10);
        __Block_release(pvVar10);
        (**(code **)(local_d0 + 8))(lVar7,lVar5);
        (**(code **)(local_c0 + 8))(lVar4,local_120);
        (*local_140)(lVar18,lVar6);
        _swift_release(alStack_150[1]);
        _swift_release(puVar11);
LAB_1001eb59c:
        _swift_release();
        return;
      }
      *(undefined1 *)(param_1 + lVar5) = 0;
      uVar16 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar16);
      *(long *)(lVar14 + -0x20) = param_10;
      *(undefined8 *)(lVar14 + -0x18) = param_11;
      *(long *)(lVar14 + -0x10) = param_1;
      FUN_1003fb4ec(FUN_1001ec474,lVar14 + -0x30,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000004a,0x80000001008a0160,0x116,0);
      FUN_1001ebe04(2,0xb6e8babbe59b88e5,0xac000000b697e685);
      FUN_1000a3488(local_f8,lStack_f0);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &DAT_1009a4498;
      _swift_allocObject(&DAT_1009a4498,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = local_e0;
      *(undefined8 *)(puVar11 + 0x18) = local_d8;
      local_90 = FUN_1001ec480;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      puStack_98 = &DAT_1009a44b0;
      local_88 = puVar11;
    }
    else {
      *(undefined1 *)(param_1 + lVar5) = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar14 + -0x20) = param_1;
      *(undefined8 *)(lVar14 + -0x18) = uVar16;
      *(long *)(lVar14 + -0x10) = lVar6;
      FUN_1003fb4ec(FUN_1001ebdf8,lVar14 + -0x30,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000004a,0x80000001008a0160,0x10d,0);
      FUN_1001ebe04(2,0x1000000000000018,0x80000001008a01b0);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &DAT_1009a4448;
      _swift_allocObject(&DAT_1009a4448,0x30,7);
      *(undefined8 *)(puVar11 + 0x10) = local_e0;
      *(undefined8 *)(puVar11 + 0x18) = local_d8;
      *(undefined8 *)(puVar11 + 0x20) = uVar16;
      *(long *)(puVar11 + 0x28) = lVar6;
      local_90 = FUN_1001ec320;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      puStack_98 = &DAT_1009a4460;
      local_88 = puVar11;
    }
  }
  else {
    if (*(char *)(param_1 + 0x14) == '\x01') {
      uVar16 = 0xe800000000000000;
      uVar8 = 0x6465686361746564;
      goto LAB_1001eb2bc;
    }
    _swift_bridgeObjectRelease(0xe600000000000000);
LAB_1001eb5ac:
    *(undefined1 *)(param_1 + lVar5) = 0;
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001ec888,param_1,0xd000000000000095,0x80000001008a00c0,0xd00000000000004a,
                  0x80000001008a0160,0xfd,0);
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar11 = &DAT_1009a4588;
    _swift_allocObject(&DAT_1009a4588,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = local_e0;
    *(undefined8 *)(puVar11 + 0x18) = local_d8;
    local_90 = FUN_1001ec890;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    puStack_98 = &DAT_1009a45a0;
    local_88 = puVar11;
  }
  param_9 = local_d8;
  local_a8 = 0x42000000;
  local_a0 = FUN_1000acdb4;
  PTR___NSConcreteStackBlock_100995490 = local_b0;
  pvVar10 = __Block_copy(&local_b0);
LAB_1001eb694:
  puVar11 = local_88;
  _swift_retain(param_9);
  _swift_release(puVar11);
  lVar4 = local_118;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar12 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar11 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar13 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar6 = local_c8;
  lVar5 = local_128;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c8,&local_b0,puVar11,puVar13,local_128,puVar12);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar4,lVar6,pvVar10);
  __Block_release(pvVar10);
  _swift_release(param_1);
  (**(code **)(local_d0 + 8))(lVar6,lVar5);
  (**(code **)(local_c0 + 8))(lVar4,local_120);
  return;
}

