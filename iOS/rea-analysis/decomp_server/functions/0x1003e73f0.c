// rea decompile_all
// name: FUN_1003e73f0
// address: 0x1003e73f0
// body: available
// range: 0x1003e73f0-0x1003e7477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e73f0(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  
  if (DAT_100a89348 != -1) {
    _swift_once(&DAT_100a89348,thunk_FUN_1003e74bc);
  }
  lVar1 = 0;
  FUN_1003e82a8();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(lVar1 + 0x18) = IVar2;
  DAT_100b368f8 = lVar1;
  return;
}

