// rea decompile_all
// name: FUN_10079f7a0
// address: 0x10079f7a0
// body: available
// range: 0x10079f7a0-0x10079f7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10079f7a0(void *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x2728) < param_2) {
    uVar1 = 2;
  }
  else {
    _memcpy(*(void **)(param_3 + 0x2720),param_1,(long)param_2);
    uVar1 = 0;
    *(long *)(param_3 + 0x2720) = *(long *)(param_3 + 0x2720) + (long)param_2;
    *(int *)(param_3 + 0x2728) = *(int *)(param_3 + 0x2728) - param_2;
  }
  return uVar1;
}

