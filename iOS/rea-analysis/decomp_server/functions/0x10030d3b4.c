// rea decompile_all
// name: FUN_10030d3b4
// address: 0x10030d3b4
// body: available
// range: 0x10030d3b4-0x10030d42f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10030d3b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  pcVar2 = *(code **)(*(long *)(lVar1 + -8) + 0x28);
  (*pcVar2)(param_1,param_2,lVar1);
  (*pcVar2)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  return param_1;
}

