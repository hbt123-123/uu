// rea decompile_all
// name: FUN_1002e9dc8
// address: 0x1002e9dc8
// body: available
// range: 0x1002e9dc8-0x1002ea107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e9dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_f0 [8];
  long local_e8;
  long lStack_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88 [3];
  long local_70;
  
  lVar2 = 0;
  local_c8 = param_3;
  uStack_c0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d8 = *(undefined ***)(lVar2 + -8);
  puVar11 = auStack_f0 + -(*(long *)((long)local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_e8 = *(long *)(lVar3 + -8);
  lVar12 = (long)puVar11 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_e0 = lVar3;
  FUN_100277ad0();
  lVar13 = *(long *)(lVar4 + -8);
  lVar3 = *(long *)(lVar13 + 0x40);
  lVar15 = lVar12 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  local_d0 = param_1;
  FUN_1002e98fc(local_88,param_1);
  if (local_70 == 0) {
    FUN_100040bb4(local_88,&DAT_100a84398,&DAT_100818d00);
    puVar6 = &DAT_1009ae750;
    _swift_allocObject(&DAT_1009ae750,0x20,7);
    uVar1 = uStack_c0;
    *(undefined8 *)(puVar6 + 0x10) = local_c8;
    *(undefined8 *)(puVar6 + 0x18) = uStack_c0;
    local_98 = FUN_1002ef004;
    local_b8 = PTR___NSConcreteStackBlock_100995490;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000acdb4;
    local_a0 = &DAT_1009ae768;
    local_90 = puVar6;
    aBlock = __Block_copy(&local_b8);
    _swift_retain(uVar1);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_88[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar11,local_88,puVar6,puVar8,lVar2,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,puVar11,aBlock);
    __Block_release(aBlock);
    (**(code **)((long)local_d8 + 8))(puVar11,lVar2);
    (**(code **)(local_e8 + 8))(lVar12,lStack_e0);
    _swift_release(local_90);
  }
  else {
    FUN_1000a0074(local_88,&local_b8);
    ppuVar5 = &local_b8;
    FUN_10003f030(ppuVar5,local_a0);
    puVar7 = &DAT_100a824a8;
    local_d8 = ppuVar5;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(lVar4,puVar7,0,0);
    FUN_100082394(param_2);
    FUN_100082394(param_2,lVar15,FUN_100277ad0);
    uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar14 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
    puVar6 = &DAT_1009ae7a0;
    _swift_allocObject(&DAT_1009ae7a0,uVar14 + lVar3,uVar9 | 7);
    uVar1 = uStack_c0;
    *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar6 + 0x18) = local_c8;
    *(undefined8 *)(puVar6 + 0x20) = uStack_c0;
    FUN_1000823d8(lVar15,puVar6 + uVar14,FUN_100277ad0);
    pcVar10 = *(code **)((long)local_98 + 8);
    _swift_retain();
    _swift_retain(uVar1);
    (*pcVar10)(local_d0);
    _swift_release(puVar6);
    _swift_errorRelease(lVar4);
    FUN_10003f094(&local_b8);
  }
  return;
}

