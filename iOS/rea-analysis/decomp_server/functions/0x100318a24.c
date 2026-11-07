// rea decompile_all
// name: FUN_100318a24
// address: 0x100318a24
// body: available
// range: 0x100318a24-0x100318b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100318a24(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  
  puVar2 = &DAT_100a83368;
  FUN_100004bb4(&DAT_100a83368,&DAT_100817860);
  puVar4 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_3,puVar4,&DAT_100a82c60,&DAT_100817220);
  puVar3 = &DAT_100a83370;
  FUN_100004bb4(&DAT_100a83370,&DAT_10081a220);
  _swift_storeEnumTagMultiPayload(puVar4,puVar3,0);
  iVar1 = *(int *)(puVar2 + 0x2c);
  _swift_weakInit(puVar4 + iVar1,0);
  _swift_weakAssign(puVar4 + iVar1,param_4);
  (*param_1)(puVar4);
  FUN_100040bb4(puVar4,&DAT_100a83368,&DAT_100817860);
  return;
}

