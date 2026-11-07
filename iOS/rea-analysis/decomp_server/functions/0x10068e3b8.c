// rea decompile_all
// name: FUN_10068e3b8
// address: 0x10068e3b8
// body: available
// range: 0x10068e3b8-0x10068e4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068e4f4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10068e3b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined7 uStack_98;
  undefined4 uStack_91;
  undefined8 local_88 [4];
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_2,param_3);
  local_88[0] = 0;
  IVar1 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     param_2,param_4,local_88);
  if (IVar1 == 0) {
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_88[0]);
    _swift_willThrow(0);
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_68,IVar1);
    _swift_unknownObjectRelease(IVar1);
    FUN_10003e8bc(auStack_68,local_88);
    FUN_10068e2dc(&local_c0,local_88);
    FUN_10003f094(auStack_68);
    param_1[1] = uStack_b8;
    *param_1 = local_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
    param_1[5] = CONCAT17((undefined1)uStack_91,uStack_98);
    param_1[4] = local_a0;
    *(undefined4 *)((long)param_1 + 0x2f) = uStack_91;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

