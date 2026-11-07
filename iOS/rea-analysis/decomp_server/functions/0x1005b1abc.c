// rea decompile_all
// name: FUN_1005b1abc
// address: 0x1005b1abc
// body: available
// range: 0x1005b1abc-0x1005b1b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b1abc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  FUN_100008184(uVar4,uVar2);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar2;
  FUN_100006cdc(uVar1,uVar3);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x1d) = *(undefined1 *)((long)param_2 + 0x1d);
  *(undefined1 *)((long)param_1 + 0x1e) = *(undefined1 *)((long)param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0x1f) = *(undefined1 *)((long)param_2 + 0x1f);
  return param_1;
}

