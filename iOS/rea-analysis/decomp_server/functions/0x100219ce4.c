// rea decompile_all
// name: FUN_100219ce4
// address: 0x100219ce4
// body: available
// range: 0x100219ce4-0x10021a1b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021a1b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100219ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_100 [16];
  undefined8 auStack_f0 [4];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_88;
  undefined1 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_d0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar6 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  local_b0 = 0;
  IVar3 = NSFileManager::attributesOfItemAtPath_error_
                    (IVar3,"attributesOfItemAtPath:error:",uVar6,&local_b0);
  if (IVar3 == 0) {
    uVar6 = local_b0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar12 + -0x20) = param_2;
    *(undefined8 *)(lVar12 + -0x18) = param_3;
    *(undefined8 *)(lVar12 + -0x10) = uVar6;
    FUN_1003fb45c(FUN_10021a5f4,lVar12 + -0x30,0xd0000000000000a4,0x80000001008a5270,
                  &DAT_d000000000000018,0x80000001008a5360,0x22,0);
    _swift_errorRelease(uVar6);
    uVar8 = 1;
    uVar6 = 0;
    uVar9 = 0;
    uVar10 = 1;
    goto LAB_10021a170;
  }
  puVar4 = (undefined8 *)0x0;
  FUN_100006050();
  puVar5 = puVar4;
  FUN_1000d3e68();
  puVar1 = PTR___sypN_100995e88;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar3,puVar4,PTR___sypN_100995e88 + 8,puVar5);
  local_88 = 0;
  local_80 = 1;
  if (*(long *)(IVar3 + 0x10) != 0) {
    lVar13 = *(long *)PTR__NSFileSize_1009952c8;
    _swift_bridgeObjectRetain(IVar3);
    thunk_FUN_1001a2e90(lVar13);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar3);
    }
    else {
      FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar13 * 0x20,&local_b0);
      _swift_bridgeObjectRelease(IVar3);
      puVar5 = &local_c0;
      puVar4 = &local_b0;
      _swift_dynamicCast(puVar5,puVar4,puVar1 + 8,PTR___ss6UInt64VN_100995e10,6);
      if (((ulong)puVar5 & 1) != 0) {
        local_88 = local_c0;
        local_80 = 0;
      }
    }
  }
  local_c0 = 0;
  local_b8 = 1;
  if (*(long *)(IVar3 + 0x10) == 0) {
LAB_100219fe8:
    param_1 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    lVar13 = *(long *)PTR__NSFileModificationDate_1009952b8;
    _swift_bridgeObjectRetain(IVar3);
    thunk_FUN_1001a2e90(lVar13);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_100219fe8;
    }
    FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar13 * 0x20,&local_b0);
    _swift_bridgeObjectRelease(IVar3);
  }
  _swift_bridgeObjectRelease(IVar3);
  if (local_98 == 0) {
    FUN_100040bb4(&local_b0,&DAT_100a766e0,&DAT_10080bdb0);
    (**(code **)(lVar14 + 0x38))(puVar11,1,1,lVar2);
LAB_10021a0c8:
    FUN_100040bb4(puVar11,&DAT_100a76718,&DAT_10080ccc0);
  }
  else {
    puVar7 = puVar11;
    _swift_dynamicCast(puVar11,&local_b0,puVar1 + 8,lVar2,6);
    (**(code **)(lVar14 + 0x38))(puVar11,(uint)puVar7 ^ 1,1,lVar2);
    puVar7 = puVar11;
    (**(code **)(lVar14 + 0x30))(puVar11,1,lVar2);
    if ((int)puVar7 == 1) goto LAB_10021a0c8;
    (**(code **)(lVar14 + 0x20))(lVar12,puVar11,lVar2);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar14 + 8))(lVar12,lVar2);
    local_b8 = 0;
    local_c0 = param_1;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)(lVar12 + -0x20) = param_2;
  *(undefined8 *)(lVar12 + -0x18) = param_3;
  *(undefined8 **)(lVar12 + -0x10) = &local_88;
  *(undefined8 **)(lVar12 + -8) = &local_c0;
  FUN_1003fb45c(FUN_10021a600,lVar12 + -0x30,0xd0000000000000a4,0x80000001008a5270,
                &DAT_d000000000000018,0x80000001008a5360,0x1f,0);
  uVar6 = local_88;
  uVar9 = local_c0;
  uVar8 = local_80;
  uVar10 = local_b8;
LAB_10021a170:
  local_b0 = CONCAT71(local_b0._1_7_,uVar8);
  local_88 = CONCAT71(local_88._1_7_,uVar10);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6,uVar8,uVar9);
}

