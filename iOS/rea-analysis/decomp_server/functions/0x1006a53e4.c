// rea decompile_all
// name: FUN_1006a53e4
// address: 0x1006a53e4
// body: available
// range: 0x1006a53e4-0x1006a548b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 *
FUN_1006a53e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = *param_4;
  if (*(char *)((long)param_4 + 0x1f) < '\0') {
    FUN_100384eb8(param_1 + 3,param_4[1],param_4[2]);
  }
  else {
    uVar2 = param_4[2];
    uVar1 = param_4[1];
    param_1[5] = param_4[3];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  if (*(char *)((long)param_4 + 0x37) < '\0') {
    FUN_100384eb8(param_1 + 6,param_4[4],param_4[5]);
  }
  else {
    uVar2 = param_4[5];
    uVar1 = param_4[4];
    param_1[8] = param_4[6];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
  }
  if (*(char *)((long)param_4 + 0x4f) < '\0') {
    FUN_100384eb8(param_1 + 9,param_4[7],param_4[8]);
  }
  else {
    uVar2 = param_4[8];
    uVar1 = param_4[7];
    param_1[0xb] = param_4[9];
    param_1[10] = uVar2;
    param_1[9] = uVar1;
  }
  return param_1;
}

