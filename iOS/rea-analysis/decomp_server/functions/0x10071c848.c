// rea decompile_all
// name: SAJavaScriptBridgeManager::addScriptMessageHandlerWithWebView:
// address: 0x10071c848
// body: available
// range: 0x10071c848-0x10071ca9f inclusive
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

void SAJavaScriptBridgeManager::addScriptMessageHandlerWithWebView_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  puVar1 = &_OBJC_CLASS___WKWebView;
  _objc_opt_class(&_OBJC_CLASS___WKWebView);
  IVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((IVar2 & 1) != 0) {
    IVar2 = objc_stub::configuration(param_3);
    IVar2 = objc_stub::userContentController(IVar2);
    objc_stub::removeScriptMessageHandlerForName_(IVar2,&cf_sensorsdataNativeTracker);
    IVar3 = objc_stub::defaultManager((ID)&objc::class_t::SAJavaScriptBridgeManager);
    objc_stub::addScriptMessageHandler_name_(IVar2,IVar3,&cf_sensorsdataNativeTracker);
    IVar3 = ::SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
    IVar3 = objc_stub::javaScriptSource(IVar3);
    IVar4 = objc_stub::length(IVar3);
    if (IVar4 != 0) {
      IVar4 = objc_stub::userScripts(IVar2);
      local_78 = &local_70;
      local_70 = 0;
      local_60 = 0x2020000000;
      local_58 = 0;
      local_98 = PTR___NSConcreteStackBlock_100995490;
      local_90 = 0xc2000000;
      local_88 = FUN_10071cb44;
      puStack_80 = &DAT_1009e7da0;
      local_68 = local_78;
      objc_stub::enumerateObjectsUsingBlock_(IVar4,&local_98);
      if ((*(byte *)(local_68 + 3) & 1) == 0) {
        puVar1 = &_OBJC_CLASS___WKUserScript;
        _objc_alloc();
        IVar4 = NSString::stringWithString_((ID)&_OBJC_CLASS___NSString,IVar3);
        IVar4 = objc_stub::initWithSource_injectionTime_forMainFrameOnly_((ID)puVar1,IVar4,0,0);
        objc_stub::addUserScript_(IVar2,IVar4);
        IVar2 = objc_stub::containsString_
                          (IVar3,&cf_window_SensorsData_iOS_JS_Bridge_sensorsdata_app_server_url);
        if ((int)IVar2 != 0) {
          IVar2 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
          NSNotificationCenter::postNotificationName_object_
                    (IVar2,&cf_SensorsAnalyticsRegisterJavaScriptBridgeNotification,param_3);
        }
      }
      __Block_object_dispose(&local_70,8);
    }
  }
  return;
}

