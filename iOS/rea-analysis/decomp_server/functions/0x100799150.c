// rea decompile_all
// name: FUN_100799150
// address: 0x100799150
// body: available
// range: 0x100799150-0x1007992c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007992c0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100799150(long param_1,ID param_2)

{
  int iVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar2 = objc_stub::absoluteSystemTimestamp(param_2);
  FUN_10074411c(uVar2,*(undefined8 *)(param_1 + 0x28));
  if ((uVar2 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    IVar3 = objc_stub::absoluteSystemTimestamp(param_2);
    FUN_10074411c(uVar6,IVar3);
    if ((int)uVar6 != 0) {
      IVar3 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      IVar4 = objc_stub::absoluteSystemTimestamp(param_2);
      FUN_100744128(uVar6,IVar4);
      iVar1 = _snprintf((char *)0x0,0,"%llu");
      pcVar5 = _malloc((long)(iVar1 + 1));
      _snprintf(pcVar5,(long)(iVar1 + 1),"%llu");
      IVar4 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar5,1);
      _free(pcVar5);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_elapsed_since_start_ns);
      IVar4 = objc_stub::value(param_2);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar3,IVar4,&cf_value);
      objc_stub::addObject_(*(ID *)(param_1 + 0x20),IVar3);
    }
  }
  return 0;
}

