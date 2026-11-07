// rea decompile_all
// name: FUN_100314b4c
// address: 0x100314b4c
// body: available
// range: 0x100314b4c-0x100314c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314b4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  puVar4 = (undefined8 *)
           (&stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_100316f58(0,param_3,param_4);
  pcVar1 = *(code **)(param_1 + *(int *)(lVar3 + 0x28));
  *puVar4 = param_2;
  _swift_storeEnumTagMultiPayload(puVar4,puVar2,1);
  _swift_errorRetain(param_2);
  (*pcVar1)(puVar4);
  FUN_100315050(puVar4);
  return;
}

