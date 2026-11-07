// rea decompile_all
// name: SentryCoreDataTracker::managedObjectContext:executeFetchRequest:error:originalImp:
// address: 0x1007b2634
// body: available
// range: 0x1007b2634-0x1007b2a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b2a64 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryCoreDataTracker::managedObjectContext_executeFetchRequest_error_originalImp_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5,ID param_6,undefined4 param_7
             )

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  
  IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar2 = objc_stub::scope(IVar2);
  IVar2 = objc_stub::span(IVar2);
  if (IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    IVar3 = objc_stub::FUN_1007e84a0(param_1,param_4);
    IVar2 = objc_stub::startChildWithOperation_description_(IVar2,&cf_db_sql_query,IVar3);
    if (IVar2 != 0) {
      objc_stub::setOrigin_(IVar2,&cf_auto_db_core_data);
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 != 0) {
        IVar3 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryCoreDataTracker.m"
                          );
        IVar3 = objc_stub::lastPathComponent(IVar3);
        objc_stub::stringByDeletingPathExtension(IVar3);
        objc_stub::description(IVar2);
        objc_stub::FUN_1007eed80(IVar2);
        objc_stub::FUN_1007eee20(IVar2);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_SentryCoreDataTrackerautomaticallystartedanewspanwithdescription____operation____origin___
                  );
        IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      }
      bVar4 = false;
      goto LAB_1007b2890;
    }
  }
  bVar4 = true;
LAB_1007b2890:
  (**(code **)(param_6 + 0x10))(param_6,param_4,param_5);
  if (!bVar4) {
    objc_stub::FUN_1007e4ea0(param_1,IVar2,param_3);
    IVar3 = objc_stub::count(param_6);
    IVar3 = objc_stub::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar3);
    objc_stub::setDataValue_forKey_(IVar2,IVar3,&cf_read_count);
    uVar1 = 10;
    if (param_6 != 0) {
      uVar1 = 1;
    }
    objc_stub::FUN_1007e9d60(IVar2,uVar1);
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
  return param_6;
}

