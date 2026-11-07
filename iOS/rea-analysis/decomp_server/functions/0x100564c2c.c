// rea decompile_all
// name: FUN_100564c2c
// address: 0x100564c2c
// body: available
// range: 0x100564c2c-0x100564c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100564c2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    (**(code **)(param_4 + 0x28))(*puVar2,param_2,param_3,param_4);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (unaff_x21 == 0);
  return;
}

