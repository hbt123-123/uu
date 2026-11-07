// rea decompile_all
// name: SAIdentifier::identify:
// address: 0x10070a950
// body: available
// range: 0x10070a950-0x10070aac7 inclusive
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

bool SAIdentifier::identify_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  puVar1 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((IVar2 & 1) == 0) {
    pcVar4 = &cf_AnonymousIdmustbestring;
    uVar3 = 0x6e;
  }
  else {
    IVar2 = objc_stub::length(param_3);
    if (IVar2 != 0) {
      IVar2 = objc_stub::length(param_3);
      if (DAT_100aba5e0 < IVar2) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,2,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAIdentifier.m"
                   ,"-[SAIdentifier identify:]",0x77,0,&cf_AnonymousId____slengthislongerthan_ld,
                   param_3,DAT_100aba5e0);
      }
      IVar2 = anonymousId(param_1);
      IVar2 = objc_stub::isEqualToString_(param_3,IVar2);
      if ((IVar2 & 1) != 0) {
        return 0;
      }
      updateAnonymousId_(param_1,param_3);
      return 1;
    }
    pcVar4 = &cf_AnonymousIdisempty;
    uVar3 = 0x72;
  }
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/SAIdentifier.m"
             ,"-[SAIdentifier identify:]",uVar3,0,pcVar4);
  return 0;
}

