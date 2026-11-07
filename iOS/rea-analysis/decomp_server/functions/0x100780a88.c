// rea decompile_all
// name: SentryCrashReportConverter::stackTraceForThreadIndex:
// address: 0x100780a88
// body: available
// range: 0x100780a88-0x100780b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100780b14 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::stackTraceForThreadIndex_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_1007f5ca0(param_1);
  self = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar2 = objc_stub::FUN_1007f0200(param_1,param_3);
  IVar1 = objc_stub::initWithFrames_registers_((ID)self,IVar1,IVar2);
  objc_stub::FUN_1007e9e20(IVar1);
  return IVar1;
}

