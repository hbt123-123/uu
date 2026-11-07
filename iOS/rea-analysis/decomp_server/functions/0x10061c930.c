// rea decompile_all
// name: FUN_10061c930
// address: 0x10061c930
// body: available
// range: 0x10061c930-0x10061cc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10061c930(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  long lStack_b8;
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
  
  lVar2 = 0;
  local_d0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(local_a0 + 0x40);
  lVar3 = 0;
  local_c0 = auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  lVar10 = (long)(auStack_e0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_a8 = lVar3;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar15 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar11 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar15 - uVar9;
  lVar13 = lVar14 - uVar9;
  puVar4 = &DAT_100aaff00;
  local_d8 = lVar3;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  puVar5 = &DAT_100aaff08;
  local_c8 = puVar4;
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  FUN_10061047c();
  *(undefined **)(puVar4 + 0x10) = puVar5;
  puVar4 = &DAT_1009e0480;
  _swift_allocObject(&DAT_1009e0480,0x20,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_100605b80;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  _swift_retain(puVar5);
  __s8Dispatch0A4TimeV3nowACyFZ(lVar14);
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(lVar13,lVar14,local_d0);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar14,lVar3);
  FUN_100605bac(0);
  (**(code **)(lVar8 + 0x68))
            (lVar15,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,lVar2
            );
  __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar15);
  (**(code **)(lVar8 + 8))(lVar15,lVar2);
  puVar5 = &DAT_1009e04a8;
  _swift_allocObject(&DAT_1009e04a8,0x20,7);
  *(code **)(puVar5 + 0x10) = thunk_FUN_1000f4ed4;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_70 = thunk_FUN_100102840;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009e04c0;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar6 = puVar4;
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100607460();
  puVar5 = &DAT_100aaffd0;
  FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
  puVar7 = puVar5;
  FUN_1006074a4();
  lVar2 = lStack_b8;
  puVar1 = local_c0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_c0,&local_98,puVar5,puVar7,lStack_b8,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar13,lVar10,puVar1,aBlock);
  __Block_release(aBlock);
  _swift_release(puVar4);
  (**(code **)(local_a0 + 8))(puVar1,lVar2);
  (**(code **)(local_b0 + 8))(lVar10,lStack_a8);
  (*pcVar12)(lVar13,local_d8);
  _swift_release(local_68);
  return local_c8;
}

