// rea decompile_all
// name: SentryStacktraceBuilder::retrieveStacktraceFromCursor:
// address: 0x1007a3d6c
// body: available
// range: 0x1007a3d6c-0x1007a3f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a3f30 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x378 bytes */

ID SentryStacktraceBuilder::retrieveStacktraceFromCursor_
             (ID param_1,undefined8 param_2,long *param_3)

{
  ID IVar1;
  long *plVar2;
  ID IVar3;
  class_t *self;
  ID IVar4;
  undefined1 auStack_3b8 [872];
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  plVar2 = param_3;
  (*(code *)param_3[7])();
  IVar4 = 0;
  if ((int)plVar2 != 0) {
    do {
      if (*param_3 == -0x4d3) {
        if (IVar4 != 0) {
          IVar3 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
          objc_stub::FUN_1007f4ca0(IVar4,IVar3);
        }
      }
      else {
        IVar3 = objc_stub::FUN_1007f6ba0(param_1);
        if (((int)IVar3 == 0) || (plVar2 = param_3, (*(code *)param_3[8])(), (int)plVar2 != 0)) {
          IVar4 = objc_stub::FUN_1007e7500(param_1);
          _memcpy(auStack_3b8,param_3,0x368);
          IVar4 = objc_stub::FUN_1007ee0e0(IVar4,auStack_3b8);
          objc_stub::addObject_(IVar1,IVar4);
        }
      }
      plVar2 = param_3;
      (*(code *)param_3[7])();
    } while (((ulong)plVar2 & 1) != 0);
  }
  IVar1 = objc_stub::FUN_1007f04a0((ID)&objc::class_t::SentryFrameRemover,IVar1);
  IVar1 = objc_stub::reverseObjectEnumerator(IVar1);
  IVar1 = objc_stub::allObjects(IVar1);
  self = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar1 = objc_stub::initWithFrames_registers_
                    ((ID)self,IVar1,*(undefined8 *)PTR____NSDictionary0___1009953b0);
  return IVar1;
}

