// rea decompile_all
// name: FUN_100785494
// address: 0x100785494
// body: available
// range: 0x100785494-0x10078566b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100785494(ID param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_68;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::path(param_1);
  local_68 = 0;
  IVar1 = NSFileManager::attributesOfItemAtPath_error_(IVar1,IVar2,&local_68);
  if (IVar1 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,1);
    if ((int)IVar1 == 0) {
      IVar1 = 0xffffffffffffffff;
    }
    else {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryMsgPackSerializer.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_Couldnotreadfileattributes_File______);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,1);
      IVar1 = 0xffffffffffffffff;
    }
  }
  else {
    IVar1 = NSFileManager::objectForKeyedSubscript_(IVar1,*(undefined8 *)PTR__NSFileSize_1009952c8);
    IVar1 = NSFileManager::unsignedIntegerValue(IVar1);
  }
  return IVar1;
}

