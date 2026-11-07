// rea decompile_all
// name: FUN_1002be0a0
// address: 0x1002be0a0
// body: available
// range: 0x1002be0a0-0x1002be133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002be0a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100a833d8;
  FUN_100004bb4(&DAT_100a833d8,&DAT_1008178b0);
  puVar3 = &DAT_100a81c00;
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1002be134();
  _swift_arrayDestroy(puVar1 + 0x20,3,PTR___sSSN_1009957f8);
  DAT_100b36480 = 0x452d747065636341;
  DAT_100b36488 = 0xef676e69646f636e;
  DAT_100b36490 = puVar2;
  DAT_100b36498 = puVar3;
  return;
}

