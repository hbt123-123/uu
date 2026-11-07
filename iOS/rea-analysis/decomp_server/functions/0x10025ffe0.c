// rea decompile_all
// name: FUN_10025ffe0
// address: 0x10025ffe0
// body: available
// range: 0x10025ffe0-0x100260253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100260250 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10025ffe0(ID param_1,char *param_2)

{
  long lVar1;
  ID IVar2;
  undefined1 *puVar3;
  ID IVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  puVar8 = auStack_80 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar2 = param_1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
  local_70 = 0;
  IVar2 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     IVar2,0,&local_70);
  if (IVar2 == 0) {
    uVar5 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_70);
    _swift_willThrow(0);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_68,IVar2);
    _swift_unknownObjectRelease(IVar2);
    puVar3 = auStack_68;
    FUN_10003f030(puVar3,local_50);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    local_70 = 0;
    pcVar6 = "dataWithJSONObject:options:error:";
    IVar2 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       puVar3,1,&local_70);
    _swift_unknownObjectRelease(puVar3);
    if (IVar2 != 0) {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar2);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8,0);
      IVar4 = IVar2;
      pcVar7 = pcVar6;
      __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar2,pcVar6,puVar8);
      if (pcVar7 == (char *)0x0) {
        __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8);
        __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar8);
        IVar4 = param_1;
        pcVar7 = param_2;
        if (param_2 != (char *)0x0) goto LAB_100260154;
        FUN_100006cdc(IVar2,pcVar6);
        param_1 = 0;
        param_2 = (char *)0xe000000000000000;
      }
      else {
LAB_100260154:
        FUN_100006cdc(IVar2,pcVar6);
        param_1 = IVar4;
        param_2 = pcVar7;
      }
      FUN_10003f094(auStack_68);
      goto LAB_100260208;
    }
    uVar5 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_70);
    _swift_willThrow(0);
    FUN_10003f094(auStack_68);
  }
  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8);
  __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar8);
  if (param_2 == (char *)0x0) {
    _swift_errorRelease(uVar5);
    param_1 = 0;
    param_2 = (char *)0xe000000000000000;
  }
  else {
    _swift_errorRelease(uVar5);
  }
LAB_100260208:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1,param_2);
}

