// rea decompile_all
// name: SentryFileManager::readPreviousBreadcrumbs
// address: 0x1007a98ec
// body: available
// range: 0x1007a98ec-0x1007a9e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a9e80 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1007a9e84 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManager::readPreviousBreadcrumbs(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  long local_138 [3];
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = *(ID *)PTR____NSArray0___1009953a8;
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::FUN_1007ef500(param_1);
  IVar3 = objc_stub::fileExistsAtPath_(IVar2,IVar3);
  IVar2 = IVar1;
  if ((int)IVar3 != 0) {
    IVar2 = objc_stub::FUN_1007ef500(param_1);
    IVar2 = objc_stub::FUN_1007f68a0((ID)&_OBJC_CLASS___NSString,IVar2,4,0);
    IVar3 = objc_stub::FUN_1007ee860((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar2 = objc_stub::componentsSeparatedByCharactersInSet_(IVar2,IVar3);
  }
  IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar4 = objc_stub::FUN_1007ef520(param_1);
  IVar3 = objc_stub::fileExistsAtPath_(IVar3,IVar4);
  if ((int)IVar3 != 0) {
    IVar1 = objc_stub::FUN_1007ef520(param_1);
    IVar1 = objc_stub::FUN_1007f68a0((ID)&_OBJC_CLASS___NSString,IVar1,4,0);
    IVar3 = objc_stub::FUN_1007ee860((ID)&_OBJC_CLASS___NSCharacterSet);
    IVar1 = objc_stub::componentsSeparatedByCharactersInSet_(IVar1,IVar3);
  }
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::count(IVar2);
  if ((IVar4 != 0) || (IVar4 = objc_stub::count(IVar1), IVar4 != 0)) {
    IVar5 = objc_stub::count(IVar2);
    IVar6 = objc_stub::count(IVar1);
    IVar4 = IVar1;
    if (IVar6 < IVar5) {
      IVar4 = IVar2;
      IVar2 = IVar1;
    }
    IVar2 = objc_stub::arrayByAddingObjectsFromArray_(IVar4,IVar2);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    local_138[2] = 0;
    local_138[1] = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (IVar2,local_138 + 1,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar7 = *local_120;
      do {
        IVar4 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(IVar2);
          }
          IVar5 = objc_stub::dataUsingEncoding_(*(ID *)(local_138[2] + IVar4 * 8),4);
          if (IVar5 == 0) {
            IVar5 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
            if ((int)IVar5 != 0) {
              IVar5 = objc_stub::stringWithUTF8String_
                                ((ID)&_OBJC_CLASS___NSString,
                                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                                );
              IVar5 = objc_stub::lastPathComponent(IVar5);
              objc_stub::stringByDeletingPathExtension(IVar5);
              objc_stub::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,&cf_Receivednildatafrombreadcrumbfile_);
              IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
              objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar5,3)
              ;
            }
          }
          else {
            local_138[0] = 0;
            IVar5 = objc_stub::JSONObjectWithData_options_error_
                              ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar5,0,local_138);
            if (local_138[0] == 0) {
              objc_stub::addObject_(IVar3,IVar5);
            }
            else {
              IVar5 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
              if ((int)IVar5 != 0) {
                IVar5 = objc_stub::stringWithUTF8String_
                                  ((ID)&_OBJC_CLASS___NSString,
                                   "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                                  );
                IVar5 = objc_stub::lastPathComponent(IVar5);
                objc_stub::stringByDeletingPathExtension(IVar5);
                objc_stub::stringWithFormat_
                          ((ID)&_OBJC_CLASS___NSString,&cf_Errordeserializingbreadcrumb___);
                IVar5 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
                objc_stub::logWithMessage_andLevel_
                          ((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar5,4);
              }
            }
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar2,local_138 + 1,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar3;
}

