// rea decompile_all
// name: SentryEnvelopeAttachmentHeader::initWithType:length:
// address: 0x100756470
// body: available
// range: 0x100756470-0x1007564b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID SentryEnvelopeAttachmentHeader::initWithType_length_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryEnvelopeAttachmentHeader;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"initWithType:length:");
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + (long)_attachmentType) = 0;
  }
  return IVar1;
}

