// rea decompile_all
// name: FUN_1000afb94
// address: 0x1000afb94
// body: available
// range: 0x1000afb94-0x1000afd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000afb94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_160 [144];
  undefined1 local_d0 [56];
  undefined1 local_98 [56];
  
  puVar2 = &DAT_100a76d38;
  FUN_100004bb4(&DAT_100a76d38,&USHORT_10080b960);
  puVar3 = puVar2;
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar1 = PTR___sSSN_1009957f8;
  *(undefined **)(puVar3 + 0x38) = PTR___sSSN_1009957f8;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_1009e61c8;
  puVar5 = (undefined8 *)(puVar3 + 0x20);
  *puVar5 = 0x785f61746c6564;
  *(undefined8 *)(puVar3 + 0x28) = 0xe700000000000000;
  thunk_FUN_10068573c(local_d0);
  _swift_setDeallocating(puVar3);
  uVar4 = *(undefined8 *)(puVar3 + 0x10);
  puVar3 = &DAT_100a76d40;
  FUN_100004bb4(&DAT_100a76d40,&DAT_10080d6b0);
  _swift_arrayDestroy(puVar5,uVar4,puVar3);
  FUN_1006893b4();
  FUN_1000abcec(local_d0);
  _swift_initStackObject(puVar2,auStack_160);
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_1009e61c8;
  *(undefined8 *)(puVar2 + 0x20) = 0x795f61746c6564;
  *(undefined8 *)(puVar2 + 0x28) = 0xe700000000000000;
  thunk_FUN_10068573c(local_98);
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),puVar3);
  FUN_1006893b4();
  FUN_1000abcec(param_1);
  FUN_1000abcec(local_98);
  return puVar5;
}

