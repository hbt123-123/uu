// rea decompile_all
// name: FUN_10069e960
// address: 0x10069e960
// body: available
// range: 0x10069e960-0x10069e9cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069e960(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  void *local_58 [2];
  char local_41;
  void *local_40;
  char local_29;
  
  uStack_78 = param_2[1];
  local_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  local_60 = param_2[4];
  FUN_10069f0c8(local_58,param_2 + 5);
  FUN_10069ec2c(param_1,&local_80);
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}

