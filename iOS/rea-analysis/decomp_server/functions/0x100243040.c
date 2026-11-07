// rea decompile_all
// name: FUN_100243040
// address: 0x100243040
// body: available
// range: 0x100243040-0x100243eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100243040(double param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  dispatch_semaphore_t pdVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ID IVar12;
  undefined8 uVar13;
  void *pvVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  code *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined1 auStack_d8 [24];
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  
  lVar3 = 0;
  local_128 = param_3;
  local_120 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_140 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_140 + 0x40));
  lVar19 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_138 = *(long *)(lVar4 + -8);
  local_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_138 + 0x40));
  lVar16 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a7e450;
  local_148 = lVar16;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  lVar21 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar21 - extraout_x12;
  pdVar6 = _dispatch_semaphore_create(0);
  if (DAT_100a7de30 != -1) {
    _swift_once(&DAT_100a7de30,FUN_100247fc8);
  }
  FUN_10021bec0(puVar5,&DAT_100b363b0);
  _swift_beginAccess();
  FUN_1002381a8(puVar5,lVar16);
  lVar7 = lVar16;
  (**(code **)(lVar20 + 0x30))(lVar16,1,lVar4);
  if ((int)lVar7 == 1) {
    FUN_100040bb4(lVar16,&DAT_100a7e450,&DAT_100813ef0);
LAB_10024328c:
    puVar5 = &DAT_1009a7740;
    _swift_allocObject(&DAT_1009a7740,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(dispatch_semaphore_t *)(puVar5 + 0x18) = pdVar6;
    puVar8 = &DAT_1009a7768;
    _swift_allocObject(&DAT_1009a7768,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_100247bec;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    FUN_10021e878(0);
    puVar9 = puVar5;
    _swift_retain(puVar5);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_100246760(0,1,0,0,puVar9,0,FUN_100247c18,puVar8);
    _swift_release(puVar5);
    _swift_release(puVar8);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(0);
    if ((DAT_100b363e9 & 1) == 0) {
      DAT_100b363e8 = 0;
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar5 = &DAT_1009a7790;
      _swift_allocObject(&DAT_1009a7790,0x20,7);
      uVar1 = local_120;
      *(code **)(puVar5 + 0x10) = local_128;
      *(undefined8 *)(puVar5 + 0x18) = local_120;
      local_a0 = FUN_100247c20;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      local_b8 = 0x42000000;
      local_b0 = FUN_1000acdb4;
      puStack_a8 = &DAT_1009a77a8;
      local_98 = puVar5;
      pvVar14 = __Block_copy(&local_c0);
      puVar8 = local_98;
      _swift_retain(uVar1);
      _swift_release(puVar8);
      lVar4 = local_148;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_148);
      local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar5 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar5;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar19,&local_c0,puVar5,puVar9,lVar3,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar4,lVar19,pvVar14);
      __Block_release(pvVar14);
      goto LAB_100243d14;
    }
  }
  else {
    (**(code **)(lVar20 + 0x20))(lVar17,lVar16,lVar4);
    __s10Foundation4DateVACycfC(lVar21);
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar17);
    pcVar18 = *(code **)(lVar20 + 8);
    (*pcVar18)(lVar21,lVar4);
    (*pcVar18)(lVar17,lVar4);
    if (3600.0 <= param_1) goto LAB_10024328c;
    DAT_100b363e9 = 1;
  }
  _swift_beginAccess(&DAT_100a7fa48,auStack_d8,0,0);
  if ((DAT_100a7fa48 & 1) == 0) {
    if (DAT_100a7ddc8 != -1) {
      _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
    }
    lVar4 = DAT_100b362c8;
    _swift_beginAccess(DAT_100b362c8 + 0x10,&local_c0,0x21,0);
    _pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar4 + 0x10));
    _swift_endAccess(&local_c0);
    puVar10 = DAT_100b363d0;
    DAT_100b363c8 = 0;
    DAT_100b363d0 = (undefined8 *)0x0;
    _swift_bridgeObjectRelease(puVar10);
    _swift_beginAccess(lVar4 + 0x10,&local_c0,0x21,0);
    _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar4 + 0x10));
    _swift_endAccess(&local_c0);
    DAT_100b363e8 = 0;
    FUN_10021e878(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar5 = &DAT_1009a77e0;
    _swift_allocObject(&DAT_1009a77e0,0x20,7);
    *(code **)(puVar5 + 0x10) = local_128;
    *(undefined8 *)(puVar5 + 0x18) = local_120;
    local_a0 = FUN_100247c28;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    puStack_a8 = &DAT_1009a77f8;
    local_98 = puVar5;
LAB_100243c6c:
    uVar1 = local_120;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    PTR___NSConcreteStackBlock_100995490 = local_c0;
    pvVar14 = __Block_copy(&local_c0);
    puVar5 = local_98;
    _swift_retain(uVar1);
    _swift_release(puVar5);
  }
  else {
    FUN_1002233f8(0);
    uVar11 = DAT_100a7f9f8;
    uVar1 = DAT_100a7f9f0;
    _swift_bridgeObjectRetain(DAT_100a7f9f8);
    FUN_100223100(&local_c0,uVar1,uVar11);
    _swift_bridgeObjectRelease(uVar11);
    puVar10 = &local_f0;
    _swift_dynamicCast(puVar10,&local_c0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)puVar10 & 1) != 0) {
      _swift_beginAccess(&DAT_100b363d8,auStack_118,1,0);
      lVar4 = DAT_100b363e0;
      DAT_100b363d8 = local_f0;
      DAT_100b363e0 = lStack_e8;
      _swift_bridgeObjectRelease(lVar4);
LAB_1002436d0:
      puVar10 = &local_f0;
      _swift_beginAccess(&DAT_100b363d8,puVar10,0,0);
      lVar4 = DAT_100b363e0;
      uVar1 = DAT_100b363d8;
      if (DAT_100b363e0 == 0) {
        DAT_100b363e8 = 0;
        DAT_100b363e9 = 0;
        local_c0 = (undefined *)0x0;
        local_b8 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x15);
        __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
        IVar12 = 0xd0000000000000a7;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a7770)
        ;
        pcVar15 = "lastPathComponent";
        IVar12 = _objc_msgSend(IVar12,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar12);
        __sSS6appendyySSF(IVar12,pcVar15);
        _swift_bridgeObjectRelease(pcVar15);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        local_100 = 0x6e;
        puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar5);
        __sSS6appendyySSF(0x20,0xe100000000000000);
        __sSS6appendyySSF(0xd000000000000012,0x80000001008a7820);
        __sSS6appendyySSF(0xa20,0xe200000000000000);
        local_100 = 0xd000000000000014;
        uStack_f8 = 0x80000001008a7860;
        __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                  (&local_100,&local_c0,PTR___sSSN_1009957f8,
                   PTR___ss26DefaultStringInterpolationVN_100995bf0,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
        uVar11 = local_b8;
        puVar5 = local_c0;
        uVar1 = DAT_100b362c0;
        lVar4 = DAT_100b362b8;
        if (DAT_100b362b8 == 0) {
          _swift_bridgeObjectRelease(local_b8);
        }
        else {
          FUN_10021e878(0);
          _swift_retain(uVar1);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar8 = &DAT_1009a78d0;
          _swift_allocObject(&DAT_1009a78d0,0x30,7);
          *(long *)(puVar8 + 0x10) = lVar4;
          *(undefined8 *)(puVar8 + 0x18) = uVar1;
          *(undefined **)(puVar8 + 0x20) = puVar5;
          *(undefined8 *)(puVar8 + 0x28) = uVar11;
          local_a0 = thunk_FUN_100222dd4;
          local_c0 = PTR___NSConcreteStackBlock_100995490;
          local_b8 = 0x42000000;
          local_b0 = FUN_1000acdb4;
          puStack_a8 = &DAT_1009a78e8;
          local_98 = puVar8;
          pvVar14 = __Block_copy(&local_c0);
          puVar8 = local_98;
          _swift_retain(uVar1);
          _swift_release(puVar8);
          lVar16 = local_148;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_148);
          local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_10021e8d8();
          puVar5 = &DAT_100a7e2d8;
          FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
          puVar9 = puVar5;
          FUN_10021e91c();
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (lVar19,&local_c0,puVar5,puVar9,lVar3,puVar8);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar16,lVar19,pvVar14);
          __Block_release(pvVar14);
          FUN_10007ed2c(lVar4,uVar1);
          (**(code **)(local_140 + 8))(lVar19,lVar3);
          (**(code **)(local_138 + 8))(lVar16,local_130);
        }
        (*local_128)();
        return;
      }
      _swift_bridgeObjectRetain(DAT_100b363e0);
      uVar11 = 1;
      FUN_100247018();
      if (puVar10 == (undefined8 *)0x0) {
        FUN_1002223d0();
        puVar5 = &DAT_1009a7920;
        _swift_allocObject(&DAT_1009a7920,0x28,7);
        *(undefined8 *)(puVar5 + 0x10) = param_2;
        *(undefined8 *)(puVar5 + 0x18) = uVar11;
        *(dispatch_semaphore_t *)(puVar5 + 0x20) = pdVar6;
        puVar8 = &DAT_1009a7948;
        _swift_allocObject(&DAT_1009a7948,0x20,7);
        *(code **)(puVar8 + 0x10) = FUN_100247c74;
        *(undefined **)(puVar8 + 0x18) = puVar5;
        uVar13 = 0;
        FUN_10021e878();
        _swift_bridgeObjectRetain(uVar11);
        puVar9 = puVar5;
        _swift_retain(puVar5);
        local_150 = uVar13;
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        FUN_100246760(uVar1,lVar4,uVar11,0,puVar9,0,FUN_100247c80,puVar8);
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(lVar4);
        _swift_release(puVar8);
        __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(0);
        if ((DAT_100b363e9 & 1) == 0) {
          if (DAT_100a7ddc8 != -1) {
            _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
          }
          lVar4 = DAT_100b362c8;
          _swift_beginAccess(DAT_100b362c8 + 0x10,&local_c0,0x21,0);
          _pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar4 + 0x10));
          _swift_endAccess(&local_c0);
          puVar10 = DAT_100b363d0;
          DAT_100b363c8 = 0;
          DAT_100b363d0 = (undefined8 *)0x0;
          _swift_bridgeObjectRelease(puVar10);
          _swift_beginAccess(lVar4 + 0x10,&local_c0,0x21,0);
          _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar4 + 0x10));
          _swift_endAccess(&local_c0);
          DAT_100b363e8 = 0;
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar5 = &DAT_1009a7970;
          _swift_allocObject(&DAT_1009a7970,0x20,7);
          *(code **)(puVar5 + 0x10) = local_128;
          *(undefined8 *)(puVar5 + 0x18) = local_120;
          local_a0 = FUN_100247c88;
          local_c0 = PTR___NSConcreteStackBlock_100995490;
          puStack_a8 = &DAT_1009a7988;
          local_98 = puVar5;
          goto LAB_100243c6c;
        }
      }
      else {
        _swift_bridgeObjectRelease(lVar4);
        if (DAT_100a7ddc8 != -1) {
          _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
        }
        lVar4 = DAT_100b362c8;
        _swift_beginAccess(DAT_100b362c8 + 0x10,&local_c0,0x21,0);
        _pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar4 + 0x10));
        _swift_endAccess(&local_c0);
        puVar2 = DAT_100b363d0;
        DAT_100b363c8 = uVar11;
        DAT_100b363d0 = puVar10;
        _swift_bridgeObjectRelease(puVar2);
        _swift_beginAccess(lVar4 + 0x10,&local_c0,0x21,0);
        _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar4 + 0x10));
        _swift_endAccess(&local_c0);
      }
      DAT_100b363e8 = 0;
      FUN_10021e878(0);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar5 = &DAT_1009a79c0;
      _swift_allocObject(&DAT_1009a79c0,0x20,7);
      *(code **)(puVar5 + 0x10) = local_128;
      *(undefined8 *)(puVar5 + 0x18) = local_120;
      local_a0 = FUN_100247c90;
      local_c0 = PTR___NSConcreteStackBlock_100995490;
      puStack_a8 = &DAT_1009a79d8;
      local_98 = puVar5;
      goto LAB_100243c6c;
    }
    puVar5 = &DAT_1009a7830;
    _swift_allocObject(&DAT_1009a7830,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(dispatch_semaphore_t *)(puVar5 + 0x18) = pdVar6;
    puVar8 = &DAT_1009a7858;
    _swift_allocObject(&DAT_1009a7858,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_100247c30;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    FUN_10021e878(0);
    puVar9 = puVar5;
    _swift_retain(puVar5);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_100246760(0,0,0,0,puVar9,0,FUN_100247c38,puVar8);
    _swift_release(puVar5);
    _swift_release(puVar8);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(0);
    if ((DAT_100b363e9 & 1) != 0) goto LAB_1002436d0;
    DAT_100b363e8 = 0;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar5 = &DAT_1009a7880;
    _swift_allocObject(&DAT_1009a7880,0x20,7);
    uVar1 = local_120;
    *(code **)(puVar5 + 0x10) = local_128;
    *(undefined8 *)(puVar5 + 0x18) = local_120;
    local_a0 = FUN_100247c40;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009a7898;
    local_98 = puVar5;
    pvVar14 = __Block_copy(&local_c0);
    puVar5 = local_98;
    _swift_retain(uVar1);
    _swift_release(puVar5);
  }
  lVar4 = local_148;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_148);
  local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10021e8d8();
  puVar8 = &DAT_100a7e2d8;
  FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
  puVar9 = puVar8;
  FUN_10021e91c();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar19,&local_c0,puVar8,puVar9,lVar3,puVar5);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar4,lVar19,pvVar14);
  __Block_release(pvVar14);
LAB_100243d14:
  (**(code **)(local_140 + 8))(lVar19,lVar3);
  (**(code **)(local_138 + 8))(lVar4,local_130);
  return;
}

