// rea decompile_all
// name: SentryANRTrackerV1::detectANRs
// address: 0x10074e978
// body: available
// range: 0x10074e978-0x10074efb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::detectANRs(ID param_1,SEL param_2)

{
  int *piVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  ID local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  IVar3 = objc_stub::UUID((ID)&_OBJC_CLASS___NSUUID);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar5 = objc_stub::FUN_1007f6f40(param_1);
  objc_stub::FUN_1007f6f20(IVar5,IVar3);
  if (*(long *)(param_1 + 0x10) == 3) {
    IVar5 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
    objc_stub::setName_(IVar5,&cf_io_sentry_app_hang_tracker);
    *(undefined8 *)(param_1 + 0x10) = 2;
    _objc_sync_exit(uVar4);
    local_a0 = &local_a8;
    local_a8 = 0;
    local_98 = 0x2020000000;
    local_90 = 0;
    local_c0 = &local_c8;
    local_c8 = 0;
    local_b8 = 0x2020000000;
    local_b0 = 0;
    objc_stub::FUN_1007f70a0(param_1);
    IVar5 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar5 = objc_stub::dateProvider(IVar5);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    lVar8 = *(long *)(param_1 + 0x10);
    _objc_sync_exit(uVar4);
    if (lVar8 == 2) {
      do {
        IVar6 = objc_stub::date(IVar5);
        objc_stub::FUN_1007f70a0(param_1);
        IVar6 = objc_stub::dateByAddingTimeInterval_(IVar6);
        piVar1 = (int *)(local_a0 + 3);
        iVar2 = *piVar1;
        *piVar1 = iVar2 + 1;
        IVar7 = objc_stub::dispatchQueueWrapper
                          (param_1,CONCAT44((int)((ulong)piVar1 >> 0x20),iVar2));
        local_100 = PTR___NSConcreteStackBlock_100995490;
        local_f8 = 0xc2000000;
        local_f0 = FUN_10074f004;
        puStack_e8 = &DAT_1009e8b90;
        local_d0 = &local_c8;
        puStack_d8 = &local_a8;
        local_e0 = param_1;
        objc_stub::FUN_1007e87c0(IVar7,&local_100);
        IVar7 = objc_stub::FUN_1007f6f40(param_1);
        objc_stub::FUN_1007f5a40(IVar7,extraout_d0 / 5.0);
        IVar7 = objc_stub::date(IVar5);
        objc_stub::FUN_1007f6fc0(IVar7,IVar6);
        objc_stub::FUN_1007f70a0(param_1);
        if (extraout_d0_01 <= extraout_d0_00) {
          IVar6 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
          if ((int)IVar6 != 0) {
            IVar6 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                              );
            IVar6 = objc_stub::lastPathComponent(IVar6);
            objc_stub::stringByDeletingPathExtension(IVar6);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_IgnoringANRbecausethedeltaistoobig__f_);
            IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar6,1);
          }
        }
        else if ((4 < *(int *)(local_a0 + 3)) && (*(char *)(local_c0 + 3) == '\0')) {
          *(undefined1 *)(local_c0 + 3) = 1;
          IVar6 = objc_stub::FUN_1007e7520(param_1);
          IVar6 = objc_stub::FUN_1007ecbe0(IVar6);
          if ((IVar6 & 1) == 0) {
            IVar6 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
            if ((int)IVar6 != 0) {
              IVar6 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                                );
              IVar6 = objc_stub::lastPathComponent(IVar6);
              objc_stub::stringByDeletingPathExtension(IVar6);
              objc_stub::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,&cf_IgnoringANRbecausetheappisinthebackground);
              IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar6,1)
              ;
            }
          }
          else {
            IVar6 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
            if ((int)IVar6 != 0) {
              IVar6 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                                );
              IVar6 = objc_stub::lastPathComponent(IVar6);
              objc_stub::stringByDeletingPathExtension(IVar6);
              objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_ANRdetected_);
              IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar6,3)
              ;
            }
            objc_stub::FUN_1007e4980(param_1);
          }
        }
        uVar4 = *(undefined8 *)(param_1 + 8);
        _objc_sync_enter();
        lVar8 = *(long *)(param_1 + 0x10);
        _objc_sync_exit(uVar4);
      } while (lVar8 == 2);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    *(undefined8 *)(param_1 + 0x10) = 1;
    IVar5 = objc_stub::FUN_1007f6f40(param_1);
    objc_stub::FUN_1007f6e60(IVar5,IVar3);
    _objc_sync_exit(uVar4);
    __Block_object_dispose(&local_c8,8);
    __Block_object_dispose(&local_a8,8);
  }
  else {
    IVar5 = objc_stub::FUN_1007f6f40(param_1);
    objc_stub::FUN_1007f6e60(IVar5,IVar3);
    _objc_sync_exit(uVar4);
  }
  return;
}

