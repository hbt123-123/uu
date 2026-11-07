// rea decompile_all
// name: FUN_10005dad4
// address: 0x10005dad4
// body: available
// range: 0x10005dad4-0x10005e0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005dad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  double dVar14;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined1 auStack_180 [16];
  undefined8 auStack_170 [4];
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined4 local_d4;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_90 [32];
  
  lVar2 = 0;
  local_130 = param_4;
  local_f0 = param_5;
  local_e8 = param_1;
  puStack_e0 = (undefined *)param_2;
  __s8Dispatch0A4TimeVMa();
  local_108 = *(long *)(lVar2 + -8);
  local_f8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar13 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12;
  lVar2 = 0;
  local_100 = lVar13;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_120 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_118 = lVar13;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_128 = lVar13;
  __s10Foundation4DateVMa();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar13 - extraout_x12_00;
  _swift_beginAccess(unaff_x20 + 0x70,auStack_90,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  FUN_100073ca8();
  local_c8 = (undefined *)CONCAT71(local_c8._1_7_,1);
  uVar12 = 0;
  uVar5 = uVar4;
  local_138 = param_3;
  FUN_10004bca0();
  local_d4 = (undefined4)uVar12;
  _swift_release(uVar4);
  __s10Foundation4DateVACycfC(lVar13);
  dVar14 = 0.6;
  __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar17);
  pcVar16 = *(code **)(lVar18 + 8);
  (*pcVar16)(lVar13,lVar3);
  lVar2 = _TtC14UURemoteServer25VirtualDisplayCoordinator::topologySuppressionDeadline;
  _swift_beginAccess(unaff_x20 +
                     _TtC14UURemoteServer25VirtualDisplayCoordinator::topologySuppressionDeadline,
                     &local_c8,0x21,0);
  (**(code **)(lVar18 + 0x28))(unaff_x20 + lVar2,lVar17,lVar3);
  _swift_endAccess(&local_c8);
  lVar13 = local_f0;
  if ((uVar12 & 0xff) == 0) {
    FUN_10005e7f8();
    uVar11 = 0;
  }
  else {
    local_140 = param_3;
    if (local_f0 < 3) {
      local_c8 = (undefined *)0x2d7972746572;
      local_c0 = 0xe600000000000000;
      __sSS6appendyySSF(local_e8,puStack_e0);
      local_e8 = local_c0;
      puStack_e0 = local_c8;
      lVar15 = *(long *)(unaff_x20 + 0xd0);
      if (lVar15 != 0) {
        _swift_retain(lVar15);
        __s8Dispatch0A8WorkItemC6cancelyyFTj();
        _swift_release(lVar15);
      }
      (**(code **)(lVar18 + 0x10))(lVar17,unaff_x20 + lVar2,lVar3);
      __s10Foundation4DateV20timeIntervalSinceNowSdvg();
      (*pcVar16)(lVar17,lVar3);
      dVar19 = dVar14 + 0.05;
      if (dVar14 + 0.05 <= 0.35) {
        dVar19 = 0.35;
      }
      puVar6 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar6 + 0x10);
      puVar7 = &DAT_100998760;
      _swift_allocObject(&DAT_100998760,0x40,7);
      uVar1 = local_130;
      uVar4 = local_138;
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined **)(puVar7 + 0x18) = puStack_e0;
      *(undefined8 *)(puVar7 + 0x20) = local_e8;
      *(undefined8 *)(puVar7 + 0x28) = local_138;
      *(undefined8 *)(puVar7 + 0x30) = local_130;
      *(long *)(puVar7 + 0x38) = lVar13 + 1;
      local_a8 = thunk_FUN_100075150;
      local_c8 = PTR___NSConcreteStackBlock_100995490;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_100998778;
      local_a0 = puVar7;
      pvVar8 = __Block_copy(&local_c8);
      _swift_retain(puVar6);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar1);
      lVar2 = local_128;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_128);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar9 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar10 = puVar7;
      FUN_10004eec4();
      lVar13 = local_118;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_118,&local_d0,puVar7,puVar10,local_120,puVar9);
      __s8Dispatch0A8WorkItemCMa();
      _swift_allocObject();
      __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar2,lVar13,pvVar8);
      puVar7 = local_a0;
      _swift_release(puVar6);
      _swift_release(puVar7);
      uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
      *(long *)(unaff_x20 + 0xd0) = lVar2;
      _swift_retain(lVar2);
      _swift_release(uVar4);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      lVar13 = local_110;
      __s8Dispatch0A4TimeV3nowACyFZ(local_110);
      lVar3 = local_100;
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_100,dVar19,lVar13);
      lVar17 = local_f8;
      pcVar16 = *(code **)(local_108 + 8);
      (*pcVar16)(lVar13,local_f8);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
                (lVar3,lVar2);
      FUN_100075118(uVar5,local_140,local_d4);
      _swift_release(lVar2);
      (*pcVar16)(lVar3,lVar17);
      return;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar6 = puStack_e0;
    *(undefined8 *)(lVar17 + -0x30) = local_e8;
    *(undefined **)(lVar17 + -0x28) = puVar6;
    *(undefined8 *)(lVar17 + -0x20) = uVar5;
    param_3 = local_140;
    *(undefined8 *)(lVar17 + -0x18) = local_140;
    uVar11 = local_d4;
    *(char *)(lVar17 + -0x10) = (char)local_d4;
    FUN_1003fb4bc(FUN_100075108,lVar17 + -0x40,0xd0000000000000a5,0x800000010087d850,
                  0xd000000000000025,0x800000010087d990,0x5b8,0);
    FUN_10005e7f8();
  }
  FUN_100075118(uVar5,param_3,uVar11);
  return;
}

