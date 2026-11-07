// rea decompile_all
// name: FUN_100376220
// address: 0x100376220
// body: available
// range: 0x100376220-0x1003762fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100376220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = StreamerWrapper::shared((ID)&objc::class_t::StreamerWrapper);
  IVar1 = StreamerWrapper::delegate(IVar1);
  if ((IVar1 != 0) &&
     (IVar2 = IVar1,
     _objc_opt_respondsToSelector(IVar1,"streamerDidReceiveMuMuData:index:type:data:size:"),
     (IVar2 & 1) != 0)) {
    IVar2 = NSData::dataWithBytes_length_((ID)&_OBJC_CLASS___NSData,param_4,(long)(int)param_5);
    objc_stub::streamerDidReceiveMuMuData_index_type_data_size_
              (IVar1,param_1,param_2,param_3,IVar2,param_5);
  }
  return 0;
}

