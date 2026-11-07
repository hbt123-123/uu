// rea decompile_all
// name: FUN_1006a8708
// address: 0x1006a8708
// body: available
// range: 0x1006a8708-0x1006a878f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1006a8708(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1009e6d40;
  FUN_100692acc(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = param_4;
  pvVar1 = operator_new(0x60);
  thunk_FUN_1006aa440(pvVar1,param_5);
  param_1[6] = pvVar1;
  FUN_1006aa9a4();
  *(char *)(param_1 + 7) = (char)pvVar1;
  FUN_100692ed4(param_1 + 1,param_2,param_3);
  FUN_1006a8790(param_1);
  return param_1;
}

