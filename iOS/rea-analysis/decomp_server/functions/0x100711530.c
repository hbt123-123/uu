// rea decompile_all
// name: SABaseEventObject::initWithH5Event:
// address: 0x100711530
// body: available
// range: 0x100711530-0x100711b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100711b20 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SABaseEventObject::initWithH5Event_(ID param_1,SEL param_2,ID param_3)

{
  u_int32_t uVar1;
  ID IVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  class_t *self;
  ID IVar5;
  undefined4 extraout_var;
  ulong uVar6;
  undefined *puVar7;
  ID self_00;
  ID self_01;
  double extraout_d0;
  double extraout_d0_00;
  ID local_b8;
  class_t *pcStack_b0;
  cfstringStruct *local_a8;
  cfstringStruct *pcStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *pcStack_90;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcStack_b0 = &objc::class_t::SABaseEventObject;
  local_b8 = param_1;
  IVar2 = NSObject::init((ID)&local_b8,"init");
  if (IVar2 != 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_type);
    uVar4 = eventTypeWithType_((ID)&objc::class_t::SABaseEventObject,IVar3);
    *(unsigned_long_long *)(IVar2 + 0x38) = uVar4;
    self = &objc::class_t::SAEventLibObject;
    _objc_alloc();
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_lib);
    IVar5 = objc_stub::initWithH5Lib_((ID)self,IVar5);
    *(ID *)(IVar2 + 0x40) = IVar5;
    uVar1 = _arc4random();
    IVar5 = NSNumber::numberWithUnsignedInt_
                      ((ID)&_OBJC_CLASS___NSNumber,CONCAT44(extraout_var,uVar1));
    *(ID *)(IVar2 + 0x50) = IVar5;
    IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    NSProcessInfo::systemUptime(IVar5);
    *(long *)(IVar2 + 0x70) = (long)(extraout_d0 * 1000.0);
    *(undefined2 *)(IVar2 + 8) = 0x100;
    uVar6 = objc_stub::objectForKeyedSubscript_(param_3,&cf_time);
    puVar7 = &_OBJC_CLASS___NSNumber;
    _objc_opt_class(&_OBJC_CLASS___NSNumber);
    _objc_opt_isKindOfClass(uVar6,puVar7);
    if ((uVar6 & 1) == 0) {
      IVar5 = NSDate::date((ID)&_OBJC_CLASS___NSDate);
      NSDate::timeIntervalSince1970(IVar5);
      IVar5 = (ID)(extraout_d0_00 * 1000.0);
    }
    else {
      IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_time);
      IVar5 = objc_stub::unsignedLongLongValue(IVar5);
    }
    *(ID *)(IVar2 + 0x48) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_event);
    *(ID *)(IVar2 + 0x30) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_login_id);
    *(ID *)(IVar2 + 0x18) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_anonymous_id);
    *(ID *)(IVar2 + 0x20) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_distinct_id);
    *(ID *)(IVar2 + 0x10) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_original_id);
    *(ID *)(IVar2 + 0x28) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_identities);
    *(ID *)(IVar2 + 0x78) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_properties);
    self_00 = objc_stub::mutableCopy(IVar5);
    objc_stub::removeObjectForKey_(self_00,&cf__nocache);
    IVar5 = objc_stub::objectForKeyedSubscript_(self_00,&cf_project);
    *(ID *)(IVar2 + 0x58) = IVar5;
    IVar5 = objc_stub::objectForKeyedSubscript_(self_00,&cf_token);
    *(ID *)(IVar2 + 0x60) = IVar5;
    self_01 = objc_stub::objectForKeyedSubscript_(self_00,&cf__time);
    puVar7 = &_OBJC_CLASS___NSNumber;
    _objc_opt_class(&_OBJC_CLASS___NSNumber);
    IVar5 = self_01;
    _objc_opt_isKindOfClass(self_01,puVar7);
    if ((IVar5 & 1) == 0) {
      if (self_01 != 0) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/EventObject/SABaseEventObject.m"
                   ,"-[SABaseEventObject initWithH5Event:]",0x5b,0,&cf_H,self_01);
      }
    }
    else {
      IVar5 = NSNumber::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,0x14d5562ae00);
      IVar5 = objc_stub::compare_(self_01,IVar5);
      if (IVar5 == 0xffffffffffffffff) {
        objc_stub::log_level_file_function_line_context_format_
                  ((ID)&objc::class_t::SALog,1,1,
                   "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Builder/EventObject/SABaseEventObject.m"
                   ,"-[SABaseEventObject initWithH5Event:]",0x55,0,&cf_H,self_01,IVar3);
      }
      else {
        IVar3 = objc_stub::unsignedLongLongValue(self_01);
        *(ID *)(IVar2 + 0x48) = IVar3;
      }
    }
    local_a8 = &cf__nocache;
    pcStack_a0 = &cf_server_url;
    local_98 = &cf_sensorsdata_app_visual_properties;
    pcStack_90 = &cf_project;
    local_88 = &cf_token;
    pcStack_80 = &cf__time;
    IVar3 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_a8,6);
    objc_stub::removeObjectsForKeys_(self_00,IVar3);
    *(ID *)(IVar2 + 0x68) = self_00;
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_is_instant_event);
    puVar7 = &_OBJC_CLASS___NSNumber;
    _objc_opt_class(&_OBJC_CLASS___NSNumber);
    IVar3 = IVar5;
    _objc_opt_isKindOfClass(IVar5,puVar7);
    if ((IVar3 & 1) != 0) {
      IVar3 = objc_stub::boolValue(IVar5);
      *(char *)(IVar2 + 10) = (char)IVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

