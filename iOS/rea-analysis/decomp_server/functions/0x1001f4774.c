// rea decompile_all
// name: FUN_1001f4774
// address: 0x1001f4774
// body: available
// range: 0x1001f4774-0x1001f4e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f4774(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *local_e0;
  char *pcStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar3 + -8);
  local_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  local_b8 = lVar13;
  if (param_1 == 0) {
    puVar5 = &DAT_1009a48d0;
    _swift_allocObject(&DAT_1009a48d0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    local_88 = thunk_FUN_1001fa32c;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009a48e8;
    local_80 = puVar5;
    pvVar4 = __Block_copy(&local_a8);
    FUN_10004090c(param_3,param_4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    lVar13 = local_c8;
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_b0,puVar5,puVar7,lVar13,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,pvVar4);
    __Block_release(pvVar4);
    (**(code **)(local_b8 + 8))(lVar11,lVar13);
    pcVar10 = *(code **)(local_c0 + 8);
    goto LAB_1001f4e70;
  }
  local_d0 = lVar3;
  if ((*(byte *)(param_1 + _TtC14UURemoteServer15TerminalSession::isClosed) & 1) != 0) {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1001fa2e8,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000022,
                  0x80000001008a0b20,0x413,0);
    puVar5 = &DAT_1009a4970;
    _swift_allocObject(&DAT_1009a4970,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    *(undefined8 *)(puVar5 + 0x18) = param_4;
    local_88 = thunk_FUN_1001fa32c;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009a4988;
    local_80 = puVar5;
    pvVar4 = __Block_copy(&local_a8);
    FUN_10004090c(param_3,param_4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    lVar3 = local_c8;
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_b0,puVar5,puVar7,lVar3,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,pvVar4);
    __Block_release(pvVar4);
    _swift_release(param_1);
    (**(code **)(local_b8 + 8))(lVar11,lVar3);
    pcVar10 = *(code **)(local_c0 + 8);
    lVar3 = local_d0;
    goto LAB_1001f4e70;
  }
  *(undefined1 *)(param_1 + _TtC14UURemoteServer15TerminalSession::isClosed) = 1;
  *(undefined1 *)(param_1 + _TtC14UURemoteServer15TerminalSession::isClosingByUs) = 1;
  FUN_100401b14(0);
  local_e0 = s___PTY___fd___kern_maxfilesperpro_1008a0ae0 + 0x40;
  pcStack_d8 = "tmuxCreationPending";
  FUN_1003fb48c(FUN_1001fa2d8,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000022,
                0x80000001008a0b20,0x419,0);
  lVar3 = _TtC14UURemoteServer15TerminalSession::readSource;
  lVar13 = *(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::readSource);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = lVar13;
    _swift_getObjectType(lVar13);
    _swift_unknownObjectRetain(lVar13);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar8);
    _swift_unknownObjectRelease(lVar13);
    uVar9 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar9);
  lVar3 = _TtC14UURemoteServer15TerminalSession::processSource;
  lVar13 = *(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::processSource);
  if (lVar13 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = lVar13;
    _swift_getObjectType(lVar13);
    _swift_unknownObjectRetain(lVar13);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar8);
    _swift_unknownObjectRelease(lVar13);
    uVar9 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = 0;
  _swift_unknownObjectRelease(uVar9);
  if (*(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxController) == 0) {
LAB_1001f4c98:
    FUN_1001f5304();
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = ((undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    if (lVar3 == 0) goto LAB_1001f4c98;
    uVar9 = *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
    _swift_bridgeObjectRetain(lVar3);
    FUN_1001f508c(uVar9,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (-1 < iVar2) {
    _close();
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x14) = 2;
  puVar6 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
  uVar9 = *puVar6;
  uVar1 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  FUN_10007ed2c(uVar9,uVar1);
  puVar6 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onExit);
  uVar9 = *puVar6;
  uVar1 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  FUN_10007ed2c(uVar9,uVar1);
  FUN_1003fb48c(FUN_1001fa2e0,param_1,0xd000000000000095,(ulong)pcStack_d8 | 0x8000000000000000,
                0xd000000000000022,(ulong)local_e0 | 0x8000000000000000,0x436,0);
  puVar5 = &DAT_1009a4920;
  _swift_allocObject(&DAT_1009a4920,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  local_88 = thunk_FUN_1001fa32c;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_1009a4938;
  local_80 = puVar5;
  pvVar4 = __Block_copy(&local_a8);
  FUN_10004090c(param_3,param_4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar3 = local_c8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&local_b0,puVar5,puVar7,local_c8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,lVar11,pvVar4);
  __Block_release(pvVar4);
  _swift_release(param_1);
  (**(code **)(local_b8 + 8))(lVar11,lVar3);
  pcVar10 = *(code **)(local_c0 + 8);
  lVar3 = local_d0;
LAB_1001f4e70:
  (*pcVar10)(lVar12,lVar3);
  _swift_release(local_80);
  return;
}

