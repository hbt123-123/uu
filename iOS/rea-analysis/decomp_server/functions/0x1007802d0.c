// rea decompile_all
// name: SentryCrashReportConverter::threadAtIndex:
// address: 0x1007802d0
// body: available
// range: 0x1007802d0-0x10078055b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100780558 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::threadAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  ID IVar3;
  
  IVar1 = objc_stub::threads(param_1);
  IVar1 = objc_stub::count(IVar1);
  if (param_3 < IVar1) {
    IVar1 = objc_stub::threads(param_1);
    IVar2 = objc_stub::objectAtIndexedSubscript_(IVar1,param_3);
    self = &objc::class_t::SentryThread;
    _objc_alloc();
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_index);
    IVar1 = objc_stub::initWithThreadId_((ID)self,IVar1);
    IVar3 = objc_stub::FUN_1007f5d20(param_1,param_3);
    objc_stub::setStacktrace_(IVar1,IVar3);
    IVar3 = objc_stub::stacktrace(IVar1);
    IVar3 = objc_stub::frames(IVar3);
    IVar3 = objc_stub::count(IVar3);
    if (IVar3 == 0) {
      objc_stub::setStacktrace_(IVar1,0);
    }
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_crashed);
    objc_stub::setCrashed_(IVar1,IVar3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_current_thread);
    objc_stub::FUN_1007f2220(IVar1,IVar3);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_name);
    objc_stub::setName_(IVar1,IVar3);
    IVar3 = objc_stub::threadId(IVar1);
    IVar3 = objc_stub::intValue(IVar3);
    IVar3 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 == 0));
    objc_stub::FUN_1007f36e0(IVar1,IVar3);
    IVar3 = objc_stub::name(IVar1);
    if (IVar3 == 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_dispatch_queue);
      objc_stub::setName_(IVar1,IVar2);
    }
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}

