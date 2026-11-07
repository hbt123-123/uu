// rea decompile_all
// name: SentryEnvelopeItem::initWithAttachment:maxAttachmentSize:
// address: 0x1007724e4
// body: available
// range: 0x1007724e4-0x100772b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryEnvelopeItem::initWithAttachment_maxAttachmentSize_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_68;
  
  IVar1 = objc_stub::data(param_3);
  if (IVar1 == 0) {
    IVar1 = objc_stub::path(param_3);
    if (IVar1 == 0) goto LAB_100772a50;
    IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    IVar2 = objc_stub::path(param_3);
    local_68 = 0;
    IVar2 = objc_stub::attributesOfItemAtPath_error_(IVar1,IVar2,&local_68);
    IVar1 = local_68;
    if (local_68 != 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 == 0) {
        return 0;
      }
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::path(param_3);
      objc_stub::localizedDescription(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Couldn_tcheckfilesizeofattachmentwithpath____Error___);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      return 0;
    }
    IVar1 = objc_stub::FUN_1007e9a80(IVar2);
    if (param_4 < IVar1) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 == 0) {
        return 0;
      }
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::path(param_3);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_Droppingattachment_becausethesizeoftheitlocatedat____with_llubytesisbiggerthanthemaximumallowedattachmentsizeof_lubytes_
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      return 0;
    }
    IVar1 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    IVar2 = objc_stub::path(param_3);
    IVar1 = objc_stub::FUN_1007e70c0(IVar1,IVar2);
  }
  else {
    IVar1 = objc_stub::data(param_3);
    IVar1 = objc_stub::length(IVar1);
    if (param_4 < IVar1) {
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 == 0) {
        return 0;
      }
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::FUN_1007e9ae0(param_3);
      IVar1 = objc_stub::data(param_3);
      objc_stub::length(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_Droppingattachmentwithfilename_____becausethesizeofthepasseddatawith_lubytesisbiggerthanthemaximumallowedattachmentsizeof_lubytes_
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      return 0;
    }
    IVar1 = objc_stub::data(param_3);
  }
  if (IVar1 != 0) {
    self = &objc::class_t::SentryEnvelopeAttachmentHeader;
    _objc_alloc();
    IVar2 = objc_stub::length(IVar1);
    IVar3 = objc_stub::FUN_1007e9ae0(param_3);
    IVar4 = objc_stub::FUN_1007e7080(param_3);
    IVar5 = objc_stub::FUN_1007e5a60(param_3);
    IVar2 = objc_stub::initWithType_length_filename_contentType_attachmentType_
                      ((ID)self,&cf_attachment,IVar2,IVar3,IVar4,IVar5);
    IVar1 = objc_stub::initWithHeader_data_(param_1,IVar2,IVar1);
    return IVar1;
  }
LAB_100772a50:
  IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryEnvelope.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Couldn_tinitAttachment_);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
  }
  return 0;
}

