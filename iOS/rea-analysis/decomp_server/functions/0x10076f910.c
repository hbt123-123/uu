// rea decompile_all
// name: SentryTracer::finishTracer:shouldCleanUp:
// address: 0x10076f910
// body: available
// range: 0x10076f910-0x10077031f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077031c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

bool SentryTracer::finishTracer_shouldCleanUp_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  bool bVar5;
  long lVar6;
  ID self;
  ID IVar7;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  objc_super local_108;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_4 != 0) {
    objc_stub::FUN_1007e6440(param_1);
  }
  IVar1 = objc_stub::FUN_1007ecf80(param_1);
  if ((int)IVar1 != 0) {
    bVar5 = 1;
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 == 0) goto LAB_10076fe08;
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m")
    ;
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    IVar1 = objc_stub::traceId(*(ID *)(param_1 + (long)_traceContext));
    objc_stub::sentryIdString(IVar1);
    objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Tracer__wasalreadyfinished_);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
LAB_10076fa88:
    IVar1 = 0;
    bVar5 = 1;
    goto LAB_10076fe08;
  }
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_1007ecf80(param_1);
  if ((int)IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007ecc00(param_1);
    if ((((int)IVar1 != 0) && (IVar1 = objc_stub::FUN_1007f8220(param_1), (IVar1 & 1) == 0)) &&
       (IVar1 = objc_stub::status(param_1), IVar1 != 0)) {
      IVar1 = objc_stub::status(param_1);
      *(ID *)(param_1 + (long)_finishStatus) = IVar1;
    }
    local_108.super_class = &objc::class_t::SentryTracer;
    local_108.receiver = param_1;
    _objc_msgSendSuper2(&local_108,"finishWithStatus:",
                        *(undefined8 *)(param_1 + (long)_finishStatus));
    _objc_sync_exit(param_1);
    if (param_4 != 0) {
      IVar1 = objc_stub::delegate(param_1);
      objc_stub::FUN_1007f73c0(IVar1,param_1);
      IVar1 = objc_stub::FUN_1007e9c80(param_1);
      if (IVar1 != 0) {
        IVar1 = objc_stub::FUN_1007e9c80(param_1);
        (**(code **)(IVar1 + 0x10))(IVar1,param_1);
        objc_stub::FUN_1007f2f00(param_1,0);
      }
    }
    IVar1 = objc_stub::timestamp(param_1);
    IVar2 = objc_stub::FUN_1007f5f60(param_1);
    objc_stub::FUN_1007f6fc0(IVar1,IVar2);
    IVar1 = objc_stub::FUN_1007ecc00(param_1);
    if (((int)IVar1 == 0) || (extraout_d0 < 500.0)) {
      lVar6 = (long)_hub;
      IVar1 = *(ID *)(param_1 + lVar6);
      if (IVar1 == 0) {
        bVar5 = 1;
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 == 0) goto LAB_10076fe08;
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        IVar1 = objc_stub::traceId(*(ID *)(param_1 + (long)_traceContext));
        objc_stub::sentryIdString(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Hubwasnilfortracer___nothingtodo_);
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
        goto LAB_10076fa88;
      }
      if (param_4 != 0) {
        IVar1 = objc_stub::scope(IVar1);
        IVar1 = objc_stub::span(IVar1);
        if (IVar1 == param_1) {
          IVar1 = objc_stub::scope(*(ID *)(param_1 + lVar6));
          objc_stub::FUN_1007f4c00(IVar1,0);
        }
      }
      IVar1 = objc_stub::configuration(param_1);
      IVar1 = objc_stub::FUN_1007e9ce0(IVar1);
      if (((int)IVar1 != 0) && (IVar1 = objc_stub::FUN_1007f8220(param_1), (IVar1 & 1) == 0)) {
        bVar5 = 1;
        IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar1 != 0) {
          IVar1 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                            );
          IVar1 = objc_stub::lastPathComponent(IVar1);
          objc_stub::stringByDeletingPathExtension(IVar1);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,
                     &cf_Notcapturingtransactionbecausefinishwasnotcalledbeforetimingout_);
          IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          bVar5 = 1;
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
          IVar1 = 0;
        }
        goto LAB_10076fe08;
      }
      lVar6 = (long)_children;
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      _objc_sync_enter();
      objc_stub::FUN_1007eb060(*(ID *)(param_1 + (long)_configuration));
      if ((extraout_d0_00 <= 0.0) ||
         (IVar1 = objc_stub::count(*(ID *)(param_1 + lVar6)), IVar1 != 0)) {
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = (long *)0x0;
        IVar1 = *(ID *)(param_1 + lVar6);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_150,auStack_f8,0x10);
        if (IVar2 != 0) {
          lVar6 = *local_140;
          do {
            IVar7 = 0;
            do {
              if (*local_140 != lVar6) {
                _objc_enumerationMutation(IVar1);
              }
              self = *(ID *)(lStack_148 + IVar7 * 8);
              IVar4 = objc_stub::FUN_1007ecf80(self);
              if ((IVar4 & 1) == 0) {
                objc_stub::FUN_1007e9d60(self,param_3);
                IVar4 = objc_stub::timestamp(param_1);
                objc_stub::setTimestamp_(self,IVar4);
              }
              IVar7 = IVar7 + 1;
            } while (IVar2 != IVar7);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (IVar1,&local_150,auStack_f8,0x10);
          } while (IVar2 != 0);
        }
        IVar1 = objc_stub::FUN_1007ecc00(param_1);
        if ((int)IVar1 != 0) {
          objc_stub::FUN_1007f77a0(param_1);
        }
        _objc_sync_exit(uVar3);
        IVar1 = 0;
        bVar5 = 0;
        goto LAB_10076fe08;
      }
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                          );
        IVar1 = objc_stub::lastPathComponent(IVar1);
        objc_stub::stringByDeletingPathExtension(IVar1);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,
                   &cf_WaswaitingfortimeoutforUIeventtracebutithadnochildren_willnotkeeptransaction_
                  );
        IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      }
      _objc_sync_exit(uVar3);
      goto LAB_10076fe00;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,2);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_Autogeneratedtransactionexceededthemaxdurationof_fseconds_Notcapturingtransaction_
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,2);
      goto LAB_10076fe00;
    }
  }
  else {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::traceId(*(ID *)(param_1 + (long)_traceContext));
      objc_stub::sentryIdString(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Tracer__wasalreadyfinishedaftersynchronizing_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
    }
    _objc_sync_exit(param_1);
LAB_10076fe00:
    IVar1 = 0;
  }
  bVar5 = 1;
LAB_10076fe08:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar1);
}

