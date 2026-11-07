// rea decompile_all
// name: SensorsAnalyticsSDK::checkEventName:
// address: 0x1007233ac
// body: available
// range: 0x1007233ac-0x10072348f inclusive
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

bool SensorsAnalyticsSDK::checkEventName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  ID local_38;
  
  local_38 = 0;
  SAValidator::validKey_error_((ID)&objc::class_t::SAValidator,param_3,&local_38);
  IVar2 = local_38;
  if (local_38 == 0) {
    bVar3 = 1;
  }
  else {
    IVar1 = objc_stub::localizedDescription(local_38);
    bVar3 = 1;
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,1,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
               ,"-[SensorsAnalyticsSDK checkEventName:]",0x2d3,0,&cf___,IVar1);
    IVar1 = objc_stub::code(IVar2);
    if (IVar1 != 0x4e25) {
      IVar2 = objc_stub::code(IVar2);
      bVar3 = (bool)(IVar2 == 0x4e26);
    }
  }
  return bVar3;
}

