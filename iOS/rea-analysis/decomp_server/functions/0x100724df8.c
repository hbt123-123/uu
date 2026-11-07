// rea decompile_all
// name: SensorsAnalyticsSDK::append:by:
// address: 0x100724df8
// body: available
// range: 0x100724df8-0x100725023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100725020 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SensorsAnalyticsSDK::append_by_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  ID local_68;
  ID IStack_60;
  ID local_58;
  ID IStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((param_3 == 0) || (param_4 == 0)) {
    pcVar5 = &cf_contentandprofilecannotbeempty_pleasecheckthevalue;
    uVar4 = 0x3df;
LAB_100724f48:
    objc_stub::log_level_file_function_line_context_format_
              ((ID)&objc::class_t::SALog,1,2,
               "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/SensorsAnalyticsSDK.m"
               ,"-[SensorsAnalyticsSDK append:by:]",uVar4,0,pcVar5);
  }
  else {
    puVar1 = &_OBJC_CLASS___NSArray;
    _objc_opt_class(&_OBJC_CLASS___NSArray);
    IVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((IVar3 & 1) == 0) {
      puVar1 = &_OBJC_CLASS___NSSet;
      _objc_opt_class(&_OBJC_CLASS___NSSet);
      IVar3 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if ((IVar3 & 1) == 0) {
        _objc_opt_class();
        pcVar5 = &cf_contentvaluesshouldbeNSArrayorNSSetclass_butcurrentvalue____withinvalidtype___;
        uVar4 = 0x3e3;
        goto LAB_100724f48;
      }
    }
    self = &objc::class_t::SAProfileAppendEventObject;
    _objc_alloc();
    IVar2 = objc_stub::initWithType_((ID)self,&cf_profile_append);
    puVar1 = &_OBJC_CLASS___NSArray;
    _objc_opt_class(&_OBJC_CLASS___NSArray);
    IVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((IVar3 & 1) == 0) {
      local_68 = param_3;
      IStack_60 = param_4;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&IStack_60,&local_68,1);
      trackEventObject_properties_(param_1,IVar2,IVar3);
    }
    else {
      IStack_50 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,param_4);
      local_58 = param_3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&IStack_50,&local_58,1);
      trackEventObject_properties_(param_1,IVar2,IVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

