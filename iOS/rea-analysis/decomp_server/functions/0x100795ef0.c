// rea decompile_all
// name: SentryCrashJSONCodec::encode:options:error:
// address: 0x100795ef0
// body: available
// range: 0x100795ef0-0x10079600f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100796008 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10079600c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryCrashJSONCodec::encode_options_error_
             (ID param_1,SEL param_2,ID param_3,int param_4,ID *param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined1 auStack_128 [224];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::data((ID)&_OBJC_CLASS___NSMutableData);
  FUN_1007a5460(auStack_128,param_4 & 1,FUN_100796010,IVar1);
  IVar2 = objc_stub::FUN_1007e6c60(param_1,(ulong)param_4,0);
  IVar3 = IVar2;
  FUN_100796038(IVar2,param_3,0,auStack_128);
  if (param_5 != (ID *)0x0) {
    IVar2 = objc_stub::error(IVar2);
    *param_5 = IVar2;
  }
  if ((int)IVar3 != 0) {
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

