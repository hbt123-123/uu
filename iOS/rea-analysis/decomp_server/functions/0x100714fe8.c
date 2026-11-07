// rea decompile_all
// name: SAJSONUtil::JSONObjectWithString:options:
// address: 0x100714fe8
// body: available
// range: 0x100714fe8-0x100715103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100715100 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SAJSONUtil::JSONObjectWithString_options_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  bool bVar1;
  ID IVar2;
  
  bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,param_3);
  if ((bVar1 & 1) == 0) {
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAJSONUtil.m"
               ,"+[SAJSONUtil JSONObjectWithString:options:]",0x88,0,&cf_stringverifyfailure___,
               param_3);
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::dataUsingEncoding_(param_3,4);
    if (IVar2 == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAJSONUtil.m"
                 ,"+[SAJSONUtil JSONObjectWithString:options:]",0x8d,0,
                 &cf_stringdataUsingEncodingfailure___,param_3);
      IVar2 = 0;
    }
    else {
      IVar2 = JSONObjectWithData_options_(param_1,IVar2,param_4);
    }
  }
  return IVar2;
}

