// rea decompile_all
// name: FUN_10006aab0
// address: 0x10006aab0
// body: available
// range: 0x10006aab0-0x10006ab2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006aab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  FUN_10006affc();
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x28)) = 0;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c));
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  lVar3 = 0;
  FUN_100098548(0,param_3);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x24)) = 0;
  return;
}

