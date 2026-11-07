// rea decompile_all
// name: FUN_1001e7d88
// address: 0x1001e7d88
// body: available
// range: 0x1001e7d88-0x1001e81eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e7d88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_b8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar8 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
  if ((lVar2 == 0) ||
     (lVar10 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController),
     lVar10 == 0)) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar5 = &DAT_1009a4380;
    _swift_allocObject(&DAT_1009a4380,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_4;
    *(undefined8 *)(puVar5 + 0x18) = param_5;
    local_70 = FUN_1001eb080;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a4398;
    local_68 = puVar5;
    pvVar4 = __Block_copy(&local_90);
    puVar5 = local_68;
    _swift_retain(param_5);
    _swift_release(puVar5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_90,puVar5,puVar7,lVar1,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar8,pvVar4);
    __Block_release(pvVar4);
    (**(code **)(local_a0 + 8))(lVar8,lVar1);
    (**(code **)(local_b0 + 8))(lVar9,lStack_a8);
  }
  else {
    local_c8 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
    local_d0 = param_1 / 0x32;
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    local_c0 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::ioQueue);
    puVar5 = &DAT_1009a43d0;
    _swift_allocObject(&DAT_1009a43d0,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    puVar3 = &DAT_1009a43f8;
    _swift_allocObject(&DAT_1009a43f8,0x68,7);
    *(undefined **)(puVar3 + 0x10) = puVar5;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_5;
    *(long *)(puVar3 + 0x28) = lVar10;
    *(undefined8 *)(puVar3 + 0x30) = local_c8;
    *(long *)(puVar3 + 0x38) = lVar2;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x48) = local_b8;
    *(undefined8 *)(puVar3 + 0x50) = param_3;
    *(long *)(puVar3 + 0x58) = local_d0;
    *(undefined8 *)(puVar3 + 0x60) = 0x32;
    local_70 = FUN_1001ebb38;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a4410;
    local_68 = puVar3;
    pvVar4 = __Block_copy(&local_90);
    _swift_retain_n(lVar10,2);
    _swift_bridgeObjectRetain(lVar2);
    _swift_retain(puVar5);
    _swift_retain(param_5);
    _swift_retain(param_3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar3 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_98,puVar3,puVar7,lVar1,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar8,pvVar4);
    __Block_release(pvVar4);
    _swift_release(lVar10);
    (**(code **)(local_a0 + 8))(lVar8,lVar1);
    (**(code **)(local_b0 + 8))(lVar9,lStack_a8);
    puVar3 = local_68;
    _swift_release(puVar5);
    _swift_release(puVar3);
  }
  return;
}

