// rea decompile_all
// name: SentryTransactionContext::getThreadInfo
// address: 0x100743bdc
// body: available
// range: 0x100743bdc-0x100743c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTransactionContext::getThreadInfo(ID param_1,SEL param_2)

{
  void *pvVar1;
  void *pvVar2;
  class_t *self;
  ID IVar3;
  void *local_38;
  
  FUN_10079abe4(&local_38);
  pvVar1 = local_38;
  FUN_10079b124(local_38);
  pvVar2 = local_38;
  local_38 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_10079ab58();
    operator_delete(pvVar2);
  }
  self = &objc::class_t::SentryThread;
  _objc_alloc();
  IVar3 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,pvVar1);
  IVar3 = objc_stub::initWithThreadId_((ID)self,IVar3);
  setThreadInfo_(param_1,IVar3);
  return;
}

