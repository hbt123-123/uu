// rea decompile_all
// name: FUN_100545ab4
// address: 0x100545ab4
// body: available
// range: 0x100545ab4-0x100545b17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100545ab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = *(undefined1 *)((long)param_2 + 0x21);
  uVar3 = *(undefined1 *)(param_2 + 4);
  FUN_10050f830(uVar4,uVar1,uVar3,uVar2);
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  return param_1;
}

