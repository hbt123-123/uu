// rea decompile_all
// name: FUN_10026f198
// address: 0x10026f198
// body: available
// range: 0x10026f198-0x10026f257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026f198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [40];
  
  puVar1 = &DAT_1009a9818;
  _swift_allocObject(&DAT_1009a9818,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  FUN_1000b142c(param_2,auStack_68);
  puVar2 = &DAT_1009a9840;
  _swift_allocObject(&DAT_1009a9840,0x40,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  thunk_FUN_1000a0074(auStack_68,puVar2 + 0x18);
  _swift_retain(puVar1);
  FUN_10026f32c(param_1,param_2,FUN_10026f320,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}

