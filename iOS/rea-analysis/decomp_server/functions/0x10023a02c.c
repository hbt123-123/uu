// rea decompile_all
// name: FUN_10023a02c
// address: 0x10023a02c
// body: available
// range: 0x10023a02c-0x10023a783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023a02c(ulong param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_f0 [8];
  long local_e8;
  code *local_e0;
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar6 = 0;
  local_a8 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar6 + -8);
  local_b8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar6 = 0;
  local_d0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar6 + -8);
  local_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar6 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = param_1;
  if ((long)param_1 < 0) {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x17);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = (undefined *)0xd000000000000015;
    local_98 = 0x80000001008a7300;
    local_70 = *(undefined **)((param_1 & 0x7fffffffffffffff) + 0x20);
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    uVar2 = local_98;
    puVar11 = local_a0;
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
    pcVar13 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar13);
    _swift_bridgeObjectRelease(pcVar13);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined *)0x94;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000027,0x80000001008a7290);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = puVar11;
    uStack_68 = uVar2;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(uVar2);
    uVar5 = local_98;
    puVar11 = local_a0;
    uVar2 = DAT_100b362c0;
    lVar1 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_98);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar2);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a6f18;
      _swift_allocObject(&DAT_1009a6f18,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar1;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(undefined8 *)(puVar9 + 0x28) = uVar5;
      local_80 = thunk_FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a6f30;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar11 = local_78;
      _swift_retain(uVar2);
      _swift_release(puVar11);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar11 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar11;
      FUN_10021e91c();
      lVar4 = local_b8;
      puVar3 = local_d0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_d0,&local_a0,puVar11,puVar9,local_b8,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar6,puVar3,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar1,uVar2);
      (**(code **)(local_c0 + 8))(puVar3,lVar4);
      (**(code **)(local_d8 + 8))(lVar6,local_c8);
    }
  }
  else {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    local_e8 = lVar6;
    local_e0 = param_2;
    __ss11_StringGutsV4growyySiF(0x17);
    _swift_bridgeObjectRelease(local_98);
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    puVar11 = PTR___sSiN_100995968;
    local_a0 = (undefined *)0xd000000000000015;
    local_98 = 0x80000001008a72e0;
    local_70 = *(undefined **)(param_1 + 0x20);
    puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar12);
    uVar2 = local_98;
    puVar12 = local_a0;
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd0000000000000ad;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
    pcVar13 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar13);
    _swift_bridgeObjectRelease(pcVar13);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = (undefined *)0x97;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar11,puVar9);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000027,0x80000001008a7290);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = puVar12;
    uStack_68 = uVar2;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(uVar2);
    uVar5 = local_98;
    puVar11 = local_a0;
    uVar2 = DAT_100b362c0;
    lVar6 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_98);
      param_2 = local_e0;
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar2);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a6ec8;
      _swift_allocObject(&DAT_1009a6ec8,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar6;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(undefined8 *)(puVar9 + 0x28) = uVar5;
      local_80 = thunk_FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      puStack_88 = &DAT_1009a6ee0;
      local_78 = puVar9;
      pvVar8 = __Block_copy(&local_a0);
      puVar11 = local_78;
      _swift_retain(uVar2);
      _swift_release(puVar11);
      lVar1 = local_e8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_e8);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar11 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar11;
      FUN_10021e91c();
      lVar4 = local_b8;
      puVar3 = local_d0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_d0,&local_a0,puVar11,puVar9,local_b8,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar1,puVar3,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar6,uVar2);
      (**(code **)(local_c0 + 8))(puVar3,lVar4);
      (**(code **)(local_d8 + 8))(lVar1,local_c8);
      param_2 = local_e0;
    }
  }
  (*param_2)((uint)(local_b0 >> 0x3f) ^ 1);
  return;
}

