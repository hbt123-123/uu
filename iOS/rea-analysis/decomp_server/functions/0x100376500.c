// rea decompile_all
// name: FUN_100376500
// address: 0x100376500
// body: available
// range: 0x100376500-0x1003765ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003765ec to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100376500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = StreamerWrapper::shared((ID)&objc::class_t::StreamerWrapper);
  IVar1 = StreamerWrapper::delegate(IVar1);
  if ((IVar1 != 0) &&
     (IVar2 = IVar1,
     _objc_opt_respondsToSelector
               (IVar1,"streamerDidReceiveEventReport:eventName:length:json:jsonLength:"),
     (IVar2 & 1) != 0)) {
    IVar2 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,param_2);
    IVar3 = NSString::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,param_4);
    objc_stub::streamerDidReceiveEventReport_eventName_length_json_jsonLength_
              (IVar1,param_1,IVar2,param_3,IVar3,param_5);
  }
  return 0;
}

