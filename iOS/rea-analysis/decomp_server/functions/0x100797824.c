// rea decompile_all
// name: FUN_100797824
// address: 0x100797824
// body: available
// range: 0x100797824-0x100797adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007979d8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100797824(ID param_1,ID param_2)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = objc_stub::FUN_1007f7700(param_1);
  IVar1 = objc_stub::FUN_1007f0c20(IVar1);
  if (IVar1 == 0) {
    IVar3 = objc_stub::FUN_1007f7400(param_2);
    IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,0);
    FUN_100797680(IVar3,param_1,IVar1);
    if (IVar3 == 0) {
      IVar1 = objc_stub::FUN_1007f7700(param_1);
      IVar1 = objc_stub::FUN_1007eefa0(IVar1);
      if (IVar1 == 0) {
        IVar3 = objc_stub::FUN_1007f73e0(param_2);
        FUN_1007977e4(IVar3);
      }
      else {
        pcVar2 = &objc::class_t::SentrySamplerDecision;
        _objc_alloc();
        IVar1 = objc_stub::FUN_1007f7700(param_1);
        IVar1 = objc_stub::FUN_1007eefa0(IVar1);
        IVar3 = objc_stub::FUN_1007f7700(param_1);
        IVar3 = objc_stub::sampleRate(IVar3);
        IVar4 = objc_stub::FUN_1007f7700(param_1);
        IVar4 = objc_stub::FUN_1007f0be0(IVar4);
        IVar3 = objc_stub::initWithDecision_forSampleRate_withSampleRand_
                          ((ID)pcVar2,IVar1,IVar3,IVar4);
      }
    }
    else {
      FUN_100797704(IVar3);
    }
  }
  else {
    pcVar2 = &objc::class_t::SentrySamplerDecision;
    _objc_alloc();
    IVar1 = objc_stub::FUN_1007f7700(param_1);
    IVar1 = objc_stub::FUN_1007f0c20(IVar1);
    IVar3 = objc_stub::FUN_1007f7700(param_1);
    IVar3 = objc_stub::sampleRate(IVar3);
    IVar4 = objc_stub::FUN_1007f7700(param_1);
    IVar4 = objc_stub::FUN_1007f0be0(IVar4);
    IVar3 = objc_stub::initWithDecision_forSampleRate_withSampleRand_((ID)pcVar2,IVar1,IVar3,IVar4);
  }
  return IVar3;
}

