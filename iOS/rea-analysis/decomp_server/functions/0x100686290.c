// rea decompile_all
// name: FUN_100686290
// address: 0x100686290
// body: available
// range: 0x100686290-0x10068642f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068642c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100686290(char *param_1)

{
  ID *pIVar1;
  ID IVar2;
  char *pcVar3;
  ID unaff_x20;
  undefined1 auVar4 [16];
  ID local_68 [3];
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  thunk_FUN_100686184(local_68);
  pIVar1 = local_68;
  FUN_10003f030(pIVar1,local_50);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  FUN_10003f094(local_68);
  IVar2 = NSJSONSerialization::isValidJSONObject_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"isValidJSONObject:",pIVar1);
  _swift_unknownObjectRelease();
  if ((int)IVar2 == 0) {
    FUN_10068f620();
    _swift_allocError(&DAT_1009e6258,pIVar1,0,0);
    *(undefined1 *)pIVar1 = 5;
  }
  else {
    thunk_FUN_100686184(local_68);
    pIVar1 = local_68;
    FUN_10003f030(pIVar1,local_50);
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    FUN_10003f094(local_68);
    local_68[0] = 0;
    pcVar3 = "dataWithJSONObject:options:error:";
    IVar2 = NSJSONSerialization::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                       pIVar1,param_1,local_68);
    _swift_unknownObjectRelease(pIVar1);
    unaff_x20 = local_68[0];
    if (IVar2 != 0) {
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar2);
      unaff_x20 = IVar2;
      param_1 = pcVar3;
      goto LAB_1006863f0;
    }
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
  }
  _swift_willThrow();
LAB_1006863f0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = unaff_x20;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

