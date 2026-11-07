// rea decompile_all
// name: SAEventResultInterceptor::processWithInput:completion:
// address: 0x100733488
// body: available
// range: 0x100733488-0x1007336fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007336f8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAEventResultInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  
  IVar1 = objc_stub::eventObject(param_3,param_3,param_4,(ulong)param_5);
  IVar2 = objc_stub::jsonObject(IVar1);
  IVar1 = objc_stub::eventObject(param_3);
  IVar1 = objc_stub::hybridH5(IVar1);
  IVar3 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if ((int)IVar1 == 0) {
    NSNotificationCenter::postNotificationName_object_userInfo_
              (IVar3,&cf_SensorsAnalyticsTrackEventNotification,0,IVar2);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,8,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/EventBuild/SAEventResultInterceptor.m"
               ,"-[SAEventResultInterceptor processWithInput:completion:]",0x3c,0,&cf_newline_s_,
               IVar2);
  }
  else {
    NSNotificationCenter::postNotificationName_object_userInfo_
              (IVar3,&cf_SensorsAnalyticsTrackEventFromH5Notification,0,IVar2);
    IVar1 = objc_stub::eventObject(param_3);
    IVar1 = objc_stub::properties(IVar1);
    objc_stub::removeObjectForKey_(IVar1,&cf_sensorsdata_web_visual_eventName);
    IVar1 = objc_stub::eventObject(param_3);
    IVar2 = objc_stub::jsonObject(IVar1);
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,8,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/EventBuild/SAEventResultInterceptor.m"
               ,"-[SAEventResultInterceptor processWithInput:completion:]",0x37,0,&cf_newline_s_,
               IVar2);
  }
  self = &objc::class_t::SAEventRecord;
  _objc_alloc();
  IVar1 = objc_stub::initWithEvent_type_((ID)self,IVar2,&cf_POST);
  IVar3 = objc_stub::eventObject(param_3);
  IVar3 = objc_stub::isInstantEvent(IVar3);
  objc_stub::setIsInstantEvent_(IVar1,IVar3);
  objc_stub::setRecord_(param_3,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  return;
}

