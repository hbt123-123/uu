// rea decompile_all
// name: FUN_10043d9a4
// address: 0x10043d9a4
// body: available
// range: 0x10043d9a4-0x10043da1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_10043d9a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  FUN_100008184(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  FUN_100006cdc(uVar1,uVar3);
  return param_1;
}

