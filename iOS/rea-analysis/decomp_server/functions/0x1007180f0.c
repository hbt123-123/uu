// rea decompile_all
// name: FUN_1007180f0
// address: 0x1007180f0
// body: available
// range: 0x1007180f0-0x100718203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100718200 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1007180f0(ID param_1,undefined8 param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ulong uVar3;
  
  lVar1 = DAT_100aba5e0;
  IVar2 = objc_stub::isEqualToString_(param_3,&cf_app_crashed_reason);
  uVar3 = lVar1 << (IVar2 & 0x3f);
  IVar2 = objc_stub::length(param_1);
  if (uVar3 <= IVar2) {
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/EventObject/SAPropertyValidator.m"
               ,"-[NSString(SAProperty) sensorsdata_propertyValueWithKey:error:]",0x2c,0,
               &cf____slengthislongerthan_ld,param_1,uVar3);
    IVar2 = objc_stub::substringToIndex_(param_1,uVar3 - 1);
    IVar2 = NSMutableString::stringWithString_((ID)&_OBJC_CLASS___NSMutableString,IVar2);
    NSMutableString::appendString_(IVar2,&cf__);
    param_1 = NSMutableString::copy(IVar2);
  }
  return param_1;
}

