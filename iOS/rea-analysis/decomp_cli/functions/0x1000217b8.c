// rea decompile_all
// name: FUN_1000217b8
// address: 0x1000217b8
// body: available
// range: 0x1000217b8-0x10002185f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000217b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100102bd0;
  FUN_10000eb08(&DAT_100102bd0,&DAT_1000cf760);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = puVar1;
  FUN_100021924();
  uVar3 = 0;
  uVar4 = 0;
  FUN_1000768b4(0,0,1,param_1,puVar2);
  *(undefined **)(puVar1 + 0x38) = PTR___sSSN_1000f02f8;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  __ss5print_9separator10terminatoryypd_S2StF(puVar1,0x20,0xe100000000000000,10,0xe100000000000000);
  _swift_bridgeObjectRelease(puVar1);
  return;
}

