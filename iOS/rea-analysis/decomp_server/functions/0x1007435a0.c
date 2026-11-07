// rea decompile_all
// name: SentryTransactionContext::initWithName:operation:sampled:sampleRate:sampleRand:
// address: 0x1007435a0
// body: available
// range: 0x1007435a0-0x1007435df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID SentryTransactionContext::initWithName_operation_sampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
             ID param_7)

{
  ID IVar1;
  
  IVar1 = initWithName_nameSource_operation_origin_sampled_sampleRate_sampleRand_
                    (param_1,param_3,0,param_4,(ID)&cf_manual,param_5,param_6,param_7);
  return IVar1;
}

