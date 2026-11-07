// rea decompile_all
// name: SentryCoreDataTracker::descriptionForOperations:inContext:
// address: 0x1007b3280
// body: available
// range: 0x1007b3280-0x1007b3443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b3440 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCoreDataTracker::descriptionForOperations_inContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  ID local_38;
  
  local_60 = 0;
  local_50 = 0x3032000000;
  local_48 = FUN_1007b345c;
  pcStack_40 = FUN_1007b346c;
  local_58 = &local_60;
  local_38 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0xc2000000;
  local_80 = FUN_1007b3474;
  puStack_78 = &DAT_1009eaae8;
  local_70 = param_3;
  puStack_68 = &local_60;
  IVar1 = objc_stub::FUN_1007ec860(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_INSERTED);
  IVar1 = objc_stub::FUN_1007f7ca0(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_UPDATED);
  IVar1 = objc_stub::FUN_1007e8400(param_4);
  IVar1 = objc_stub::count(IVar1);
  (*local_80)(&local_90,IVar1,&cf_DELETED);
  IVar1 = objc_stub::componentsJoinedByString_(local_58[5],&cf__);
  __Block_object_dispose(&local_60,8);
  return IVar1;
}

