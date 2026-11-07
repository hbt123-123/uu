// rea decompile_all
// name: SAJavaScriptBridgeManager::userContentController:didReceiveScriptMessage:
// address: 0x10071cc18
// body: available
// range: 0x10071cc18-0x10071cfc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071cf7c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAJavaScriptBridgeManager::userContentController_didReceiveScriptMessage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::name(param_4);
  IVar1 = objc_stub::isEqualToString_(IVar1,&cf_sensorsdataNativeTracker);
  if ((int)IVar1 != 0) {
    uVar2 = objc_stub::body(param_4);
    puVar3 = &_OBJC_CLASS___NSString;
    _objc_opt_class(&_OBJC_CLASS___NSString);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar2 & 1) == 0) {
      objc_stub::log_level_file_function_line_context_format_
                ((ID)&objc::class_t::SALog,1,1,
                 "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
                 ,"-[SAJavaScriptBridgeManager userContentController:didReceiveScriptMessage:]",0x9c
                 ,0,&cf_Messagebodyisnotkindof_NSString_fromJSSDK);
    }
    else {
      IVar1 = objc_stub::body(param_4);
      IVar1 = objc_stub::dataUsingEncoding_(IVar1,4);
      if (IVar1 == 0) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
                   ,"-[SAJavaScriptBridgeManager userContentController:didReceiveScriptMessage:]",
                   0xa4,0,&cf_MessagebodyisinvalidfromJSSDK);
      }
      else {
        IVar4 = SAJSONUtil::JSONObjectWithData_((ID)&objc::class_t::SAJSONUtil,IVar1);
        puVar3 = &_OBJC_CLASS___NSDictionary;
        _objc_opt_class(&_OBJC_CLASS___NSDictionary);
        IVar1 = IVar4;
        _objc_opt_isKindOfClass(IVar4,puVar3);
        if ((IVar1 & 1) == 0) {
          objc_stub::log_level_file_function_line_context_format_
                    ((ID)&objc::class_t::SALog,1,1,
                     "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
                     ,"-[SAJavaScriptBridgeManager userContentController:didReceiveScriptMessage:]",
                     0xaa,0,&cf_MessagebodyisformattedfailurefromJSSDK);
        }
        else {
          IVar1 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_callType);
          IVar5 = objc_stub::isEqualToString_(IVar1,&cf_app_h5_track);
          if ((int)IVar5 == 0) {
            IVar4 = objc_stub::isEqualToString_(IVar1,&cf_visualized_track);
            if ((((IVar4 & 1) == 0) &&
                (IVar4 = objc_stub::isEqualToString_(IVar1,&cf_app_alert), (IVar4 & 1) == 0)) &&
               (IVar4 = objc_stub::isEqualToString_(IVar1,&cf_page_info), (int)IVar4 == 0)) {
              IVar1 = objc_stub::isEqualToString_(IVar1,&cf_abtest);
              if ((int)IVar1 != 0) {
                IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter)
                ;
                NSNotificationCenter::postNotificationName_object_
                          (IVar1,&cf_SensorsAnalyticsMessageFromH5Notification,param_4);
              }
            }
            else {
              IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
              NSNotificationCenter::postNotificationName_object_
                        (IVar1,&cf_SensorsAnalyticsVisualizedMessageFromH5Notification,param_4);
            }
          }
          else {
            IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,&cf_data);
            puVar3 = &_OBJC_CLASS___NSDictionary;
            _objc_opt_class(&_OBJC_CLASS___NSDictionary);
            IVar1 = IVar4;
            _objc_opt_isKindOfClass(IVar4,puVar3);
            if ((IVar1 & 1) == 0) {
              objc_stub::log_level_file_function_line_context_format_
                        ((ID)&objc::class_t::SALog,1,1,
                         "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/JSBridge/SAJavaScriptBridgeManager.m"
                         ,
                         "-[SAJavaScriptBridgeManager userContentController:didReceiveScriptMessage:]"
                         ,0xb3,0,&cf_Dataofmessagebodyisnotkindof_NSDictionary_fromJSSDK);
            }
            else {
              IVar1 = SAJSONUtil::stringWithJSONObject_((ID)&objc::class_t::SAJSONUtil,IVar4);
              IVar4 = SensorsAnalyticsSDK::sharedInstance((ID)&objc::class_t::SensorsAnalyticsSDK);
              SensorsAnalyticsSDK::trackFromH5WithEvent_(IVar4,IVar1);
            }
          }
        }
      }
    }
  }
  return;
}

