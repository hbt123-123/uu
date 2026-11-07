// rea decompile_all
// name: FUN_100220638
// address: 0x100220638
// body: available
// range: 0x100220638-0x100220e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100220e2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100220638(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_130 [8];
  undefined *local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined *local_b0 [2];
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar19 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a7e450;
  FUN_100004bb4(&DAT_100a7e450,&DAT_100813ef0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar18 - extraout_x8_01;
  lVar5 = 0;
  local_b8 = lVar16;
  __s10Foundation4DateVMa();
  local_d8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  local_e0 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d0 = &_OBJC_CLASS___NSFileManager;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  local_c8 = param_1;
  uStack_c0 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  local_a0 = (undefined *)0x0;
  IVar6 = NSFileManager::attributesOfItemAtPath_error_
                    (IVar6,"attributesOfItemAtPath:error:",param_1,&local_a0);
  if (IVar6 == 0) {
    puVar7 = local_a0;
    local_110 = lVar18;
    local_108 = lVar17;
    local_100 = lVar3;
    local_f8 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_f0 = lVar19;
    local_e8 = lVar2;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    local_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15);
    __sSS6appendyySSF(0x5d746e756f43465b,0xe900000000000020);
    IVar6 = 0xd0000000000000a4;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000a4,0x80000001008a5e50);
    pcVar14 = "lastPathComponent";
    IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
    __sSS6appendyySSF(IVar6,pcVar14);
    _swift_bridgeObjectRelease(pcVar14);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    local_b0[0] = (undefined *)0xd1;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(0xd000000000000019,0x80000001008a5f60);
    __sSS6appendyySSF(0xa20,0xe200000000000000);
    puVar4 = &DAT_100a7e458;
    local_b0[0] = puVar7;
    FUN_100004bb4(&DAT_100a7e458,&DAT_1008134b0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (local_b0,&local_a0,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar15 = uStack_98;
    puVar4 = local_a0;
    uVar13 = DAT_100b362c0;
    lVar2 = DAT_100b362b8;
    if (DAT_100b362b8 == 0) {
      _swift_errorRelease(puVar7);
      _swift_bridgeObjectRelease(uVar15);
    }
    else {
      local_118 = lVar5;
      FUN_10021e878(0);
      uVar8 = uVar13;
      _swift_retain();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar9 = &DAT_1009a5c40;
      local_120 = uVar8;
      _swift_allocObject(&DAT_1009a5c40,0x30,7);
      *(long *)(puVar9 + 0x10) = lVar2;
      *(undefined8 *)(puVar9 + 0x18) = uVar13;
      *(undefined **)(puVar9 + 0x20) = puVar4;
      *(undefined8 *)(puVar9 + 0x28) = uVar15;
      local_80 = thunk_FUN_100222dd4;
      local_a0 = PTR___NSConcreteStackBlock_100995490;
      uStack_98 = 0x42000000;
      local_90 = FUN_1000acdb4;
      local_88 = &DAT_1009a5c58;
      local_78 = puVar9;
      aBlock = __Block_copy(&local_a0);
      puVar4 = local_78;
      _swift_retain(uVar13);
      _swift_release(puVar4);
      lVar3 = local_110;
      local_128 = puVar7;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_110);
      local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar10 = &DAT_100a7e2d0;
      FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar4 = &DAT_100a7e2d8;
      FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
      puVar11 = &DAT_100a7e2e0;
      FUN_10003f840(&DAT_100a7e2e0,&DAT_100a7e2d8,&DAT_100813640,PTR___sSayxGSTsMc_100995898);
      lVar16 = local_e8;
      puVar1 = local_f8;
      lVar5 = local_118;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f8,&local_a0,puVar4,puVar11,local_e8,puVar10);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar3,puVar1,aBlock);
      __Block_release(aBlock);
      _swift_errorRelease(local_128);
      FUN_10007ed2c(lVar2,uVar13);
      (**(code **)(local_f0 + 8))(puVar1,lVar16);
      (**(code **)(local_108 + 8))(lVar3,local_100);
    }
  }
  IVar6 = _objc_msgSend((ID)local_d0,"defaultManager");
  uVar13 = local_c8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_c8,uStack_c0);
  local_a0 = (undefined *)0x0;
  IVar6 = _objc_msgSend(IVar6,"attributesOfItemAtPath:error:",uVar13,&local_a0);
  if (IVar6 == 0) {
    puVar4 = local_a0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_a0);
    _swift_willThrow(0);
    _swift_errorRelease(puVar4);
  }
  else {
    uVar12 = 0;
    FUN_10021c308();
    puVar4 = &DAT_100a7e0c0;
    FUN_100005c90(&DAT_100a7e0c0,FUN_10021c308,&TargetProtocolConformanceDescriptor_100813228);
    puVar7 = PTR___sypN_100995e88;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (IVar6,uVar12,PTR___sypN_100995e88 + 8,puVar4);
    if (*(long *)(IVar6 + 0x10) == 0) {
LAB_100220c98:
      uStack_98 = 0;
      local_a0 = (undefined *)0x0;
      local_88 = (undefined *)0x0;
      local_90 = (code *)0x0;
    }
    else {
      lVar2 = *(long *)PTR__NSFileCreationDate_1009952b0;
      _swift_bridgeObjectRetain(IVar6);
      FUN_100234398(lVar2);
      if ((uVar12 & 1) == 0) {
        _swift_bridgeObjectRelease(IVar6);
        goto LAB_100220c98;
      }
      FUN_10003e8bc(*(long *)(IVar6 + 0x38) + lVar2 * 0x20,&local_a0);
      _swift_bridgeObjectRelease(IVar6);
    }
    _swift_bridgeObjectRelease(IVar6);
    lVar2 = local_b8;
    if (local_88 == (undefined *)0x0) {
      FUN_100040bb4(&local_a0,&DAT_100a7e460,&DAT_1008134b8);
      (**(code **)(local_d8 + 0x38))(local_b8,1,1,lVar5);
    }
    else {
      lVar16 = local_b8;
      _swift_dynamicCast(local_b8,&local_a0,puVar7 + 8,lVar5,6);
      lVar3 = local_d8;
      (**(code **)(local_d8 + 0x38))(lVar2,(uint)lVar16 ^ 1,1,lVar5);
      (**(code **)(lVar3 + 0x30))(lVar2,1,lVar5);
      lVar16 = local_d8;
      lVar3 = local_e0;
      if ((int)lVar2 != 1) {
        (**(code **)(local_d8 + 0x20))(local_e0,local_b8,lVar5);
        puVar4 = &DAT_100a7e468;
        FUN_100004bb4(&DAT_100a7e468,&DAT_1008134c0);
        _swift_allocObject();
        uVar13 = 1;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        puVar7 = PTR___sSds7CVarArgsWP_100995920;
        *(undefined **)(puVar4 + 0x38) = PTR___sSdN_1009958f0;
        *(undefined **)(puVar4 + 0x40) = puVar7;
        *(undefined8 *)(puVar4 + 0x20) = uVar13;
        uVar13 = 0x6625;
        uVar15 = 0xe200000000000000;
        __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x6625,0xe200000000000000,puVar4);
        (**(code **)(lVar16 + 8))(lVar3,lVar5);
        goto LAB_100220df4;
      }
    }
    FUN_100040bb4(local_b8,&DAT_100a7e450,&DAT_100813ef0);
  }
  uVar13 = 0;
  uVar15 = 0xe000000000000000;
LAB_100220df4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13,uVar15);
  }
  return;
}

