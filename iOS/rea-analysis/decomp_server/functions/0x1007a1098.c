// rea decompile_all
// name: SentryTraceContext::initWithDict:
// address: 0x1007a1098
// body: available
// range: 0x1007a1098-0x1007a139f inclusive
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

ID SentryTraceContext::initWithDict_(ID param_1,SEL param_2,ID param_3)

{
  class_t *self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID local_68;
  
  self = &objc::class_t::_TtC6Sentry8SentryId;
  _objc_alloc();
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_trace_id);
  IVar1 = objc_stub::initWithUUIDString_((ID)self,IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(param_3,&cf_public_key);
  if (IVar1 == 0 || IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_user);
    if (IVar3 == 0) {
      local_68 = objc_stub::objectForKeyedSubscript_(param_3,&cf_user_segment);
    }
    else {
      IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_user);
      IVar4 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_segment);
      IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
      IVar4 = objc_stub::isKindOfClass_(IVar4,IVar5);
      if ((int)IVar4 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_segment);
      }
    }
    IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_release);
    IVar4 = objc_stub::objectForKeyedSubscript_(param_3,&cf_environment);
    IVar5 = objc_stub::objectForKeyedSubscript_(param_3,&cf_transaction);
    IVar6 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sample_rate);
    IVar7 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sample_rand);
    IVar8 = objc_stub::objectForKeyedSubscript_(param_3,&cf_sampled);
    IVar9 = objc_stub::objectForKeyedSubscript_(param_3,&cf_replay_id);
    IVar1 = objc_stub::FUN_1007ec400
                      (param_1,IVar1,IVar2,IVar3,IVar4,IVar5,local_68,IVar6,IVar7,IVar8,IVar9,IVar4,
                       IVar1,IVar2);
  }
  return IVar1;
}

