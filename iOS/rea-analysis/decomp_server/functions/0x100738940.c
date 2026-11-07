// rea decompile_all
// name: SentryLocale::timeIs24HourFormat
// address: 0x100738940
// body: available
// range: 0x100738940-0x100738a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryLocale::timeIs24HourFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = NSDateFormatter::new((ID)&_OBJC_CLASS___NSDateFormatter);
  NSDateFormatter::setDateStyle_(IVar1,0);
  NSDateFormatter::setTimeStyle_(IVar1,1);
  IVar2 = NSDate::date((ID)&_OBJC_CLASS___NSDate);
  IVar2 = NSDateFormatter::stringFromDate_(IVar1,IVar2);
  IVar3 = NSDateFormatter::AMSymbol(IVar1);
  IVar3 = NSDateFormatter::rangeOfString_(IVar2,IVar3);
  IVar1 = NSDateFormatter::PMSymbol(IVar1);
  IVar1 = NSDateFormatter::rangeOfString_(IVar2,IVar1);
  return (bool)(IVar3 == 0x7fffffffffffffff && IVar1 == 0x7fffffffffffffff);
}

