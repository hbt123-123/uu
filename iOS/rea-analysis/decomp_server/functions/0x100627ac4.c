// rea decompile_all
// name: FUN_100627ac4
// address: 0x100627ac4
// body: available
// range: 0x100627ac4-0x100627b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100627ac4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100ab7cc0;
  FUN_100004bb4(&DAT_100ab7cc0,&DAT_100848cf0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 8;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  puVar2 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  *(undefined **)(puVar1 + 0x20) = puVar3;
  puVar3 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_100ab5828);
  *(undefined **)(puVar1 + 0x28) = puVar3;
  puVar3 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_100ab5c50);
  *(undefined **)(puVar1 + 0x30) = puVar3;
  _swift_initStaticObject(puVar2,&DAT_100ab6078);
  *(undefined **)(puVar1 + 0x38) = puVar2;
  return puVar1;
}

