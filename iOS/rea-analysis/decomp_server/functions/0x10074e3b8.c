// rea decompile_all
// name: SentrySdkInfo::serialize
// address: 0x10074e3b8
// body: available
// range: 0x10074e3b8-0x10074e517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074e510 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10074e514 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySdkInfo::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_98 = &cf_name;
  local_70 = objc_stub::name(param_1);
  local_90 = &cf_version;
  local_68 = objc_stub::version(param_1);
  local_88 = &cf_integrations;
  local_60 = objc_stub::FUN_1007eca60(param_1);
  local_80 = &cf_features;
  local_58 = objc_stub::FUN_1007e98e0(param_1);
  local_78 = &cf_packages;
  local_50 = objc_stub::FUN_1007eef00(param_1);
  IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_70,&local_98,5);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

