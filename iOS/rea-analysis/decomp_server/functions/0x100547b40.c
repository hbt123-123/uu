// rea decompile_all
// name: FUN_100547b40
// address: 0x100547b40
// body: available
// range: 0x100547b40-0x100547bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100547b40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __sSqMa(0,param_3);
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar2,1,1,param_3);
  FUN_100546cb4(param_1,puVar2,param_2,lVar1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

