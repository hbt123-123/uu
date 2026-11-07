// rea decompile_all
// name: FUN_10033e374
// address: 0x10033e374
// body: available
// range: 0x10033e374-0x10033e663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033e374(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long local_c0;
  code *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  local_c0 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_c0 - uVar10;
  pcVar11 = (code *)(lVar14 - uVar10);
  lVar4 = 0;
  local_b8 = pcVar11;
  local_b0 = lVar3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  lVar15 = (long)pcVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar3 = lVar15 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1009b3060;
  _swift_allocObject(&DAT_1009b3060,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  local_70 = FUN_10033fc84;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009b3078;
  local_a8 = param_1;
  local_68 = puVar5;
  pvVar6 = __Block_copy(&local_90);
  local_a0 = param_2;
  _swift_retain(param_2);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,puVar2,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar8 = &DAT_100a82c20;
  FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar15,&local_98,puVar5,puVar8,lVar4,puVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar3,lVar15);
  _swift_release(local_68);
  lVar15 = 0;
  FUN_10033f2a8();
  iVar1 = *(int *)(lVar15 + 0x1c);
  uVar12 = *(undefined8 *)(unaff_x20 + iVar1);
  _swift_retain(lVar3);
  _swift_release(uVar12);
  *(long *)(unaff_x20 + iVar1) = lVar3;
  if (DAT_100a81bc0 != -1) {
    _swift_once(&DAT_100a81bc0,FUN_10033dac4);
  }
  uVar12 = DAT_100a86d80;
  __s8Dispatch0A4TimeV3nowACyFZ(lVar14);
  pcVar11 = local_b8;
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(local_b8,lVar14);
  lVar9 = local_b0;
  pcVar13 = *(code **)(local_c0 + 8);
  (*pcVar13)(lVar14,local_b0);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (pcVar11,lVar3);
  _swift_release(lVar3);
  (*pcVar13)();
  (**(code **)(unaff_x20 + *(int *)(lVar15 + 0x18)))();
  puVar7 = (undefined8 *)(unaff_x20 + *(int *)(lVar15 + 0x20));
  FUN_10033f2e0(*puVar7,puVar7[1],puVar7[2],puVar7[3]);
  *puVar7 = pcVar11;
  puVar7[1] = lVar9;
  puVar7[2] = pvVar6;
  puVar7[3] = lVar4;
  (*pcVar11)(uVar12,local_a8,local_a0);
  return;
}

