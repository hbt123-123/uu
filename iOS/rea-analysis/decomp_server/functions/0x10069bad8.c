// rea decompile_all
// name: FUN_10069bad8
// address: 0x10069bad8
// body: available
// range: 0x10069bad8-0x10069bb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


string * FUN_10069bad8(string *param_1,undefined8 param_2,runtime_error *param_3,undefined8 param_4)

{
  string *psVar1;
  undefined8 *puVar2;
  
  psVar1 = param_1;
  std::runtime_error::runtime_error(param_3,param_1);
  *(runtime_error **)(psVar1 + 0x10) = param_3;
  *(undefined8 *)(psVar1 + 0x18) = param_4;
  *(undefined8 *)(psVar1 + 0x28) = 0;
  *(undefined8 *)(psVar1 + 0x30) = 0;
  *(undefined8 *)(psVar1 + 0x20) = 0;
  *(undefined ***)psVar1 = &PTR_FUN_1009e6910;
  *(undefined8 *)(psVar1 + 0x40) = 0;
  *(undefined8 *)(psVar1 + 0x38) = 0;
  puVar2 = operator_new(0x48);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  FUN_10069b66c(psVar1 + 0x38,puVar2);
  return param_1;
}

