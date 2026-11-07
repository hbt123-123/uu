// rea decompile_all
// name: SensorsAnalyticsSDK::setServerUrl:isRequestRemoteConfig:
// address: 0x100721d10
// body: available
// range: 0x100721d10-0x100721e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void SensorsAnalyticsSDK::setServerUrl_isRequestRemoteConfig_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  undefined1 local_38;
  
  if (param_3 != 0) {
    puVar1 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    IVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((IVar2 & 1) == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
                 ,"-[SensorsAnalyticsSDK setServerUrl:isRequestRemoteConfig:]",0x1b3,0,
                 &cf___serverUrlmustbeNSString_pleasecheckthevalue_,param_1);
      return;
    }
  }
  IVar2 = serialQueue(param_1);
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_100721e20;
  puStack_50 = &DAT_1009e7e98;
  local_38 = (undefined1)param_4;
  local_48 = param_1;
  local_40 = param_3;
  _dispatch_async(IVar2,&local_68);
  return;
}

