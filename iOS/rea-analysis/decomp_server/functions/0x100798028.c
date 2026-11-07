// rea decompile_all
// name: FUN_100798028
// address: 0x100798028
// body: available
// range: 0x100798028-0x10079816b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100798164 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100798168 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100798028(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  undefined8 local_48;
  ID IStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0xc2000000;
  local_80 = FUN_100799150;
  puStack_78 = &DAT_1009e9928;
  local_70 = IVar1;
  local_68 = param_4;
  uStack_60 = param_3;
  objc_stub::enumerateObjectsUsingBlock_(param_1,&local_90);
  IVar2 = objc_stub::count(IVar1);
  if (IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    local_58 = &cf_unit;
    pcStack_50 = &cf_values;
    local_48 = param_2;
    IStack_40 = IVar1;
    IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,&local_48,&local_58,2);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

