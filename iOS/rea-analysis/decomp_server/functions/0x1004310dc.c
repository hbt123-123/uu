// rea decompile_all
// name: FUN_1004310dc
// address: 0x1004310dc
// body: available
// range: 0x1004310dc-0x10043114b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_1004310dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar4 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  FUN_100008184(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar2;
  FUN_100006cdc(uVar1,uVar3);
  return param_1;
}

