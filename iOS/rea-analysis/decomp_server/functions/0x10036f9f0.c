// rea decompile_all
// name: FUN_10036f9f0
// address: 0x10036f9f0
// body: available
// range: 0x10036f9f0-0x10036fc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar5 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  local_b8 = *(long *)(lVar1 + -8);
  lVar9 = (long)&local_d0 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_c0 = lVar2;
  __s8Dispatch0A4TimeVMa();
  lVar8 = *(long *)(lVar3 + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = lVar10 - uVar7;
  lVar11 = lVar2 - uVar7;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar2);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar11,param_1,lVar2);
  local_d0 = *(code **)(lVar8 + 8);
  (*local_d0)(lVar2,lVar3);
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009b54b0;
  local_80 = param_2;
  local_78 = param_3;
  aBlock = __Block_copy(&local_a0);
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a889a8;
  FUN_100005c90(&DAT_100a889a8,puVar5,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar5 = &DAT_100a889b0;
  FUN_100004bb4(&DAT_100a889b0,&DAT_10081cc60);
  puVar6 = &DAT_100a889b8;
  FUN_1000d61d8(&DAT_100a889b8,&DAT_100a889b0,&DAT_10081cc60);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_a8,puVar5,puVar6,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar11,lVar10,lVar9,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_b8 + 8))(lVar9,lVar1);
  (**(code **)(local_c8 + 8))(lVar10,lStack_c0);
  (*local_d0)(lVar11,lVar3);
  _swift_release(local_78);
  return;
}

