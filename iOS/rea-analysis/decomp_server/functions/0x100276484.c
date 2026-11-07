// rea decompile_all
// name: FUN_100276484
// address: 0x100276484
// body: available
// range: 0x100276484-0x1002764f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100276484(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100a82208;
  FUN_100004bb4(&DAT_100a82208,&DAT_100817900);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  uVar2 = 0;
  FUN_1002c2264();
  uVar3 = uVar2;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x38) = uVar2;
  *(undefined ***)(puVar1 + 0x40) = &PTR_PTR_1009ad308;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  return puVar1;
}

