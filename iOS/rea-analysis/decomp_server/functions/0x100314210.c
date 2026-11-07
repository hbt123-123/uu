// rea decompile_all
// name: FUN_100314210
// address: 0x100314210
// body: available
// range: 0x100314210-0x100314493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314210(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *unaff_x20;
  undefined8 uVar18;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar16 = *unaff_x20;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar5 + -8);
  puVar13 = &stack0xffffffffffffff30 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar6 + -8);
  lVar15 = (long)puVar13 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(lVar16 + 0x50);
  uVar2 = *(undefined8 *)(lVar16 + 0x58);
  lVar16 = 0;
  FUN_100316ccc(0,uVar1,uVar2);
  iVar3 = *(int *)(lVar16 + 0x38);
  uVar17 = *(undefined8 *)(param_2 + *(int *)(lVar16 + 0x34));
  uVar18 = *(undefined8 *)(param_2 + iVar3);
  uVar7 = 0xff;
  FUN_100316f58(0xff,uVar1,uVar2);
  uVar8 = 0;
  __sSaMa(0,uVar7);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar18);
  __sSa9removeAll15keepingCapacityySb_tF(0,uVar8);
  _swift_bridgeObjectRelease(uVar18);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(param_2 + iVar3) = PTR___swiftEmptyArrayStorage_100995ea0;
  iVar3 = *(int *)(lVar16 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + iVar3);
  _swift_errorRetain(param_1);
  FUN_100316e44(uVar7);
  *(undefined8 *)(param_2 + iVar3) = param_1;
  puVar9 = &DAT_1009b0478;
  _swift_allocObject(&DAT_1009b0478,0x38,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar2;
  *(undefined8 *)(puVar9 + 0x20) = uVar17;
  *(undefined8 *)(puVar9 + 0x28) = param_1;
  *(undefined8 *)(puVar9 + 0x30) = uVar18;
  local_70 = FUN_100316f98;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009b0490;
  local_68 = puVar9;
  aBlock = __Block_copy(&local_90);
  _swift_errorRetain(param_1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
  local_98 = puVar4;
  puVar10 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar9 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar11 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar13,&local_98,puVar9,puVar11,lVar5,puVar10);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar15,puVar13,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar12 + 8))(puVar13,lVar5);
  (**(code **)(lVar14 + 8))(lVar15,lVar6);
  _swift_release(local_68);
  return;
}

