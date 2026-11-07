// rea decompile_all
// name: FUN_1001041a8
// address: 0x1001041a8
// body: available
// range: 0x1001041a8-0x100104517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001041a8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [16];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  local_c0 = *(long *)(lVar1 + -8);
  local_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar8 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - extraout_x12;
  lVar1 = 0;
  local_c8 = lVar8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar6 = PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100107ac8(0x100000000000001e,0x800000010088ab20);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001083f4,auStack_b0,0xd000000000000097,0x8000000100889170,0xd000000000000012,
                0x800000010087afa0,0x1e8,0);
  puVar3 = &DAT_10099d478;
  _swift_allocObject(&DAT_10099d478,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  local_70 = FUN_100108420;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_10099d490;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar5 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,puVar6,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
  ;
  puVar6 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,&local_98,puVar6,puVar7,lVar1,puVar5);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar11,lVar8,pvVar4);
  puVar6 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar6);
  uVar9 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer16WallpaperManager::sessionEndUploadWorkItem);
  *(long *)(unaff_x20 + _TtC14UURemoteServer16WallpaperManager::sessionEndUploadWorkItem) = lVar11;
  _swift_retain(lVar11);
  _swift_release(uVar9);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  lVar1 = local_d0;
  __s8Dispatch0A4TimeV3nowACyFZ(local_d0);
  lVar2 = local_c8;
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_c8,0x4008000000000000,lVar1);
  lVar8 = local_b8;
  pcVar10 = *(code **)(local_c0 + 8);
  (*pcVar10)(lVar1,local_b8);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar2,lVar11);
  _swift_release(lVar11);
  (*pcVar10)(lVar2,lVar8);
  return;
}

