// rea decompile_all
// name: FUN_10008dac8
// address: 0x10008dac8
// body: available
// range: 0x10008dac8-0x10008de37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008dac8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  undefined1 *puVar12;
  long extraout_x12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_c8 = param_2;
  __s8Dispatch0A4TimeVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)puVar12 - extraout_x12;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar19 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar20 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar21 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar20 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100999b60;
  _swift_allocObject(&DAT_100999b60,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar21 + 0x10))(lVar18,param_1,lVar3);
  uVar11 = (ulong)*(byte *)(lVar21 + 0x50);
  uVar16 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
  uVar17 = lVar13 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100999d68;
  _swift_allocObject(&DAT_100999d68,uVar17 + 8,uVar11 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  (**(code **)(lVar21 + 0x20))(puVar5 + uVar16,lVar18,lVar3);
  *(undefined8 *)(puVar5 + uVar17) = local_c8;
  local_70 = FUN_1000917d0;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_100999d80;
  local_68 = puVar5;
  pvVar6 = __Block_copy(&local_90);
  _swift_retain(puVar4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar20);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar7 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar8 = puVar5;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar19,&local_98,puVar5,puVar8,lVar2,puVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar20,lVar19,pvVar6);
  puVar5 = local_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  *(long *)(unaff_x20 + 0x50) = lVar20;
  _swift_retain(lVar20);
  _swift_release(uVar14);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  __s8Dispatch0A4TimeV3nowACyFZ(puVar12);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar10,0x3fc999999999999a,puVar12);
  pcVar15 = *(code **)(lVar9 + 8);
  (*pcVar15)(puVar12,lVar1);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar10,lVar20);
  _swift_release(lVar20);
  (*pcVar15)(lVar10,lVar1);
  return;
}

