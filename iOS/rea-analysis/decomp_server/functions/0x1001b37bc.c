// rea decompile_all
// name: FUN_1001b37bc
// address: 0x1001b37bc
// body: available
// range: 0x1001b37bc-0x1001b39d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b37bc(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  undefined1 auStack_c0 [8];
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
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::serialQueue);
  puVar3 = &DAT_1009a2478;
  _swift_allocObject(&DAT_1009a2478,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &DAT_1009a25e0;
  _swift_allocObject(&DAT_1009a25e0,0x34,7);
  *(undefined4 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  *(undefined4 *)(puVar4 + 0x28) = param_3;
  *(undefined4 *)(puVar4 + 0x2c) = param_4;
  *(undefined4 *)(puVar4 + 0x30) = param_5;
  local_70 = FUN_1001b4e1c;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a25f8;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  puVar5 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = puVar4;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_98,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,lVar1);
  (**(code **)(local_b0 + 8))(lVar2,lStack_a8);
  puVar4 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

