// rea decompile_all
// name: SentryFileManager::deleteOldEnvelopesFromPath:
// address: 0x1007ac1b8
// body: available
// range: 0x1007ac1b8-0x1007ac5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ac5b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManager::deleteOldEnvelopesFromPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
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
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar1 = objc_stub::dateProvider(IVar1);
  IVar1 = objc_stub::date(IVar1);
  objc_stub::timeIntervalSince1970(IVar1);
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  IVar1 = objc_stub::FUN_1007e52c0(param_1,param_3);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_150,auStack_110,0x10);
  if (IVar2 != 0) {
    lVar7 = *local_140;
    uVar8 = *(undefined8 *)PTR__NSFileCreationDate_1009952b0;
    do {
      IVar9 = 0;
      do {
        if (*local_140 != lVar7) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::stringByAppendingPathComponent_
                          (param_3,*(undefined8 *)(lStack_148 + IVar9 * 8));
        IVar4 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
        IVar4 = objc_stub::attributesOfItemAtPath_error_(IVar4,IVar3,0);
        if ((IVar4 == 0) || (IVar5 = objc_stub::objectForKeyedSubscript_(IVar4,uVar8), IVar5 == 0))
        {
          IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
          if ((int)IVar3 != 0) {
            IVar3 = objc_stub::stringWithUTF8String_
                              ((ID)&_OBJC_CLASS___NSString,
                               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                              );
            IVar3 = objc_stub::lastPathComponent(IVar3);
            objc_stub::stringByDeletingPathExtension(IVar3);
            objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_CouldnotgetNSFileCreationDatefrom__);
            IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
            uVar6 = 3;
LAB_1007ac4ec:
            objc_stub::logWithMessage_andLevel_
                      ((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,uVar6);
          }
        }
        else {
          IVar4 = objc_stub::objectForKeyedSubscript_(IVar4,uVar8);
          objc_stub::timeIntervalSince1970(IVar4);
          if (7776000.0 < extraout_d0 - extraout_d0_00) {
            objc_stub::FUN_1007f0340(param_1,IVar3);
            IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
            if ((int)IVar3 != 0) {
              IVar3 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                                );
              IVar3 = objc_stub::lastPathComponent(IVar3);
              objc_stub::stringByDeletingPathExtension(IVar3);
              objc_stub::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,
                         &cf_Removedenvelopeatpath__becauseitwasolderthan90days);
              IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              uVar6 = 1;
              goto LAB_1007ac4ec;
            }
          }
        }
        IVar9 = IVar9 + 1;
      } while (IVar2 != IVar9);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_150,auStack_110,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

