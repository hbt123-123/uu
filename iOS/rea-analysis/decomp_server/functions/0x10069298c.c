// rea decompile_all
// name: FUN_10069298c
// address: 0x10069298c
// body: available
// range: 0x10069298c-0x1006929f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10069298c(undefined8 *param_1,undefined8 *param_2)

{
  string *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  std::string::operator=(unaff_x20,(string *)(param_1 + 5));
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    *(undefined4 *)param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined1 *)((long)param_1 + 0x57) = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}

