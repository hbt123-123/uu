// rea decompile_all
// name: FUN_100414918
// address: 0x100414918
// body: available
// range: 0x100414918-0x1004150f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004150b8 to 0x100414840 FUN_100414840 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100414918(byte *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  long local_160 [2];
  undefined8 *local_150;
  long local_148;
  long local_140;
  undefined8 *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined *local_b0;
  long local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  local_c8 = (ulong)*param_1;
  local_d0 = *(undefined8 *)(param_1 + 8);
  local_d8 = *(undefined8 *)(param_1 + 0x10);
  local_e0 = (ulong)param_1[0x18];
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar2 + -8);
  lStack_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar8 = (long)local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_100 = lVar8;
  __s8Dispatch0A3QoSVMa();
  local_110 = *(long *)(lVar2 + -8);
  lStack_108 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_118 = lVar8;
  __s8Dispatch0A4TimeVMa();
  local_128 = *(long *)(lVar2 + -8);
  local_120 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_128 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - extraout_x12;
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = (undefined8 *)(lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = (undefined8 *)((long)puVar9 - extraout_x12_00);
  lVar4 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa();
  lVar17 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = (long)puVar15 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_10040ec0c();
  if (param_2 == 0) {
    local_160[0] = lVar12;
    local_160[1] = lVar17;
    local_150 = puVar9;
    local_148 = lVar11;
    local_140 = lVar8;
    local_138 = puVar15;
    if ((*param_1 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
      *(ulong *)(unaff_x20 + 0x68) = local_c8 & 1;
      *(undefined8 *)(unaff_x20 + 0x70) = local_d0;
      *(undefined8 *)(unaff_x20 + 0x78) = local_d8;
      *(ulong *)(unaff_x20 + 0x80) = local_e0 & 1;
      *(undefined8 *)(unaff_x20 + 0x88) = local_e8;
      _swift_bridgeObjectRelease(uVar5);
      _swift_beginAccess(unaff_x20 + 0x90,auStack_80,1,0);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x90);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(unaff_x20 + 0x90) = PTR___swiftEmptySetSingleton_100995eb0;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRelease(uVar10);
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined1 *)(unaff_x20 + 0xa0) = 1;
      lVar2 = *(long *)(unaff_x20 + 0x60);
      if (lVar2 != 0) {
        lVar8 = lVar2;
        _swift_getObjectType(lVar2);
        _swift_unknownObjectRetain(lVar2);
        __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar8);
        _swift_unknownObjectRelease(lVar2);
      }
      uVar5 = 0;
      FUN_10040c730(0);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1001b97e0();
      puVar6 = &DAT_100a7cd50;
      FUN_100004bb4(&DAT_100a7cd50,&DAT_100822530);
      puVar7 = puVar6;
      FUN_1001b9824();
      lVar2 = local_160[0];
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_160[0],&local_b0,puVar6,puVar7,lVar4,uVar5);
      lVar12 = lVar2;
      __sSo18OS_dispatch_sourceC8DispatchE15makeTimerSource5flags5queueSo0a1_b1_C6_timer_pAbCE0F5FlagsV_So0a1_b1_I0CSgtFZ
                (lVar2,uVar10);
      local_c8 = lVar12;
      (**(code **)(local_160[1] + 8))(lVar2,lVar4);
      puVar15 = local_138;
      local_d0 = *(undefined8 *)(param_1 + 8);
      *local_138 = local_d0;
      lVar2 = local_148;
      pcVar13 = *(code **)(local_148 + 0x68);
      (*pcVar13)(puVar15,*(undefined4 *)
                          PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar3);
      _swift_getObjectType(lVar12);
      lVar8 = local_130;
      __s8Dispatch0A4TimeV3nowACyFZ(local_130);
      lVar4 = local_140;
      __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(local_140,lVar8,puVar15);
      lVar11 = local_120;
      pcVar14 = *(code **)(local_128 + 8);
      (*pcVar14)(lVar8,local_120);
      puVar9 = local_150;
      *local_150 = 0;
      (*pcVar13)(puVar9,*(undefined4 *)
                         PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_100995f08,lVar3)
      ;
      uVar1 = local_c8;
      __sSo24OS_dispatch_source_timerP8DispatchE8schedule8deadline9repeating6leewayyAC0E4TimeV_AC0eJ8IntervalOAKtF
                (lVar4,puVar15,puVar9,lVar12);
      pcVar16 = *(code **)(lVar2 + 8);
      (*pcVar16)(puVar9,lVar3);
      (*pcVar14)(lVar4,lVar11);
      puVar6 = &DAT_1009bd208;
      _swift_allocObject(&DAT_1009bd208,0x18,7);
      _swift_weakInit(puVar6 + 0x10,unaff_x20);
      local_90 = FUN_10041516c;
      local_b0 = PTR___NSConcreteStackBlock_100995490;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000acdb4;
      puStack_98 = &DAT_1009bd220;
      local_88 = puVar6;
      aBlock = __Block_copy(&local_b0);
      _swift_retain(puVar6);
      lVar2 = local_118;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118,lVar12);
      lVar4 = local_100;
      thunk_FUN_1001e7cc4(local_100,lVar12);
      __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
                (lVar2,lVar4,aBlock,lVar12);
      __Block_release(aBlock);
      (**(code **)(local_f8 + 8))(lVar4,lStack_f0);
      (**(code **)(local_110 + 8))(lVar2,lStack_108);
      puVar7 = local_88;
      _swift_release(puVar6);
      _swift_release(puVar7);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
      *(ulong *)(unaff_x20 + 0x60) = uVar1;
      _swift_unknownObjectRetain(uVar1);
      _swift_unknownObjectRelease(uVar5);
      __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(lVar12);
      pcVar13 = *(code **)(unaff_x20 + 0x38);
      if (pcVar13 == (code *)0x0) {
        (*pcVar16)(local_138,lVar3);
        _swift_unknownObjectRelease(uVar1);
      }
      else {
        local_b0 = (undefined *)0x0;
        local_a8 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x36);
        __sSS6appendyySSF(0x1000000000000026,0x80000001008b6680);
        uVar5 = 0xea00000000006465;
        if (*(char *)(unaff_x20 + 0x10) == '\0') {
          uVar5 = 0xea00000000007265;
        }
        __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar5);
        _swift_bridgeObjectRelease(uVar5);
        __sSS6appendyySSF(0x7265746e698cbcef,0xac0000003d6c6176);
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        lVar2 = local_a8;
        (*pcVar13)(local_b0,local_a8);
        _swift_unknownObjectRelease(uVar1);
        _swift_bridgeObjectRelease(lVar2);
        (*pcVar16)(local_138,lVar3);
      }
      return;
    }
    pcVar13 = *(code **)(unaff_x20 + 0x38);
    if (pcVar13 == (code *)0x0) goto LAB_10041509c;
    local_b0 = (undefined *)0x0;
    local_a8 = -0x2000000000000000;
    __ss11_StringGutsV4growyySiF(0x3d);
    __sSS6appendyySSF(0x100000000000003b,0x80000001008b6640);
    param_2 = -0x15ffffffffff9b9b;
    if (*(char *)(unaff_x20 + 0x10) == '\0') {
      param_2 = -0x15ffffffffff8d9b;
    }
    __sSS6appendyySSF(0x6c6c6f72746e6f63,param_2);
LAB_100415080:
    _swift_bridgeObjectRelease(param_2);
    param_2 = local_a8;
    (*pcVar13)(local_b0,local_a8);
  }
  else {
    pcVar13 = *(code **)(unaff_x20 + 0x38);
    if (pcVar13 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = -0x2000000000000000;
      __ss11_StringGutsV4growyySiF(0x37);
      __sSS6appendyySSF(0x1000000000000029,0x80000001008b66b0);
      uVar5 = 0xea00000000006465;
      if (*(char *)(unaff_x20 + 0x10) == '\0') {
        uVar5 = 0xea00000000007265;
      }
      __sSS6appendyySSF(0x6c6c6f72746e6f63,uVar5);
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x6f736165728cbcef,0xaa00000000003d6e);
      __sSS6appendyySSF(lVar2,param_2);
      goto LAB_100415080;
    }
  }
  _swift_bridgeObjectRelease(param_2);
LAB_10041509c:
  FUN_100414840();
  return;
}

