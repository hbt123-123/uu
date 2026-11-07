// rea decompile_all
// name: SentryHub::startSession
// address: 0x10076636c
// body: available
// range: 0x10076636c-0x100766717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100766714 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHub::startSession(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  class_t *self;
  ID IVar5;
  ID self_00;
  
  IVar1 = objc_stub::scope(param_1);
  IVar2 = objc_stub::options(*(ID *)(param_1 + 0x28));
  if (IVar2 == 0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 == 0) {
      return;
    }
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m");
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Optionsoftheclientarenil_Notstartingasession_);
  }
  else {
    IVar3 = objc_stub::releaseName(IVar2);
    if (IVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_sync_enter();
      self_00 = *(ID *)(param_1 + 0x58);
      IVar3 = objc_stub::cacheDirectoryPath(IVar2);
      IVar3 = objc_stub::idWithCacheDirectoryPath_((ID)&objc::class_t::SentryInstallation,IVar3);
      self = &objc::class_t::SentrySession;
      _objc_alloc();
      IVar5 = objc_stub::releaseName(IVar2);
      IVar3 = objc_stub::FUN_1007ec180((ID)self,IVar5,IVar3);
      *(ID *)(param_1 + 0x58) = IVar3;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (IVar3 = objc_stub::FUN_1007e8bc0(IVar2), (int)IVar3 != 0)) {
        objc_stub::FUN_1007f2c20(*(ID *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      IVar2 = objc_stub::environment(IVar2);
      objc_stub::setEnvironment_(*(ID *)(param_1 + 0x58),IVar2);
      objc_stub::FUN_1007e57c0(IVar1,*(undefined8 *)(param_1 + 0x58));
      objc_stub::FUN_1007f6360(param_1,*(undefined8 *)(param_1 + 0x58));
      objc_stub::FUN_1007e6740(param_1,*(undefined8 *)(param_1 + 0x58));
      _objc_sync_exit(uVar4);
      IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar1 = objc_stub::dateProvider(IVar1);
      IVar1 = objc_stub::date(IVar1);
      objc_stub::FUN_1007e90c0(self_00,IVar1);
      objc_stub::FUN_1007e6740(param_1,self_00);
      objc_stub::FUN_1007f15e0(*(ID *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
      return;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,4);
    if ((int)IVar1 == 0) {
      return;
    }
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m");
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,
               &cf_Releasenameoftheoptionsoftheclientisnil_Notstartingasession_);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,4);
  return;
}

