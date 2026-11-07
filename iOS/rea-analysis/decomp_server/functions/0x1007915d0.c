// rea decompile_all
// name: SentrySDK::installIntegrations
// address: 0x1007915d0
// body: available
// range: 0x1007915d0-0x100791bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100791bf0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDK::installIntegrations(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  ID self_00;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar1 = objc_stub::getClient(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
    IVar1 = objc_stub::getClient(IVar1);
    IVar1 = objc_stub::options(IVar1);
    IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
    IVar2 = objc_stub::getClient(IVar2);
    IVar2 = objc_stub::options(IVar2);
    IVar2 = objc_stub::FUN_1007eca60(IVar2);
    IVar2 = objc_stub::mutableCopy(IVar2);
    IVar3 = objc_stub::FUN_1007e80c0((ID)&objc::class_t::SentryOptions);
    self = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    self_00 = objc_stub::init((ID)self);
    lStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    local_1a0 = (long *)0x0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    IVar4 = objc_stub::countByEnumeratingWithState_objects_count_(IVar3,&local_1b0,auStack_f0,0x10);
    if (IVar4 != 0) {
      lVar7 = *local_1a0;
      do {
        IVar8 = 0;
        do {
          if (*local_1a0 != lVar7) {
            _objc_enumerationMutation(IVar3);
          }
          uVar9 = *(undefined8 *)(lStack_1a8 + IVar8 * 8);
          uVar5 = uVar9;
          _NSStringFromClass(uVar9);
          objc_stub::setObject_forKeyedSubscript_(self_00,uVar9,uVar5);
          IVar8 = IVar8 + 1;
        } while (IVar4 != IVar8);
        IVar4 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar3,&local_1b0,auStack_f0,0x10);
      } while (IVar4 != 0);
    }
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = (long *)0x0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1f0,auStack_170,0x10)
    ;
    if (IVar3 != 0) {
      lVar7 = *local_1e0;
      do {
        IVar4 = 0;
        do {
          if (*local_1e0 != lVar7) {
            _objc_enumerationMutation(IVar2);
          }
          IVar10 = *(ID *)(lStack_1e8 + IVar4 * 8);
          IVar8 = objc_stub::objectForKeyedSubscript_(self_00,IVar10);
          if ((IVar8 == 0) && (IVar8 = IVar10, _NSClassFromString(), IVar8 == 0)) {
            IVar8 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
            if ((int)IVar8 != 0) {
              IVar8 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m"
                                );
              IVar8 = objc_stub::lastPathComponent(IVar8);
              objc_stub::stringByDeletingPathExtension(IVar8);
              objc_stub::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,
                         &cf__SentryHubdoInstallIntegrations_couldn_tfind_____>skipping_);
              IVar8 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar8,4)
              ;
            }
          }
          else {
            IVar6 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
            IVar6 = objc_stub::FUN_1007ed120(IVar6,IVar8);
            if ((int)IVar6 == 0) {
              _objc_alloc();
              IVar8 = objc_stub::init(IVar8);
              IVar6 = objc_stub::FUN_1007ec8e0(IVar8,IVar1);
              if ((int)IVar6 != 0) {
                IVar6 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
                if ((int)IVar6 != 0) {
                  IVar6 = objc_stub::stringWithUTF8String_
                                    ((ID)&_OBJC_CLASS___NSString,
                                     "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m"
                                    );
                  IVar6 = objc_stub::lastPathComponent(IVar6);
                  objc_stub::stringByDeletingPathExtension(IVar6);
                  objc_stub::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,&cf_Integrationinstalled___);
                  IVar6 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
                  objc_stub::logWithMessage_andLevel_
                            ((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar6,1);
                }
                IVar6 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
                objc_stub::FUN_1007e4ec0(IVar6,IVar8,IVar10);
              }
            }
            else {
              IVar8 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
              if ((int)IVar8 != 0) {
                IVar8 = objc_stub::stringWithUTF8String_
                                  ((ID)&_OBJC_CLASS___NSString,
                                   "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDK.m"
                                  );
                IVar8 = objc_stub::lastPathComponent(IVar8);
                objc_stub::stringByDeletingPathExtension(IVar8);
                objc_stub::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,
                           &cf__SentryHubdoInstallIntegrations_alreadyinstalled_____>skipping_);
                IVar8 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
                objc_stub::logWithMessage_andLevel_
                          ((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar8,4);
              }
            }
          }
          IVar4 = IVar4 + 1;
        } while (IVar3 != IVar4);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,&local_1f0,auStack_170,0x10);
      } while (IVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

