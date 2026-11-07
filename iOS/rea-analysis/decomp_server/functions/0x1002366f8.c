// rea decompile_all
// name: FUN_1002366f8
// address: 0x1002366f8
// body: available
// range: 0x1002366f8-0x100236f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002366f8(void)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined *puVar10;
  void *pvVar11;
  undefined *puVar12;
  long lVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long unaff_x20;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined *local_c0;
  undefined **ppuStack_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  local_d8 = *(long *)(lVar6 + -8);
  lStack_d0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar17 = ((long)&local_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar15 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  ppuVar7 = (undefined **)0x0;
  local_b0 = lVar15;
  __s8Dispatch0A3QoSVMa();
  local_c0 = ppuVar7[-1];
  ppuStack_b8 = ppuVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  local_c8 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100235be4();
  if (((ulong)ppuVar7 & 1) == 0) {
    uVar18 = 0x80000001008a7000;
  }
  else {
    local_a0 = (undefined *)0x0;
    local_98 = -0x2000000000000000;
    local_e0 = (long)&local_f0 - extraout_x8;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar8 = 0xd0000000000000a4;
    local_e8 = 0x80000001008a7000;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,0x80000001008a7000);
    pcVar14 = "lastPathComponent";
    IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
    __sSS6appendyySSF(IVar8,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined *)0x28;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x5f6e6f6973736573,0xea00000000006469);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = (undefined *)0x100000000000001c;
    uStack_68 = 0x80000001008a70b0;
    ppuVar7 = &local_a0;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,ppuVar7,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    lVar13 = local_98;
    puVar5 = local_a0;
    uVar18 = DAT_100b362c0;
    lVar15 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease();
    }
    else {
      FUN_10021e878(0);
      uVar9 = uVar18;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar10 = &DAT_1009a6c68;
      local_f0 = uVar9;
      _swift_allocObject(&DAT_1009a6c68,0x30,7);
      *(long *)(puVar10 + 0x10) = lVar15;
      *(undefined8 *)(puVar10 + 0x18) = uVar18;
      *(undefined **)(puVar10 + 0x20) = puVar5;
      *(long *)(puVar10 + 0x28) = lVar13;
      local_80 = thunk_FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a6c80;
      local_78 = puVar10;
      pvVar11 = __Block_copy(&local_a0);
      puVar10 = local_78;
      _swift_retain(uVar18);
      _swift_release(puVar10);
      lVar13 = local_c8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar5 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar12 = puVar5;
      FUN_10021e91c();
      lVar4 = local_b0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_b0,&local_a0,puVar5,puVar12,lVar6,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,lVar4,pvVar11);
      __Block_release(pvVar11);
      FUN_10007ed2c(lVar15,uVar18);
      (**(code **)(local_a8 + 8))(lVar4,lVar6);
      ppuVar7 = ppuStack_b8;
      (**(code **)(local_c0 + 8))();
    }
    __s10Foundation4UUIDVACycfC(lVar17);
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(local_d8 + 8))(lVar17,lStack_d0);
    plVar1 = (long *)(unaff_x20 + _TtC6FCount6FCount::_session_id);
    lVar15 = plVar1[1];
    *plVar1 = lVar13;
    plVar1[1] = (long)ppuVar7;
    _swift_bridgeObjectRelease(lVar15);
    lVar13 = 0;
    __s10Foundation4DateVMa();
    lVar17 = local_e0;
    pcVar16 = *(code **)(*(long *)(lVar13 + -8) + 0x38);
    (*pcVar16)(local_e0,1,1,lVar13);
    lVar15 = _TtC6FCount6FCount::foregroundDate;
    _swift_beginAccess(unaff_x20 + _TtC6FCount6FCount::foregroundDate,&local_a0,0x21,0);
    FUN_1002381f8(lVar17,unaff_x20 + lVar15);
    _swift_endAccess(&local_a0);
    (*pcVar16)(lVar17,1,1,lVar13);
    lVar15 = _TtC6FCount6FCount::backgroundDate;
    _swift_beginAccess(unaff_x20 + _TtC6FCount6FCount::backgroundDate,&local_a0,0x21,0);
    FUN_1002381f8(lVar17,unaff_x20 + lVar15);
    _swift_endAccess(&local_a0);
    uVar18 = local_e8;
  }
  local_a0 = (undefined *)0x6e6f69737365735b;
  local_98 = 0xed0000205d64695f;
  pauVar2 = (undefined1 (*) [16])(unaff_x20 + _TtC6FCount6FCount::_session_id);
  uVar9 = *(undefined8 *)*pauVar2;
  uVar3 = *(undefined8 *)(*pauVar2 + 8);
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(uVar9,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  lVar15 = local_98;
  puVar5 = local_a0;
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar8 = 0xd0000000000000a4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,uVar18);
  pcVar14 = "lastPathComponent";
  IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
  __sSS6appendyySSF(IVar8,pcVar14);
  _swift_bridgeObjectRelease(pcVar14);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined *)0x31;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0x5f6e6f6973736573,0xea00000000006469);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = puVar5;
  uStack_68 = lVar15;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(lVar15);
  lVar17 = local_98;
  puVar5 = local_a0;
  uVar18 = DAT_100b362c0;
  lVar15 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar18);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_1009a6c18;
    _swift_allocObject(&DAT_1009a6c18,0x30,7);
    *(long *)(puVar10 + 0x10) = lVar15;
    *(undefined8 *)(puVar10 + 0x18) = uVar18;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    *(long *)(puVar10 + 0x28) = lVar17;
    local_80 = FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a6c30;
    local_78 = puVar10;
    pvVar11 = __Block_copy(&local_a0);
    puVar10 = local_78;
    _swift_retain(uVar18);
    _swift_release(puVar10);
    lVar17 = local_c8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar5 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar5;
    FUN_10021e91c();
    lVar13 = local_b0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_b0,&local_a0,puVar5,puVar12,lVar6,puVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar17,lVar13,pvVar11);
    __Block_release(pvVar11);
    FUN_10007ed2c(lVar15,uVar18);
    (**(code **)(local_a8 + 8))(lVar13,lVar6);
    (**(code **)(local_c0 + 8))(lVar17,ppuStack_b8);
  }
  return *pauVar2;
}

