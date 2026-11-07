// rea decompile_all
// name: FUN_100225008
// address: 0x100225008
// body: available
// range: 0x100225008-0x1002254e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100225008(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined *puVar11;
  char *pcVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar5 + -8);
  local_a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar13 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_b8 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar5 + -8);
  lStack_c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  local_d0 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined1 *)0xd000000000000026;
  local_98 = 0x80000001008a62c0;
  __sSS6appendyySSF(param_1,param_2);
  uVar1 = local_98;
  puVar7 = local_a0;
  local_a0 = (undefined1 *)0xd00000000000001b;
  local_98 = 0x80000001008a62f0;
  __sSS6appendyySSF(param_1,param_2);
  uVar4 = local_98;
  puVar8 = local_a0;
  IVar6 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  NSUserDefaults::removeObjectForKey_(IVar6,"removeObjectForKey:",puVar7);
  IVar6 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar8,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  NSUserDefaults::removeObjectForKey_(IVar6,"removeObjectForKey:",puVar8);
  local_a0 = (undefined1 *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x32);
  _swift_bridgeObjectRelease(local_98);
  local_a0 = &DAT_d000000000000030;
  local_98 = 0x80000001008a6430;
  __sSS6appendyySSF(param_1,param_2);
  uVar1 = local_98;
  puVar7 = local_a0;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
  IVar6 = 0xd0000000000000a7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a61f0);
  pcVar12 = "lastPathComponent";
  IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
  __sSS6appendyySSF(IVar6,pcVar12);
  _swift_bridgeObjectRelease(pcVar12);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_70 = (undefined1 *)0xb9;
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(&DAT_d000000000000018,0x80000001008a6470);
  __sSS6appendyySSF(0xa20,0xe200000000000000);
  local_70 = puVar7;
  uStack_68 = uVar1;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_a0,PTR___sSSN_1009957f8,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar1);
  uVar4 = local_98;
  puVar7 = local_a0;
  uVar1 = DAT_100b362c0;
  lVar5 = DAT_100b362b8;
  if (DAT_100b362b8 == 0) {
    _swift_bridgeObjectRelease(local_98);
  }
  else {
    FUN_10021e878(0);
    _swift_retain(uVar1);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar9 = &DAT_1009a6000;
    _swift_allocObject(&DAT_1009a6000,0x30,7);
    *(long *)(puVar9 + 0x10) = lVar5;
    *(undefined8 *)(puVar9 + 0x18) = uVar1;
    *(undefined1 **)(puVar9 + 0x20) = puVar7;
    *(undefined8 *)(puVar9 + 0x28) = uVar4;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    puStack_88 = &DAT_1009a6018;
    local_78 = puVar9;
    aBlock = __Block_copy(&local_a0);
    puVar9 = local_78;
    _swift_retain(uVar1);
    _swift_release(puVar9);
    lVar13 = local_d0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar10 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar9 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar11 = puVar9;
    FUN_10021e91c();
    lVar3 = local_a8;
    lVar2 = local_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_b8,&local_a0,puVar9,puVar11,local_a8,puVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar2,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar5,uVar1);
    (**(code **)(local_b0 + 8))(lVar2,lVar3);
    (**(code **)(local_c8 + 8))(lVar13,lStack_c0);
  }
  return;
}

