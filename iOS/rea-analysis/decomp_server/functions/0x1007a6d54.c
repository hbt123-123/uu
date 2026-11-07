// rea decompile_all
// name: FUN_1007a6d54
// address: 0x1007a6d54
// body: available
// range: 0x1007a6d54-0x1007a6f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

ID FUN_1007a6d54(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    (IVar2,param_1,1,0,param_2);
  if ((IVar2 & 1) == 0) {
    iVar1 = (int)*param_2;
    FUN_1007a6bc8();
    if ((iVar1 != 0) &&
       (IVar3 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,5),
       (int)IVar3 != 0)) {
      IVar3 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManager.m"
                        );
      IVar3 = objc_stub::lastPathComponent(IVar3);
      objc_stub::stringByDeletingPathExtension(IVar3);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Failedtocreatedirectory_pathistoolong___);
      IVar3 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar3,5);
    }
    IVar3 = objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Failedtocreatethedirectoryatpath___);
    uVar4 = 0x6c;
    FUN_1007567dc(0x6c,IVar3,*param_2);
    *param_2 = uVar4;
  }
  return IVar2;
}

