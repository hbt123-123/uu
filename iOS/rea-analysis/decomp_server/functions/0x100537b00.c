// rea decompile_all
// name: FUN_100537b00
// address: 0x100537b00
// body: available
// range: 0x100537b00-0x100537be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100537b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,long param_8,long param_9
                  )

{
  long unaff_x21;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_10053781c(&local_70,param_4,param_5,param_6,param_7,param_8,
                PTR___s10Foundation4DataVN_1009961e8,param_9,&PTR_PTR_1009d16b0);
  FUN_1005187f8(param_4);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  FUN_100006cdc(param_2,param_3);
  return;
}

