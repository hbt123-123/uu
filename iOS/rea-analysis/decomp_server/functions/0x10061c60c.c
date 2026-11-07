// rea decompile_all
// name: FUN_10061c60c
// address: 0x10061c60c
// body: available
// range: 0x10061c60c-0x10061c92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10061c60c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar1 + -8);
  lVar10 = (long)&local_e0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_d0 = lVar10;
  lStack_c8 = lVar1;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar2 + -8);
  lVar10 = lVar10 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_b8 = lVar2;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar9 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar11 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar9 - uVar7;
  lVar13 = lVar14 - uVar7;
  puVar3 = &DAT_100aaff00;
  local_e0 = lVar2;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  puVar4 = &DAT_100aaff08;
  local_d8 = puVar3;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(puVar3 + 0x10) = puVar4;
  puVar3 = &DAT_1009e0408;
  _swift_allocObject(&DAT_1009e0408,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100605b80;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  _swift_retain(puVar4);
  __s8Dispatch0A4TimeV3nowACyFZ(lVar14);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar13,param_1,lVar14);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar14,lVar2);
  FUN_100605bac(0);
  (**(code **)(lVar8 + 0x68))
            (lVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,lVar1)
  ;
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar9);
  (**(code **)(lVar8 + 8))(lVar9,lVar1);
  puVar4 = &DAT_1009e0430;
  _swift_allocObject(&DAT_1009e0430,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000f4ed4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_80 = FUN_100102840;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009e0448;
  local_78 = puVar4;
  aBlock = __Block_copy(&local_a0);
  puVar5 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100607460();
  puVar4 = &DAT_100aaffd0;
  FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
  puVar6 = puVar4;
  FUN_1006074a4();
  lVar2 = lStack_c8;
  lVar1 = local_d0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_d0,&local_a8,puVar4,puVar6,lStack_c8,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar13,lVar10,lVar1,aBlock);
  __Block_release(aBlock);
  _swift_release(puVar3);
  (**(code **)(local_b0 + 8))(lVar1,lVar2);
  (**(code **)(local_c0 + 8))(lVar10,lStack_b8);
  (*pcVar12)(lVar13,local_e0);
  _swift_release(local_78);
  return local_d8;
}

