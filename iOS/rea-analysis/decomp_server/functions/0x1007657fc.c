// rea decompile_all
// name: FUN_1007657fc
// address: 0x1007657fc
// body: available
// range: 0x1007657fc-0x100765c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100765ae8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1007657fc(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  IVar2 = objc_stub::count(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.mm"
                        );
      IVar2 = objc_stub::lastPathComponent(IVar2);
      objc_stub::stringByDeletingPathExtension(IVar2);
      objc_stub::count(param_1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Findingrelevantsamplesfrom_lutotal_);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar2,1);
    }
    puVar1 = PTR___NSConcreteStackBlock_100995490;
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0xc0000000;
    local_88 = FUN_100765d20;
    puStack_80 = &DAT_1009e9108;
    local_78 = param_2;
    IVar2 = objc_stub::FUN_1007eb240(param_1,&local_98);
    if (IVar2 == 0x7fffffffffffffff) {
      FUN_100765d58(param_1,param_2,param_3,1);
    }
    else {
      IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
      if ((int)IVar3 != 0) {
        IVar3 = objc_stub::stringWithUTF8String_
                          ((ID)&_OBJC_CLASS___NSString,
                           "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.mm"
                          );
        IVar3 = objc_stub::lastPathComponent(IVar3);
        objc_stub::stringByDeletingPathExtension(IVar3);
        objc_stub::stringWithFormat_
                  ((ID)&_OBJC_CLASS___NSString,&cf_Foundfirstslicesampleatindex_lu);
        IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
        objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,1);
      }
      local_c0 = puVar1;
      local_b8 = 0xc0000000;
      local_b0 = FUN_1007660b4;
      puStack_a8 = &DAT_1009e9108;
      local_a0 = param_3;
      IVar3 = objc_stub::FUN_1007eb260(param_1,2,&local_c0);
      if (IVar3 != 0x7fffffffffffffff) {
        IVar4 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
        if ((int)IVar4 != 0) {
          IVar4 = objc_stub::stringWithUTF8String_
                            ((ID)&_OBJC_CLASS___NSString,
                             "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.mm"
                            );
          IVar4 = objc_stub::lastPathComponent(IVar4);
          objc_stub::stringByDeletingPathExtension(IVar4);
          objc_stub::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,&cf_Foundlastslicesampleatindex_lu);
          IVar4 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
          objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar4,1);
        }
        IVar2 = objc_stub::FUN_1007eb280((ID)&_OBJC_CLASS___NSIndexSet,IVar2,(IVar3 - IVar2) + 1);
        IVar2 = objc_stub::FUN_1007eec40(param_1,IVar2);
        return IVar2;
      }
      FUN_100765d58(param_1,param_2,param_3,0);
    }
  }
  return 0;
}

