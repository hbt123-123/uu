// rea decompile_all
// name: FUN_1003411e8
// address: 0x1003411e8
// body: available
// range: 0x1003411e8-0x1003412bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003411e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100a83318;
  FUN_100004bb4(&DAT_100a83318,&DAT_100817820);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_1000b142c(param_1,puVar1 + 0x20);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  puVar1 = &DAT_100a83308;
  FUN_100004bb4(&DAT_100a83308,&DAT_100817810);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_1000a0074(param_2,puVar1 + 0x20);
  FUN_10003f094(param_1);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}

