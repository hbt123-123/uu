// rea decompile_all
// name: FUN_1002b13c8
// address: 0x1002b13c8
// body: available
// range: 0x1002b13c8-0x1002b164f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b13c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_c8 = param_2;
  uStack_c0 = param_3;
  local_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar1 + -8);
  puVar10 = auStack_d0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar12 = (long)puVar10 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0xff;
  lStack_b0 = lVar2;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,0x1008fab88,&TargetProtocolRequirement_1008fab90);
  uVar4 = 0xff;
  FUN_100277ad0(0xff);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar2 = 0;
  FUN_1002d9e30(0,uVar3,uVar4,puVar5);
  lVar14 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar14 + 0x40);
  lVar11 = lVar12 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar14 + 0x10))(lVar11,param_4,lVar2);
  uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  puVar6 = &DAT_1009acbc8;
  _swift_allocObject(&DAT_1009acbc8,uVar13 + lVar9,uVar8 | 7);
  uVar3 = uStack_c0;
  *(undefined8 *)(puVar6 + 0x10) = param_5;
  *(undefined8 *)(puVar6 + 0x18) = param_6;
  *(undefined8 *)(puVar6 + 0x20) = local_c8;
  *(undefined8 *)(puVar6 + 0x28) = uStack_c0;
  (**(code **)(lVar14 + 0x20))(puVar6 + uVar13,lVar11,lVar2);
  local_70 = thunk_FUN_1002ba7c8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009acbe0;
  local_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  _swift_retain(uVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar6 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar6;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar10,&local_98,puVar6,puVar7,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,puVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(puVar10,lVar1);
  (**(code **)(local_b8 + 8))(lVar12,lStack_b0);
  _swift_release(local_68);
  return;
}

