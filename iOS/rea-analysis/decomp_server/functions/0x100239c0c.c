// rea decompile_all
// name: FUN_100239c0c
// address: 0x100239c0c
// body: available
// range: 0x100239c0c-0x10023a02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100239c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  local_c0 = param_2;
  local_b8 = param_5;
  uStack_b0 = param_6;
  local_a8 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar4 + -8);
  local_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d0 + 0x40));
  lVar10 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_e0 = *(long *)(lVar4 + -8);
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar5 = 0xd0000000000000ad;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000ad,0x80000001008a71e0);
  pcVar9 = "lastPathComponent";
  IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
  __sSS6appendyySSF(IVar5,pcVar9);
  _swift_bridgeObjectRelease(pcVar9);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = 0x8f;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(0xd000000000000027,0x80000001008a7290);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = 0xd00000000000001e;
  uStack_68 = 0x80000001008a71c0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar3 = local_98;
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
    puVar6 = &DAT_1009a6e78;
    _swift_allocObject(&DAT_1009a6e78,0x30,7);
    *(long *)(puVar6 + 0x10) = lVar4;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(undefined **)(puVar6 + 0x20) = puVar8;
    *(undefined8 *)(puVar6 + 0x28) = uVar3;
    local_80 = FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a6e90;
    local_78 = puVar6;
    aBlock = __Block_copy(&local_a0);
    puVar8 = local_78;
    _swift_retain(uVar1);
    _swift_release(puVar8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar8 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar6 = puVar8;
    FUN_10021e91c();
    lVar2 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar10,&local_a0,puVar8,puVar6,local_c8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar10,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar4,uVar1);
    (**(code **)(local_d0 + 8))(lVar10,lVar2);
    (**(code **)(local_e0 + 8))(lVar11,lStack_d8);
  }
  uVar1 = local_c0;
  FUN_10022b4bc(param_1,local_c0);
  puVar8 = &DAT_1009a6e50;
  _swift_allocObject(&DAT_1009a6e50,0x20,7);
  uVar3 = uStack_b0;
  *(undefined8 *)(puVar8 + 0x10) = local_b8;
  *(undefined8 *)(puVar8 + 0x18) = uStack_b0;
  FUN_100008184(param_1,uVar1);
  _swift_retain(uVar3);
  FUN_10024630c(param_1,uVar1,0,1,local_a8,0,FUN_10023a81c,puVar8);
  _swift_release(puVar8);
  FUN_100006cdc(param_1,uVar1);
  return;
}

