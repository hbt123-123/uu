// rea decompile_all
// name: FUN_10039e250
// address: 0x10039e250
// body: available
// range: 0x10039e250-0x10039e2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10039e250(void)

{
  undefined *self;
  ID IVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + 0x18) = IVar1;
  return unaff_x20;
}

