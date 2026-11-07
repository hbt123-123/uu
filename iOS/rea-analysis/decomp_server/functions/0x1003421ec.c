// rea decompile_all
// name: FUN_1003421ec
// address: 0x1003421ec
// body: available
// range: 0x1003421ec-0x1003422c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003421ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  FUN_1000b142c(param_1,auStack_48);
  FUN_1000b142c(param_2,auStack_70);
  FUN_10034269c();
  _swift_allocObject();
  puVar1 = &DAT_100a83318;
  FUN_100004bb4(&DAT_100a83318,&DAT_100817820);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_1000b142c(auStack_48,puVar1 + 0x20);
  *(undefined **)(param_2 + 0x10) = puVar1;
  puVar1 = &DAT_100a83308;
  FUN_100004bb4(&DAT_100a83308,&DAT_100817810);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  FUN_1000a0074(auStack_70,puVar1 + 0x20);
  FUN_10003f094(auStack_48);
  *(undefined **)(param_2 + 0x18) = puVar1;
  return param_2;
}

