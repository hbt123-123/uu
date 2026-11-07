// rea decompile_all
// name: FUN_10069bb58
// address: 0x10069bb58
// body: available
// range: 0x10069bb58-0x10069bbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10069bb58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x38);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0xffff;
  *(undefined4 *)((long)puVar1 + 0x24) = 0xffff;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *param_1 = puVar1;
  puVar2 = operator_new(0x18);
  puVar2[1] = 0x100000001;
  *puVar2 = &PTR_FUN_1009e69f8;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  FUN_10069af4c(param_1,param_2,0);
  return param_1;
}

