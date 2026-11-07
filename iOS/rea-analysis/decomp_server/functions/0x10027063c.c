// rea decompile_all
// name: FUN_10027063c
// address: 0x10027063c
// body: available
// range: 0x10027063c-0x10027069b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027063c(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self_00 = _objc_msgSend((ID)self,"init");
  _objc_msgSend(self_00,"setTimeStyle:",1);
  _objc_msgSend(self_00,"setDateStyle:",1);
  DAT_100b36428 = self_00;
  return;
}

