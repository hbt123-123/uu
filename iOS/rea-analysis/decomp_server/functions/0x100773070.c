// rea decompile_all
// name: SentryEnvelope::initWithSessions:
// address: 0x100773070
// body: available
// range: 0x100773070-0x100773197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEnvelope::initWithSessions_(ID param_1,SEL param_2,ID param_3)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ulong uVar4;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::count(param_3);
  IVar1 = objc_stub::initWithCapacity_((ID)self,IVar1);
  IVar2 = objc_stub::count(param_3);
  if (IVar2 != 0) {
    uVar4 = 0;
    do {
      pcVar3 = &objc::class_t::SentryEnvelopeItem;
      _objc_alloc();
      IVar2 = objc_stub::objectAtIndex_(param_3,uVar4);
      IVar2 = objc_stub::initWithSession_((ID)pcVar3,IVar2);
      objc_stub::addObject_(IVar1,IVar2);
      uVar4 = uVar4 + 1;
      IVar2 = objc_stub::count(param_3);
    } while (uVar4 < IVar2);
  }
  pcVar3 = &objc::class_t::SentryEnvelopeHeader;
  _objc_alloc();
  IVar2 = objc_stub::FUN_1007ebac0((ID)pcVar3,0);
  IVar1 = objc_stub::initWithHeader_items_(param_1,IVar2,IVar1);
  return IVar1;
}

