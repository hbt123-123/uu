// rea decompile_all
// name: FUN_1000d49cc
// address: 0x1000d49cc
// body: available
// range: 0x1000d49cc-0x1000d4bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d49cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  void *aBlock;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar4 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a0 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_10099bcb8;
  local_70 = param_1;
  local_68 = param_2;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar3 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar4,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar5 = &DAT_100a75aa0;
  FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar6,&local_98,puVar4,puVar5,lVar1,puVar3);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar7,puVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar6,lVar1);
  (**(code **)(lVar8 + 8))(lVar7,lVar2);
  _swift_release(local_68);
  return;
}

