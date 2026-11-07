// rea decompile_all
// name: FUN_1001b6b60
// address: 0x1001b6b60
// body: available
// range: 0x1001b6b60-0x1001b713f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b6b60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  undefined8 *extraout_x14;
  long lVar9;
  undefined8 *unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_150 [4];
  undefined8 auStack_130 [2];
  undefined4 local_11c;
  code *local_118;
  long local_110;
  undefined8 *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_a8 = *unaff_x20;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar14 = (long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_c0 = lVar14;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar1 + -8);
  local_c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar10 - extraout_x12;
  lVar2 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar8 = (undefined8 *)((lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00)
  ;
  if (unaff_x20[9] == 0) {
    local_100 = lVar16;
    local_f8 = lVar17;
    local_f0 = lVar10;
    local_e8 = lVar12;
    local_e0 = lVar9;
    local_d8 = lVar14;
    local_d0 = lVar15;
    if ((*(byte *)((long)unaff_x20 + 0x39) & 1) == 0) {
      if (*(char *)((long)unaff_x20 + 0x3a) == '\x01') {
        *puVar8 = 5;
        local_11c = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20;
        local_118 = *(code **)(extraout_x13 + 0x68);
        local_110 = extraout_x13;
        (*local_118)(puVar8);
        FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
        uVar5 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        uVar4 = uVar5;
        FUN_1001b97e0();
        puVar6 = &DAT_100a7cd50;
        auStack_130[1] = uVar4;
        FUN_100004bb4(&DAT_100a7cd50,&DAT_100822530);
        puVar7 = puVar6;
        FUN_1001b9824();
        lVar14 = local_100;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_100,&local_98,puVar6,puVar7,lVar2,auStack_130[1]);
        lVar9 = lVar14;
        __sSo18OS_dispatch_sourceC8DispatchE15makeTimerSource5flags5queueSo0a1_b1_C6_timer_pAbCE0F5FlagsV_So0a1_b1_I0CSgtFZ
                  (lVar14,uVar5);
        (**(code **)(local_f8 + 8))(lVar14,lVar2);
        lVar10 = lVar9;
        _swift_getObjectType(lVar9);
        lVar2 = local_f0;
        __s8Dispatch0A4TimeV3nowACyFZ(local_f0);
        lVar14 = local_e0;
        local_108 = puVar8;
        __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(local_e0,lVar2,puVar8);
        pcVar13 = *(code **)(local_e8 + 8);
        (*pcVar13)(lVar2,lVar1);
        *extraout_x14 = 1;
        (*local_118)(extraout_x14,local_11c,lVar3);
        __sSo24OS_dispatch_source_timerP8DispatchE8schedule8deadline9repeating6leewayyAC0E4TimeV_AC0eJ8IntervalOAKtF
                  (lVar14,puVar8,extraout_x14,lVar10);
        pcVar11 = *(code **)(local_110 + 8);
        (*pcVar11)(extraout_x14,lVar3);
        (*pcVar13)(lVar14,lVar1);
        puVar6 = &DAT_1009a29d8;
        _swift_allocObject(&DAT_1009a29d8,0x18,7);
        _swift_weakInit(puVar6 + 0x10,unaff_x20);
        local_78 = FUN_1001b9898;
        local_98 = PTR___NSConcreteStackBlock_100995490;
        local_90 = 0x42000000;
        local_88 = FUN_1000acdb4;
        puStack_80 = &DAT_1009a29f0;
        local_70 = puVar6;
        aBlock = __Block_copy(&local_98);
        _swift_retain(puVar6);
        lVar1 = local_d8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8,lVar10);
        lVar2 = local_c0;
        thunk_FUN_1001e7cc4(local_c0,lVar10);
        __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
                  (lVar1,lVar2,aBlock,lVar10);
        __Block_release(aBlock);
        (**(code **)(local_b8 + 8))(lVar2,lStack_b0);
        (**(code **)(local_d0 + 8))(lVar1,local_c8);
        puVar7 = local_70;
        _swift_release(puVar6);
        _swift_release(puVar7);
        uVar4 = unaff_x20[9];
        unaff_x20[9] = lVar9;
        _swift_unknownObjectRetain(lVar9);
        _swift_unknownObjectRelease(uVar4);
        __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(lVar10);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        puVar8[-2] = local_a8;
        FUN_1003fb48c(FUN_1001b98a0,puVar8 + -4,0xd000000000000093,0x800000010089b8d0,
                      0xd00000000000001e,0x800000010089c2d0,0xcc,0);
        _swift_unknownObjectRelease(lVar9);
        (*pcVar11)(local_108,lVar3);
      }
      else {
        uVar4 = 0;
        FUN_100401b14(0);
        FUN_1003fb45c(uVar4,FUN_1001b97d8,unaff_x20,0xd000000000000093,0x800000010089b8d0,
                      0xd00000000000001e,0x800000010089c2d0,0xbe,0);
      }
    }
    else {
      uVar4 = 0;
      FUN_100401b14(0);
      FUN_1003fb48c(uVar4,FUN_1001b98a8,unaff_x20,0xd000000000000093,0x800000010089b8d0,
                    0xd00000000000001e,0x800000010089c2d0,0xba,0);
    }
  }
  return;
}

