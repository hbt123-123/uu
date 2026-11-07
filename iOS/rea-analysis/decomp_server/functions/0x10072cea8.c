// rea decompile_all
// name: SAConfigOptions::copyWithZone:
// address: 0x10072cea8
// body: available
// range: 0x10072cea8-0x10072d0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAConfigOptions::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  long_long lVar4;
  
  IVar2 = param_1;
  _objc_opt_class();
  IVar2 = objc_stub::allocWithZone_(IVar2,param_3);
  IVar2 = objc_stub::init(IVar2);
  IVar3 = serverURL(param_1);
  objc_stub::setServerURL_(IVar2,IVar3);
  IVar3 = launchOptions(param_1);
  objc_stub::setLaunchOptions_(IVar2,IVar3);
  bVar1 = enableJavaScriptBridge(param_1);
  objc_stub::setEnableJavaScriptBridge_(IVar2,(ulong)bVar1);
  lVar4 = flushInterval(param_1);
  objc_stub::setFlushInterval_(IVar2,lVar4);
  lVar4 = flushBulkSize(param_1);
  objc_stub::setFlushBulkSize_(IVar2,lVar4);
  lVar4 = maxCacheSize(param_1);
  objc_stub::setMaxCacheSize_(IVar2,lVar4);
  bVar1 = enableLog(param_1);
  objc_stub::setEnableLog_(IVar2,(ulong)bVar1);
  bVar1 = flushBeforeEnterBackground(param_1);
  objc_stub::setFlushBeforeEnterBackground_(IVar2,(ulong)bVar1);
  lVar4 = flushNetworkPolicy(param_1);
  objc_stub::setFlushNetworkPolicy_(IVar2,lVar4);
  bVar1 = disableSDK(param_1);
  objc_stub::setDisableSDK_(IVar2,(ulong)bVar1);
  IVar3 = storePlugins(param_1);
  objc_stub::setStorePlugins_(IVar2,IVar3);
  bVar1 = enableSession(param_1);
  objc_stub::setEnableSession_(IVar2,(ulong)bVar1);
  lVar4 = eventSessionTimeout(param_1);
  objc_stub::setEventSessionTimeout_(IVar2,lVar4);
  bVar1 = disableDeviceId(param_1);
  objc_stub::setDisableDeviceId_(IVar2,(ulong)bVar1);
  IVar3 = propertyPlugins(param_1);
  objc_stub::setPropertyPlugins_(IVar2,IVar3);
  IVar3 = instantEvents(param_1);
  objc_stub::setInstantEvents_(IVar2,IVar3);
  IVar3 = databaseFilePath(param_1);
  objc_stub::setDatabaseFilePath_(IVar2,IVar3);
  return IVar2;
}

