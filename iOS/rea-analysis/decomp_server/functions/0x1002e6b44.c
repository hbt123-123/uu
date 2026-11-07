// rea decompile_all
// name: FUN_1002e6b44
// address: 0x1002e6b44
// body: available
// range: 0x1002e6b44-0x1002e6d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e6b44(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_a0 = *(long *)(lVar2 + -8);
  puVar7 = auStack_b0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &DAT_1009aefa0;
  _swift_allocObject(&DAT_1009aefa0,0x21,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = param_2;
  local_70 = FUN_1002f1134;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009aefb8;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  _swift_retain(param_1);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_98,puVar4,puVar6,lVar2,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,lVar2);
  (**(code **)(lVar9 + 8))(lVar8,lVar3);
  _swift_release(local_68);
  return;
}

