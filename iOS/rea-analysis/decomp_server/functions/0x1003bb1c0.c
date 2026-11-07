// rea decompile_all
// name: FUN_1003bb1c0
// address: 0x1003bb1c0
// body: available
// range: 0x1003bb1c0-0x1003bb2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003bb1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x4c) = *(undefined1 *)((long)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x54) = *(undefined1 *)((long)param_2 + 0x54);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x10];
  uVar1 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x8c) = *(undefined1 *)((long)param_2 + 0x8c);
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}

