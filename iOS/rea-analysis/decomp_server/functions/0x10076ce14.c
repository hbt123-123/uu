// rea decompile_all
// name: SentryHttpDateParser::init
// address: 0x10076ce14
// body: available
// range: 0x10076ce14-0x10076cf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHttpDateParser::init(ID param_1,SEL param_2)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  ID IVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryHttpDateParser;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    self_00 = &_OBJC_CLASS___NSDateFormatter;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    objc_stub::FUN_1007f2420(self,IVar1);
    IVar1 = objc_stub::dateFormatter(self);
    objc_stub::setDateFormat_(IVar1,&cf_EEE___dd__MMM__yyyyHH___mm___sszzz);
    IVar1 = objc_stub::dateFormatter(self);
    IVar2 = objc_stub::FUN_1007f7080((ID)&_OBJC_CLASS___NSTimeZone,&cf_GMT);
    objc_stub::FUN_1007f50c0(IVar1,IVar2);
  }
  return self;
}

