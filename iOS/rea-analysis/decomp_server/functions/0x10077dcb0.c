// rea decompile_all
// name: FUN_10077dcb0
// address: 0x10077dcb0
// body: available
// range: 0x10077dcb0-0x10077ddaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077ddac to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10077dcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  IVar1 = SentryNSDataSwizzling::shared((ID)&objc::class_t::SentryNSDataSwizzling);
  IVar1 = SentryNSDataSwizzling::tracker(IVar1);
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0xc2000000;
  local_68 = FUN_10077ddb0;
  puStack_60 = &DAT_1009e94a0;
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_2;
  IVar1 = objc_stub::measureNSDataFromFile_origin_method_
                    (IVar1,param_3,&cf_auto_file_ns_data,&local_78);
  return IVar1;
}

