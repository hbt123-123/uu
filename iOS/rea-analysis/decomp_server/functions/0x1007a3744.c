// rea decompile_all
// name: SentrySwizzle::swizzleInstanceMethod:inClass:newImpFactory:mode:key:
// address: 0x1007a3744
// body: available
// range: 0x1007a3744-0x1007a3a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

bool SentrySwizzle::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,ID param_5,int param_6,
               unsigned_long_long param_7,const_void__ param_8)

{
  ID IVar1;
  unsigned_long_long self;
  ID IVar2;
  CLASS CVar3;
  CLASS CVar4;
  bool bVar5;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  CLASS CStack_90;
  SEL local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_6 != 0) && (param_7 == 0)) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 != 0) {
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySwizzle.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,&cf_KeymaynotbeNULLifmodeisnotSentrySwizzleModeAlways_)
      ;
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
    return 0;
  }
  IVar1 = param_5;
  FUN_1007a3ad0();
  _objc_sync_enter();
  if (param_7 != 0) {
    self = param_7;
    FUN_1007a3b10();
    if (param_6 == 1) {
      IVar2 = objc_stub::containsObject_(self,param_4);
      if ((IVar2 & 1) != 0) {
LAB_1007a38dc:
        bVar5 = 0;
        goto LAB_1007a3a54;
      }
    }
    else {
      CVar3 = param_4;
      if (param_6 == 2) {
        while (CVar3 != 0) {
          IVar2 = objc_stub::containsObject_(self,CVar3);
          if ((IVar2 & 1) != 0) goto LAB_1007a38dc;
          _class_getSuperclass();
        }
      }
    }
  }
  CVar3 = param_4;
  _class_getInstanceMethod(param_4,param_3);
  local_98 = &local_80;
  local_80 = 0;
  local_70 = 0x2020000000;
  local_68 = 0;
  local_b8 = PTR___NSConcreteStackBlock_100995490;
  local_b0 = 0xc2000000;
  local_a8 = FUN_1007a3c3c;
  puStack_a0 = &DAT_1009ea2e8;
  CStack_90 = param_4;
  local_88 = param_3;
  local_78 = local_98;
  IVar2 = objc_stub::new((ID)&objc::class_t::SentrySwizzleInfo);
  objc_stub::FUN_1007f4860(IVar2,param_3);
  objc_stub::FUN_1007f3480(IVar2,&local_b8);
  (**(code **)(param_5 + 0x10))(param_5,IVar2);
  _method_getTypeEncoding(CVar3);
  _imp_implementationWithBlock(param_5);
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100abb6b0);
  CVar4 = param_4;
  _class_replaceMethod(param_4,param_3,param_5,CVar3);
  local_78[3] = CVar4;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100abb6b0);
  __Block_object_dispose(&local_80,8);
  if (param_7 != 0) {
    FUN_1007a3b10();
    objc_stub::addObject_(param_7,param_4);
  }
  bVar5 = 1;
LAB_1007a3a54:
  _objc_sync_exit(IVar1);
  return bVar5;
}

