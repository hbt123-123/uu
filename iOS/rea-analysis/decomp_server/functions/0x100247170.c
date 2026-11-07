// rea decompile_all
// name: FUN_100247170
// address: 0x100247170
// body: available
// range: 0x100247170-0x100247547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100247170(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  ID IVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  uVar2 = DAT_100a7f9f8;
  uVar1 = DAT_100a7f9f0;
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = PTR___sSSN_1009957f8;
  local_a0 = param_1;
  local_98 = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar2);
  ppuVar5 = &local_a0;
  FUN_1002234e0(ppuVar5,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  FUN_10003f094(&local_a0);
  if (((ulong)ppuVar5 & 1) == 0) {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    local_b0 = lVar4;
    local_a8 = lVar14;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a7770);
    pcVar10 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar10);
    _swift_bridgeObjectRelease(pcVar10);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = 0xbe;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x7365744e65766173,0xee00293a5f284449);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = 0xd00000000000001d;
    uStack_68 = 0x80000001008a78c0;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar2 = local_98;
    puVar8 = local_a0;
    uVar1 = DAT_100b362c0;
    lVar4 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_98);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar1);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar7 = &DAT_1009a7bc8;
      _swift_allocObject(&DAT_1009a7bc8,0x30,7);
      *(long *)(puVar7 + 0x10) = lVar4;
      *(undefined8 *)(puVar7 + 0x18) = uVar1;
      *(undefined **)(puVar7 + 0x20) = puVar8;
      *(undefined8 *)(puVar7 + 0x28) = uVar2;
      local_80 = thunk_FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      local_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      local_88 = &DAT_1009a7be0;
      local_78 = puVar7;
      aBlock = __Block_copy(&local_a0);
      puVar7 = local_78;
      _swift_retain(uVar1);
      _swift_release(puVar7);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10021e8d8();
      puVar8 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar8;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar11,&local_a0,puVar8,puVar9,lVar3,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,lVar11,aBlock);
      __Block_release(aBlock);
      FUN_10007ed2c(lVar4,uVar1);
      (**(code **)(local_a8 + 8))(lVar11,lVar3);
      (**(code **)(lVar12 + 8))(lVar13,local_b0);
    }
  }
  return;
}

