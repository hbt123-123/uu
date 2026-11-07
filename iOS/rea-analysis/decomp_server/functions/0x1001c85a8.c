// rea decompile_all
// name: FUN_1001c85a8
// address: 0x1001c85a8
// body: available
// range: 0x1001c85a8-0x1001c8adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c8adc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001c85a8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ID IVar7;
  undefined8 uVar8;
  ID IVar9;
  ulong uVar10;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  int iStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    local_98 = param_4 >> 0x20;
    puVar1 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    uVar3 = param_1;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,puVar1);
    local_88 = 0;
    pcVar6 = "dataWithJSONObject:options:error:";
    IVar2 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       uVar3,0,&local_88);
    if (IVar2 == 0) {
      uVar3 = local_88;
      local_a0 = param_1;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_88);
      _swift_willThrow(0);
      _swift_errorRelease(uVar3);
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1001c8ae0,0,0xd000000000000095,0x8000000100885070,0xd000000000000024,
                    0x800000010089d260,0xcd,0);
      uVar4 = 0x5d5b;
      uVar8 = 0xe200000000000000;
      FUN_100095bd0(0x5d5b,0xe200000000000000);
      FUN_100008184();
      uVar10 = param_4 & 0xffffffff00000000 | 9;
      uVar3 = uVar4;
      FUN_1001e7094(uVar10,uVar4,uVar8);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      IVar2 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::controlled);
      uVar5 = uVar10;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar10,uVar3);
      local_a8 = uVar3;
      IVar2 = _objc_msgSend(IVar2,"ControlledSendBinaryData:data:",param_3,uVar5);
      if ((int)IVar2 == 0) {
        FUN_100006cdc(uVar4,uVar8);
        FUN_100006cdc(uVar10,local_a8);
        FUN_100006cdc(uVar4,uVar8);
        param_1 = local_a0;
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        local_c0 = CONCAT71(local_c0._1_7_,9);
        local_c0 = CONCAT44((int)local_98,(undefined4)local_c0);
        iStack_b8 = (int)IVar2;
        FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_d0,0xd000000000000095,0x8000000100885070,
                      0xd000000000000029,0x800000010089d330,0xed,0);
        FUN_100006cdc(uVar4,uVar8);
        FUN_100006cdc(uVar10,local_a8);
        FUN_100006cdc(uVar4,uVar8);
        param_1 = local_a0;
      }
    }
    else {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar2);
      uVar10 = param_4 & 0xffffffff00000000 | 9;
      IVar7 = IVar2;
      FUN_1001e7094(uVar10,IVar2,pcVar6);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      IVar9 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::controlled);
      uVar5 = uVar10;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar10,IVar7);
      IVar9 = _objc_msgSend(IVar9,"ControlledSendBinaryData:data:",param_3,uVar5);
      if ((int)IVar9 == 0) {
        FUN_100006cdc(uVar10,IVar7);
        FUN_100006cdc(IVar2,pcVar6);
      }
      else {
        uVar3 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
        local_c0 = CONCAT71(local_c0._1_7_,9);
        local_c0 = CONCAT44((int)local_98,(undefined4)local_c0);
        iStack_b8 = (int)IVar9;
        FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_d0,0xd000000000000095,0x8000000100885070,
                      0xd000000000000029,0x800000010089d330,0xed,0);
        FUN_100006cdc(uVar10,IVar7);
        FUN_100006cdc(IVar2,pcVar6);
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_c0 = param_1;
    FUN_1003fb48c(FUN_1001cbe58,auStack_d0,0xd000000000000095,0x8000000100885070,0xd000000000000024,
                  0x800000010089d260,0xd0,0);
    _swift_release(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

