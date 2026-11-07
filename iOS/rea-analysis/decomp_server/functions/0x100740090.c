// rea decompile_all
// name: FUN_100740090
// address: 0x100740090
// body: available
// range: 0x100740090-0x1007402af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007402ac to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100740090(long param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_1007edbe0(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::FUN_1007edbe0(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::FUN_1007e62c0(IVar2);
  IVar1 = objc_stub::FUN_1007edc60(IVar1,IVar2);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_calendar);
  IVar1 = objc_stub::FUN_1007edbe0(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::FUN_1007edbe0(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::FUN_1007edc00(IVar2);
  IVar1 = objc_stub::FUN_1007edc80(IVar1,IVar2);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_display_name);
  IVar1 = objc_stub::FUN_1007edbe0(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::FUN_1007edc00(IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_locale);
  IVar1 = objc_stub::FUN_1007f7000((ID)&objc::class_t::SentryLocale);
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_is_24_hour_format);
  IVar1 = objc_stub::FUN_1007f7140(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::name(IVar1);
  objc_stub::setObject_forKeyedSubscript_(param_2,IVar1,&cf_timezone);
  return 0;
}

