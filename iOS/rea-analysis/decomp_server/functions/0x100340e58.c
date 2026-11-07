// rea decompile_all
// name: thunk_FUN_100340e5c
// address: 0x100340e58
// body: available
// range: 0x100340e58-0x100340e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100340e5c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar1 = &DAT_100a84680;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_1,lVar2);
  _swift_storeEnumTagMultiPayload(puVar3,puVar1,0);
  (*param_3)(puVar3);
  FUN_100315050(puVar3);
  return;
}

