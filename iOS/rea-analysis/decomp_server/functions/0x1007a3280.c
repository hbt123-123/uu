// rea decompile_all
// name: FUN_1007a3280
// address: 0x1007a3280
// body: available
// range: 0x1007a3280-0x1007a33ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a33a8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1007a3280(long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  code *pcVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  ID IStack_50;
  undefined8 local_48;
  
  IVar1 = SentryCoreDataSwizzling::sharedInstance((ID)&objc::class_t::SentryCoreDataSwizzling);
  IVar1 = SentryCoreDataSwizzling::coreDataTracker(IVar1);
  if (IVar1 == 0) {
    pcVar2 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
    (*pcVar2)(param_2,*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_100995490;
    local_70 = 0xc2000000;
    local_68 = FUN_1007a33ac;
    puStack_60 = &DAT_1009ea208;
    local_58 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    IStack_50 = param_2;
    param_2 = objc_stub::managedObjectContext_executeFetchRequest_error_originalImp_
                        (IVar1,param_2,param_3,param_4,&local_78);
  }
  return param_2;
}

