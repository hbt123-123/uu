// rea decompile_all
// name: SentryHub::transactionContext:withSampled:sampleRate:sampleRand:
// address: 0x1007679cc
// body: available
// range: 0x1007679cc-0x100767b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100767b9c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryHub::transactionContext_withSampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  class_t *self;
  
  self = &objc::class_t::SentryTransactionContext;
  _objc_alloc();
  IVar1 = objc_stub::name(param_3);
  IVar2 = objc_stub::FUN_1007ee7c0(param_3);
  IVar3 = objc_stub::FUN_1007eed80(param_3);
  IVar4 = objc_stub::FUN_1007eee20(param_3);
  IVar5 = objc_stub::traceId(param_3);
  IVar6 = objc_stub::FUN_1007f5c00(param_3);
  IVar7 = objc_stub::FUN_1007eefc0(param_3);
  IVar8 = objc_stub::FUN_1007eefa0(param_3);
  IVar9 = objc_stub::FUN_1007eef80(param_3);
  IVar10 = objc_stub::FUN_1007eef60(param_3);
  IVar1 = objc_stub::
          initWithName_nameSource_operation_origin_traceId_spanId_parentSpanId_sampled_parentSampled_sampleRate_parentSampleRate_sampleRand_parentSampleRand_
                    ((ID)self,IVar1,IVar2,IVar3,IVar4,IVar5,IVar6,IVar7,param_4,IVar8,param_5,IVar9,
                     param_6,IVar10);
  return IVar1;
}

