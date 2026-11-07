// rea decompile_all
// name: SentryBinaryImageCache::binaryImageAdded:
// address: 0x10075dd8c
// body: available
// range: 0x10075dd8c-0x10075e127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075e04c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryBinaryImageCache::binaryImageAdded_
               (ID param_1,SEL param_2,const_AnonymousStructure6__ param_3)

{
  ID IVar1;
  class_t *self;
  ID self_00;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == (const_AnonymousStructure6__)0x0) {
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 == 0) {
      return;
    }
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryBinaryImageCache.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_TheimageisNULL_Can_taddNULLtocache_);
  }
  else {
    if (param_3->field3_0x18 != (char *)0x0) {
      IVar1 = objc_stub::stringWithCString_encoding_
                        ((ID)&_OBJC_CLASS___NSString,param_3->field3_0x18,4);
      if (IVar1 != 0) {
        self = &objc::class_t::SentryBinaryImageInfo;
        _objc_alloc();
        self_00 = objc_stub::init((ID)self);
        objc_stub::setName_(self_00,IVar1);
        IVar1 = objc_stub::FUN_1007e7220
                          ((ID)&objc::class_t::SentryBinaryImageCache,param_3->field4_0x20);
        objc_stub::FUN_1007f53c0(self_00,IVar1);
        objc_stub::FUN_1007f1a80(self_00,param_3->field0_0x0);
        objc_stub::FUN_1007f56a0(self_00,param_3->field1_0x8);
        objc_stub::FUN_1007f4b80(self_00,param_3->field2_0x10);
        _objc_sync_enter();
        uVar2 = objc_stub::count(*(ID *)(param_1 + 8));
        uVar4 = 0;
        if (uVar2 != 0) {
          do {
            uVar5 = uVar4 + uVar2 >> 1;
            IVar1 = objc_stub::objectAtIndexedSubscript_(*(ID *)(param_1 + 8),uVar5);
            IVar3 = objc_stub::address(self_00);
            IVar1 = objc_stub::address(IVar1);
            if (IVar1 <= IVar3) {
              uVar4 = uVar5 + 1;
              uVar5 = uVar2;
            }
            uVar2 = uVar5;
          } while (uVar4 < uVar2);
        }
        objc_stub::insertObject_atIndex_(*(ID *)(param_1 + 8),self_00,uVar4);
        _objc_sync_exit(param_1);
        return;
      }
      IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
      if ((int)IVar1 == 0) {
        return;
      }
      IVar1 = objc_stub::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryBinaryImageCache.m"
                        );
      IVar1 = objc_stub::lastPathComponent(IVar1);
      objc_stub::stringByDeletingPathExtension(IVar1);
      objc_stub::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &
                 cf_Couldn_tconvertthecStringimagenametoanNSString_ThiscouldbeduetoadifferentencodingthanNSUTF8StringEncodingofthecString__
                );
      IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
      return;
    }
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 == 0) {
      return;
    }
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryBinaryImageCache.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_TheimagenamewasNULL_Can_taddimagetocache_);
  }
  IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
  objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
  return;
}

