// rea decompile_all
// name: FUN_100004d28
// address: 0x100004d28
// body: available
// range: 0x100004d28-0x100004d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100004d28(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  
  lVar1 = 0;
  FUN_100121d70();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(lVar1 + 0x10) = IVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return lVar1;
}

