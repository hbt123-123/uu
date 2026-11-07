// rea decompile_all
// name: SentrySerialization::envelopeWithData:
// address: 0x100747e70
// body: available
// range: 0x100747e70-0x100748b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007486fc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySerialization::envelopeWithData_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  class_t *pcVar9;
  ulong uVar10;
  ID IVar11;
  ulong uVar12;
  ulong local_c8;
  long local_78;
  long local_70 [2];
  
  _objc_retainAutorelease();
  IVar2 = objc_stub::bytes(param_3);
  IVar3 = objc_stub::length(param_3);
  if (IVar3 != 0) {
    uVar10 = 0;
    do {
      if (*(char *)(IVar2 + uVar10) == '\n') {
        IVar3 = NSData::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,IVar2,uVar10);
        local_70[0] = 0;
        IVar3 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar3,0,local_70);
        if (local_70[0] == 0) {
          IVar11 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_event_id);
          if (IVar11 == 0) {
            IVar11 = 0;
          }
          else {
            pcVar9 = &objc::class_t::_TtC6Sentry8SentryId;
            _objc_alloc();
            IVar11 = objc_stub::initWithUUIDString_((ID)pcVar9,IVar11);
          }
          IVar5 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_sdk);
          IVar4 = 0;
          if (IVar5 != 0) {
            pcVar9 = &objc::class_t::SentrySdkInfo;
            _objc_alloc();
            IVar4 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_sdk);
            IVar4 = objc_stub::initWithDict_((ID)pcVar9,IVar4);
          }
          IVar5 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_trace);
          if (IVar5 == 0) {
            IVar5 = 0;
          }
          else {
            pcVar9 = &objc::class_t::SentryTraceContext;
            _objc_alloc();
            IVar5 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_trace);
            IVar5 = objc_stub::initWithDict_((ID)pcVar9,IVar5);
          }
          pcVar9 = &objc::class_t::SentryEnvelopeHeader;
          _objc_alloc();
          IVar11 = objc_stub::initWithId_sdkInfo_traceContext_((ID)pcVar9,IVar11,IVar4,IVar5);
          IVar4 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_sent_at);
          if (IVar4 != 0) {
            IVar3 = NSJSONSerialization::objectForKeyedSubscript_(IVar3,&cf_sent_at);
            FUN_10078681c(IVar3);
            objc_stub::setSentAt_(IVar11,IVar3);
          }
        }
        else {
          IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
          if ((int)IVar3 == 0) {
            IVar11 = 0;
          }
          else {
            IVar3 = NSString::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                              );
            IVar3 = NSString::lastPathComponent(IVar3);
            NSString::stringByDeletingPathExtension(IVar3);
            NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Failedtoparseenvelopeheader__);
            IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,4);
            IVar11 = 0;
          }
        }
        if (IVar11 != 0) {
          if (uVar10 == 0) {
            IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
            if ((int)IVar2 != 0) {
              IVar2 = NSString::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                                );
              IVar2 = NSString::lastPathComponent(IVar2);
              NSString::stringByDeletingPathExtension(IVar2);
              NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,&cf_EnvelopeHeaderwasparsed_itsindexisexpected_
                        );
              IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4)
              ;
              return 0;
            }
            return 0;
          }
          IVar3 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray);
          IVar4 = objc_stub::length(param_3);
          uVar12 = IVar4 - 1;
          if (uVar12 <= uVar10) goto LAB_100748a8c;
          uVar10 = uVar10 + 1;
          local_c8 = uVar10;
          goto LAB_100748238;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      IVar3 = objc_stub::length(param_3);
    } while (uVar10 < IVar3);
  }
  IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
  if ((int)IVar2 != 0) {
    IVar2 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                      );
    IVar2 = NSString::lastPathComponent(IVar2);
    NSString::stringByDeletingPathExtension(IVar2);
    NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Invalidenvelope_Noheaderfound_);
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
    return 0;
  }
  return 0;
LAB_100748238:
  if (*(char *)(IVar2 + uVar10) == '\n' || uVar10 == uVar12) {
    IVar4 = objc_stub::subdataWithRange_(param_3,local_c8,uVar10 - local_c8);
    local_78 = 0;
    IVar4 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar4,0,&local_78);
    if (local_78 != 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 != 0) {
        IVar2 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                          );
        IVar2 = NSString::lastPathComponent(IVar2);
        NSString::stringByDeletingPathExtension(IVar2);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Failedtoparseenvelopeitemheader__);
        IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
      }
      return 0;
    }
    IVar5 = NSJSONSerialization::valueForKey_(IVar4,&cf_type);
    if (IVar5 == 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 != 0) {
        IVar2 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                          );
        IVar2 = NSString::lastPathComponent(IVar2);
        NSString::stringByDeletingPathExtension(IVar2);
        NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Envelopeitemtypeisrequired_);
        IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
      }
      goto LAB_100748a8c;
    }
    self = NSJSONSerialization::valueForKey_(IVar4,&cf_length);
    IVar6 = NSJSONSerialization::unsignedIntegerValue(self);
    if ((uVar10 == uVar12) && (IVar6 != 0)) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 != 0) {
        IVar2 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                          );
        IVar2 = NSString::lastPathComponent(IVar2);
        NSString::stringByDeletingPathExtension(IVar2);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &cf_Envelopeitemhasnodatabutheaderindicatesit_slengthis_d_);
        IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
      }
      goto LAB_100748a8c;
    }
    IVar7 = NSJSONSerialization::valueForKey_(IVar4,&cf_filename);
    IVar8 = NSJSONSerialization::valueForKey_(IVar4,&cf_content_type);
    IVar4 = NSJSONSerialization::valueForKey_(IVar4,&cf_attachment_type);
    if (IVar7 == 0) {
      pcVar9 = &objc::class_t::SentryEnvelopeItemHeader;
      _objc_alloc();
      IVar4 = objc_stub::initWithType_length_((ID)pcVar9,IVar5,IVar6);
    }
    else {
      pcVar9 = &objc::class_t::SentryEnvelopeAttachmentHeader;
      _objc_alloc();
      FUN_1007a6ba8(IVar4);
      IVar4 = objc_stub::initWithType_length_filename_contentType_attachmentType_
                        ((ID)pcVar9,IVar5,IVar6,IVar7,IVar8,IVar4);
    }
    if (uVar10 == uVar12) {
      uVar10 = uVar10 + 1;
    }
    if ((IVar6 == 0) || (IVar5 = objc_stub::length(param_3), IVar6 + uVar10 + 1 <= IVar5)) {
      IVar5 = objc_stub::subdataWithRange_(param_3,uVar10 + 1,IVar6);
      pcVar9 = &objc::class_t::SentryEnvelopeItem;
      _objc_alloc();
      IVar4 = objc_stub::initWithHeader_data_((ID)pcVar9,IVar4,IVar5);
      NSMutableArray::addObject_(IVar3,IVar4);
      IVar4 = NSJSONSerialization::integerValue(self);
      bVar1 = false;
      uVar10 = IVar4 + uVar10 + 1;
      local_c8 = uVar10;
    }
    else {
      IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar4 == 0) {
        bVar1 = true;
      }
      else {
        IVar4 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                          );
        IVar4 = NSString::lastPathComponent(IVar4);
        NSString::stringByDeletingPathExtension(IVar4);
        objc_stub::length(param_3);
        NSString::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &
                   cf_Envelopeiscorruptedorhasinvaliddata_Tryingtoread_libytesbyskipping_lifromabufferof_libytes_
                  );
        IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,4);
        bVar1 = true;
      }
    }
    if (bVar1) {
      return 0;
    }
  }
  uVar10 = uVar10 + 1;
  if (uVar12 < uVar10) {
LAB_100748a8c:
    IVar2 = NSMutableArray::count(IVar3);
    if (IVar2 == 0) {
      IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
      if ((int)IVar2 != 0) {
        IVar2 = NSString::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                          );
        IVar2 = NSString::lastPathComponent(IVar2);
        NSString::stringByDeletingPathExtension(IVar2);
        NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Envelopehasnoitems_);
        IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,4);
      }
      return 0;
    }
    pcVar9 = &objc::class_t::SentryEnvelope;
    _objc_alloc();
    IVar2 = objc_stub::initWithHeader_items_((ID)pcVar9,IVar11,IVar3);
    return IVar2;
  }
  goto LAB_100748238;
}

