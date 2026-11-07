// rea decompile_all
// name: FUN_10024288c
// address: 0x10024288c
// body: available
// range: 0x10024288c-0x10024303f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024288c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *aBlock;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_e0 [8];
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
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
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  local_d0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar5 + -8);
  local_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  local_c0 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar6 = 0xd0000000000000a7;
  local_d8 = "[Tdid] start setup";
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a7770);
  pcVar11 = "lastPathComponent";
  IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar11);
  _swift_bridgeObjectRelease(pcVar11);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined *)0x1a;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_c8 = "DID/Tdid+Concrete.swift";
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a7820);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = (undefined *)0xd000000000000012;
  uStack_68 = 0x80000001008a7750;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar3 = local_98;
  puVar9 = local_a0;
  uVar1 = DAT_100b362c0;
  lVar5 = DAT_100b362b8;
  puVar10 = PTR___NSConcreteStackBlock_100995490;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
    lVar12 = local_c0;
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar1);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_1009a76f0;
    _swift_allocObject(&DAT_1009a76f0,0x30,7);
    *(long *)(puVar7 + 0x10) = lVar5;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    *(undefined **)(puVar7 + 0x20) = puVar9;
    *(undefined8 *)(puVar7 + 0x28) = uVar3;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = puVar10;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a7708;
    local_78 = puVar7;
    pvVar8 = __Block_copy(&local_a0);
    puVar9 = local_78;
    _swift_retain(uVar1);
    _swift_release(puVar9);
    lVar12 = local_c0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c0);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar7 = puVar10;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar13,&local_a0,puVar10,puVar7,lVar4,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,puVar13,pvVar8);
    __Block_release(pvVar8);
    lVar2 = local_b8;
    FUN_10007ed2c(lVar5,uVar1);
    (**(code **)(local_b0 + 8))(puVar13,lVar4);
    (**(code **)(lVar2 + 8))(lVar12,local_a8);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = PTR___NSConcreteStackBlock_100995490;
  if (DAT_100b363e8 == '\x01') {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (0xd0000000000000a7,(ulong)local_d8 | 0x8000000000000000);
    pcVar11 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined *)0x1c;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000012,(ulong)local_c8 | 0x8000000000000000);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = (undefined *)0xd000000000000014;
    uStack_68 = 0x80000001008a7840;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar3 = local_98;
    puVar10 = local_a0;
    uVar1 = DAT_100b362c0;
    lVar5 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_98);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar1);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a76a0;
      _swift_allocObject(&DAT_1009a76a0,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar5;
      *(undefined8 *)(puVar9 + 0x18) = uVar1;
      *(undefined **)(puVar9 + 0x20) = puVar10;
      *(undefined8 *)(puVar9 + 0x28) = uVar3;
      local_80 = FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a76b8;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar9 = local_78;
      _swift_retain(uVar1);
      _swift_release(puVar9);
      lVar12 = local_c0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c0);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar10 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar7 = puVar10;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar13,&local_a0,puVar10,puVar7,lVar4,puVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,puVar13,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar5,uVar1);
      (**(code **)(local_b0 + 8))(puVar13,lVar4);
      (**(code **)(local_b8 + 8))(lVar12,local_a8);
    }
  }
  else {
    DAT_100b363e8 = '\x01';
    if (DAT_100a7dde0 != -1) {
      _swift_once(&DAT_100a7dde0,FUN_100223714);
    }
    puVar7 = &DAT_1009a7650;
    _swift_allocObject(&DAT_1009a7650,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = local_d0;
    *(code **)(puVar7 + 0x18) = FUN_100008290;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    local_80 = FUN_100247ba4;
    local_a0 = puVar10;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a7668;
    local_78 = puVar7;
    aBlock = __Block_copy(&local_a0);
    pvVar8 = aBlock;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_70 = puVar9;
    FUN_10021e8d8();
    puVar10 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar9 = puVar10;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar13,&local_70,puVar10,puVar9,lVar4,pvVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,puVar13,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b0 + 8))(puVar13,lVar4);
    (**(code **)(local_b8 + 8))(lVar12,local_a8);
    _swift_release(local_78);
  }
  return;
}

