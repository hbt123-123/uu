// rea decompile_all
// name: SentryCoreDataTracker::managedObjectContext:save:originalImp:
// address: 0x1007b2a68
// body: available
// range: 0x1007b2a68-0x1007b2f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool SentryCoreDataTracker::managedObjectContext_save_originalImp_
               (ID param_1,SEL param_2,ID param_3,ID *param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::FUN_1007eace0(param_3);
  if ((IVar2 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
    return (bool)param_5;
  }
  IVar2 = objc_stub::FUN_1007eaac0(param_1,param_3);
  IVar3 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar3 = objc_stub::scope(IVar3);
  IVar3 = objc_stub::span(IVar3);
  if (IVar3 != 0) {
    IVar4 = objc_stub::FUN_1007e8480(param_1,IVar2,param_3);
    IVar3 = objc_stub::startChildWithOperation_description_(IVar3,&cf_db_sql_transaction,IVar4);
    if (IVar3 != 0) {
      objc_stub::setOrigin_(IVar3,&cf_auto_db_core_data);
      IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar4 != 0) {
        IVar4 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                          );
        IVar4 = objc_stub::lastPathComponent(IVar4);
        objc_stub::stringByDeletingPathExtension(IVar4);
        objc_stub::description(IVar3);
        objc_stub::FUN_1007eed80(IVar3);
        objc_stub::FUN_1007eee20(IVar3);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_SentryCoreDataTrackerautomaticallystartedanewspanwithdescription____operation____origin___
                  );
        IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
      }
      objc_stub::setDataValue_forKey_(IVar3,IVar2,&cf_operations);
      goto LAB_1007b2df8;
    }
  }
  IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                      );
    IVar2 = objc_stub::lastPathComponent(IVar2);
    objc_stub::stringByDeletingPathExtension(IVar2);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_managedObjectContext_save_originalImp_saveSpanisnil);
    IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
  }
  IVar3 = 0;
LAB_1007b2df8:
  (**(code **)(param_5 + 0x10))(param_5,param_4);
  if (IVar3 != 0) {
    objc_stub::FUN_1007e4ea0(param_1,IVar3,param_3);
    uVar1 = 10;
    if ((bool)param_5 != 0) {
      uVar1 = 1;
    }
    objc_stub::FUN_1007e9d60(IVar3,uVar1);
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_SentryCoreDataTrackerautomaticallyfinishedspanwithstatus___);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
  }
  return (bool)param_5;
}

