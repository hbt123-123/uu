// rea decompile_all
// name: FUN_100233c5c
// address: 0x100233c5c
// body: available
// range: 0x100233c5c-0x1002341ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100233c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined *puVar10;
  void *aBlock;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_130 [8];
  long local_128;
  long local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_110 = *(long *)(lVar7 + -8);
  local_108 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  lVar7 = 0;
  local_118 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_128 = *(long *)(lVar7 + -8);
  local_120 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_128 + 0x40));
  lVar7 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + FCountEvent::status) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + FCountEvent::uid);
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_80,0,0);
  puVar2 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::uid);
  pcVar13 = (code *)auStack_98;
  _swift_beginAccess(puVar2,pcVar13,0,0);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  lVar3 = DAT_100a7de10;
  puVar1 = (undefined8 *)(unaff_x20 + FCountEvent::session_id);
  _swift_bridgeObjectRetain();
  if (lVar3 != -1) {
    pcVar13 = FUN_100234aa0;
    _swift_once(&DAT_100a7de10);
  }
  uVar8 = DAT_100b36338;
  FUN_1002366f8();
  _swift_bridgeObjectRetain(pcVar13);
  *puVar1 = uVar8;
  puVar1[1] = pcVar13;
  lVar3 = FCountEvent::params;
  *(undefined8 *)(unaff_x20 + FCountEvent::params) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + FCountEvent::name);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_b0,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_3;
  FUN_100227a8c(0);
  _swift_allocObject();
  uVar8 = param_2;
  _swift_bridgeObjectRetain();
  FUN_100226e0c();
  lVar3 = FCountEvent::infoModel;
  *(undefined8 *)(unaff_x20 + FCountEvent::infoModel) = uVar8;
  local_100 = (undefined *)0x0;
  local_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1d);
  _swift_bridgeObjectRelease(local_f8);
  local_100 = &DAT_d000000000000013;
  local_f8 = 0x80000001008a6d30;
  __sSS6appendyySSF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(0x203a7374202c,0xe600000000000000);
  local_c0 = *(undefined1 **)(*(long *)(unaff_x20 + lVar3) + 0x40);
  puVar11 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  uVar8 = local_f8;
  puVar11 = local_100;
  local_100 = (undefined *)0x0;
  local_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar9 = 0xd0000000000000a4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,0x80000001008a6d50);
  pcVar14 = "lastPathComponent";
  IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
  __sSS6appendyySSF(IVar9,pcVar14);
  _swift_bridgeObjectRelease(pcVar14);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_c0 = (undefined1 *)0x73;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a6e00);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_c0 = puVar11;
  uStack_b8 = uVar8;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_c0,&local_100,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = local_f8;
  puVar11 = local_100;
  uVar8 = DAT_100b362c0;
  lVar3 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_1009a6a90;
    _swift_allocObject(&DAT_1009a6a90,0x30,7);
    *(long *)(puVar10 + 0x10) = lVar3;
    *(undefined8 *)(puVar10 + 0x18) = uVar8;
    *(undefined **)(puVar10 + 0x20) = puVar11;
    *(undefined8 *)(puVar10 + 0x28) = uVar6;
    local_e0 = FUN_100222dd4;
    local_100 = PTR___NSConcreteStackBlock_100995490;
    local_f8 = 0x42000000;
    local_f0 = FUN_1000acdb4;
    puStack_e8 = &DAT_1009a6aa8;
    local_d8 = puVar10;
    aBlock = __Block_copy(&local_100);
    puVar10 = local_d8;
    _swift_retain(uVar8);
    _swift_release(puVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
    local_100 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar11 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar11;
    FUN_10021e91c();
    lVar5 = local_108;
    puVar4 = local_118;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_118,&local_100,puVar11,puVar12,local_108,puVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar7,puVar4,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar3,uVar8);
    (**(code **)(local_110 + 8))(puVar4,lVar5);
    (**(code **)(local_128 + 8))(lVar7,local_120);
  }
  FUN_100232e2c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"init");
  return;
}

