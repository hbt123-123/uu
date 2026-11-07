// rea decompile_all
// name: thunk_FUN_100515d7c
// address: 0x100515bcc
// body: available
// range: 0x100515bcc-0x100515bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_100515d7c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  uVar1 = lVar3 + param_1 & 0xfffffffffffffff8;
  uVar2 = lVar3 + param_2 & 0xfffffffffffffff8;
  lVar3 = *(long *)(uVar2 + 0x18);
  *(long *)(uVar1 + 0x18) = lVar3;
  *(undefined8 *)(uVar1 + 0x20) = *(undefined8 *)(uVar2 + 0x20);
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  return param_1;
}

