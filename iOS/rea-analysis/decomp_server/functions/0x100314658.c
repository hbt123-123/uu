// rea decompile_all
// name: FUN_100314658
// address: 0x100314658
// body: available
// range: 0x100314658-0x100314957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314658(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  long lStack_b8;
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
  
  lVar13 = *unaff_x20;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar5 + -8);
  lVar12 = *(long *)(local_a0 + 0x40);
  lVar6 = 0;
  local_c0 = auStack_d0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar5;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar6 + -8);
  lVar12 = (long)(auStack_d0 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(lVar13 + 0x50);
  uVar1 = *(undefined8 *)(lVar13 + 0x58);
  lVar5 = 0xff;
  local_c8 = lVar12;
  lStack_a8 = lVar6;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar8,0x1008f97a8,&TargetProtocolRequirement_1008f97b8)
  ;
  lVar6 = 0;
  __sSqMa(0,lVar5);
  lVar13 = *(long *)(lVar6 + -8);
  lVar12 = lVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(lVar5 + -8);
  (**(code **)(lVar16 + 0x10))(lVar12,param_1,lVar5);
  (**(code **)(lVar16 + 0x38))(lVar12,0,1,lVar5);
  lVar5 = 0;
  FUN_100316ccc(0,uVar8,uVar1);
  FUN_100312808(lVar12,lVar5);
  (**(code **)(lVar13 + 8))(lVar12,lVar6);
  iVar2 = *(int *)(lVar5 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x34));
  uVar15 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = 0xff;
  FUN_100316f58(0xff,uVar8,uVar1);
  uVar8 = 0;
  __sSaMa(0,uVar7);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  __sSa9removeAll15keepingCapacityySb_tF(0,uVar8);
  _swift_bridgeObjectRelease(uVar15);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(param_2 + iVar2) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar9 = &DAT_1009b04c8;
  _swift_allocObject(&DAT_1009b04c8,0x28,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar14;
  *(long **)(puVar9 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar9 + 0x20) = uVar15;
  local_70 = FUN_100317064;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009b04e0;
  local_68 = puVar9;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  lVar5 = local_c8;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
  local_98 = puVar3;
  puVar10 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar9 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar11 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  lVar6 = lStack_b8;
  puVar4 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_98,puVar9,puVar11,lStack_b8,puVar10);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar5,puVar4,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar4,lVar6);
  (**(code **)(local_b0 + 8))(lVar5,lStack_a8);
  _swift_release(local_68);
  return;
}

