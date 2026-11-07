// rea decompile_all
// name: SAEventRecord::flushContent
// address: 0x100710974
// body: available
// range: 0x100710974-0x100710a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100710a3c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAEventRecord::flushContent(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  ID self;
  double extraout_d0;
  
  bVar2 = isValid(param_1);
  if (bVar2 == 0) {
    IVar3 = 0;
  }
  else {
    IVar3 = NSDate::date((ID)&_OBJC_CLASS___NSDate);
    NSDate::timeIntervalSince1970(IVar3);
    IVar3 = NSNumber::numberWithUnsignedLongLong_
                      ((ID)&_OBJC_CLASS___NSNumber,(long)(extraout_d0 * 1000.0));
    self = *(ID *)(param_1 + 0x20);
    bVar2 = isEncrypted(param_1);
    pcVar1 = &cf_flush_time;
    if (bVar2 == 0) {
      pcVar1 = &cf__flush_time;
    }
    objc_stub::setObject_forKeyedSubscript_(self,IVar3,pcVar1);
    IVar3 = content(param_1);
  }
  return IVar3;
}

