// rea decompile_all
// name: SAIdentifier::isValidForUnbind:value:
// address: 0x10070c37c
// body: available
// range: 0x10070c37c-0x10070c487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SAIdentifier::isValidForUnbind_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  puVar2 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((IVar3 & 1) == 0) {
    pcVar5 = &cf_Key____mustbestring;
    uVar4 = 0x1e5;
  }
  else {
    IVar3 = objc_stub::length(param_3);
    if (IVar3 != 0) {
      bVar1 = isValidIdentity_value_(param_1,param_3,param_4);
      return bVar1;
    }
    pcVar5 = &cf_Keyisempty;
    uVar4 = 0x1e9;
  }
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAIdentifier.m"
             ,"-[SAIdentifier isValidForUnbind:value:]",uVar4,0,pcVar5);
  return 0;
}

