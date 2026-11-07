// rea decompile_all
// name: FUN_10078cb0c
// address: 0x10078cb0c
// body: available
// range: 0x10078cb0c-0x10078cb6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10078cb0c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_10078cb8c(param_1,param_2[1] - *param_2 >> 3);
    puVar1 = (undefined8 *)param_2[1];
    puVar2 = (undefined8 *)param_1[1];
    for (puVar3 = (undefined8 *)*param_2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = puVar2;
  }
  return param_1;
}

