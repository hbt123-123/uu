// rea decompile_all
// name: FUN_10069ba2c
// address: 0x10069ba2c
// body: available
// range: 0x10069ba2c-0x10069bad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


string * FUN_10069ba2c(string *param_1)

{
  undefined8 *puVar1;
  runtime_error *in_x4;
  undefined8 in_x5;
  string *psVar2;
  
  psVar2 = param_1;
  std::runtime_error::runtime_error(in_x4,param_1);
  *(runtime_error **)(psVar2 + 0x10) = in_x4;
  *(undefined8 *)(psVar2 + 0x18) = in_x5;
  *(undefined8 *)(psVar2 + 0x28) = 0;
  *(undefined8 *)(psVar2 + 0x30) = 0;
  *(undefined8 *)(psVar2 + 0x20) = 0;
  *(undefined ***)psVar2 = &PTR_FUN_1009e6910;
  *(undefined8 *)(psVar2 + 0x40) = 0;
  psVar2 = psVar2 + 0x38;
  *(undefined8 *)psVar2 = 0;
  puVar1 = operator_new(0x48);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  FUN_10069b66c(psVar2,puVar1);
  std::string::operator=((string *)in_x4,*(string **)psVar2);
  std::string::operator=((string *)in_x4,(string *)(*(long *)psVar2 + 0x18));
  return param_1;
}

