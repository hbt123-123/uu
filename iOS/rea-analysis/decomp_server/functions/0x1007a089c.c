// rea decompile_all
// name: SentryTraceContext::initWithTraceId:publicKey:releaseName:environment:transaction:userSegment:sampleRate:sampleRand:sampled:replayId:
// address: 0x1007a089c
// body: available
// range: 0x1007a089c-0x1007a0a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x60 bytes */

ID SentryTraceContext::
   initWithTraceId_publicKey_releaseName_environment_transaction_userSegment_sampleRate_sampleRand_sampled_replayId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12)

{
  ID IVar1;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTraceContext;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(ID *)(IVar1 + 0x20) = param_6;
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x28) = param_7;
    *(ID *)(IVar1 + 0x30) = param_8;
    *(ID *)(IVar1 + 0x40) = param_10;
    *(ID *)(IVar1 + 0x38) = param_9;
    *(ID *)(IVar1 + 0x48) = param_11;
    *(ID *)(IVar1 + 0x50) = param_12;
  }
  return IVar1;
}

