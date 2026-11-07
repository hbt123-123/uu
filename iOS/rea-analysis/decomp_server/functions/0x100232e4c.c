// rea decompile_all
// name: FUN_100232e4c
// address: 0x100232e4c
// body: available
// range: 0x100232e4c-0x100232f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100232e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100a7f178;
  FUN_100004bb4(&DAT_100a7f178,&DAT_100814010);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6d616e5f65676170;
  *(undefined **)(puVar1 + 0x48) = PTR___sSSN_1009957f8;
  *(undefined8 *)(puVar1 + 0x28) = 0xe900000000000065;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar1;
  FUN_100234418(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100040bb4(puVar1 + 0x20,&DAT_100a7f180,&DAT_100813c98);
  FUN_100232e2c();
  _objc_allocWithZone();
  FUN_100233c5c(0xd000000000000011,0x80000001008a6040,puVar2);
  return;
}

