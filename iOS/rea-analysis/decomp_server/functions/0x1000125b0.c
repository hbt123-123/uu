// rea decompile_all
// name: FUN_1000125b0
// address: 0x1000125b0
// body: available
// range: 0x1000125b0-0x10001296b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000125b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d0 [8];
  void *local_c8;
  long local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(self,"systemUptime");
  *(undefined8 *)(unaff_x20 + 0x118) = param_1;
  *(undefined1 *)(unaff_x20 + 0x120) = 0;
  lVar11 = *(long *)(unaff_x20 + 0x128);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
  }
  if (*(char *)(unaff_x20 + 0x130) == '\x01') {
    puVar5 = &DAT_100997520;
    _swift_allocObject(&DAT_100997520,0x18,7);
    local_b0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    _swift_weakInit(puVar5 + 0x10);
    puVar6 = &DAT_100997750;
    _swift_allocObject(&DAT_100997750,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    local_80 = FUN_10004002c;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_100997768;
    local_78 = puVar6;
    local_c8 = __Block_copy(&local_a0);
    puVar7 = puVar5;
    _swift_retain(puVar5);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar6 = &DAT_100a75a98;
    local_b8 = lVar2;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    local_c0 = lVar12;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_a8,puVar6,puVar8,lVar3,puVar7);
    __s8Dispatch0A8WorkItemCMa();
    _swift_allocObject();
    __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar4,lVar14,local_c8);
    puVar6 = local_78;
    _swift_release(puVar5);
    _swift_release(puVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x128);
    *(long *)(unaff_x20 + 0x128) = lVar4;
    _swift_retain(lVar4);
    _swift_release(uVar9);
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar1 = local_b0;
    __s8Dispatch0A4TimeV3nowACyFZ(local_b0);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar13,0x4014000000000000,puVar1);
    lVar2 = local_b8;
    pcVar10 = *(code **)(local_c0 + 8);
    (*pcVar10)(puVar1,local_b8);
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
              (lVar13,lVar4);
    _swift_release(lVar4);
    (*pcVar10)(lVar13,lVar2);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10002b260,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000003a,
                  0x800000010087b5e0,0x69c,0);
  }
  return;
}

