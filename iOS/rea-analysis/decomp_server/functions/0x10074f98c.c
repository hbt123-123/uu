// rea decompile_all
// name: FUN_10074f98c
// address: 0x10074f98c
// body: available
// range: 0x10074f98c-0x10075029f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100750298 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10075029c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10074f98c(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5,
                ID param_6,ID param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  class_t *self;
  long lVar8;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  ID local_190;
  undefined8 uStack_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *pcStack_160;
  undefined8 local_158;
  ID local_150;
  ID local_148;
  cfstringStruct *pcStack_140;
  ID local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  cfstringStruct *local_100;
  ID IStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profile);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_samples);
  IVar1 = objc_stub::count(IVar2);
  if (IVar1 < 2) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Notenoughsamplesinprofile);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    IVar1 = objc_stub::getClient(param_7);
    objc_stub::recordLostEvent_reason_(IVar1,7,1);
    IVar1 = 0;
  }
  else {
    FUN_1007657fc(IVar2,param_2,param_3);
    IVar1 = objc_stub::count(IVar2);
    if (IVar1 < 2) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.mm"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Notenoughsamplesinprofileduringthetransaction);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      IVar1 = objc_stub::getClient(param_7);
      objc_stub::recordLostEvent_reason_(IVar1,7,1);
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar3 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profile);
      IVar3 = objc_stub::mutableCopy(IVar3);
      IVar4 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
      local_1b0 = PTR___NSConcreteStackBlock_100995490;
      local_1a8 = 0xc2000000;
      local_1a0 = FUN_100751c38;
      puStack_198 = &DAT_1009e8bc0;
      local_190 = IVar4;
      uStack_188 = param_2;
      objc_stub::enumerateObjectsUsingBlock_(IVar2,&local_1b0);
      objc_stub::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_samples);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_profile);
      objc_stub::setObject_forKeyedSubscript_(IVar1,&cf_1,&cf_version);
      IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableArray);
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = (long *)0x0;
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_6,&local_1f0,auStack_f0,0x10);
      if (IVar3 != 0) {
        lVar8 = *local_1e0;
        do {
          IVar4 = 0;
          do {
            if (*local_1e0 != lVar8) {
              _objc_enumerationMutation(param_6);
            }
            IVar5 = objc_stub::serialize(*(ID *)(lStack_1e8 + IVar4 * 8));
            objc_stub::addObject_(IVar2,IVar5);
            IVar4 = IVar4 + 1;
          } while (IVar3 != IVar4);
          IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_6,&local_1f0,auStack_f0,0x10);
        } while (IVar3 != 0);
      }
      IVar3 = objc_stub::count(IVar2);
      if (IVar3 != 0) {
        local_100 = &cf_images;
        IStack_f8 = IVar2;
        IVar2 = objc_stub::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,&IStack_f8,&local_100,1);
        objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_debug_meta);
      }
      uVar6 = 0;
      local_130 = &cf_name;
      FUN_100776440();
      local_128 = &cf_version;
      local_118 = uVar6;
      FUN_10077644c();
      local_120 = &cf_build_number;
      local_110 = uVar6;
      FUN_100776bac();
      local_108 = uVar6;
      IVar2 = objc_stub::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_118,&local_130,3);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_os);
      uVar7 = 0;
      FUN_100776dc4();
      local_180 = &cf_architecture;
      uVar6 = uVar7;
      FUN_100775efc();
      local_178 = &cf_is_emulator;
      local_158 = uVar6;
      local_150 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,uVar7);
      local_170 = &cf_locale;
      IVar2 = objc_stub::currentLocale((ID)&_OBJC_CLASS___NSLocale);
      IVar2 = objc_stub::FUN_1007edc00(IVar2);
      pcStack_140 = &cf_Apple;
      local_168 = &cf_manufacturer;
      pcStack_160 = &cf_model;
      local_148 = IVar2;
      if ((int)uVar7 == 0) {
        FUN_1007764e8();
      }
      else {
        FUN_100776b14();
      }
      local_138 = IVar2;
      IVar2 = objc_stub::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,&local_158,&local_180,5);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_device);
      self = &objc::class_t::_TtC6Sentry8SentryId;
      _objc_alloc();
      IVar2 = objc_stub::init((ID)self);
      IVar2 = objc_stub::sentryIdString(IVar2);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_profile_id);
      objc_stub::setObject_forKeyedSubscript_(IVar1,param_4,&cf_truncation_reason);
      IVar2 = objc_stub::scope(param_7);
      IVar2 = objc_stub::FUN_1007e9320(IVar2);
      if (IVar2 == 0) {
        IVar2 = objc_stub::getClient(param_7);
        IVar2 = objc_stub::options(IVar2);
        IVar2 = objc_stub::environment(IVar2);
      }
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_environment);
      IVar2 = objc_stub::getClient(param_7);
      IVar2 = objc_stub::options(IVar2);
      IVar2 = objc_stub::releaseName(IVar2);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_release);
      IVar2 = objc_stub::count(param_5);
      if (IVar2 != 0) {
        objc_stub::setObject_forKeyedSubscript_(IVar1,param_5,&cf_measurements);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

