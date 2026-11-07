// rea decompile_all
// name: SentryDispatchFactory::sourceWithInterval:leeway:queueName:attributes:eventHandler:
// address: 0x10074e5f0
// body: available
// range: 0x10074e5f0-0x10074e6b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074e6b0 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryDispatchFactory::sourceWithInterval_leeway_queueName_attributes_eventHandler_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             const_char__ param_5,ID param_6,ID param_7,undefined4 param_8)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryDispatchSourceWrapper;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007efaa0(param_1,param_5,param_6);
  IVar1 = objc_stub::FUN_1007eb420((ID)self,param_3,param_4,IVar1,param_7);
  return IVar1;
}

