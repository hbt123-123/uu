// rea decompile_all
// name: FUN_1002ea108
// address: 0x1002ea108
// body: available
// range: 0x1002ea108-0x1002ea363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ea108(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
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
  
  lVar2 = 0;
  local_c0 = param_4;
  uStack_b8 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  puVar9 = auStack_d0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lVar10 = (long)puVar9 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_a8 = lVar3;
  FUN_100277ad0();
  lVar4 = *(long *)(lVar4 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar12 = lVar10 - (lVar3 + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(undefined8 *)(param_3 + 0x20);
  FUN_100082394(param_6,lVar12);
  uVar8 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar11 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009aef28;
  _swift_allocObject(&DAT_1009aef28,uVar11 + lVar3,uVar8 | 7);
  uVar1 = uStack_b8;
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  puVar5[0x18] = (char)param_2;
  *(undefined8 *)(puVar5 + 0x20) = local_c0;
  *(undefined8 *)(puVar5 + 0x28) = uStack_b8;
  FUN_1000823d8(lVar12,puVar5 + uVar11,FUN_100277ad0);
  local_70 = FUN_1002f0ff8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009aef40;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  FUN_1002f1030(param_1,param_2);
  _swift_retain(uVar1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&local_98,puVar5,puVar7,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,puVar9,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar9,lVar2);
  (**(code **)(local_b0 + 8))(lVar10,lStack_a8);
  _swift_release(local_68);
  return;
}

