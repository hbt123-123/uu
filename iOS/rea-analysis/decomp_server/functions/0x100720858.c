// rea decompile_all
// name: SensorsAnalyticsSDK::disableSDK
// address: 0x100720858
// body: available
// range: 0x100720858-0x1007209e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007209e0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SensorsAnalyticsSDK::disableSDK(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  
  IVar1 = sdkInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
  IVar2 = configOptions(IVar1);
  uVar3 = disableSDK(IVar2);
  if ((uVar3 & 1) == 0) {
    track_(IVar1,0x1009f0d30);
    flush(IVar1);
    clearTrackTimer(IVar1);
    stopFlushTimer(IVar1);
    removeObservers(IVar1);
    removeWebViewUserAgent(IVar1);
    IVar2 = SAReachability::sharedInstance((ID)&objc::class_t::SAReachability);
    SAReachability::stopMonitoring(IVar2);
    IVar2 = ::SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
    ::SAModuleManager::disableAllModules(IVar2);
    IVar1 = configOptions(IVar1);
    objc_stub::setDisableSDK_(IVar1,1);
    IVar1 = SAEventTrackerPluginManager::defaultManager
                      ((ID)&objc::class_t::SAEventTrackerPluginManager);
    SAEventTrackerPluginManager::disableAllPlugins(IVar1);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
               ,"+[SensorsAnalyticsSDK disableSDK]",0xa0,0,&cf_SensorsAnalyticsSDKdisabled);
    IVar1 = SALog::sharedLog((ID)&objc::class_t::SALog);
    SALog::setEnableLog_(IVar1,0);
  }
  return;
}

