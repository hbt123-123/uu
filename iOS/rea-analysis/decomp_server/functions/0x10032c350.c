// rea decompile_all
// name: FUN_10032c350
// address: 0x10032c350
// body: available
// range: 0x10032c350-0x10032c3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10032c350(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  __sScS8IteratorVMa(0,*(undefined8 *)(param_3 + 0x10));
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  lVar1 = (long)*(int *)(param_3 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
  _swift_release(uVar2);
  return param_1;
}

