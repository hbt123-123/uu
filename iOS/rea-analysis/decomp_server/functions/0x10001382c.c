// rea decompile_all
// name: FUN_10001382c
// address: 0x10001382c
// body: available
// range: 0x10001382c-0x100013b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001382c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  code *local_e0;
  long local_d8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_e8 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar9 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar10 = *(long *)(lVar3 + -8);
  local_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar13 - extraout_x12;
  FUN_100401b14(0);
  local_a0 = 0x3ff3333333333333;
  uStack_98 = param_1;
  FUN_1003fb48c(FUN_10003ff74,auStack_b0,0xd0000000000000a9,0x8000000100877660,0xd000000000000034,
                0x800000010087afc0,0x64d,0);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  __s8Dispatch0A4TimeV3nowACyFZ(lVar13);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar12,0x3ff3333333333333,lVar13);
  local_e0 = *(code **)(lVar10 + 8);
  (*local_e0)(lVar13,lVar3);
  puVar4 = &DAT_100997520;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(puVar4 + 0x10,unaff_x20);
  puVar5 = &DAT_100997700;
  _swift_allocObject(&DAT_100997700,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = local_e8;
  local_70 = FUN_10003ffa4;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_100997718;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar5 = local_68;
  _swift_release(local_68);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar4 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar6 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&local_90,puVar4,puVar6,lVar1,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (lVar12,lVar11,puVar9,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar7 + 8))(puVar9,lVar1);
  (**(code **)(lVar8 + 8))(lVar11,lVar2);
  (*local_e0)(lVar12,local_d8);
  return;
}

