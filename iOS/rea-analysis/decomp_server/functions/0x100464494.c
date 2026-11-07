// rea decompile_all
// name: FUN_100464494
// address: 0x100464494
// body: available
// range: 0x100464494-0x100464557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100464494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar4;
  uVar4 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar4;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  uVar4 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar4;
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  uVar4 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar4;
  uVar4 = param_2[0xc];
  uVar2 = param_2[0xd];
  FUN_100008184(uVar4,uVar2);
  uVar1 = param_1[0xc];
  uVar3 = param_1[0xd];
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar2;
  FUN_100006cdc(uVar1,uVar3);
  return param_1;
}

