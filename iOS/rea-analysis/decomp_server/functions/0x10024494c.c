// rea decompile_all
// name: FUN_10024494c
// address: 0x10024494c
// body: available
// range: 0x10024494c-0x100244ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024494c(code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  code *pcStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  local_b0 = param_2;
  pcStack_a8 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar10 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar4 + -8);
  local_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar5 = 0xd0000000000000a7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a7770);
  pcVar9 = "lastPathComponent";
  IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
  __sSS6appendyySSF(IVar5,pcVar9);
  _swift_bridgeObjectRelease(pcVar9);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined1 *)0x63;
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a7820);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = &DAT_d000000000000018;
  uStack_68 = 0x80000001008a78a0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar2 = local_98;
  puVar7 = local_a0;
  uVar1 = DAT_100b362c0;
  lVar4 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar1);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar6 = &DAT_1009a7b78;
    _swift_allocObject(&DAT_1009a7b78,0x30,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(undefined **)(puVar6 + 0x20) = puVar7;
    *(undefined8 *)(puVar6 + 0x28) = uVar2;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a7b90;
    local_78 = puVar6;
    aBlock = __Block_copy(&local_a0);
    puVar6 = local_78;
    _swift_retain(uVar1);
    _swift_release(puVar6);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar7 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar8 = puVar7;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_a0,puVar7,puVar8,lVar3,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar10,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar4,uVar1);
    (**(code **)(local_b8 + 8))(lVar10,lVar3);
    (**(code **)(lVar11 + 8))(lVar12,local_c0);
  }
  (*pcStack_a8)();
  return;
}

