// rea decompile_all
// name: FUN_100232600
// address: 0x100232600
// body: available
// range: 0x100232600-0x100232aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002327a8 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100232afc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100232600(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  undefined *puVar13;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined *local_78 [2];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar12 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  puVar13 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pcVar11 = "defaultManager";
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = IVar5;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar11);
  IVar6 = NSFileManager::fileExistsAtPath_(IVar5,"fileExistsAtPath:",IVar6);
  puVar8 = (undefined *)0x0;
  if ((int)IVar6 != 0) {
    IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar6 = IVar5;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    local_a8 = (undefined *)0x0;
    IVar6 = NSFileManager::removeItemAtURL_error_(IVar5,"removeItemAtURL:error:",IVar6,&local_a8);
    if ((int)IVar6 != 0) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        return local_a8;
      }
      goto LAB_100232afc;
    }
    puVar7 = local_a8;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    local_a8 = (undefined *)0x0;
    local_a0 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar11 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar11);
    _swift_bridgeObjectRelease(pcVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_78[0] = (undefined *)0x94;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000015,0x80000001008a6ba0);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    puVar8 = &DAT_100a7e458;
    local_c0 = puVar7;
    local_78[0] = puVar7;
    FUN_100004bb4(&DAT_100a7e458,&DAT_1008134b0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (local_78,&local_a8,puVar8,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    puVar8 = local_a0;
    puVar7 = local_a8;
    uVar2 = DAT_100b362c0;
    lVar1 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_errorRelease(local_c0);
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar2);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a6858;
      _swift_allocObject(&DAT_1009a6858,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar1;
      *(undefined8 *)(puVar9 + 0x18) = uVar2;
      *(undefined **)(puVar9 + 0x20) = puVar7;
      *(undefined **)(puVar9 + 0x28) = puVar8;
      local_88 = thunk_FUN_100222dd4;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = (undefined *)0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a6870;
      local_80 = puVar9;
      aBlock = __Block_copy(&local_a8);
      puVar8 = local_80;
      _swift_retain(uVar2);
      _swift_release(puVar8);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(puVar13);
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar8 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar7 = puVar8;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar12,&local_a8,puVar8,puVar7,lVar3,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,puVar13,lVar12,aBlock);
      __Block_release(aBlock);
      _swift_errorRelease(local_c0);
      FUN_10007ed2c(lVar1,uVar2);
      (**(code **)(local_b0 + 8))(lVar12,lVar3);
      (**(code **)(local_b8 + 8))(puVar13,lVar4);
      puVar8 = puVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return puVar8;
  }
LAB_100232afc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

