// rea decompile_all
// name: SentryTransactionContext::initWithName:nameSource:operation:origin:traceId:spanId:parentSpanId:parentSampled:parentSampleRate:parentSampleRand:
// address: 0x100743804
// body: available
// range: 0x100743804-0x100743973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x60 bytes */

ID SentryTransactionContext::
   initWithName_nameSource_operation_origin_traceId_spanId_parentSpanId_parentSampled_parentSampleRate_parentSampleRand_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,unsigned_long_long param_10,ID param_11,ID param_12)

{
  ID self;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::SentryTransactionContext;
  local_70 = param_1;
  self = SentrySpanContext::
         initWithTraceId_spanId_parentId_operation_spanDescription_origin_sampled_
                   ((ID)&local_70,
                    "initWithTraceId:spanId:parentId:operation:spanDescription:origin:sampled:",
                    param_7,param_8,param_9,param_5,0,param_6,0);
  if (self != 0) {
    objc_stub::
    commonInitWithName_source_sampleRate_sampleRand_parentSampled_parentSampleRate_parentSampleRand_
              (self,param_3,param_4,0,0,param_10,param_11,param_12);
  }
  return self;
}

