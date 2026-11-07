// rea decompile_all
// name: FUN_1002666ec
// address: 0x1002666ec
// body: available
// range: 0x1002666ec-0x10026692b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100266784) */
/* WARNING: Removing unreachable block (ram,0x0001002667c4) */
/* WARNING: Removing unreachable block (ram,0x00010026685c) */
/* WARNING: Removing unreachable block (ram,0x0001002667d4) */
/* WARNING: Removing unreachable block (ram,0x0001002668b8) */
/* WARNING: Removing unreachable block (ram,0x0001002668c4) */
/* WARNING: Removing unreachable block (ram,0x0001002667dc) */
/* WARNING: Removing unreachable block (ram,0x0001002668a4) */

void FUN_1002666ec(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_90 [48];
  
  puVar1 = &DAT_100a81330;
  FUN_100004bb4(&DAT_100a81330,&DAT_1008154d8);
  puVar3 = auStack_90 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar4 = (long)puVar3 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10026162c(lVar4);
  (**(code **)(lVar5 + 0x10))(puVar3,lVar4,lVar2);
  _swift_storeEnumTagMultiPayload(puVar3,puVar1,0);
  (*param_2)(puVar3);
  FUN_10026692c(puVar3);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return;
}

