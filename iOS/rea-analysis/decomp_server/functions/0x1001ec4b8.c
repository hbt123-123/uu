// rea decompile_all
// name: FUN_1001ec4b8
// address: 0x1001ec4b8
// body: available
// range: 0x1001ec4b8-0x1001ec82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ec4b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_140 [16];
  long alStack_130 [4];
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  local_d8 = param_8;
  uStack_d0 = param_6;
  local_c8 = param_7;
  local_c0 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  uVar1 = local_c0;
  if (param_1 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)(param_1);
    *(undefined8 *)(lVar10 + -0x20) = param_2;
    *(undefined8 *)(lVar10 + -0x18) = param_3;
    *(long *)(lVar10 + -0x10) = param_4;
    FUN_1003fb4bc(FUN_1001ec9c8,lVar10 + -0x30,0xd000000000000095,0x80000001008a00c0,
                  0xd00000000000004a,0x80000001008a0160,0x120,0);
  }
  else {
    local_e8 = param_2;
    local_e0 = lVar12;
    if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ec830);
      (*pcVar2)();
    }
    local_f8 = *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::ioQueue);
    puVar5 = &DAT_1009a43d0;
    local_108 = lVar3;
    local_f0 = lVar4;
    _swift_allocObject(&DAT_1009a43d0,0x18,7);
    local_100 = lVar11;
    _swift_weakInit(puVar5 + 0x10,param_1);
    puVar6 = &DAT_1009a45d8;
    _swift_allocObject(&DAT_1009a45d8,0x68,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_10;
    *(undefined8 *)(puVar6 + 0x20) = param_11;
    *(undefined8 *)(puVar6 + 0x28) = uVar1;
    *(undefined8 *)(puVar6 + 0x30) = local_e8;
    *(undefined8 *)(puVar6 + 0x38) = param_3;
    *(long *)(puVar6 + 0x40) = param_4 + 1;
    *(undefined8 *)(puVar6 + 0x48) = local_d8;
    *(undefined8 *)(puVar6 + 0x50) = param_9;
    *(undefined8 *)(puVar6 + 0x58) = uStack_d0;
    *(undefined8 *)(puVar6 + 0x60) = local_c8;
    local_90 = thunk_FUN_1001ebb38;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    puStack_98 = &DAT_1009a45f0;
    local_88 = puVar6;
    aBlock = __Block_copy(&local_b0);
    _swift_retain(puVar5);
    _swift_retain(param_11);
    _swift_retain(uVar1);
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(param_9);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar3 = local_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar9,&local_b8,puVar6,puVar8,local_108,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,puVar9,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_100 + 8))(puVar9,lVar3);
    (**(code **)(local_e0 + 8))(lVar10,local_f0);
    _swift_release(param_1);
    puVar6 = local_88;
    _swift_release(puVar5);
    _swift_release(puVar6);
  }
  return;
}

