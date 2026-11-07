// rea decompile_all
// name: SentryOptions::init
// address: 0x100752858
// body: available
// range: 0x100752858-0x100752eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100752eb0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::init(ID param_1,SEL param_2)

{
  int iVar1;
  ID self;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  objc_super local_98;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_98.super_class = &objc::class_t::SentryOptions;
  local_98.receiver = param_1;
  self = _objc_msgSendSuper2(&local_98,"init");
  if (self != 0) {
    objc_stub::FUN_1007f2b20(self,1);
    objc_stub::FUN_1007f4b20(self,0x4000000000000000);
    objc_stub::FUN_1007f28c0(self,1);
    objc_stub::FUN_1007f2ae0(self,0);
    objc_stub::FUN_1007f2a60(self,0);
    objc_stub::FUN_1007f25e0(self,1);
    objc_stub::FUN_1007f2480(self,0);
    objc_stub::FUN_1007f3aa0(self,100);
    objc_stub::FUN_1007f3ac0(self,0x1e);
    IVar2 = objc_stub::FUN_1007e80e0((ID)&objc::class_t::SentryOptions);
    uVar5 = *(undefined8 *)(self + 0xa0);
    *(ID *)(self + 0xa0) = IVar2;
    IVar2 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uVar5,1);
    objc_stub::setSampleRate_(self,IVar2);
    objc_stub::FUN_1007f2860(self,1);
    objc_stub::FUN_1007f2900(self,0);
    objc_stub::FUN_1007f2b00(self,1);
    IVar2 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,30000);
    IVar2 = objc_stub::FUN_1007f7b40(IVar2);
    objc_stub::FUN_1007f4ac0(self,IVar2 & 0xffffffff);
    objc_stub::FUN_1007f1be0(self,1);
    objc_stub::FUN_1007f3a80(self,0x1400000);
    objc_stub::FUN_1007f48a0(self,0);
    objc_stub::FUN_1007f2840(self,1);
    objc_stub::FUN_1007f29e0(self,0);
    objc_stub::FUN_1007f2a00(self,0);
    objc_stub::FUN_1007f2880(self,1);
    objc_stub::setEnvironment_(self,&cf_production);
    objc_stub::FUN_1007f2aa0(self,0);
    objc_stub::FUN_1007f3520(self,&PTR___NSConcreteGlobalBlock_1009e8c78);
    pcVar3 = &objc::class_t::_TtC6Sentry25SentryExperimentalOptions;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)pcVar3);
    uVar5 = *(undefined8 *)(self + 0x140);
    *(ID *)(self + 0x140) = IVar2;
    *(undefined1 *)(self + 0x19) = 0;
    *(undefined1 *)(self + 8) = 0;
    objc_stub::FUN_1007f2800(self,uVar5,1);
    objc_stub::FUN_1007f1b40(self,0x4000000000000000);
    objc_stub::FUN_1007f2820(self,1);
    objc_stub::FUN_1007f29c0(self,1);
    objc_stub::FUN_1007f28e0(self,1);
    objc_stub::FUN_1007f29a0(self,1);
    objc_stub::FUN_1007f5260(self,0);
    *(undefined1 *)(self + 0x1d) = 0;
    objc_stub::FUN_1007f42a0(self,0);
    objc_stub::FUN_1007f28a0(self,1);
    *(undefined1 *)(self + 0x1a) = 1;
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSSet);
    objc_stub::FUN_1007f4e60(self,IVar2);
    objc_stub::FUN_1007f4880(self,1);
    objc_stub::FUN_1007f4e40(self,0);
    objc_stub::FUN_1007f2a80(self,0);
    objc_stub::FUN_1007f4c60(self,&cf_http___localhost_8969_stream);
    IVar2 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    IVar2 = objc_stub::environment(IVar2);
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_SENTRY_DSN);
    IVar4 = objc_stub::length(IVar2);
    if (IVar4 != 0) {
      objc_stub::FUN_1007f2760(self,IVar2);
    }
    IVar2 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar2 = objc_stub::infoDictionary(IVar2);
    IVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_CFBundleExecutable);
    if (IVar4 == 0) {
      IVar4 = objc_stub::new((ID)&_OBJC_CLASS___NSArray);
    }
    else {
      local_70 = IVar4;
      IVar4 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_70,1);
    }
    *(ID *)(self + 0xd8) = IVar4;
    IVar4 = objc_stub::new((ID)&_OBJC_CLASS___NSArray);
    *(ID *)(self + 0xe0) = IVar4;
    if (IVar2 != 0) {
      objc_stub::objectForKeyedSubscript_(IVar2,&cf_CFBundleIdentifier);
      objc_stub::objectForKeyedSubscript_(IVar2,&cf_CFBundleShortVersionString);
      objc_stub::objectForKeyedSubscript_(IVar2,&cf_CFBundleVersion);
      IVar2 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_________);
      objc_stub::setReleaseName_(self,IVar2);
    }
    IVar2 = objc_stub::regularExpressionWithPattern_options_error_
                      ((ID)&_OBJC_CLASS___NSRegularExpression,&cf___,1,0);
    local_78 = IVar2;
    IVar4 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_78,1);
    objc_stub::FUN_1007f5240(self,IVar4);
    local_80 = IVar2;
    IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_80,1);
    objc_stub::FUN_1007f2e20(self,IVar2);
    pcVar3 = &objc::class_t::SentryHttpStatusCodeRange;
    _objc_alloc();
    local_88 = objc_stub::FUN_1007ebd40((ID)pcVar3,500,599);
    IVar2 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_88,1);
    objc_stub::FUN_1007f2e00(self,IVar2);
    IVar2 = 0xd;
    _NSSearchPathForDirectoriesInDomains(0xd,1,1);
    IVar2 = objc_stub::firstObject(IVar2);
    objc_stub::FUN_1007f1ec0(self,IVar2);
    iVar1 = 1;
    FUN_1007070fc(1,0xc,0,0);
    if (iVar1 != 0) {
      objc_stub::FUN_1007f2960(self,0);
      objc_stub::FUN_1007f2980(self,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

