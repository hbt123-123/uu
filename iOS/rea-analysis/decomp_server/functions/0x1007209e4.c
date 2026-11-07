// rea decompile_all
// name: SensorsAnalyticsSDK::enableSDK
// address: 0x1007209e4
// body: available
// range: 0x1007209e4-0x100720b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100720b70 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::enableSDK(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = sdkInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
  IVar3 = configOptions(IVar2);
  iVar1 = disableSDK(IVar3);
  if (iVar1 != 0) {
    IVar3 = configOptions(IVar2);
    objc_stub::setDisableSDK_(IVar3,0);
    IVar3 = SAReachability::sharedInstance((ID)&objc::class_t::SAReachability);
    SAReachability::startMonitoring(IVar3);
    addRemoteConfigObservers(IVar2);
    IVar3 = configOptions(IVar2);
    IVar3 = objc_stub::enableLog(IVar3);
    if ((int)IVar3 != 0) {
      enableLog_(IVar2,1);
    }
    IVar3 = configOptions(IVar2);
    ::SAModuleManager::startWithConfigOptions_((ID)&objc::class_t::SAModuleManager,IVar3);
    addAppLifecycleObservers(IVar2);
    appendWebViewUserAgent(IVar2);
    startFlushTimer(IVar2);
    IVar2 = SAEventTrackerPluginManager::defaultManager
                      ((ID)&objc::class_t::SAEventTrackerPluginManager);
    SAEventTrackerPluginManager::enableAllPlugins(IVar2);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,4,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
               ,"+[SensorsAnalyticsSDK enableSDK]",0xbf,0,&cf_SensorsAnalyticsSDKenabled);
  }
  return;
}

