// rea decompile_all
// name: SAPropertyInterceptor::processWithInput:completion:
// address: 0x1007280ac
// body: available
// range: 0x1007280ac-0x10072879b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100728798 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAPropertyInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  undefined **ppuVar1;
  ID IVar2;
  ulong uVar3;
  class_t *pcVar4;
  ID IVar5;
  ID self;
  ID IVar6;
  ID self_00;
  undefined *puVar7;
  undefined8 uVar8;
  double extraout_d0;
  cfstringStruct *pcVar9;
  class_t *local_88;
  cfstringStruct *local_80;
  cfstringStruct *pcStack_78;
  cfstringStruct *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar2 = objc_stub::eventObject(param_3,param_3,param_4,(ulong)param_5);
  if (IVar2 == 0) {
LAB_100728154:
    objc_stub::setState_(param_3,2);
    objc_stub::setMessage_
              (param_3,&cf_Amemoryproblemhasoccurred_eventObjectmaybefreed_Endthetrackflow);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
  }
  else {
    uVar3 = objc_stub::eventObject(param_3);
    pcVar4 = &objc::class_t::SABaseEventObject;
    _objc_opt_class(&objc::class_t::SABaseEventObject);
    _objc_opt_isKindOfClass(uVar3,pcVar4);
    if ((uVar3 & 1) == 0) goto LAB_100728154;
  }
  pcVar4 = &objc::class_t::SACustomPropertyPlugin;
  _objc_alloc();
  IVar2 = objc_stub::properties(param_3);
  IVar5 = objc_stub::initWithCustomProperties_((ID)pcVar4,IVar2);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  SAPropertyPluginManager::registerCustomPropertyPlugin_(IVar2,IVar5);
  self = objc_stub::eventObject(param_3);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  IVar2 = SAPropertyPluginManager::propertiesWithFilter_(IVar2,self);
  IVar6 = SAPropertyValidator::validProperties_((ID)&objc::class_t::SAPropertyValidator,IVar2);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar6,&cf__project);
  objc_stub::setProject_(self,IVar2);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar6,&cf__token);
  objc_stub::setToken_(self,IVar2);
  self_00 = objc_stub::objectForKeyedSubscript_(IVar6,&cf__time);
  puVar7 = &_OBJC_CLASS___NSDate;
  _objc_opt_class(&_OBJC_CLASS___NSDate);
  IVar2 = self_00;
  _objc_opt_isKindOfClass(self_00,puVar7);
  if ((IVar2 & 1) == 0) {
    if (self_00 == 0) goto LAB_1007283a0;
    pcVar9 = &cf__time____invalid_Pleasecheckthevalue;
    uVar8 = 0x48;
  }
  else {
    objc_stub::timeIntervalSince1970(self_00);
    self_00 = (ID)(extraout_d0 * 1000.0);
    if (0x14d5562adff < (long)self_00) {
      objc_stub::setTime_(self);
      goto LAB_1007283a0;
    }
    pcVar9 = &cf__timeerror_lld_Pleasecheckthevalue;
    uVar8 = 0x45;
  }
  objc_stub::log_level_file_function_line_context_format_
            ((ID)&objc::class_t::SALog,1,1,
             "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Interceptor/EventBuild/SAPropertyInterceptor.m"
             ,"-[SAPropertyInterceptor processWithInput:completion:]",uVar8,0,pcVar9,self_00);
LAB_1007283a0:
  local_80 = &cf__project;
  pcStack_78 = &cf__token;
  local_70 = &cf__time;
  NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_80,3);
  objc_stub::removeObjectsForKeys_(IVar6);
  IVar2 = objc_stub::configOptions(param_3);
  IVar2 = objc_stub::disableDeviceId(IVar2);
  ppuVar1 = &PTR_cf__device_id_1009e8080;
  if ((int)IVar2 == 0) {
    ppuVar1 = &PTR_cf__anonymization_id_1009e8078;
  }
  objc_stub::removeObjectForKey_(IVar6,*ppuVar1);
  IVar2 = objc_stub::properties(self);
  IVar2 = NSMutableDictionary::dictionaryWithDictionary_
                    ((ID)&_OBJC_CLASS___NSMutableDictionary,IVar2);
  IVar6 = objc_stub::copy(IVar6);
  NSMutableDictionary::addEntriesFromDictionary_(IVar2,IVar6);
  objc_stub::setProperties_(self,IVar2);
  IVar2 = SAPropertyPluginManager::sharedInstance((ID)&objc::class_t::SAPropertyPluginManager);
  pcVar4 = &objc::class_t::SASuperPropertyPlugin;
  _objc_opt_class();
  local_88 = pcVar4;
  IVar6 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_88,1);
  IVar2 = SAPropertyPluginManager::currentPropertiesForPluginClasses_(IVar2,IVar6);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf__app_version);
  if (IVar2 != 0) {
    IVar6 = objc_stub::lib(self);
    objc_stub::setAppVersion_(IVar6,IVar2);
  }
  IVar2 = objc_stub::event(self);
  IVar2 = objc_stub::isEqualToString_(IVar2,&cf__AppClick);
  IVar6 = objc_stub::event(self);
  IVar6 = objc_stub::isEqualToString_(IVar6,&cf__AppViewScreen);
  IVar5 = objc_stub::properties(IVar5);
  if (((IVar2 & 1) != 0) || ((int)IVar6 != 0)) {
    objc_stub::objectForKeyedSubscript_(IVar5,&cf__screen_name);
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
    IVar5 = objc_stub::lib(self);
    objc_stub::setDetail_(IVar5,IVar2);
  }
  IVar2 = objc_stub::properties(param_3);
  IVar5 = objc_stub::objectForKeyedSubscript_(IVar2,&cf__lib_method);
  puVar7 = &_OBJC_CLASS___NSString;
  _objc_opt_class(&_OBJC_CLASS___NSString);
  IVar2 = IVar5;
  _objc_opt_isKindOfClass(IVar5,puVar7);
  if (((IVar2 & 1) != 0) &&
     (IVar2 = objc_stub::isEqualToString_(IVar5,&cf_autoTrack), (int)IVar2 != 0)) {
    IVar2 = objc_stub::lib(self);
    objc_stub::setMethod_(IVar2,&cf_autoTrack);
  }
  objc_stub::setProperties_(param_3,0);
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

