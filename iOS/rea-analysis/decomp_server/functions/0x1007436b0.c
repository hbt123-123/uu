// rea decompile_all
// name: SentryTransactionContext::initWithName:nameSource:operation:origin:sampled:sampleRate:sampleRand:
// address: 0x1007436b0
// body: available
// range: 0x1007436b0-0x1007437c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

ID SentryTransactionContext::initWithName_nameSource_operation_origin_sampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
             unsigned_long_long param_7,ID param_8,ID param_9)

{
  ID self;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::SentryTransactionContext;
  local_60 = param_1;
  self = SentrySpanContext::initWithOperation_origin_sampled_
                   ((ID)&local_60,"initWithOperation:origin:sampled:",param_5,param_6,param_7);
  if (self != 0) {
    objc_stub::
    commonInitWithName_source_sampleRate_sampleRand_parentSampled_parentSampleRate_parentSampleRand_
              (self,param_3,param_4,param_8,param_9,0,0,0);
  }
  return self;
}

