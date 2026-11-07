// rea decompile_all
// name: FUN_1001f2954
// address: 0x1001f2954
// body: available
// range: 0x1001f2954-0x1001f37db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f2954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_150 [16];
  long alStack_140 [4];
  char *local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  local_f0 = param_6;
  local_e8 = param_8;
  local_e0 = param_7;
  local_d0 = param_4;
  local_c8 = param_5;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar3 + -8);
  local_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar3 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    FUN_10004003c();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar6 = &DAT_1009a4a38;
    _swift_allocObject(&DAT_1009a4a38,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    local_90 = thunk_FUN_1001fa5a4;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    puStack_98 = &DAT_1009a4a50;
    local_88 = puVar6;
    pvVar11 = __Block_copy(&local_b0);
    puVar6 = local_88;
    _swift_retain(param_3);
    _swift_release(puVar6);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_b0,puVar6,puVar8,lVar4,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar14,pvVar11);
    __Block_release(pvVar11);
    goto LAB_1001f3798;
  }
  uVar5 = 0;
  local_118 = lVar3;
  local_110 = param_3;
  local_108 = lVar14;
  local_100 = lVar16;
  local_f8 = lVar4;
  FUN_100401b14();
  FUN_1003fb48c(FUN_1001fa494,param_1,0xd000000000000095,0x80000001008a00c0,&DAT_d000000000000033,
                0x80000001008a0f60,0x3a8,0);
  uVar12 = local_e0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0) {
      uVar9 = 1;
      FUN_1001efe54();
      if ((uVar9 & 1) == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)(lVar3 + -0x20) = param_1;
        *(undefined8 *)(lVar3 + -0x18) = 0x100000000000001f;
        *(undefined8 *)(lVar3 + -0x10) = 0x80000001008a0fa0;
        FUN_1003fb4ec(FUN_1001fa4a8,lVar3 + -0x30,0xd000000000000095,0x80000001008a00c0,
                      &DAT_d000000000000033,0x80000001008a0f60,0x3d9,0);
        FUN_1001ebe04(1,0x100000000000001f,0x80000001008a0fa0);
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar6 = &DAT_1009a4ad8;
        _swift_allocObject(&DAT_1009a4ad8,0x30,7);
        *(undefined8 *)(puVar6 + 0x10) = param_2;
        *(undefined8 *)(puVar6 + 0x18) = local_110;
        *(undefined8 *)(puVar6 + 0x20) = 0x100000000000001f;
        *(undefined8 *)(puVar6 + 0x28) = 0x80000001008a0fa0;
        local_90 = thunk_FUN_1001fa4f8;
        puStack_98 = &DAT_1009a4af0;
        local_88 = puVar6;
LAB_1001f369c:
        uVar12 = local_110;
        local_a8 = 0x42000000;
        local_a0 = FUN_1000acdb4;
        local_b0 = PTR___NSConcreteStackBlock_100995490;
        pvVar11 = __Block_copy(&local_b0);
        goto LAB_1001f36b4;
      }
    }
    uVar2 = local_e0;
    puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
    uVar12 = *puVar7;
    uVar1 = puVar7[1];
    *puVar7 = local_f0;
    puVar7[1] = local_e0;
    FUN_10007ed2c(uVar12,uVar1);
    puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onExit);
    uVar12 = *puVar7;
    uVar1 = puVar7[1];
    *puVar7 = local_e8;
    puVar7[1] = param_9;
    local_f0 = uVar5;
    _swift_retain(uVar2);
    FUN_10007ed2c(uVar12,uVar1);
    _swift_retain(param_9);
    __s10Foundation4DateVACycfC(lVar13);
    lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
    _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_b0,
                       0x21,0);
    (**(code **)(lVar15 + 0x28))(param_1 + lVar3,lVar13,local_d8);
    ppuVar10 = &local_b0;
    _swift_endAccess();
    FUN_1001edaa0();
    FUN_1003fb45c(FUN_1001fa49c,param_1,0xd000000000000095,0x80000001008a00c0,&DAT_d000000000000033,
                  0x80000001008a0f60,0x3e2,0);
    FUN_1001f4168(local_d0,local_c8);
    lVar3 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar6 = &DAT_1009a4a88;
    local_c8 = lVar3;
    _swift_allocObject(&DAT_1009a4a88,0x30,7);
    uVar12 = local_110;
    *(undefined8 *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = local_110;
    *(undefined ***)(puVar6 + 0x20) = ppuVar10;
    *(long *)(puVar6 + 0x28) = lVar13;
    local_90 = thunk_FUN_1001fa570;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    puStack_98 = &DAT_1009a4aa0;
    local_88 = puVar6;
    pvVar11 = __Block_copy(&local_b0);
    puVar6 = local_88;
    _swift_retain(uVar12);
    FUN_10010bd10(ppuVar10,lVar13);
    _swift_release(puVar6);
    lVar3 = local_118;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar4 = local_f8;
    lVar14 = local_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_108,&local_b0,puVar6,puVar8,local_f8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar14,pvVar11);
    __Block_release(pvVar11);
    _swift_release(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x01') {
      FUN_1003fb48c(FUN_1001fa59c,param_1,0xd000000000000095,0x80000001008a00c0,
                    &DAT_d000000000000033,0x80000001008a0f60,0x3ac,0);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar6 = &DAT_1009a4c68;
      _swift_allocObject(&DAT_1009a4c68,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + 0x18) = local_110;
      local_90 = FUN_1001fa5a4;
      puStack_98 = &DAT_1009a4c80;
      local_88 = puVar6;
LAB_1001f3054:
      uVar12 = local_110;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      pvVar11 = __Block_copy(&local_b0);
LAB_1001f36b4:
      puVar6 = local_88;
      _swift_retain(uVar12);
      _swift_release(puVar6);
      lVar3 = local_118;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar7 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar6 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar8 = &DAT_100a75aa0;
      FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
      lVar4 = local_f8;
      lVar14 = local_108;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_108,&local_b0,puVar6,puVar8,local_f8,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar3,lVar14,pvVar11);
      __Block_release(pvVar11);
      _swift_release(param_1);
      lVar16 = local_100;
      goto LAB_1001f3798;
    }
    local_120 = s___PTY___detach_running_sessionId_1008a0f30 + 0x30;
    if (*(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxController) == 0) {
      puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
      uVar5 = *puVar7;
      uVar1 = puVar7[1];
      *puVar7 = local_f0;
      puVar7[1] = local_e0;
      FUN_10007ed2c(uVar5,uVar1);
      puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onExit);
      uVar5 = *puVar7;
      uVar1 = puVar7[1];
      *puVar7 = local_e8;
      puVar7[1] = param_9;
      local_f0 = param_2;
      _swift_retain(uVar12);
      FUN_10007ed2c(uVar5,uVar1);
      *(undefined1 *)(param_1 + 0x14) = 0;
      _swift_retain(param_9);
      __s10Foundation4DateVACycfC(lVar13);
      lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
      _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_b0,
                         0x21,0);
      (**(code **)(lVar15 + 0x28))(param_1 + lVar3,lVar13,local_d8);
      ppuVar10 = &local_b0;
      _swift_endAccess();
      FUN_1001edaa0();
      FUN_1003fb48c(FUN_1001fa4b4,param_1,0xd000000000000095,0x80000001008a00c0,
                    &DAT_d000000000000033,(ulong)local_120 | 0x8000000000000000,0x3cd,0);
      FUN_1001f4168(local_d0,local_c8);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar6 = &DAT_1009a4b28;
      _swift_allocObject(&DAT_1009a4b28,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = local_f0;
      *(undefined8 *)(puVar6 + 0x18) = local_110;
      *(undefined ***)(puVar6 + 0x20) = ppuVar10;
      *(long *)(puVar6 + 0x28) = lVar13;
      local_90 = thunk_FUN_1001fa570;
      puStack_98 = &DAT_1009a4b40;
      local_88 = puVar6;
    }
    else {
      uVar5 = local_d0;
      lVar14 = local_c8;
      FUN_1001f3acc();
      uVar12 = local_e0;
      if (lVar14 != 0) {
        if (lVar14 != 1) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(lVar3 + -0x20) = param_1;
          *(undefined8 *)(lVar3 + -0x18) = uVar5;
          *(long *)(lVar3 + -0x10) = lVar14;
          FUN_1003fb4ec(FUN_1001fa4bc,lVar3 + -0x30,extraout_x12 + 0x62,0x80000001008a00c0,
                        &DAT_d000000000000033,(ulong)local_120 | 0x8000000000000000,0x3c0,0);
          *(undefined1 *)(param_1 + 0x14) = 1;
          puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
          uVar12 = *puVar7;
          uVar1 = puVar7[1];
          *puVar7 = 0;
          puVar7[1] = 0;
          FUN_10007ed2c(uVar12,uVar1);
          puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onExit);
          uVar12 = *puVar7;
          uVar1 = puVar7[1];
          *puVar7 = 0;
          puVar7[1] = 0;
          FUN_10007ed2c(uVar12,uVar1);
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar6 = &DAT_1009a4b78;
          _swift_allocObject(&DAT_1009a4b78,0x30,7);
          *(undefined8 *)(puVar6 + 0x10) = param_2;
          *(undefined8 *)(puVar6 + 0x18) = local_110;
          *(undefined8 *)(puVar6 + 0x20) = uVar5;
          *(long *)(puVar6 + 0x28) = lVar14;
          local_90 = thunk_FUN_1001fa4f8;
          puStack_98 = &DAT_1009a4b90;
          local_88 = puVar6;
          goto LAB_1001f369c;
        }
        FUN_1003fb48c(FUN_1001fa524,param_1,0xd000000000000095,0x80000001008a00c0,
                      &DAT_d000000000000033,(ulong)local_120 | 0x8000000000000000,0x3bc,0);
        *(undefined1 *)(param_1 + 0x14) = 2;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar6 = &DAT_1009a4bc8;
        _swift_allocObject(&DAT_1009a4bc8,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = param_2;
        *(undefined8 *)(puVar6 + 0x18) = local_110;
        local_90 = thunk_FUN_1001fa5a4;
        puStack_98 = &DAT_1009a4be0;
        local_88 = puVar6;
        goto LAB_1001f3054;
      }
      puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
      uVar5 = *puVar7;
      uVar1 = puVar7[1];
      *puVar7 = local_f0;
      puVar7[1] = local_e0;
      FUN_10007ed2c(uVar5,uVar1);
      puVar7 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onExit);
      uVar5 = *puVar7;
      uVar1 = puVar7[1];
      *puVar7 = local_e8;
      puVar7[1] = param_9;
      local_f0 = param_2;
      _swift_retain(uVar12);
      FUN_10007ed2c(uVar5,uVar1);
      *(undefined1 *)(param_1 + 0x14) = 0;
      _swift_retain(param_9);
      __s10Foundation4DateVACycfC(lVar13);
      lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
      _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_b0,
                         0x21,0);
      (**(code **)(lVar15 + 0x28))(param_1 + lVar3,lVar13,local_d8);
      ppuVar10 = &local_b0;
      _swift_endAccess();
      FUN_1001edaa0();
      FUN_1003fb48c(FUN_1001fa52c,param_1,0xd000000000000095,0x80000001008a00c0,
                    &DAT_d000000000000033,(ulong)local_120 | 0x8000000000000000,0x3b9,0);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar6 = &DAT_1009a4c18;
      _swift_allocObject(&DAT_1009a4c18,0x30,7);
      *(undefined8 *)(puVar6 + 0x10) = local_f0;
      *(undefined8 *)(puVar6 + 0x18) = local_110;
      *(undefined ***)(puVar6 + 0x20) = ppuVar10;
      *(long *)(puVar6 + 0x28) = lVar13;
      local_90 = FUN_1001fa570;
      puStack_98 = &DAT_1009a4c30;
      local_88 = puVar6;
    }
    uVar12 = local_110;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    pvVar11 = __Block_copy(&local_b0);
    puVar6 = local_88;
    _swift_retain(uVar12);
    FUN_10010bd10(ppuVar10,lVar13);
    _swift_release(puVar6);
    lVar3 = local_118;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar4 = local_f8;
    lVar14 = local_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_108,&local_b0,puVar6,puVar8,local_f8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar14,pvVar11);
    __Block_release(pvVar11);
    _swift_release(param_1);
  }
  FUN_100006cc8(ppuVar10,lVar13);
  lVar16 = local_100;
LAB_1001f3798:
  lVar15 = lStack_b8;
  lVar13 = local_c0;
  (**(code **)(lVar16 + 8))(lVar14,lVar4);
  (**(code **)(lVar13 + 8))(lVar3,lVar15);
  return;
}

