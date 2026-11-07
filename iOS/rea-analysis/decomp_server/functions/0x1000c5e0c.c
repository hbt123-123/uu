// rea decompile_all
// name: FUN_1000c5e0c
// address: 0x1000c5e0c
// body: available
// range: 0x1000c5e0c-0x1000c60c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c5e0c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  local_a8 = *(long *)(lVar1 + -8);
  local_a0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar12 - extraout_x12;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  if (lVar10 != 0) {
    _swift_retain(lVar10);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar10);
  }
  puVar3 = &DAT_10099b5e8;
  _swift_allocObject(&DAT_10099b5e8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_70 = FUN_1000c741c;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_10099b6a0;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  puVar5 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar6 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = puVar6;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar13,&local_98,puVar6,puVar7,lVar1,puVar5);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar2,lVar13,pvVar4);
  puVar6 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x20 + 0x48) = lVar2;
  _swift_retain(lVar2);
  _swift_release(uVar8);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  __s8Dispatch0A4TimeV3nowACyFZ(puVar12);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar11,0x3ff0000000000000,puVar12);
  lVar1 = local_a0;
  pcVar9 = *(code **)(local_a8 + 8);
  (*pcVar9)(puVar12,local_a0);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar11,lVar2);
  _swift_release(lVar2);
  (*pcVar9)(lVar11,lVar1);
  return;
}

