// rea decompile_all
// name: SentryDiscardedEvent::initWithReason:category:quantity:
// address: 0x100786924
// body: available
// range: 0x100786924-0x10078697f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID SentryDiscardedEvent::initWithReason_category_quantity_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             unsigned_long_long param_5)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryDiscardedEvent;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(unsigned_long_long *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}

