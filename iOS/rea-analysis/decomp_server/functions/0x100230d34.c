// rea decompile_all
// name: FUN_100230d34
// address: 0x100230d34
// body: available
// range: 0x100230d34-0x1002315a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100230d34(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined *puVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  char *apcStack_140 [2];
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined8 uStack_c8;
  long local_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_108 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar17 = (long)apcStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_110 = lVar17;
  __s8Dispatch0A3QoSVMa();
  local_120 = *(long *)(lVar7 + -8);
  local_118 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10022ed64();
  lVar2 = DAT_100a7de00;
  ppuStack_70 = &PTR_PTR_1009a6590;
  local_90[0] = param_1;
  local_78 = lVar7;
  _swift_retain(param_1);
  if (lVar2 != -1) {
    _swift_once(&DAT_100a7de00,FUN_10022c42c);
  }
  FUN_1000b142c(local_90,&local_100);
  _swift_beginAccess(&DAT_100a7ef40,auStack_a8,0x21,0);
  uVar1 = DAT_100a7ef40;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar13 = uVar1;
  if ((DAT_100a7ef40 & 1) == 0) {
    uVar13 = 0;
    DAT_100a7ef40 = uVar1;
    FUN_100242174(0,*(long *)(uVar1 + 0x10) + 1,1,uVar1);
  }
  uVar1 = *(ulong *)(uVar13 + 0x10);
  DAT_100a7ef40 = uVar13;
  local_130 = lVar17;
  local_128 = lVar6;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
    uVar14 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    FUN_100242174(uVar14,uVar1 + 1,1,uVar13);
    DAT_100a7ef40 = uVar14;
  }
  puVar11 = local_e8;
  uVar13 = DAT_100a7ef40;
  FUN_1000ce034(&local_100,local_e8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  puVar18 = (undefined8 *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar18);
  local_d0 = (undefined1 *)*puVar18;
  ppuStack_b0 = &PTR_PTR_1009a6590;
  *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
  local_b8 = lVar7;
  FUN_1000a0074(&local_d0,uVar13 + uVar1 * 0x28 + 0x20);
  FUN_10003f094(&local_100);
  DAT_100a7ef40 = uVar13;
  _swift_endAccess(auStack_a8);
  DAT_100a7ef38 = 1;
  pcVar16 = "ring has been started";
  local_100 = (undefined *)0x0;
  local_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar8 = 0xd0000000000000a6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a6c10);
  pcVar15 = "lastPathComponent";
  IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
  __sSS6appendyySSF(IVar8,pcVar15);
  _swift_bridgeObjectRelease(pcVar15);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_d0 = (undefined1 *)0x2c;
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0x67656c6544646461,0xef293a5f28657461);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_d0 = (undefined1 *)0xd000000000000025;
  uStack_c8 = 0x80000001008a6be0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_d0,&local_100,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar5 = local_f8;
  puVar4 = local_100;
  uVar3 = DAT_100b362c0;
  lVar2 = DAT_100b362b8;
  puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar11 = PTR___NSConcreteStackBlock_100995490;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_f8);
    lVar7 = local_128;
    lVar6 = local_130;
  }
  else {
    apcStack_140[1] = "ring has been started";
    FUN_10021e878(0);
    _swift_retain(uVar3);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar9 = &DAT_1009a6948;
    _swift_allocObject(&DAT_1009a6948,0x30,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(undefined8 *)(puVar9 + 0x18) = uVar3;
    *(undefined **)(puVar9 + 0x20) = puVar4;
    *(undefined8 *)(puVar9 + 0x28) = uVar5;
    local_e0 = thunk_FUN_100222dd4;
    local_100 = puVar11;
    local_f8 = 0x42000000;
    local_f0 = FUN_1000acdb4;
    local_e8 = &DAT_1009a6960;
    local_d8 = puVar9;
    pvVar10 = __Block_copy(&local_100);
    puVar11 = local_d8;
    _swift_retain(uVar3);
    _swift_release(puVar11);
    lVar6 = local_130;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_130);
    local_100 = puVar12;
    puVar18 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar11 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar11;
    FUN_10021e91c();
    lVar17 = local_110;
    lVar7 = local_128;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_110,&local_100,puVar11,puVar12,local_128,puVar18);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar6,lVar17,pvVar10);
    __Block_release(pvVar10);
    FUN_10007ed2c(lVar2,uVar3);
    pcVar16 = apcStack_140[1];
    (**(code **)(local_108 + 8))(lVar17,lVar7);
    (**(code **)(local_120 + 8))(lVar6,local_118);
  }
  local_100 = (undefined *)0x0;
  local_f8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar8 = 0xd0000000000000a6;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (0xd0000000000000a6,(ulong)pcVar16 | 0x8000000000000000);
  pcVar16 = "lastPathComponent";
  IVar8 = _objc_msgSend(IVar8,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar8);
  __sSS6appendyySSF(IVar8,pcVar16);
  _swift_bridgeObjectRelease(pcVar16);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_d0 = (undefined1 *)0x2d;
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0x67656c6544646461,0xef293a5f28657461);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_d0 = &DAT_d000000000000028;
  uStack_c8 = 0x80000001008a6cc0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_d0,&local_100,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar5 = local_f8;
  puVar11 = local_100;
  uVar3 = DAT_100b362c0;
  lVar2 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_f8);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar3);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar12 = &DAT_1009a68f8;
    _swift_allocObject(&DAT_1009a68f8,0x30,7);
    *(long *)(puVar12 + 0x10) = lVar2;
    *(undefined8 *)(puVar12 + 0x18) = uVar3;
    *(undefined **)(puVar12 + 0x20) = puVar11;
    *(undefined8 *)(puVar12 + 0x28) = uVar5;
    local_e0 = thunk_FUN_100222dd4;
    local_100 = PTR___NSConcreteStackBlock_100995490;
    local_f8 = 0x42000000;
    local_f0 = FUN_1000acdb4;
    local_e8 = &DAT_1009a6910;
    local_d8 = puVar12;
    pvVar10 = __Block_copy(&local_100);
    puVar11 = local_d8;
    _swift_retain(uVar3);
    _swift_release(puVar11);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6);
    local_100 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar18 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar11 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar12 = puVar11;
    FUN_10021e91c();
    lVar17 = local_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_110,&local_100,puVar11,puVar12,lVar7,puVar18);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar6,lVar17,pvVar10);
    __Block_release(pvVar10);
    FUN_10007ed2c(lVar2,uVar3);
    (**(code **)(local_108 + 8))(lVar17,lVar7);
    (**(code **)(local_120 + 8))(lVar6,local_118);
  }
  FUN_10003f094(local_90);
  return;
}

