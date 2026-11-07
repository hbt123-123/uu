// rea decompile_all
// name: FUN_100050c90
// address: 0x100050c90
// body: available
// range: 0x100050c90-0x1000511cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100050c90(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_160 [16];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [8];
  undefined1 *local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined1 *local_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = 0;
  local_108 = param_3;
  uStack_100 = param_4;
  __s8Dispatch0A4TimeVMa();
  local_110 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  local_118 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar18 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar19 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  lVar6 = param_2 + 0x70;
  puVar12 = auStack_a8;
  _swift_beginAccess(lVar6,puVar12,0,0);
  if (*(long *)(*(long *)(param_2 + 0x70) + 0x10) != 0) {
    if (*(char *)(param_2 + 0x90) != '\x01') {
      lVar1 = *(long *)(param_2 + 0xc0);
      puVar2 = *(undefined1 **)(param_2 + 200);
      local_128 = lVar14;
      local_120 = lVar3;
      if (lVar1 == 0) {
        FUN_100051288();
        lVar3 = *(long *)(param_2 + 0xd0);
        local_130 = lVar6;
        local_138 = puVar12;
      }
      else {
        lVar3 = *(long *)(param_2 + 0xd0);
        local_130 = lVar1;
        local_138 = puVar2;
      }
      if (lVar3 == 0) {
        FUN_1000750c8(lVar1,puVar2);
      }
      else {
        FUN_1000750c8(lVar1,puVar2);
        _swift_retain(lVar3);
        __s8Dispatch0A8WorkItemC6cancelyyFTj();
        _swift_release(lVar3);
      }
      lVar3 = _TtC14UURemoteServer25VirtualDisplayCoordinator::topologySuppressionDeadline;
      _swift_beginAccess(param_2 + _TtC14UURemoteServer25VirtualDisplayCoordinator::
                                   topologySuppressionDeadline,auStack_c0,0,0);
      (**(code **)(lVar16 + 0x10))(lVar17,param_2 + lVar3,lVar5);
      __s10Foundation4DateV20timeIntervalSinceNowSdvg();
      (**(code **)(lVar16 + 8))(lVar17,lVar5);
      dVar20 = param_1 + 0.05;
      if (param_1 + 0.05 <= 0.35) {
        dVar20 = 0.35;
      }
      puVar7 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar7 + 0x10,param_2);
      puVar8 = &DAT_100998710;
      _swift_allocObject(&DAT_100998710,0x40,7);
      uVar13 = uStack_100;
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = local_108;
      *(undefined8 *)(puVar8 + 0x20) = uStack_100;
      *(long *)(puVar8 + 0x28) = local_130;
      *(undefined1 **)(puVar8 + 0x30) = local_138;
      *(undefined8 *)(puVar8 + 0x38) = 0;
      local_d0 = thunk_FUN_100075150;
      local_f0 = PTR___NSConcreteStackBlock_100995490;
      local_e8 = 0x42000000;
      local_e0 = FUN_1000acdb4;
      puStack_d8 = &DAT_100998728;
      local_c8 = puVar8;
      pvVar9 = __Block_copy(&local_f0);
      _swift_retain(puVar7);
      _swift_bridgeObjectRetain(uVar13);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar19);
      local_f8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a75a90;
      FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar8 = &DAT_100a75a98;
      FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
      puVar11 = puVar8;
      FUN_10004eec4();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar18,&local_f8,puVar8,puVar11,lVar4,puVar10);
      __s8Dispatch0A8WorkItemCMa();
      _swift_allocObject();
      __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar19,lVar18,pvVar9)
      ;
      puVar8 = local_c8;
      _swift_release(puVar7);
      _swift_release(puVar8);
      uVar13 = *(undefined8 *)(param_2 + 0xd0);
      *(long *)(param_2 + 0xd0) = lVar19;
      _swift_retain(lVar19);
      _swift_release(uVar13);
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar12 = local_118;
      __s8Dispatch0A4TimeV3nowACyFZ(local_118);
      lVar3 = local_128;
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_128,dVar20,puVar12);
      lVar4 = local_120;
      pcVar15 = *(code **)(local_110 + 8);
      (*pcVar15)(puVar12,local_120);
      __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
                (lVar3,lVar19);
      _swift_release(lVar19);
      _swift_release(param_2);
      (*pcVar15)(lVar3,lVar4);
      return;
    }
    *(undefined1 *)
     (param_2 + _TtC14UURemoteServer25VirtualDisplayCoordinator::needsTopologyReconcile) = 1;
    _swift_release(param_2);
    return;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar13 = uStack_100;
  *(undefined8 *)(lVar17 + -0x10) = local_108;
  *(undefined8 *)(lVar17 + -8) = uVar13;
  FUN_1003fb45c(FUN_100075100,lVar17 + -0x20,0xd0000000000000a5,0x800000010087d850,
                0xd000000000000035,0x800000010087d900,0x1fe,0);
  _swift_release(param_2);
  return;
}

