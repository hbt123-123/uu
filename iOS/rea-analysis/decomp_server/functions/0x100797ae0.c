// rea decompile_all
// name: FUN_100797ae0
// address: 0x100797ae0
// body: available
// range: 0x100797ae0-0x100797c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100797c7c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100797ae0(undefined8 param_1,ID param_2,ID param_3)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  
  IVar1 = objc_stub::decision(param_2);
  if (IVar1 == 1) {
    IVar1 = objc_stub::FUN_1007e8de0(param_3);
    if ((int)IVar1 == 0) {
      IVar1 = objc_stub::FUN_1007ef7a0(param_3);
      IVar3 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,0);
      FUN_100797680(IVar1,param_1,IVar3);
      if (IVar1 == 0) {
        IVar1 = objc_stub::profilesSampleRate(param_3);
        FUN_1007977e4(IVar1);
      }
      else {
        FUN_100797704(IVar1);
      }
    }
    else {
      pcVar2 = &objc::class_t::SentrySamplerDecision;
      _objc_alloc();
      IVar1 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,0x3ff0000000000000);
      IVar3 = objc_stub::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,0x3ff0000000000000);
      IVar1 = objc_stub::initWithDecision_forSampleRate_withSampleRand_((ID)pcVar2,1,IVar1,IVar3);
    }
  }
  else {
    pcVar2 = &objc::class_t::SentrySamplerDecision;
    _objc_alloc();
    IVar1 = objc_stub::initWithDecision_forSampleRate_withSampleRand_((ID)pcVar2,2,0,0);
  }
  return IVar1;
}

