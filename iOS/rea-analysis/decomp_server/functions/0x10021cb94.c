// rea decompile_all
// name: FUN_10021cb94
// address: 0x10021cb94
// body: available
// range: 0x10021cb94-0x10021dacb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021cb94(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ID IVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_1;
  __sSS5countSivg(param_1,param_2);
  if ((long)puVar4 < 1) {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    local_b8 = lVar14;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd00000000000009e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00);
    pcVar13 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar13);
    _swift_bridgeObjectRelease(pcVar13);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = 0x61;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000014,0x80000001008a5c30);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = 0xd000000000000040;
    local_68 = 0x80000001008a5be0;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar11 = local_98;
    puVar4 = local_a0;
    uVar6 = DAT_100b362c0;
    lVar3 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      _swift_retain(uVar6);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a5858;
      _swift_allocObject(&DAT_1009a5858,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar3;
      *(undefined8 *)(puVar9 + 0x18) = uVar6;
      *(undefined **)(puVar9 + 0x20) = puVar4;
      *(undefined8 *)(puVar9 + 0x28) = uVar11;
      local_80 = thunk_FUN_1001ec320;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a5870;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar9 = local_78;
      _swift_retain(uVar6);
      _swift_release(puVar9);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar4 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar10 = puVar4;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar16,&local_a0,puVar4,puVar10,lVar1,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar15,puVar16,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar3,uVar6);
      (**(code **)(local_a8 + 8))(puVar16,lVar1);
      (**(code **)(local_b8 + 8))(lVar15,lVar2);
      return 0;
    }
    goto LAB_10021d55c;
  }
  uVar5 = 0xf;
  puVar4 = param_1;
  local_c0 = lVar3;
  local_b0 = lVar2;
  __sSSySJSS5IndexVcig(0xf,param_1,param_2);
  __sSJ10asciiValues5UInt8VSgvg();
  _swift_bridgeObjectRelease(puVar4);
  if ((((uint)uVar5 >> 8 & 1) != 0) || (FUN_10021c904(), (uVar5 & 1) == 0)) {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd00000000000009e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00);
    pcVar13 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar13);
    _swift_bridgeObjectRelease(pcVar13);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = 0x68;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000014,0x80000001008a5c30);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = 0xd00000000000004a;
    local_68 = 0x80000001008a5c50;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar11 = local_98;
    puVar4 = local_a0;
    uVar6 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      _swift_retain(uVar6);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a58a8;
      _swift_allocObject(&DAT_1009a58a8,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar2;
      *(undefined8 *)(puVar9 + 0x18) = uVar6;
      *(undefined **)(puVar9 + 0x20) = puVar4;
      *(undefined8 *)(puVar9 + 0x28) = uVar11;
      local_80 = thunk_FUN_1001ec320;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a58c0;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar9 = local_78;
      _swift_retain(uVar6);
      _swift_release(puVar9);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar4 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar10 = puVar4;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar16,&local_a0,puVar4,puVar10,lVar1,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar15,puVar16,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar2,uVar6);
      (**(code **)(local_a8 + 8))(puVar16,lVar1);
      (**(code **)(lVar14 + 8))(lVar15,local_b0);
      return 0;
    }
    goto LAB_10021d55c;
  }
  __s10Foundation12CharacterSetV7lettersACvgZ(lVar18);
  uVar6 = 0x3837363534333231;
  __s10Foundation12CharacterSetV6insert12charactersInySS_tF(0x3837363534333231,0xeb000000005f3039);
  local_a0 = param_1;
  local_98 = param_2;
  FUN_10021e96c();
  lVar2 = lVar18;
  puVar4 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(lVar18,PTR___sSSN_1009957f8,uVar6)
  ;
  __sSS5countSivg();
  _swift_bridgeObjectRelease(puVar4);
  if (lVar2 == 0) {
    uVar5 = 0;
    local_b8 = lVar14;
    __sSS9hasPrefixySbSSF(0x5f6e656b72656c66,0xe800000000000000,param_1,param_2);
    if ((uVar5 & 1) == 0) {
      __sSS5countSivg(param_1,param_2);
      if ((long)param_1 < 0x65) {
        (**(code **)(lVar17 + 8))(lVar18,local_c0);
        return 1;
      }
      local_c8 = 0x80000001008a5d00;
      local_a0 = (undefined *)0x0;
      local_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x15);
      __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
      IVar7 = 0xd00000000000009e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00);
      pcVar13 = "lastPathComponent";
      IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
      __sSS6appendyySSF(IVar7,pcVar13);
      _swift_bridgeObjectRelease(pcVar13);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_70 = 0x7d;
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      __sSS6appendyySSF(0xd000000000000014,0x80000001008a5c30);
      __sSS6appendyySSF(0xa20,0xe200000000000000);
      local_70 = 0xd00000000000004a;
      local_68 = local_c8;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_70,&local_a0,PTR___sSSN_1009957f8,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      uVar11 = local_98;
      puVar4 = local_a0;
      uVar6 = DAT_100b362c0;
      lVar2 = DAT_100b362b8;
      if (DAT_100b362b8 != 0) {
        FUN_10021e878(0);
        uVar12 = uVar6;
        _swift_retain();
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar9 = &DAT_1009a5948;
        local_c8 = uVar12;
        _swift_allocObject(&DAT_1009a5948,0x30,7);
        *(long *)(puVar9 + 0x10) = lVar2;
        *(undefined8 *)(puVar9 + 0x18) = uVar6;
        *(undefined **)(puVar9 + 0x20) = puVar4;
        *(undefined8 *)(puVar9 + 0x28) = uVar11;
        puStack_88 = &DAT_1009a5960;
        local_78 = puVar9;
        goto LAB_10021d9b0;
      }
    }
    else {
      local_c8 = 0x80000001008a5d50;
      local_a0 = (undefined *)0x0;
      local_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x15);
      __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
      IVar7 = 0xd00000000000009e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00);
      pcVar13 = "lastPathComponent";
      IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
      __sSS6appendyySSF(IVar7,pcVar13);
      _swift_bridgeObjectRelease(pcVar13);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_70 = 0x77;
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      __sSS6appendyySSF(0xd000000000000014,0x80000001008a5c30);
      __sSS6appendyySSF(0xa20,0xe200000000000000);
      local_70 = 0xd00000000000004d;
      local_68 = local_c8;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_70,&local_a0,PTR___sSSN_1009957f8,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      uVar11 = local_98;
      puVar4 = local_a0;
      uVar6 = DAT_100b362c0;
      lVar2 = DAT_100b362b8;
      if (DAT_100b362b8 != 0) {
        FUN_10021e878(0);
        uVar12 = uVar6;
        _swift_retain();
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar9 = &DAT_1009a5998;
        local_c8 = uVar12;
        _swift_allocObject(&DAT_1009a5998,0x30,7);
        *(long *)(puVar9 + 0x10) = lVar2;
        *(undefined8 *)(puVar9 + 0x18) = uVar6;
        *(undefined **)(puVar9 + 0x20) = puVar4;
        *(undefined8 *)(puVar9 + 0x28) = uVar11;
        puStack_88 = &DAT_1009a59b0;
        local_78 = puVar9;
LAB_10021d9b0:
        local_80 = thunk_FUN_1001ec320;
        local_98 = 0x42000000;
        local_90 = FUN_1000acdb4;
        local_a0 = PTR___NSConcreteStackBlock_100995490;
        pvVar8 = __Block_copy(&local_a0);
        puVar9 = local_78;
        _swift_retain(uVar6);
        _swift_release(puVar9);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10021e8d8();
        puVar4 = &DAT_100a7e2d8;
        FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
        puVar10 = puVar4;
        FUN_10021e91c();
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar16,&local_a0,puVar4,puVar10,lVar1,puVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar15,puVar16,pvVar8);
        __Block_release(pvVar8);
LAB_10021da5c:
        FUN_10007ed2c(lVar2,uVar6);
        (**(code **)(local_a8 + 8))(puVar16,lVar1);
        (**(code **)(local_b8 + 8))(lVar15,local_b0);
        (**(code **)(lVar17 + 8))(lVar18,local_c0);
        return 0;
      }
    }
  }
  else {
    local_c8 = 0x80000001008a5ca0;
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    local_b8 = lVar14;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd00000000000009e;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000009e,0x80000001008a5a00);
    pcVar13 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar13);
    _swift_bridgeObjectRelease(pcVar13);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = 0x71;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000014,0x80000001008a5c30);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = 0xd000000000000055;
    local_68 = local_c8;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar11 = local_98;
    puVar4 = local_a0;
    uVar6 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      uVar12 = uVar6;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a58f8;
      local_c8 = uVar12;
      _swift_allocObject(&DAT_1009a58f8,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar2;
      *(undefined8 *)(puVar9 + 0x18) = uVar6;
      *(undefined **)(puVar9 + 0x20) = puVar4;
      *(undefined8 *)(puVar9 + 0x28) = uVar11;
      local_80 = thunk_FUN_1001ec320;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a5910;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar9 = local_78;
      _swift_retain(uVar6);
      _swift_release(puVar9);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar4 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar10 = puVar4;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar16,&local_a0,puVar4,puVar10,lVar1,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar15,puVar16,pvVar8);
      __Block_release(pvVar8);
      goto LAB_10021da5c;
    }
  }
  uVar11 = local_98;
  (**(code **)(lVar17 + 8))(lVar18,local_c0);
LAB_10021d55c:
  _swift_bridgeObjectRelease(uVar11);
  return 0;
}

