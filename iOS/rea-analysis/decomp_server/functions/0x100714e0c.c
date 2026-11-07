// rea decompile_all
// name: FUN_100714e0c
// address: 0x100714e0c
// body: available
// range: 0x100714e0c-0x100714f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100714f30 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100714e0c(long param_1,ID param_2,undefined8 param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  puVar1 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  IVar2 = param_2;
  if ((IVar3 & 1) == 0) {
    IVar2 = objc_stub::description(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    IVar3 = param_2;
    _objc_opt_class();
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAJSONUtil.m"
               ,"+[SAJSONUtil JSONSerializableObject:]_block_invoke",0x67,0,
               &cf_propertykeysshouldbestrings_butproperty____type____key___,uVar4,IVar3,param_2);
  }
  IVar3 = objc_stub::JSONSerializableObject_(*(ID *)(param_1 + 0x30),param_3);
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0x28),IVar3,IVar2);
  return 0;
}

