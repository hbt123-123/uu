// rea decompile_all
// name: SentryCrash::install
// address: 0x10078da8c
// body: available
// range: 0x10078da8c-0x10078dcc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryCrash::install(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  
  IVar1 = objc_stub::FUN_1007e5ca0(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 == 0) {
      bVar4 = 0;
    }
    else {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_Failedtoinitializecrashhandler_Crashreportingdisabled_);
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
      bVar4 = 0;
    }
  }
  else {
    IVar1 = objc_stub::FUN_1007ee660(param_1);
    if (((int)IVar1 != 0) && (IVar1 = objc_stub::FUN_1007ee680(param_1), (int)IVar1 != 0)) {
      IVar1 = objc_stub::FUN_1007ee680(param_1);
      objc_stub::FUN_1007f3ce0(param_1,IVar1);
      objc_stub::FUN_1007f3d20(param_1,0);
      objc_stub::FUN_1007f3d00(param_1,0);
    }
    IVar1 = objc_stub::FUN_1007ea340(param_1);
    IVar1 = objc_stub::stringByAppendingPathComponent_(0x100a0f530,IVar1);
    IVar2 = objc_stub::FUN_1007e5ca0(param_1);
    IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,IVar1);
    IVar1 = objc_stub::FUN_1007e6180(param_1);
    _objc_retainAutorelease();
    IVar3 = objc_stub::UTF8String(IVar1);
    _objc_retainAutorelease();
    IVar1 = objc_stub::UTF8String(IVar2);
    FUN_10076bf3c(IVar3,IVar1);
    *(int *)(param_1 + 0x10) = (int)IVar3;
    IVar1 = objc_stub::FUN_1007ee640(param_1);
    bVar4 = (bool)((int)IVar1 != 0);
  }
  return bVar4;
}

