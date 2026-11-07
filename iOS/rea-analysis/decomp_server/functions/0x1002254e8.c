// rea decompile_all
// name: FUN_1002254e8
// address: 0x1002254e8
// body: available
// range: 0x1002254e8-0x1002266cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002254e8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 uVar16;
  char *local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
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
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar4 + -8);
  local_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c8 = lVar15;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar4 + -8);
  local_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  local_a8 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_1;
  FUN_100224b8c(param_1,param_2);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(local_98);
  local_a0 = (undefined1 *)0xd00000000000002f;
  local_98 = 0x80000001008a61c0;
  local_e8 = param_1;
  uStack_e0 = param_2;
  __sSS6appendyySSF(param_1,param_2);
  uVar16 = local_98;
  puVar10 = local_a0;
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar6 = 0xd0000000000000a7;
  local_f0 = "Starting migration for appKey: ";
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a61f0);
  pcVar13 = "lastPathComponent";
  IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar13);
  _swift_bridgeObjectRelease(pcVar13);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined1 *)0x7a;
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_d8 = "ase/SecureStorage.swift";
  __sSS6appendyySSF(0xd000000000000019,0x80000001008a62a0);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = puVar10;
  uStack_68 = uVar16;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar16);
  uVar3 = local_98;
  puVar12 = local_a0;
  uVar16 = DAT_100b362c0;
  lVar4 = DAT_100b362b8;
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = PTR___NSConcreteStackBlock_100995490;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar16);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_1009a5fb0;
    _swift_allocObject(&DAT_1009a5fb0,0x30,7);
    *(long *)(puVar7 + 0x10) = lVar4;
    *(undefined8 *)(puVar7 + 0x18) = uVar16;
    *(undefined **)(puVar7 + 0x20) = puVar12;
    *(undefined8 *)(puVar7 + 0x28) = uVar3;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = puVar10;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a5fc8;
    local_78 = puVar7;
    pvVar8 = __Block_copy(&local_a0);
    puVar10 = local_78;
    _swift_retain(uVar16);
    _swift_release(puVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
    local_a0 = puVar11;
    puVar9 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar11 = puVar10;
    FUN_10021e91c();
    lVar1 = local_b0;
    lVar15 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_a0,puVar10,puVar11,local_b0,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,local_a8,lVar15,pvVar8);
    __Block_release(pvVar8);
    FUN_10007ed2c(lVar4,uVar16);
    (**(code **)(local_c0 + 8))(lVar15,lVar1);
    (**(code **)(local_d0 + 8))(local_a8,local_b8);
  }
  uVar16 = uStack_e0;
  uVar5 = local_e8;
  local_a0 = (undefined *)0xd000000000000026;
  local_98 = 0x80000001008a62c0;
  __sSS6appendyySSF(local_e8,uStack_e0);
  uVar3 = local_98;
  puVar11 = local_a0;
  FUN_100224d64(local_a0,local_98);
  _swift_bridgeObjectRelease(uVar3);
  pcVar13 = local_d8;
  puVar10 = PTR___NSConcreteStackBlock_100995490;
  if (puVar11 == (undefined *)0x0) {
    local_a0 = (undefined *)0xd00000000000001b;
    local_98 = 0x80000001008a62f0;
    __sSS6appendyySSF(uVar5,uVar16);
    uVar3 = local_98;
    puVar11 = local_a0;
    FUN_100224d64(local_a0,local_98);
    _swift_bridgeObjectRelease(uVar3);
    if (puVar11 == (undefined *)0x0) {
      FUN_100225008(uVar5,uVar16);
      local_a0 = (undefined *)0x0;
      local_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x15);
      __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
      IVar6 = 0xd0000000000000a7;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (0xd0000000000000a7,(ulong)local_f0 | 0x8000000000000000);
      pcVar14 = "lastPathComponent";
      IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
      __sSS6appendyySSF(IVar6,pcVar14);
      _swift_bridgeObjectRelease(pcVar14);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      local_70 = (undefined1 *)0x9d;
      puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar11);
      __sSS6appendyySSF(0x20,0xe100000000000000);
      __sSS6appendyySSF(0xd000000000000019,(ulong)pcVar13 | 0x8000000000000000);
      __sSS6appendyySSF(0xa20,0xe200000000000000);
      local_70 = (undefined1 *)0xd000000000000039;
      uStack_68 = 0x80000001008a6310;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_70,&local_a0,PTR___sSSN_1009957f8,
                 PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      uVar3 = local_98;
      puVar11 = local_a0;
      uVar16 = DAT_100b362c0;
      lVar4 = DAT_100b362b8;
      if (DAT_100b362b8 != 0) {
        FUN_10021e878(0);
        _swift_retain(uVar16);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar12 = &DAT_1009a5e20;
        _swift_allocObject(&DAT_1009a5e20,0x30,7);
        *(long *)(puVar12 + 0x10) = lVar4;
        *(undefined8 *)(puVar12 + 0x18) = uVar16;
        *(undefined **)(puVar12 + 0x20) = puVar11;
        *(undefined8 *)(puVar12 + 0x28) = uVar3;
        local_80 = FUN_100222dd4;
        local_a0 = puVar10;
        local_98 = 0x42000000;
        local_90 = FUN_1000acdb4;
        puStack_88 = &DAT_1009a5e38;
        local_78 = puVar12;
        pvVar8 = __Block_copy(&local_a0);
        puVar10 = local_78;
        _swift_retain(uVar16);
        _swift_release(puVar10);
        lVar2 = local_a8;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
        local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar9 = &DAT_100a7e2d0;
        FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar10 = &DAT_100a7e2d8;
        FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
        puVar11 = puVar10;
        FUN_10021e91c();
        lVar1 = local_b0;
        lVar15 = local_c8;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_c8,&local_a0,puVar10,puVar11,local_b0,puVar9);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar2,lVar15,pvVar8);
        __Block_release(pvVar8);
        FUN_10007ed2c(lVar4,uVar16);
        (**(code **)(local_c0 + 8))(lVar15,lVar1);
        (**(code **)(local_d0 + 8))(lVar2,local_b8);
        return 0;
      }
      _swift_bridgeObjectRelease(local_98);
      return 0;
    }
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (0xd0000000000000a7,(ulong)local_f0 | 0x8000000000000000);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined1 *)0x8d;
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar12);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000019,(ulong)pcVar13 | 0x8000000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = (undefined1 *)0xd00000000000002d;
    uStack_68 = 0x80000001008a6390;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar3 = local_98;
    puVar12 = local_a0;
    uVar16 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      _swift_retain(uVar16);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009a5f10;
      _swift_allocObject(&DAT_1009a5f10,0x30,7);
      *(long *)(puVar7 + 0x10) = lVar4;
      *(undefined8 *)(puVar7 + 0x18) = uVar16;
      *(undefined **)(puVar7 + 0x20) = puVar12;
      *(undefined8 *)(puVar7 + 0x28) = uVar3;
      puStack_88 = &DAT_1009a5f28;
      local_78 = puVar7;
      goto LAB_100225ce4;
    }
  }
  else {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (0xd0000000000000a7,(ulong)local_f0 | 0x8000000000000000);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined1 *)0x84;
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar12);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000019,(ulong)pcVar13 | 0x8000000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = (undefined1 *)0xd00000000000002e;
    uStack_68 = 0x80000001008a6400;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar3 = local_98;
    puVar12 = local_a0;
    uVar16 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      _swift_retain(uVar16);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009a5f60;
      _swift_allocObject(&DAT_1009a5f60,0x30,7);
      *(long *)(puVar7 + 0x10) = lVar4;
      *(undefined8 *)(puVar7 + 0x18) = uVar16;
      *(undefined **)(puVar7 + 0x20) = puVar12;
      *(undefined8 *)(puVar7 + 0x28) = uVar3;
      puStack_88 = &DAT_1009a5f78;
      local_78 = puVar7;
LAB_100225ce4:
      local_80 = thunk_FUN_100222dd4;
      local_98 = 0x42000000;
      local_a0 = puVar10;
      local_90 = FUN_1000acdb4;
      pvVar8 = __Block_copy(&local_a0);
      puVar10 = local_78;
      _swift_retain(uVar16);
      _swift_release(puVar10);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar9 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar10 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar12 = puVar10;
      FUN_10021e91c();
      lVar1 = local_b0;
      lVar15 = local_c8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_c8,&local_a0,puVar10,puVar12,local_b0,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,local_a8,lVar15,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar4,uVar16);
      (**(code **)(local_c0 + 8))(lVar15,lVar1);
      (**(code **)(local_d0 + 8))(local_a8,local_b8);
      goto LAB_100225df0;
    }
  }
  _swift_bridgeObjectRelease(local_98);
LAB_100225df0:
  _swift_retain(puVar11);
  FUN_100224698();
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar6 = 0xd0000000000000a7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd0000000000000a7,(ulong)local_f0 | 0x8000000000000000);
  pcVar13 = "lastPathComponent";
  IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar13);
  _swift_bridgeObjectRelease(pcVar13);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined1 *)0x94;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000019,(ulong)local_d8 | 0x8000000000000000);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = &DAT_d000000000000033;
  uStack_68 = 0x80000001008a63c0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar3 = local_98;
  puVar10 = local_a0;
  uVar16 = DAT_100b362c0;
  lVar4 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
    _swift_release(puVar11);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar16);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar12 = &DAT_1009a5ec0;
    _swift_allocObject(&DAT_1009a5ec0,0x30,7);
    *(long *)(puVar12 + 0x10) = lVar4;
    *(undefined8 *)(puVar12 + 0x18) = uVar16;
    *(undefined **)(puVar12 + 0x20) = puVar10;
    *(undefined8 *)(puVar12 + 0x28) = uVar3;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a5ed8;
    local_78 = puVar12;
    pvVar8 = __Block_copy(&local_a0);
    puVar10 = local_78;
    _swift_retain(uVar16);
    _swift_release(puVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar10;
    FUN_10021e91c();
    lVar1 = local_b0;
    lVar15 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_a0,puVar10,puVar12,local_b0,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,local_a8,lVar15,pvVar8);
    __Block_release(pvVar8);
    _swift_release(puVar11);
    FUN_10007ed2c(lVar4,uVar16);
    (**(code **)(local_c0 + 8))(lVar15,lVar1);
    (**(code **)(local_d0 + 8))(local_a8,local_b8);
  }
  FUN_100225008(local_e8,uStack_e0);
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar6 = 0xd0000000000000a7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd0000000000000a7,(ulong)local_f0 | 0x8000000000000000);
  pcVar13 = "lastPathComponent";
  IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar13);
  _swift_bridgeObjectRelease(pcVar13);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined1 *)0x9b;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000019,(ulong)local_d8 | 0x8000000000000000);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = &DAT_d000000000000030;
  uStack_68 = 0x80000001008a6350;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar3 = local_98;
  puVar10 = local_a0;
  uVar16 = DAT_100b362c0;
  lVar4 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
    _swift_release(puVar11);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar16);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar12 = &DAT_1009a5e70;
    _swift_allocObject(&DAT_1009a5e70,0x30,7);
    *(long *)(puVar12 + 0x10) = lVar4;
    *(undefined8 *)(puVar12 + 0x18) = uVar16;
    *(undefined **)(puVar12 + 0x20) = puVar10;
    *(undefined8 *)(puVar12 + 0x28) = uVar3;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a5e88;
    local_78 = puVar12;
    pvVar8 = __Block_copy(&local_a0);
    puVar10 = local_78;
    _swift_retain(uVar16);
    _swift_release(puVar10);
    lVar2 = local_a8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a8);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar10;
    FUN_10021e91c();
    lVar1 = local_b0;
    lVar15 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_a0,puVar10,puVar12,local_b0,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar2,lVar15,pvVar8);
    __Block_release(pvVar8);
    FUN_10007ed2c(lVar4,uVar16);
    _swift_release(puVar11);
    (**(code **)(local_c0 + 8))(lVar15,lVar1);
    (**(code **)(local_d0 + 8))(lVar2,local_b8);
  }
  return 1;
}

