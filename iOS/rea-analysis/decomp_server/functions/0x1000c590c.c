// rea decompile_all
// name: FUN_1000c590c
// address: 0x1000c590c
// body: available
// range: 0x1000c590c-0x1000c5e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c590c(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  code *local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  code *local_f8;
  code *local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar4 + -8);
  local_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d8 = lVar11;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar4 + -8);
  local_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_e0 = lVar11;
  __s8Dispatch0A4TimeVMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar17 - extraout_x12_00;
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  uVar5 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (uVar5 != 0) {
    uVar6 = uVar5;
    (**(code **)(uVar5 + 0x10))();
    if (uVar6 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRelease();
    }
    else {
      uVar13 = uVar6 & 0xffffffffffffff8;
      if ((long)uVar6 < 0) {
        uVar13 = uVar6;
      }
      local_e8 = uVar6;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      _swift_bridgeObjectRelease(local_e8);
    }
    if ((uVar13 != 0) && ((*(byte *)(uVar5 + 0x50) & 1) == 0)) {
      if (param_2 == 10) {
        FUN_1000c5e0c();
      }
      if ((*(byte *)(uVar5 + 0x40) & 1) == 0) {
        *(undefined1 *)(uVar5 + 0x40) = 1;
        uVar18 = 0x3ff0000000000000;
        if (param_2 != 1) {
          uVar18 = 0x3fc999999999999a;
        }
        uVar7 = 0;
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        local_e8 = uVar7;
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        local_f0 = (code *)uVar7;
        __s8Dispatch0A4TimeV3nowACyFZ(lVar17);
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar16,uVar18,lVar17);
        local_120 = *(code **)(lVar14 + 8);
        local_118 = lVar4;
        (*local_120)(lVar17,lVar4);
        puVar8 = &DAT_10099b5e8;
        _swift_allocObject(&DAT_10099b5e8,0x18,7);
        _swift_weakInit(puVar8 + 0x10,uVar5);
        local_a0 = FUN_1000c740c;
        local_c0 = PTR___NSConcreteStackBlock_100995490;
        local_b8 = 0x42000000;
        local_b0 = FUN_1000acdb4;
        puStack_a8 = &DAT_10099b650;
        local_98 = puVar8;
        local_f8 = __Block_copy(&local_c0);
        puVar9 = local_98;
        _swift_retain(uVar5);
        _swift_release();
        lVar14 = local_e0;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ();
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10003f7fc();
        puVar8 = &DAT_100a75a98;
        local_108 = puVar9;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar10 = puVar8;
        local_110 = puVar8;
        FUN_10004eec4();
        lVar2 = local_d8;
        local_100 = puVar10;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_d8,&local_c0,puVar8,puVar10,local_c8,puVar9);
        pcVar1 = local_f8;
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar16,lVar14,lVar2,local_f8);
        __Block_release(pcVar1);
        lVar3 = local_c8;
        local_f0 = *(code **)(lVar12 + 8);
        (*local_f0)(lVar2,local_c8);
        local_f8 = *(code **)(lVar15 + 8);
        (*local_f8)(lVar14,local_d0);
        lVar4 = local_118;
        pcVar1 = local_120;
        lVar12 = lVar16;
        (*local_120)(lVar16,local_118);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        local_e8 = lVar12;
        __s8Dispatch0A4TimeV3nowACyFZ(lVar11);
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar17,uVar18,lVar11);
        (*pcVar1)(lVar11,lVar4);
        __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar16,0x3f947ae147ae147b,lVar17);
        (*pcVar1)(lVar17,lVar4);
        puVar8 = &DAT_10099b5e8;
        _swift_allocObject(&DAT_10099b5e8,0x18,7);
        _swift_weakInit(puVar8 + 0x10,uVar5);
        _swift_release(uVar5);
        local_a0 = FUN_1000c7414;
        local_c0 = PTR___NSConcreteStackBlock_100995490;
        local_b8 = 0x42000000;
        local_b0 = FUN_1000acdb4;
        puStack_a8 = &DAT_10099b678;
        local_98 = puVar8;
        aBlock = __Block_copy(&local_c0);
        _swift_release(local_98);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
        local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar2,&local_c0,local_110,local_100,lVar3,local_108);
        __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (lVar16,lVar14,lVar2,aBlock);
        __Block_release(aBlock);
        _swift_release(uVar5);
        (*local_f0)(lVar2,lVar3);
        (*local_f8)(lVar14,local_d0);
        (*pcVar1)(lVar16,lVar4);
        return;
      }
    }
    _swift_release(uVar5);
  }
  return;
}

