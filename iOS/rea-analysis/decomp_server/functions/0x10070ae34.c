// rea decompile_all
// name: SAIdentifier::isValidLoginIDKey:
// address: 0x10070ae34
// body: available
// range: 0x10070ae34-0x10070af7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SAIdentifier::isValidLoginIDKey_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  
  local_48 = 0;
  SAValidator::validKey_error_((ID)&objc::class_t::SAValidator,param_3,&local_48);
  IVar3 = local_48;
  if (local_48 != 0) {
    IVar2 = objc_stub::localizedDescription(local_48);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAIdentifier.m"
               ,"-[SAIdentifier isValidLoginIDKey:]",0xb3,0,&cf___,IVar2);
    IVar3 = objc_stub::code(IVar3);
    if (IVar3 != 0x4e26) {
      return 0;
    }
  }
  bVar1 = isDeviceIDKey_(param_1,param_3);
  if (((bVar1 & 1) == 0) && (bVar1 = isAnonymousIDKey_(param_1,param_3), bVar1 == 0)) {
    return 1;
  }
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAIdentifier.m"
             ,"-[SAIdentifier isValidLoginIDKey:]",0xb9,0,&cf_LoginIDKey____isinvalid,param_3);
  return 0;
}

