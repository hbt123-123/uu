// rea decompile_all
// name: FUN_10001746c
// address: 0x10001746c
// body: available
// range: 0x10001746c-0x1000177d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001746c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  local_d8 = *(long *)(lVar1 + -8);
  local_c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar9 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar9 - extraout_x12;
  lVar1 = 0;
  local_d0 = lVar9;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100401b14(0);
  local_a0 = 0x3fe6666666666666;
  local_b0 = param_1;
  uStack_a8 = param_2;
  FUN_1003fb48c(uVar3,FUN_100040134,auStack_c0,0xd0000000000000a9,0x8000000100877660,
                &DAT_d000000000000030,0x800000010087bcc0,0x23d,0);
  lVar11 = *(long *)(unaff_x20 + 0xb0);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
  }
  puVar4 = &DAT_100997520;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  local_70 = FUN_100040140;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_100997790;
  local_68 = puVar4;
  pvVar5 = __Block_copy(&local_90);
  puVar6 = puVar4;
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar7 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar8 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_98,puVar7,puVar8,lVar1,puVar6);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar2,lVar9,pvVar5);
  puVar7 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar7);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(long *)(unaff_x20 + 0xb0) = lVar2;
  _swift_retain(lVar2);
  _swift_release(uVar3);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  lVar1 = local_e0;
  __s8Dispatch0A4TimeV3nowACyFZ(local_e0);
  lVar9 = local_d0;
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_d0,0x3fe6666666666666,lVar1);
  lVar11 = local_c8;
  pcVar10 = *(code **)(local_d8 + 8);
  (*pcVar10)(lVar1,local_c8);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar9,lVar2);
  _swift_release(lVar2);
  (*pcVar10)(lVar9,lVar11);
  return;
}

