// rea decompile_all
// name: FUN_100247548
// address: 0x100247548
// body: available
// range: 0x100247548-0x1002479f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100247548(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  ID self;
  undefined8 uVar6;
  ID IVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
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
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar4 + -8);
  local_b0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  uVar1 = DAT_100a7fa08;
  uVar6 = DAT_100a7fa00;
  lVar4 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_88 = PTR___sSSN_1009957f8;
  local_a0 = param_1;
  local_98 = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar1);
  ppuVar5 = &local_a0;
  FUN_1002234e0(ppuVar5,uVar6,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  FUN_10003f094(&local_a0);
  if (((ulong)ppuVar5 & 1) == 0) {
    local_a0 = (undefined *)0x0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar7 = 0xd0000000000000a7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a7,0x80000001008a7770);
    pcVar11 = "lastPathComponent";
    IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
    __sSS6appendyySSF(IVar7,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_70 = 0xc4;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0x6469645465766173,0xec000000293a5f28);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_70 = 0xd00000000000001b;
    uStack_68 = 0x80000001008a7880;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_70,&local_a0,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar1 = local_98;
    puVar9 = local_a0;
    uVar6 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_98);
      return;
    }
    FUN_10021e878(0);
    _swift_retain(uVar6);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar8 = &DAT_1009a7b28;
    _swift_allocObject(&DAT_1009a7b28,0x30,7);
    *(long *)(puVar8 + 0x10) = lVar2;
    *(undefined8 *)(puVar8 + 0x18) = uVar6;
    *(undefined **)(puVar8 + 0x20) = puVar9;
    *(undefined8 *)(puVar8 + 0x28) = uVar1;
    local_80 = thunk_FUN_100222dd4;
    local_a0 = PTR___NSConcreteStackBlock_100995490;
    local_98 = 0x42000000;
    local_90 = FUN_1000acdb4;
    local_88 = &DAT_1009a7b40;
    local_78 = puVar8;
    aBlock = __Block_copy(&local_a0);
    puVar8 = local_78;
    _swift_retain(uVar6);
    _swift_release(puVar8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar4);
    local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar9 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar10 = puVar9;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_a0,puVar9,puVar10,lVar3,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar4,lVar14,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(lVar2,uVar6);
    (**(code **)(local_a8 + 8))(lVar14,lVar3);
    pcVar12 = *(code **)(lVar15 + 8);
    lVar2 = local_b0;
  }
  else {
    __s10Foundation4DateVACycfC(lVar13);
    self = NSUserDefaults::standardUserDefaults
                     ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar7 = self;
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    uVar1 = DAT_100a7fa18;
    uVar6 = DAT_100a7fa10;
    _swift_bridgeObjectRetain(DAT_100a7fa18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    NSUserDefaults::setValue_forKey_(self,"setValue:forKey:",IVar7,uVar6);
    pcVar12 = *(code **)(lVar16 + 8);
    lVar4 = lVar13;
  }
  (*pcVar12)(lVar4,lVar2);
  return;
}

