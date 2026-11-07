// rea decompile_all
// name: FUN_10022eff4
// address: 0x10022eff4
// body: available
// range: 0x10022eff4-0x10022fe03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010022f794) */
/* WARNING: Removing unreachable block (ram,0x00010022fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010022f8fc) */
/* WARNING: Removing unreachable block (ram,0x00010022f318) */

void FUN_10022eff4(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ID IVar8;
  void *pvVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long unaff_x20;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  char *local_150;
  char *local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined **local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined **local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  local_e0 = *(long *)(lVar1 + -8);
  lStack_d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar14 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_e8 = lVar14;
  __s10Foundation3URLVMa();
  lVar24 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar14 - extraout_x12;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar21 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  ppuVar3 = (undefined **)0x0;
  __s8Dispatch0A3QoSVMa();
  puVar22 = ppuVar3[-1];
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(puVar22 + 0x40));
  lVar18 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  uVar13 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar13 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar13 & 0xffffffffffffff8;
    if ((long)uVar13 < 0) {
      uVar4 = uVar13;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 != 0) {
    uVar13 = *(ulong *)(unaff_x20 + 0x10);
    uVar4 = uVar13 & 0xffffffffffffff8;
    local_140 = lVar24;
    local_120 = lVar18;
    local_108 = lVar17;
    if (uVar13 >> 0x3e == 0) {
      uVar19 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar19 = uVar4;
      if ((long)uVar13 < 0) {
        uVar19 = uVar13;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    local_138 = lVar14;
    local_130 = lVar1;
    local_128 = lVar21;
    local_118 = puVar22;
    local_110 = ppuVar3;
    local_100 = lVar2;
    _swift_bridgeObjectRetain(uVar13);
    puVar22 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (uVar19 != 0) {
      uVar15 = 0;
      do {
        while( true ) {
          if ((uVar13 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10022fdb0);
              (*pcVar20)();
            }
            uVar5 = *(ulong *)(uVar13 + uVar15 * 8 + 0x20);
          }
          else {
            uVar5 = uVar15;
            FUN_10016a54c(uVar15,uVar13,FUN_100232e2c,0x746e657645,0xe500000000000000);
          }
          if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x10022fdac);
            (*pcVar20)();
          }
          uVar23 = uVar15 + 1;
          if (*(char *)(uVar5 + FCountEvent::status) == '\x02') break;
          puVar16 = puVar22;
          local_f0 = (undefined **)uVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          local_c8 = puVar22;
          if (((ulong)puVar16 & 1) == 0) {
            FUN_100230a18(0,*(long *)(puVar22 + 0x10) + 1,1);
          }
          uVar15 = *(ulong *)(local_c8 + 0x10);
          if (*(ulong *)(local_c8 + 0x18) >> 1 <= uVar15) {
            FUN_100230a18(1 < *(ulong *)(local_c8 + 0x18),uVar15 + 1,1);
          }
          *(ulong *)(local_c8 + 0x10) = uVar15 + 1;
          *(undefined ***)(local_c8 + uVar15 * 8 + 0x20) = local_f0;
          puVar22 = local_c8;
          uVar15 = uVar23;
          if (uVar23 == uVar19) goto LAB_10022f2b4;
        }
        uVar15 = uVar15 + 1;
      } while (uVar23 != uVar19);
    }
LAB_10022f2b4:
    _swift_bridgeObjectRelease(uVar13);
    uVar6 = 0;
    __s10Foundation11JSONEncoderCMa();
    _swift_allocObject();
    __s10Foundation11JSONEncoderCACycfc();
    puVar16 = &DAT_100a7f150;
    local_c8 = puVar22;
    FUN_100004bb4(&DAT_100a7f150,&DAT_100813c90);
    puVar7 = puVar16;
    FUN_1002315e8();
    ppuVar3 = &local_c8;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar3,puVar16,puVar7);
    local_f8 = puVar16;
    local_f0 = ppuVar3;
    _swift_release(uVar6);
    local_c8 = (undefined *)0x747369737265705b;
    local_c0 = 0xeb00000000203a5d;
    if (((long)puVar22 < 0) || (((ulong)puVar22 >> 0x3e & 1) != 0)) {
      puVar16 = puVar22;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    else {
      puVar16 = *(undefined **)(puVar22 + 0x10);
    }
    _swift_release(puVar22);
    puVar22 = PTR___sSiN_100995968;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_98 = puVar16;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    lVar1 = local_c0;
    puVar16 = local_c8;
    local_c8 = (undefined *)0x0;
    local_c0 = -0x2000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar8 = 0xd0000000000000a6;
    local_150 = "DirIfNeeded] ERROR ";
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar11 = "lastPathComponent";
    IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
    __sSS6appendyySSF(IVar8,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_98 = (undefined *)0xa0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (puVar22,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_148 = "itoring has been started";
    __sSS6appendyySSF(0xd000000000000017,0x80000001008a6cf0);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_98 = puVar16;
    uStack_90 = lVar1;
    ppuVar3 = &local_c8;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_98,ppuVar3,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(lVar1);
    lVar2 = local_c0;
    puVar16 = local_c8;
    uVar6 = DAT_100b362c0;
    lVar1 = DAT_100b362b8;
    puVar22 = PTR___NSConcreteStackBlock_100995490;
    if (DAT_100b362b8 == 0) {
      lVar14 = local_c0;
      _swift_bridgeObjectRelease(local_c0);
      lVar2 = local_128;
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar6);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009a6a38;
      _swift_allocObject(&DAT_1009a6a38,0x30,7);
      *(long *)(puVar7 + 0x10) = lVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      *(undefined **)(puVar7 + 0x20) = puVar16;
      *(long *)(puVar7 + 0x28) = lVar2;
      local_a8 = thunk_FUN_100222dd4;
      local_c8 = puVar22;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009a6a50;
      local_a0 = puVar7;
      pvVar9 = __Block_copy(&local_c8);
      puVar22 = local_a0;
      _swift_retain(uVar6);
      _swift_release(puVar22);
      lVar14 = local_120;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_120);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar22 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar16 = puVar22;
      FUN_10021e91c();
      lVar17 = local_100;
      lVar2 = local_128;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (&local_c8,puVar22,puVar16,local_100,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,lVar2,pvVar9);
      __Block_release(pvVar9);
      FUN_10007ed2c(lVar1,uVar6);
      (**(code **)(local_108 + 8))(lVar2,lVar17);
      ppuVar3 = local_110;
      (**(code **)(local_118 + 8))(lVar14,local_110);
    }
    lVar21 = local_d0;
    lVar1 = local_e8;
    lVar18 = local_130;
    lVar17 = local_138;
    __s10Foundation4UUIDVACycfC(local_e8);
    __s10Foundation4UUIDV10uuidStringSSvg();
    (**(code **)(local_e0 + 8))(lVar1,lStack_d8);
    lVar1 = local_140;
    if (DAT_100a7de08 != -1) {
      _swift_once(&DAT_100a7de08,FUN_10022edc8);
    }
    lVar24 = lVar18;
    FUN_10021bec0(lVar18,&DAT_100a7f040);
    ppuVar12 = ppuVar3;
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (lVar21,lVar14,ppuVar3,0,lVar24);
    _swift_bridgeObjectRelease(ppuVar3);
    __s10Foundation3URLV4pathSSvg();
    pcVar20 = *(code **)(lVar1 + 8);
    (*pcVar20)(lVar21,lVar18);
    __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar17,ppuVar3,ppuVar12,0);
    _swift_bridgeObjectRelease(ppuVar12);
    __s10Foundation4DataV5write2to7optionsyAA3URLV_So20NSDataWritingOptionsVtKF
              (lVar17,1,local_f0,local_f8);
    puVar22 = PTR___NSConcreteStackBlock_100995490;
    (*pcVar20)(lVar17,lVar18);
    local_c8 = (undefined *)0x0;
    local_c0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar8 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (0xd0000000000000a6,(ulong)local_150 | 0x8000000000000000);
    pcVar11 = "lastPathComponent";
    IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
    __sSS6appendyySSF(IVar8,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_98 = (undefined *)0xa8;
    puVar16 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar16);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000017,(ulong)local_148 | 0x8000000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_98 = (undefined *)0xd000000000000019;
    uStack_90 = 0x80000001008a6d10;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_98,&local_c8,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    lVar14 = local_c0;
    puVar16 = local_c8;
    uVar6 = DAT_100b362c0;
    lVar1 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      FUN_100006cdc(local_f0,local_f8);
      _swift_bridgeObjectRelease(lVar14);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar6);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009a6998;
      _swift_allocObject(&DAT_1009a6998,0x30,7);
      *(long *)(puVar7 + 0x10) = lVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      *(undefined **)(puVar7 + 0x20) = puVar16;
      *(long *)(puVar7 + 0x28) = lVar14;
      local_a8 = thunk_FUN_100222dd4;
      local_c8 = puVar22;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009a69b0;
      local_a0 = puVar7;
      pvVar9 = __Block_copy(&local_c8);
      puVar22 = local_a0;
      _swift_retain(uVar6);
      _swift_release(puVar22);
      lVar14 = local_120;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_120);
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar22 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar16 = puVar22;
      FUN_10021e91c();
      lVar17 = local_100;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar2,&local_c8,puVar22,puVar16,local_100,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar14,lVar2,pvVar9);
      __Block_release(pvVar9);
      FUN_100006cdc(local_f0,local_f8);
      FUN_10007ed2c(lVar1,uVar6);
      (**(code **)(local_108 + 8))(lVar2,lVar17);
      (**(code **)(local_118 + 8))(lVar14,local_110);
    }
  }
  return;
}

