// rea decompile_all
// name: FUN_10038fa08
// address: 0x10038fa08
// body: available
// range: 0x10038fa08-0x10038fa8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038fa08(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  
  uStack_48 = param_2[1];
  local_50 = (void *)*param_2;
  local_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = 7;
  if (param_4 != 0) {
    uVar1 = 1;
  }
  FUN_10038f858(param_1,&local_50,uVar1);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(char *)(param_1 + 0x30) = (char)param_4;
  FUN_10038fabc(param_1,param_3);
  return param_1;
}

