// rea decompile_all
// name: FUN_10023606c
// address: 0x10023606c
// body: available
// range: 0x10023606c-0x1002366f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023606c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ID IVar11;
  void *aBlock;
  undefined *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  long local_110;
  undefined8 *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar18 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar1 = (ulong *)(param_1 + FCountEvent::name);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  uVar7 = *puVar1;
  if ((uVar7 == 0xd000000000000012 && puVar1[1] == 0x80000001008a6060) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar7,puVar1[1],0xd000000000000012,0x80000001008a6060,0), (uVar7 & 1) != 0)) {
    if (DAT_100a7de20 != -1) {
      _swift_once(&DAT_100a7de20,FUN_100234cec);
    }
    if ((*(byte *)(DAT_100a7f1f8 + 0x10) & 1) != 0) {
      return;
    }
    *(undefined1 *)(DAT_100a7f1f8 + 0x10) = 1;
  }
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  local_108 = (undefined8 *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_e8 = lVar15;
  local_e0 = lVar5;
  _swift_bridgeObjectRetain(uVar2);
  FUN_100222e50(uVar7,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  if ((uVar7 & 1) == 0) {
    uVar7 = *puVar1;
    uVar2 = puVar1[1];
    _swift_bridgeObjectRetain(uVar2);
    FUN_10021cb94(uVar7,uVar2);
    _swift_bridgeObjectRelease(uVar2);
  }
  lVar5 = FCountEvent::params;
  _swift_beginAccess(param_1 + FCountEvent::params,auStack_98,0,0);
  puVar16 = *(undefined **)(param_1 + lVar5);
  puVar8 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_100234418();
  }
  ppuVar20 = *(undefined ***)(puVar8 + 0x10);
  local_100 = lVar19;
  lStack_f8 = lVar6;
  local_f0 = lVar18;
  if (ppuVar20 == (undefined **)0x0) {
    _swift_bridgeObjectRetain(puVar16);
    _swift_bridgeObjectRelease(puVar8);
    ppuVar9 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    ppuVar9 = ppuVar20;
    local_110 = param_1;
    FUN_1002423f8(ppuVar20,0);
    ppuVar10 = &local_d8;
    FUN_100235e80(ppuVar10,ppuVar9 + 4,ppuVar20,puVar8);
    pcVar3 = local_b8;
    puVar8 = puStack_c0;
    pcVar4 = local_c8;
    _swift_bridgeObjectRetain(puVar16);
    FUN_10003f638(local_d8,local_d0,pcVar4,puVar8,pcVar3);
    param_1 = local_110;
    if (ppuVar10 != ppuVar20) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002366f8);
      (*pcVar4)();
    }
  }
  FUN_10021dacc(ppuVar9);
  _swift_release(ppuVar9);
  local_d8 = (undefined *)0x0;
  local_d0 = (undefined8 *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x23);
  _swift_bridgeObjectRelease(local_d0);
  local_d8 = (undefined *)0x5b5d746e6576455b;
  local_d0 = (undefined8 *)0xe800000000000000;
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar7,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0xd000000000000017,0x80000001008a70d0);
  local_a8 = *(undefined **)(*(long *)(param_1 + FCountEvent::infoModel) + 0x40);
  puVar8 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  puVar13 = local_d0;
  puVar8 = local_d8;
  local_d8 = (undefined *)0x0;
  local_d0 = (undefined8 *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar11 = 0xd0000000000000a4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,0x80000001008a7000);
  pcVar14 = "lastPathComponent";
  IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
  __sSS6appendyySSF(IVar11,pcVar14);
  _swift_bridgeObjectRelease(pcVar14);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_a8 = (undefined *)0xc7;
  puVar16 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar16);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0x2928687375705f,0xe700000000000000);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_a8 = puVar8;
  uStack_a0 = puVar13;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_a8,&local_d8,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(puVar13);
  puVar13 = local_d0;
  puVar8 = local_d8;
  uVar17 = DAT_100b362c0;
  lVar5 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar17);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar16 = &DAT_1009a6cb8;
    _swift_allocObject(&DAT_1009a6cb8,0x30,7);
    *(long *)(puVar16 + 0x10) = lVar5;
    *(undefined8 *)(puVar16 + 0x18) = uVar17;
    *(undefined **)(puVar16 + 0x20) = puVar8;
    *(undefined8 **)(puVar16 + 0x28) = puVar13;
    local_b8 = thunk_FUN_100222dd4;
    local_d8 = PTR___NSConcreteStackBlock_100995490;
    local_d0 = (undefined8 *)0x42000000;
    local_c8 = FUN_1000acdb4;
    puStack_c0 = &DAT_1009a6cd0;
    local_b0 = puVar16;
    aBlock = __Block_copy(&local_d8);
    puVar16 = local_b0;
    _swift_retain(uVar17);
    _swift_release(puVar16);
    puVar13 = local_108;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
    local_d8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar8 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar8;
    FUN_10021e91c();
    lVar15 = local_e0;
    lVar6 = local_f0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f0,&local_d8,puVar8,puVar12,local_e0,puVar16);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,puVar13,lVar6,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar5,uVar17);
    (**(code **)(local_e8 + 8))(lVar6,lVar15);
    (**(code **)(local_100 + 8))(puVar13,lStack_f8);
  }
  if (DAT_100a7de10 != -1) {
    puVar13 = &DAT_100a7de10;
    _swift_once(&DAT_100a7de10,FUN_100234aa0);
  }
  uVar17 = *(undefined8 *)(DAT_100b36338 + _TtC6FCount6FCount::eventManager);
  FUN_100241f98();
  _swift_allocObject();
  puVar13[3] = 3;
  puVar13[2] = 1;
  puVar13[4] = param_1;
  _swift_retain(uVar17);
  FUN_10022ddf0(puVar13);
  _swift_release(uVar17);
  _swift_bridgeObjectRelease(puVar13);
  return;
}

