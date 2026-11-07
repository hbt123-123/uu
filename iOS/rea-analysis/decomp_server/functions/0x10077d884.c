// rea decompile_all
// name: FUN_10077d884
// address: 0x10077d884
// body: available
// range: 0x10077d884-0x10077d997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10077d884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  ID IVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  IVar1 = SentryNSDataSwizzling::shared((ID)&objc::class_t::SentryNSDataSwizzling);
  IVar1 = SentryNSDataSwizzling::tracker(IVar1);
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0xc2000000;
  local_78 = FUN_10077d998;
  puStack_70 = &DAT_1009e93e0;
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_2;
  IVar1 = objc_stub::measureNSData_writeToFile_options_origin_error_method_
                    (IVar1,param_2,param_3,param_4,&cf_auto_file_ns_data,param_5,&local_88);
  return IVar1;
}

