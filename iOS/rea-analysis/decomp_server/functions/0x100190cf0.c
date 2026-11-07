// rea decompile_all
// name: FUN_100190cf0
// address: 0x100190cf0
// body: available
// range: 0x100190cf0-0x10019104f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019104c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100190cf0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined *local_a0;
  undefined *puStack_98;
  ID local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    local_88 = CONCAT44(local_88._4_4_,param_2);
    _swift_retain(uVar8);
    puVar2 = PTR___ss6UInt32VN_100995dc0;
    puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_a0 = puVar2;
    puStack_98 = puVar6;
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    __sSS6appendyySSF(param_3,param_4);
    puVar2 = puStack_98;
    FUN_1003e37e8(&local_88,&local_a0);
    _swift_bridgeObjectRelease(puVar2);
    _swift_release(uVar8);
    IVar3 = local_88;
    if (local_88 == 0) {
      _swift_release(param_1);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)((long)auStack_c0 + lVar1) = param_3;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 8) = param_4;
      FUN_1003fb45c(FUN_1001912bc,auStack_d0 + lVar1,0xd0000000000000ad,0x8000000100890a70,
                    0xd000000000000022,0x80000001008988b0,0x197,7);
      local_a0 = (undefined *)0x0;
      IVar3 = _objc_msgSend(IVar3,"closeAndReturnError:",&local_a0);
      if ((int)IVar3 == 0) {
        puVar2 = local_a0;
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_a0);
        _swift_willThrow(0);
        _swift_errorRelease(puVar2);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      local_88 = CONCAT44(local_88._4_4_,param_2);
      _swift_retain(uVar8);
      puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
      puVar2 = PTR___ss6UInt32VN_100995dc0;
      puVar4 = PTR___ss6UInt32VN_100995dc0;
      puVar7 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      local_a0 = puVar4;
      puStack_98 = puVar7;
      __sSS6appendyySSF(0x3a,0xe100000000000000);
      __sSS6appendyySSF(param_3,param_4);
      local_88 = 0;
      FUN_1003e3634(&local_88,&local_a0);
      _swift_release(uVar8);
      local_88 = CONCAT44(local_88._4_4_,param_2);
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      local_a0 = puVar2;
      puStack_98 = puVar6;
      __sSS6appendyySSF(0x3a,0xe100000000000000);
      __sSS6appendyySSF(param_3,param_4);
      puVar6 = puStack_98;
      puVar2 = local_a0;
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(auStack_b0 + lVar1,1,1,lVar5);
      _swift_beginAccess(param_1 + 0x10,&local_a0,0x21,0);
      FUN_10018bca4(auStack_b0 + lVar1,puVar2,puVar6);
      _swift_endAccess(&local_a0);
      _swift_release(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

