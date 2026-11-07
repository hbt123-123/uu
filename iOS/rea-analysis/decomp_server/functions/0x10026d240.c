// rea decompile_all
// name: FUN_10026d240
// address: 0x10026d240
// body: available
// range: 0x10026d240-0x10026d2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026d240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_10026d888(param_2,param_1);
  lVar2 = 0;
  FUN_10026d8cc();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x18));
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x1c));
  *puVar1 = param_7;
  puVar1[1] = param_8;
  return;
}

