// rea decompile_all
// name: SentryFileIOTracker::spanForPath:origin:operation:size:
// address: 0x100741e30
// body: available
// range: 0x100741e30-0x10074230b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100742300 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryFileIOTracker::spanForPath_origin_operation_size_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  _objc_sync_enter();
  bVar1 = isEnabled(param_1);
  _objc_sync_exit(param_1);
  if ((bVar1 == 0) || (bVar1 = ignoreFile_(param_1,param_3), (bVar1 & 1) != 0)) {
    IVar3 = 0;
  }
  else {
    IVar3 = transactionDescriptionForFile_fileSize_(param_1,param_3,param_6);
    IVar2 = SentrySDK::currentHub((ID)&objc::class_t::SentrySDK);
    IVar2 = objc_stub::scope(IVar2);
    IVar2 = SentrySDK::span(IVar2);
    if (IVar2 == 0) {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 == 0) {
        IVar3 = 0;
      }
      else {
        IVar3 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTracker.m"
                          );
        IVar3 = NSString::lastPathComponent(IVar3);
        NSString::stringByDeletingPathExtension(IVar3);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &cf_Notransactionboundtoscope_Won_ttrackfileIOoperation_);
        IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
        IVar3 = 0;
      }
    }
    else {
      IVar3 = objc_stub::startChildWithOperation_description_(IVar2,param_5,IVar3);
      if (IVar3 == 0) {
        IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar2 != 0) {
          IVar2 = NSString::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTracker.m"
                            );
          IVar2 = NSString::lastPathComponent(IVar2);
          NSString::stringByDeletingPathExtension(IVar2);
          NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf_Notransactionboundtoscope_Won_ttrackfileIOoperation_);
          IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
        }
      }
      else {
        objc_stub::setOrigin_(IVar3,param_4);
        objc_stub::setDataValue_forKey_(IVar3,param_3,&cf_file_path);
        if (param_6 != 0) {
          IVar2 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_6);
          objc_stub::setDataValue_forKey_(IVar3,IVar2,&cf_file_size);
        }
        IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar2 != 0) {
          IVar2 = NSString::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTracker.m"
                            );
          IVar2 = NSString::lastPathComponent(IVar2);
          NSString::stringByDeletingPathExtension(IVar2);
          objc_stub::description(IVar3);
          NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf_Automaticallystartedanewspanwithdescription____operation____origin___);
          IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
        }
        mainThreadExtraInfo_(param_1,IVar3);
      }
    }
  }
  return IVar3;
}

