// rea decompile_all
// name: FUN_10021dacc
// address: 0x10021dacc
// body: available
// range: 0x10021dacc-0x10021e79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021dacc(long param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ID IVar11;
  void *pvVar12;
  undefined *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar18 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  local_b8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar19 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    puVar20 = (undefined8 *)(param_1 + 0x28);
    local_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_e0 = lVar18;
    local_d8 = lVar17;
    local_d0 = lVar16;
    local_c8 = lVar3;
    local_c0 = lVar4;
    do {
      puVar10 = (undefined *)puVar20[-1];
      uVar15 = *puVar20;
      puVar6 = &DAT_100a7e2c0;
      FUN_100004bb4(&DAT_100a7e2c0,&DAT_100813388);
      _swift_initStaticObject();
      local_a8 = puVar10;
      local_a0 = uVar15;
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined ***)(lVar19 + -0x10) = &local_a8;
      _swift_bridgeObjectRetain(uVar15);
      uVar7 = 0;
      FUN_100152a38(FUN_10009ff84,lVar19 + -0x20,puVar6);
      FUN_10021e844(puVar6 + 0x20);
      if ((uVar7 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar15);
        return 1;
      }
      puVar6 = puVar10;
      __sSS5countSivg(puVar10,uVar15);
      if ((long)puVar6 < 1) {
        _swift_bridgeObjectRelease(uVar15);
        local_a8 = (undefined *)0x0;
        local_a0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar11 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00)
        ;
        pcVar14 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        __sSS6appendyySSF(IVar11,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_78 = 0x90;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000019,0x80000001008a5aa0);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_78 = 0xd00000000000004c;
        uStack_70 = 0x80000001008a59b0;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_78,&local_a8,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar9 = local_a0;
        puVar6 = local_a8;
        uVar15 = DAT_100b362c0;
        lVar5 = DAT_100b362b8;
        if (DAT_100b362b8 != 0) {
          FUN_10021e878(0);
          _swift_retain(uVar15);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar10 = &DAT_1009a5718;
          _swift_allocObject(&DAT_1009a5718,0x30,7);
          *(long *)(puVar10 + 0x10) = lVar5;
          *(undefined8 *)(puVar10 + 0x18) = uVar15;
          *(undefined **)(puVar10 + 0x20) = puVar6;
          *(undefined8 *)(puVar10 + 0x28) = uVar9;
          local_88 = FUN_1001ec320;
          puStack_90 = &DAT_1009a5730;
          local_80 = puVar10;
          goto LAB_10021e680;
        }
        goto LAB_10021e768;
      }
      uVar7 = 0xf;
      puVar6 = puVar10;
      __sSSySJSS5IndexVcig(0xf,puVar10,uVar15);
      if (((uVar7 != 0xa0d) || (puVar6 != (undefined *)0xe200000000000000)) &&
         (uVar8 = uVar7,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar7,puVar6,0xa0d,0xe200000000000000,0), (uVar8 & 1) == 0)) {
        uVar8 = uVar7;
        __sSJ15_isSingleScalarSbvg(uVar7,puVar6);
        if ((uVar8 & 1) != 0) {
          uVar8 = uVar7;
          FUN_10021c614(uVar7,puVar6);
          if ((uVar8 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10021e79c);
            (*pcVar2)();
          }
          if ((uVar8 & 0xffffff80) == 0) {
            FUN_10021c614(uVar7,puVar6);
            if ((uVar7 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021e7a0);
              (*pcVar2)();
            }
            _swift_bridgeObjectRelease(puVar6);
            if ((uVar7 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021e798);
              (*pcVar2)();
            }
            goto LAB_10021dcf4;
          }
        }
        _swift_bridgeObjectRelease(puVar6);
LAB_10021e494:
        _swift_bridgeObjectRelease(uVar15);
        local_a8 = (undefined *)0x0;
        local_a0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar11 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00)
        ;
        pcVar14 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        __sSS6appendyySSF(IVar11,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_78 = 0x97;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000019,0x80000001008a5aa0);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_78 = 0xd000000000000052;
        uStack_70 = 0x80000001008a5ac0;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_78,&local_a8,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar9 = local_a0;
        puVar6 = local_a8;
        uVar15 = DAT_100b362c0;
        lVar5 = DAT_100b362b8;
        if (DAT_100b362b8 != 0) {
          FUN_10021e878(0);
          _swift_retain(uVar15);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar10 = &DAT_1009a5768;
          _swift_allocObject(&DAT_1009a5768,0x30,7);
          *(long *)(puVar10 + 0x10) = lVar5;
          *(undefined8 *)(puVar10 + 0x18) = uVar15;
          *(undefined **)(puVar10 + 0x20) = puVar6;
          *(undefined8 *)(puVar10 + 0x28) = uVar9;
          local_88 = thunk_FUN_1001ec320;
          puStack_90 = &DAT_1009a5780;
          local_80 = puVar10;
LAB_10021e680:
          local_a0 = 0x42000000;
          local_98 = FUN_1000acdb4;
          local_a8 = PTR___NSConcreteStackBlock_100995490;
          pvVar12 = __Block_copy(&local_a8);
          puVar10 = local_80;
          _swift_retain(uVar15);
          _swift_release(puVar10);
          lVar3 = local_d8;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
          local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_10021e8d8();
          puVar6 = &DAT_100a7e2d8;
          FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
          puVar13 = puVar6;
          FUN_10021e91c();
          lVar4 = local_c8;
          puVar1 = local_e8;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_e8,&local_a8,puVar6,puVar13,local_c8,puVar10);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar3,puVar1,pvVar12);
          __Block_release(pvVar12);
          FUN_10007ed2c(lVar5,uVar15);
          (**(code **)(local_e0 + 8))(puVar1,lVar4);
          (**(code **)(local_d0 + 8))(lVar3,local_c0);
          return 0;
        }
LAB_10021e768:
        _swift_bridgeObjectRelease(uVar9);
        return 0;
      }
      _swift_bridgeObjectRelease(puVar6);
      uVar7 = 0;
LAB_10021dcf4:
      FUN_10021c904();
      if ((uVar7 & 1) == 0) goto LAB_10021e494;
      __s10Foundation12CharacterSetV7lettersACvgZ(lVar19);
      uVar9 = 0x3837363534333231;
      __s10Foundation12CharacterSetV6insert12charactersInySS_tF
                (0x3837363534333231,0xeb000000005f3039);
      local_a8 = puVar10;
      local_a0 = uVar15;
      FUN_10021e96c();
      lVar3 = lVar19;
      puVar6 = PTR___sSSN_1009957f8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (lVar19,PTR___sSSN_1009957f8,uVar9);
      __sSS5countSivg();
      _swift_bridgeObjectRelease(puVar6);
      if (lVar3 != 0) {
        _swift_bridgeObjectRelease(uVar15);
        local_a8 = (undefined *)0x0;
        local_a0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar11 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00)
        ;
        pcVar14 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        __sSS6appendyySSF(IVar11,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_78 = 0xa0;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000019,0x80000001008a5aa0);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_78 = 0xd00000000000005d;
        uStack_70 = 0x80000001008a5b20;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_78,&local_a8,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar9 = local_a0;
        puVar6 = local_a8;
        uVar15 = DAT_100b362c0;
        lVar5 = DAT_100b362b8;
        if (DAT_100b362b8 != 0) {
          FUN_10021e878(0);
          _swift_retain(uVar15);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar10 = &DAT_1009a57b8;
          _swift_allocObject(&DAT_1009a57b8,0x30,7);
          *(long *)(puVar10 + 0x10) = lVar5;
          *(undefined8 *)(puVar10 + 0x18) = uVar15;
          *(undefined **)(puVar10 + 0x20) = puVar6;
          *(undefined8 *)(puVar10 + 0x28) = uVar9;
          puStack_90 = &DAT_1009a57d0;
          local_80 = puVar10;
LAB_10021e380:
          local_88 = thunk_FUN_1001ec320;
          local_a0 = 0x42000000;
          local_98 = FUN_1000acdb4;
          local_a8 = PTR___NSConcreteStackBlock_100995490;
          pvVar12 = __Block_copy(&local_a8);
          puVar10 = local_80;
          _swift_retain(uVar15);
          _swift_release(puVar10);
          lVar3 = local_d8;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d8);
          local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_10021e8d8();
          puVar6 = &DAT_100a7e2d8;
          FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
          puVar13 = puVar6;
          FUN_10021e91c();
          lVar4 = local_c8;
          puVar1 = local_e8;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_e8,&local_a8,puVar6,puVar13,local_c8,puVar10);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar3,puVar1,pvVar12);
          __Block_release(pvVar12);
          FUN_10007ed2c(lVar5,uVar15);
          (**(code **)(local_e0 + 8))(puVar1,lVar4);
          (**(code **)(local_d0 + 8))(lVar3,local_c0);
          (**(code **)(local_b8 + 8))(lVar19,lStack_b0);
          return 0;
        }
LAB_10021e478:
        uVar9 = local_a0;
        (**(code **)(local_b8 + 8))(lVar19,lStack_b0);
        goto LAB_10021e768;
      }
      __sSS5countSivg(puVar10,uVar15);
      _swift_bridgeObjectRelease(uVar15);
      if (0x80 < (long)puVar10) {
        local_a8 = (undefined *)0x0;
        local_a0 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar11 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00)
        ;
        pcVar14 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        __sSS6appendyySSF(IVar11,pcVar14);
        _swift_bridgeObjectRelease(pcVar14);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_78 = 0xa6;
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar6);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000019,0x80000001008a5aa0);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_78 = 0xd000000000000052;
        uStack_70 = 0x80000001008a5b80;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_78,&local_a8,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar9 = local_a0;
        puVar6 = local_a8;
        uVar15 = DAT_100b362c0;
        lVar5 = DAT_100b362b8;
        if (DAT_100b362b8 != 0) {
          FUN_10021e878(0);
          _swift_retain(uVar15);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar10 = &DAT_1009a5808;
          _swift_allocObject(&DAT_1009a5808,0x30,7);
          *(long *)(puVar10 + 0x10) = lVar5;
          *(undefined8 *)(puVar10 + 0x18) = uVar15;
          *(undefined **)(puVar10 + 0x20) = puVar6;
          *(undefined8 *)(puVar10 + 0x28) = uVar9;
          puStack_90 = &DAT_1009a5820;
          local_80 = puVar10;
          goto LAB_10021e380;
        }
        goto LAB_10021e478;
      }
      (**(code **)(local_b8 + 8))(lVar19,lStack_b0);
      puVar20 = puVar20 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 1;
}

