// rea decompile_all
// name: FUN_1003c1c30
// address: 0x1003c1c30
// body: available
// range: 0x1003c1c30-0x1003c1eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ID self;
  undefined8 local_b0;
  long local_a8;
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
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  lVar8 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar3 + -8);
  local_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopLock);
  _objc_msgSend(self,"lock");
  *(undefined1 *)(unaff_x20 + _TtC8UUCommon18IPSReportCollector::stopRequested) = 1;
  _objc_msgSend(self,"unlock");
  local_b0 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &DAT_1009b9548;
  _swift_allocObject(&DAT_1009b9548,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &DAT_1009b9660;
  _swift_allocObject(&DAT_1009b9660,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  local_70 = FUN_1003d153c;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009b9678;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  thunk_FUN_10004090c(param_1,param_2);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,&local_98,puVar5,puVar7,lVar2,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar3,lVar8,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar8,lVar2);
  (**(code **)(lVar9 + 8))(lVar3,local_a8);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  return;
}

