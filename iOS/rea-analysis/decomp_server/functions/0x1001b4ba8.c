// rea decompile_all
// name: FUN_1001b4ba8
// address: 0x1001b4ba8
// body: available
// range: 0x1001b4ba8-0x1001b4dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b4ba8(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = 0;
  local_c0 = param_5;
  local_b8 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar7 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  local_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::serialQueue);
  puVar3 = &DAT_1009a2478;
  _swift_allocObject(&DAT_1009a2478,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  _swift_allocObject(param_4,0x30,7);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined4 *)(param_4 + 0x20) = param_1;
  *(undefined **)(param_4 + 0x28) = puVar3;
  local_70 = local_c0;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  uStack_78 = local_b8;
  local_68 = param_4;
  aBlock = __Block_copy(&local_90);
  FUN_10010bd10(param_2,param_3);
  puVar4 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = puVar5;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_98,puVar5,puVar6,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar2,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,local_a8);
  lVar1 = local_68;
  _swift_release(puVar3);
  _swift_release(lVar1);
  return;
}

