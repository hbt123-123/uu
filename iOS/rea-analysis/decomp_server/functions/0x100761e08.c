// rea decompile_all
// name: SentryNSURLSessionTaskSearch::urlSessionTaskClassesToTrack
// address: 0x100761e08
// body: available
// range: 0x100761e08-0x100761f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100761f7c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryNSURLSessionTaskSearch::urlSessionTaskClassesToTrack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined *self_00;
  ID self_01;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::ephemeralSessionConfiguration((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
  IVar1 = objc_stub::FUN_1007f1960((ID)&_OBJC_CLASS___NSURLSession,IVar1);
  IVar2 = objc_stub::URLWithString_((ID)&_OBJC_CLASS___NSURL,&cf___);
  IVar2 = objc_stub::FUN_1007e7aa0(IVar1,IVar2);
  self = objc_stub::class(IVar2);
  self_00 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_01 = objc_stub::init((ID)self_00);
  pcVar3 = &cf_setState_;
  _NSSelectorFromString(&cf_setState_);
  while (IVar4 = self, _class_getInstanceMethod(self,pcVar3), IVar4 != 0) {
    IVar5 = objc_stub::FUN_1007f6a80(self);
    IVar4 = self;
    _class_getInstanceMethod(self,pcVar3);
    _method_getImplementation();
    _class_getInstanceMethod(IVar5,pcVar3);
    _method_getImplementation();
    if (IVar4 != IVar5) {
      objc_stub::addObject_(self_01,self);
    }
    self = objc_stub::FUN_1007f6a80(self);
  }
  objc_stub::FUN_1007e6420(IVar2);
  objc_stub::FUN_1007e9d00(IVar1);
  IVar1 = objc_stub::copy(self_01);
  return IVar1;
}

