// rea decompile_all
// name: FUN_100292728
// address: 0x100292728
// body: available
// range: 0x100292728-0x1002928ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100292728(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  void *aBlock;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = 0;
  local_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar1 + -8);
  lVar6 = (long)&local_b0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar7 = *(long *)(lVar2 + -8);
  lVar8 = lVar6 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar2;
  _swift_allocObject(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = unaff_x20;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_3;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  uStack_78 = param_6;
  local_70 = param_5;
  local_68 = param_4;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar3 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar4 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar4;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar6,&local_98,puVar4,puVar5,lVar1,puVar3);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar8,lVar6,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(lVar6,lVar1);
  (**(code **)(lVar7 + 8))(lVar8,local_b0);
  _swift_release(local_68);
  return;
}

