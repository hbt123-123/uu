// rea decompile_all
// name: FUN_10023202c
// address: 0x10023202c
// body: available
// range: 0x10023202c-0x100232507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100232504 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10023202c(void)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined *local_78 [2];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  if (DAT_100a7de08 != -1) {
    _swift_once(&DAT_100a7de08,FUN_10022edc8);
  }
  uVar4 = 0;
  __s10Foundation3URLVMa(0);
  uVar5 = uVar4;
  FUN_10021bec0();
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_a8 = (undefined *)0x0;
  IVar3 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    (IVar3,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                     uVar5,0,0,&local_a8);
  if (IVar3 == 0) {
    puVar6 = local_a8;
    local_c0 = lVar13;
    local_b8 = lVar12;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    local_a8 = (undefined *)0x0;
    local_a0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar3 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar9 = "lastPathComponent";
    IVar3 = _objc_msgSend(IVar3,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
    __sSS6appendyySSF(IVar3,pcVar9);
    _swift_bridgeObjectRelease(pcVar9);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_78[0] = (undefined *)0x89;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000012,0x80000001008a6bc0);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    puVar7 = &DAT_100a7e458;
    local_b0 = puVar6;
    local_78[0] = puVar6;
    FUN_100004bb4(&DAT_100a7e458,&DAT_1008134b0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (local_78,&local_a8,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar4 = local_a0;
    puVar7 = local_a8;
    uVar5 = DAT_100b362c0;
    lVar12 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_errorRelease(local_b0);
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      FUN_10021e878(0);
      _swift_retain(uVar5);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar6 = &DAT_1009a68a8;
      _swift_allocObject(&DAT_1009a68a8,0x30,7);
      *(long *)(puVar6 + 0x10) = lVar12;
      *(undefined8 *)(puVar6 + 0x18) = uVar5;
      *(undefined **)(puVar6 + 0x20) = puVar7;
      *(undefined8 *)(puVar6 + 0x28) = uVar4;
      local_88 = thunk_FUN_100222dd4;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a68c0;
      local_80 = puVar6;
      aBlock = __Block_copy(&local_a8);
      puVar7 = local_80;
      _swift_retain(uVar5);
      _swift_release(puVar7);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
      local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar6 = puVar7;
      FUN_10021e91c();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar10,&local_a8,puVar7,puVar6,lVar1,puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar11,lVar10,aBlock);
      __Block_release(aBlock);
      _swift_errorRelease(local_b0);
      FUN_10007ed2c(lVar12,uVar5);
      (**(code **)(local_b8 + 8))(lVar10,lVar1);
      (**(code **)(local_c0 + 8))(lVar11,lVar2);
    }
    IVar3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar3,uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

