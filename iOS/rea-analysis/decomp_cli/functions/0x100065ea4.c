// rea decompile_all
// name: FUN_100065ea4
// address: 0x100065ea4
// body: available
// range: 0x100065ea4-0x100065f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100065ea4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_1001041a0;
  FUN_10000eb08(&DAT_1001041a0,&DAT_1000d4300);
  _swift_initStaticObject();
  puVar1 = PTR___swiftEmptySetSingleton_1000f0750;
  puVar3 = puVar2;
  FUN_100066b80();
  _swift_arrayDestroy(puVar2 + 0x20,2,&DAT_1000f8130);
  _swift_bridgeObjectRelease(puVar1);
  return puVar3;
}

