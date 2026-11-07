// rea decompile_all
// name: SentryClient::buildErrorEvent:
// address: 0x10073ca6c
// body: available
// range: 0x10073ca6c-0x10073cf9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073cf9c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClient::buildErrorEvent_(ID param_1,SEL param_2,ID param_3)

{
  class_t *self;
  ID self_00;
  ID self_01;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID IStack_68;
  
  self = &objc::class_t::SentryEvent;
  _objc_alloc();
  self_00 = objc_stub::initWithError_((ID)self,param_3);
  self_01 = NSMutableArray::arrayWithObject_((ID)&_OBJC_CLASS___NSMutableArray,param_3);
  IVar1 = objc_stub::userInfo(param_3);
  uVar4 = *(undefined8 *)PTR__NSUnderlyingErrorKey_100995328;
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
  IVar2 = NSError::class((ID)&_OBJC_CLASS___NSError);
  IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
  IVar1 = objc_stub::userInfo(param_3);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
  if ((IVar2 & 1) == 0) {
    if ((IVar1 != 0) &&
       (IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3),
       (int)IVar1 != 0)) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::userInfo(param_3);
      objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
      IVar1 = objc_stub::userInfo(param_3);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
      objc_stub::class(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_InvalidvalueforNSUnderlyingErrorKeyinuserinfo_Dataatkey____Classtype____);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
  else {
    do {
      IVar2 = IVar1;
      if (IVar2 == 0) goto LAB_10073ceb0;
      NSMutableArray::addObject_(self_01,IVar2);
      IVar1 = objc_stub::userInfo(IVar2);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
      IVar3 = NSError::class((ID)&_OBJC_CLASS___NSError);
      IVar3 = objc_stub::isKindOfClass_(IVar1,IVar3);
      IVar1 = objc_stub::userInfo(IVar2);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
    } while ((IVar3 & 1) != 0);
    if ((IVar1 != 0) &&
       (IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3),
       (int)IVar1 != 0)) {
      IVar1 = NSString::stringWithUTF8String_
                        ((ID)&_OBJC_CLASS___NSString,
                         "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m"
                        );
      IVar1 = NSString::lastPathComponent(IVar1);
      NSString::stringByDeletingPathExtension(IVar1);
      IVar1 = objc_stub::userInfo(IVar2);
      objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
      IVar1 = objc_stub::userInfo(IVar2);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,uVar4);
      objc_stub::class(IVar1);
      NSString::stringWithFormat_
                ((ID)&_OBJC_CLASS___NSString,
                 &cf_InvalidvalueforNSUnderlyingErrorKeyinuserinfo_Dataatkey____Classtype____);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
      objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    }
  }
LAB_10073ceb0:
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0xc2000000;
  local_80 = FUN_10073cfa0;
  puStack_78 = &DAT_1009e87f8;
  local_70 = IVar1;
  IStack_68 = param_1;
  NSMutableArray::enumerateObjectsWithOptions_usingBlock_(self_01,2,&local_90);
  objc_stub::setExceptions_(self_00,IVar1);
  IVar1 = objc_stub::userInfo(param_3);
  FUN_10077cc54();
  setUserInfo_withEvent_(param_1,IVar1,self_00);
  return self_00;
}

