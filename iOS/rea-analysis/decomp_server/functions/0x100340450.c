// rea decompile_all
// name: FUN_100340450
// address: 0x100340450
// body: available
// range: 0x100340450-0x1003405df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003405dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100340450(ID param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined8 local_70;
  undefined *local_68;
  undefined *puStack_60;
  long local_58;
  
  puVar4 = &local_70;
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar2 = &DAT_100a83340;
  FUN_100004bb4(&DAT_100a83340,&DAT_10081abf0);
  puVar5 = &DAT_100a81e28;
  _swift_initStaticObject();
  FUN_1002bd91c();
  IVar3 = param_1;
  local_68 = puVar2;
  puStack_60 = puVar5;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  local_70 = 0;
  pcVar6 = "compressedDataUsingAlgorithm:error:";
  IVar3 = _objc_msgSend(IVar3,"compressedDataUsingAlgorithm:error:",3,&local_70);
  if (IVar3 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_70);
    _swift_willThrow(0);
    FUN_100006cdc(puVar2,puVar5);
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar3);
    __s10Foundation4DataV6appendyyACF(IVar3,pcVar6);
    FUN_100006cdc(IVar3,pcVar6);
    FUN_100340234(param_1,param_2);
    uVar1 = ((uint)param_1 & 0xff00ff00) >> 8 | ((uint)param_1 & 0xff00ff) << 8;
    local_70 = CONCAT44(local_70._4_4_,uVar1 >> 0x10 | uVar1 << 0x10);
    lVar7 = (long)&local_70 + 4;
    FUN_1001f8534(&local_70,lVar7);
    __s10Foundation4DataV6appendyyACF();
    FUN_100006cdc(puVar4,lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

