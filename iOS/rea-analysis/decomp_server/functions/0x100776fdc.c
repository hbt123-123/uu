// rea decompile_all
// name: SentryTransaction::initWithTrace:children:
// address: 0x100776fdc
// body: available
// range: 0x100776fdc-0x1007770d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTransaction::initWithTrace_children_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryTransaction;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::timestamp(param_3);
    objc_stub::setTimestamp_(self,IVar1);
    IVar1 = objc_stub::FUN_1007f5f60(param_3);
    objc_stub::FUN_1007f4d40(self,IVar1);
    objc_stub::FUN_1007f51e0(self,param_3);
    objc_stub::setSpans_(self,param_4);
    objc_stub::setType_(self,&cf_transaction);
  }
  return self;
}

