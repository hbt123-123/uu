// rea decompile_all
// name: FUN_1001caa44
// address: 0x1001caa44
// body: available
// range: 0x1001caa44-0x1001cae2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001cae2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001caa44(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ID IVar10;
  ID IVar11;
  undefined1 auStack_160 [16];
  undefined1 local_150;
  uint local_14c;
  int iStack_148;
  char *local_138;
  undefined8 local_128;
  undefined1 auStack_120 [16];
  uint local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100401b14(0);
  local_138 = (char *)0xd00000000000002e;
  local_110 = param_2;
  local_108 = param_3;
  uStack_100 = param_4;
  local_f8 = param_5;
  FUN_1003fb48c(FUN_1001cbf7c,auStack_120,0xd000000000000095,0x8000000100885070,0xd00000000000002e,
                0x800000010089db40,0x176,0);
  puVar2 = &DAT_100a7b970;
  FUN_100004bb4(&DAT_100a7b970,&DAT_100812a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x65646f63;
  puVar4 = PTR___sSiN_100995968;
  *(undefined8 *)(puVar2 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  *(undefined **)(puVar2 + 0x48) = puVar4;
  *(undefined8 *)(puVar2 + 0x50) = 0x6567617373656d;
  puVar1 = PTR___sSSN_1009957f8;
  *(undefined **)(puVar2 + 0x78) = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar2 + 0x58) = 0xe700000000000000;
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  *(undefined8 *)(puVar2 + 0x68) = param_5;
  _swift_bridgeObjectRetain(param_5);
  puVar3 = puVar2;
  FUN_1000cc648(puVar2);
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100a775a0;
  FUN_100004bb4(&DAT_100a775a0,&DAT_10080c1c0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  puVar2 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,puVar1,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  _swift_bridgeObjectRelease(puVar3);
  local_128 = 0;
  pcVar9 = "dataWithJSONObject:options:error:";
  IVar5 = NSJSONSerialization::dataWithJSONObject_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                     puVar2,0,&local_128);
  if (IVar5 == 0) {
    uVar8 = local_128;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_128);
    _swift_willThrow(0);
    _swift_errorRelease(uVar8);
    FUN_1003fb4ec(FUN_1001c9a04,0,0xd000000000000095,0x8000000100885070,local_138,0x800000010089db40
                  ,0x179,0);
  }
  else {
    local_138 = s__100885070;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
    uVar6 = (ulong)param_2 << 0x20 | 0xe;
    IVar10 = IVar5;
    FUN_1001e7094(uVar6,IVar5,pcVar9);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    IVar11 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                    _TtC14UURemoteServer15StreamerManager::controlled);
    uVar7 = uVar6;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar6,IVar10);
    IVar11 = _objc_msgSend(IVar11,"ControlledSendBinaryData:data:",param_1,uVar7);
    if ((int)IVar11 == 0) {
      FUN_100006cdc(uVar6,IVar10);
      FUN_100006cdc(IVar5,pcVar9);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      local_150 = 0xe;
      local_14c = param_2;
      iStack_148 = (int)IVar11;
      FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_160,0xd000000000000095,
                    (ulong)local_138 | 0x8000000000000000,0xd000000000000029,0x800000010089d330,0xed
                    ,0);
      FUN_100006cdc(uVar6,IVar10);
      FUN_100006cdc(IVar5,pcVar9);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

