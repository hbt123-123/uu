// rea decompile_all
// name: FUN_100091c90
// address: 0x100091c90
// body: available
// range: 0x100091c90-0x100091d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100091c90(undefined8 *param_1)

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
  FUN_100066d24(puVar2 + 0x20);
  _swift_bridgeObjectRelease(puVar1);
  puVar2 = &DAT_1000fa160;
  _swift_allocObject(&DAT_1000fa160,0x79,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x59) = 0;
  *(undefined8 *)(puVar2 + 0x51) = 0;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  puVar2[0x78] = 0xff;
  *param_1 = FUN_10009621c;
  param_1[1] = puVar2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

