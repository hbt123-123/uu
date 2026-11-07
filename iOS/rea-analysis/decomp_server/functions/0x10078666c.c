// rea decompile_all
// name: FUN_10078666c
// address: 0x10078666c
// body: available
// range: 0x10078666c-0x100786723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100786720 to 0x1007f2400 objc_stub::setDateFormat: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10078666c(void)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSDateFormatter);
  DAT_100b2e070 = IVar1;
  IVar2 = objc_stub::localeWithLocaleIdentifier_((ID)&_OBJC_CLASS___NSLocale,&cf_en_US_POSIX);
  objc_stub::setLocale_(IVar1,IVar2);
  IVar1 = objc_stub::FUN_1007f7060((ID)&_OBJC_CLASS___NSTimeZone,&cf_UTC);
  objc_stub::FUN_1007f50c0(DAT_100b2e070,IVar1);
  objc_stub::setDateFormat_(DAT_100b2e070,&cf_yyyy_MM_dd_T_HH_mm_ss_Z_);
  return;
}

