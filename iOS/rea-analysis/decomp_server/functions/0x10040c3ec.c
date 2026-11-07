// rea decompile_all
// name: FUN_10040c3ec
// address: 0x10040c3ec
// body: available
// range: 0x10040c3ec-0x10040c453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040c3ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  
  puVar1 = &DAT_100a8aa70;
  FUN_100004bb4(&DAT_100a8aa70,&DAT_100824c80);
  _swift_allocObject();
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"init");
  puVar2 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  *(ID *)(puVar1 + 0x10) = IVar3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}

