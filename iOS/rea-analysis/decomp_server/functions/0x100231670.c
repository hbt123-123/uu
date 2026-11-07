// rea decompile_all
// name: FUN_100231670
// address: 0x100231670
// body: available
// range: 0x100231670-0x10023201f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023201c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100231670(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID self;
  ID IVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x12;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  undefined1 auStack_110 [8];
  ID local_108;
  long local_100;
  long local_f8;
  long local_f0;
  code *local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c8 = lVar15;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar15 - extraout_x12;
  lVar5 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  if (*(long *)(lVar5 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar5);
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x10023201c);
    (*pcVar18)();
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x100232010);
    (*pcVar18)();
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x20);
  uVar1 = *(undefined8 *)(lVar5 + 0x28);
  local_d8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar17;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(lVar5);
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar15,uVar7,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar16,0x6f4c746e756f4346,0xeb000000002f7367);
  pcVar18 = *(code **)(lVar19 + 8);
  (*pcVar18)(lVar15,lVar4);
  pcVar14 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar14);
  pcVar14 = "fileExistsAtPath:";
  IVar6 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar6);
  uVar7 = 0;
  if ((int)IVar6 == 0) {
    (*pcVar18)(lVar16,lVar4);
    goto LAB_100231fd4;
  }
  local_e0 = lVar4;
  __s10Foundation3URLV4pathSSvg(0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar14);
  local_b8 = (undefined *)0x0;
  IVar6 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (self,"contentsOfDirectoryAtPath:error:",uVar7,&local_b8);
  local_f0 = lVar3;
  local_e8 = pcVar18;
  if (IVar6 == 0) {
LAB_100231c18:
    puVar9 = local_b8;
    local_f8 = lVar2;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    local_b8 = (undefined *)0x0;
    local_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x35);
    __sSS6appendyySSF(&DAT_d000000000000033,0x80000001008a69a0);
    puVar10 = &DAT_100a7e458;
    local_88 = puVar9;
    FUN_100004bb4(&DAT_100a7e458,&DAT_1008134b0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_88,&local_b8,puVar10,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar7 = local_b0;
    puVar10 = local_b8;
    local_b8 = (undefined *)0x0;
    local_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_88 = (undefined *)0x70;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd00000000000001e,0x80000001008a6a90);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_88 = puVar10;
    uStack_80 = uVar7;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_88,&local_b8,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    _swift_bridgeObjectRelease(uVar7);
    uVar7 = local_b0;
    puVar10 = local_b8;
    lVar4 = DAT_100b362c0;
    lVar3 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_bridgeObjectRelease(local_b0);
      _swift_errorRelease(puVar9);
    }
    else {
      FUN_10021e878(0);
      lVar2 = lVar4;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &DAT_1009a6678;
      local_100 = lVar2;
      _swift_allocObject(&DAT_1009a6678,0x30,7);
      *(long *)(puVar11 + 0x10) = lVar3;
      *(long *)(puVar11 + 0x18) = lVar4;
      *(undefined **)(puVar11 + 0x20) = puVar10;
      *(undefined8 *)(puVar11 + 0x28) = uVar7;
      local_98 = FUN_100222dd4;
      local_b8 = PTR___NSConcreteStackBlock_100995490;
      local_b0 = 0x42000000;
      local_a8 = FUN_1000acdb4;
      puStack_a0 = &DAT_1009a6690;
      local_90 = puVar11;
      pvVar8 = __Block_copy(&local_b8);
      puVar10 = local_90;
      _swift_retain(lVar4);
      _swift_release(puVar10);
      lVar5 = local_c8;
      local_108 = self;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar12 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar10 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar11 = puVar10;
      FUN_10021e91c();
      puVar13 = local_d8;
      lVar2 = local_f8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_d8,&local_b8,puVar10,puVar11,local_f8,puVar12);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar5,puVar13,pvVar8);
      __Block_release(pvVar8);
      _swift_errorRelease(puVar9);
      FUN_10007ed2c(lVar3,lVar4);
      pcVar18 = *(code **)(local_d0 + 8);
LAB_100231f80:
      (*pcVar18)(puVar13,lVar2);
      (**(code **)(local_c0 + 8))(lVar5,local_f0);
    }
  }
  else {
    uVar7 = 0;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    local_b8 = (undefined *)0x0;
    IVar6 = NSFileManager::removeItemAtURL_error_(self,"removeItemAtURL:error:",uVar7,&local_b8);
    if ((int)IVar6 == 0) goto LAB_100231c18;
    local_b8 = (undefined *)0x0;
    local_b0 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a6;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a6,0x80000001008a69e0);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_88 = (undefined *)0x6e;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd00000000000001e,0x80000001008a6a90);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    local_88 = (undefined *)0x100000000000004e;
    uStack_80 = 0x80000001008a6ab0;
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_88,&local_b8,PTR___sSSN_1009957f8,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar7 = local_b0;
    puVar10 = local_b8;
    lVar4 = DAT_100b362c0;
    lVar3 = DAT_100b362b8;
    if (DAT_100b362b8 != 0) {
      FUN_10021e878(0);
      lVar5 = lVar4;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a66c8;
      local_f8 = lVar5;
      _swift_allocObject(&DAT_1009a66c8,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar3;
      *(long *)(puVar9 + 0x18) = lVar4;
      *(undefined **)(puVar9 + 0x20) = puVar10;
      *(undefined8 *)(puVar9 + 0x28) = uVar7;
      local_98 = thunk_FUN_100222dd4;
      local_b8 = PTR___NSConcreteStackBlock_100995490;
      local_b0 = 0x42000000;
      local_a8 = FUN_1000acdb4;
      puStack_a0 = &DAT_1009a66e0;
      local_90 = puVar9;
      pvVar8 = __Block_copy(&local_b8);
      puVar10 = local_90;
      _swift_retain(lVar4);
      _swift_release(puVar10);
      lVar5 = local_c8;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
      local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar12 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar10 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar9 = puVar10;
      FUN_10021e91c();
      puVar13 = local_d8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_d8,&local_b8,puVar10,puVar9,lVar2,puVar12);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar5,puVar13,pvVar8);
      __Block_release(pvVar8);
      FUN_10007ed2c(lVar3,lVar4);
      pcVar18 = *(code **)(local_d0 + 8);
      goto LAB_100231f80;
    }
    _swift_bridgeObjectRelease(local_b0);
  }
  (*local_e8)(lVar16,local_e0);
LAB_100231fd4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

