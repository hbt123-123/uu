// rea decompile_all
// name: FUN_1001cb3c4
// address: 0x1001cb3c4
// body: available
// range: 0x1001cb3c4-0x1001cb75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001cb758 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001cb3c4(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ID IVar8;
  ID IVar9;
  undefined1 auStack_110 [16];
  undefined1 local_100;
  uint local_fc;
  int iStack_f8;
  char *local_e8;
  undefined8 local_d8;
  undefined1 auStack_d0 [16];
  uint local_c0;
  undefined4 uStack_bc;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100401b14(0);
  local_c0 = param_2;
  uStack_bc = param_3;
  FUN_1003fb48c(FUN_1001cbe08,auStack_d0,0xd000000000000095,0x8000000100885070,0xd000000000000024,
                0x800000010089d5e0,0x140,0);
  puVar1 = &DAT_100a7b970;
  FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x646f635f74697865;
  *(undefined8 *)(puVar1 + 0x28) = 0xe900000000000065;
  *(undefined **)(puVar1 + 0x48) = PTR___ss5Int32VN_100995c78;
  *(undefined4 *)(puVar1 + 0x30) = param_3;
  puVar2 = puVar1;
  FUN_1000cc648();
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100a775a0,&DAT_10080c1c0);
  puVar1 = puVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar2,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar2);
  local_d8 = 0;
  pcVar7 = "dataWithJSONObject:options:error:";
  IVar3 = NSJSONSerialization::dataWithJSONObject_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                     puVar1,0,&local_d8);
  if (IVar3 == 0) {
    uVar6 = local_d8;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_d8);
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
    FUN_1003fb4ec(FUN_1001c9518,0,0xd000000000000095,0x8000000100885070,0xd000000000000024,
                  0x800000010089d5e0,0x143,0);
  }
  else {
    local_e8 = s__100885070;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar3);
    uVar4 = (ulong)param_2 << 0x20 | 5;
    IVar8 = IVar3;
    FUN_1001e7094(uVar4,IVar3,pcVar7);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    IVar9 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::controlled);
    uVar5 = uVar4;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar4,IVar8);
    IVar9 = _objc_msgSend(IVar9,"ControlledSendBinaryData:data:",param_1,uVar5);
    if ((int)IVar9 == 0) {
      FUN_100006cdc(uVar4,IVar8);
      FUN_100006cdc(IVar3,pcVar7);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      local_100 = 5;
      local_fc = param_2;
      iStack_f8 = (int)IVar9;
      FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_110,0xd000000000000095,
                    (ulong)local_e8 | 0x8000000000000000,0xd000000000000029,0x800000010089d330,0xed,
                    0);
      FUN_100006cdc(uVar4,IVar8);
      FUN_100006cdc(IVar3,pcVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

