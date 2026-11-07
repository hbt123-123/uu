// rea decompile_all
// name: FUN_1007cdd44
// address: 0x1007cdd44
// body: available
// range: 0x1007cdd44-0x1007cdde7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007cdd44(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100abd098;
  FUN_1007b4550();
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 0xc;
  *(undefined8 *)(puVar1 + 0x10) = 6;
  *(undefined8 *)(puVar1 + 0x20) = 0x656e6f6e;
  *(undefined8 *)(puVar1 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar1 + 0x30) = 0x6775626564;
  *(undefined8 *)(puVar1 + 0x38) = 0xe500000000000000;
  *(undefined8 *)(puVar1 + 0x40) = 0x6f666e69;
  *(undefined8 *)(puVar1 + 0x48) = 0xe400000000000000;
  *(undefined8 *)(puVar1 + 0x50) = 0x676e696e726177;
  *(undefined8 *)(puVar1 + 0x58) = 0xe700000000000000;
  *(undefined8 *)(puVar1 + 0x60) = 0x726f727265;
  *(undefined8 *)(puVar1 + 0x68) = 0xe500000000000000;
  *(undefined8 *)(puVar1 + 0x70) = 0x6c61746166;
  *(undefined8 *)(puVar1 + 0x78) = 0xe500000000000000;
  DAT_100b3a970 = puVar1;
  return;
}

