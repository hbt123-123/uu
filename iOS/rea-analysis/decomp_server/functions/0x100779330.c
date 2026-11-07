// rea decompile_all
// name: SentryHttpTransport::sendAllCachedEnvelopes
// address: 0x100779330
// body: available
// range: 0x100779330-0x100779cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007796d0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpTransport::sendAllCachedEnvelopes(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long local_68;
  
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_sendAllCachedEnvelopesstart_);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
  }
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_1007ed460(param_1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007f08a0(param_1);
    IVar1 = objc_stub::FUN_1007ed380(IVar1);
    if ((IVar1 & 1) != 0) {
      objc_stub::FUN_1007f3740(param_1,1);
      _objc_sync_exit(param_1);
      IVar1 = objc_stub::notStoredEnvelopes(param_1);
      _objc_sync_enter();
      IVar2 = objc_stub::notStoredEnvelopes(param_1);
      IVar2 = objc_stub::count(IVar2);
      if (IVar2 == 0) {
        IVar2 = 0;
      }
      else {
        IVar2 = objc_stub::notStoredEnvelopes(param_1);
        IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,0);
        IVar3 = objc_stub::notStoredEnvelopes(param_1);
        objc_stub::removeObjectAtIndex_(IVar3,0);
      }
      _objc_sync_exit(IVar1);
      if (IVar2 == 0) {
        IVar1 = objc_stub::fileManager(param_1);
        IVar1 = objc_stub::FUN_1007ea840(IVar1);
        if (IVar1 == 0) {
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 != 0) {
            IVar1 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                              );
            IVar1 = objc_stub::lastPathComponent(IVar1);
            objc_stub::stringByDeletingPathExtension(IVar1);
            objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Noenvelopeslefttosend_);
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          }
          objc_stub::finishedSending(param_1);
          return;
        }
        IVar3 = objc_stub::path(IVar1);
        IVar1 = objc_stub::FUN_1007e70a0(IVar1);
        IVar2 = objc_stub::FUN_1007e92c0((ID)&objc::class_t::SentrySerialization,IVar1);
        if (IVar2 == 0) {
          IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar1 != 0) {
            IVar1 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                              );
            IVar1 = objc_stub::lastPathComponent(IVar1);
            objc_stub::stringByDeletingPathExtension(IVar1);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Envelopecontainednodeserializabledata_);
            IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          }
          objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar3);
          return;
        }
      }
      else {
        IVar3 = 0;
      }
      IVar1 = objc_stub::FUN_1007e92a0(param_1);
      IVar1 = objc_stub::FUN_1007f0620(IVar1,IVar2);
      IVar2 = objc_stub::items(IVar1);
      IVar2 = objc_stub::count(IVar2);
      if (IVar2 == 0) {
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 != 0) {
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,&cf_Envelopehadnorate_limiteditems_nothingtosend_);
          IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        }
        objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar3);
      }
      else {
        IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
        IVar2 = objc_stub::dateProvider(IVar2);
        IVar2 = objc_stub::date(IVar2);
        IVar4 = objc_stub::header(IVar1);
        objc_stub::setSentAt_(IVar4,IVar2);
        IVar2 = objc_stub::FUN_1007f0880(param_1);
        IVar4 = objc_stub::options(param_1);
        IVar4 = objc_stub::parsedDsn(IVar4);
        local_68 = 0;
        IVar2 = objc_stub::FUN_1007e7680(IVar2,IVar1,IVar4,&local_68);
        if ((IVar2 == 0) || (local_68 != 0)) {
          if ((local_68 != 0) &&
             (IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1),
             (int)IVar2 != 0)) {
            IVar2 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                              );
            IVar2 = objc_stub::lastPathComponent(IVar2);
            objc_stub::stringByDeletingPathExtension(IVar2);
            objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Failedtobuildrequest____);
            IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
          }
          IVar1 = objc_stub::items(IVar1);
          objc_stub::recordLostEventFor_(param_1,IVar1);
          objc_stub::deleteEnvelopeAndSendNext_(param_1,IVar3);
        }
        else {
          objc_stub::FUN_1007f1120(param_1,IVar1,IVar3,IVar2);
        }
      }
      return;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Requestmanagernotready_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHttpTransport.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Alreadysending_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
  }
  _objc_sync_exit(param_1);
  return;
}

