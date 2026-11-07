// rea decompile_all
// name: FUN_10043d370
// address: 0x10043d370
// body: available
// range: 0x10043d370-0x10043d497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10043d370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
  uVar2 = param_2[0xb];
  uVar1 = param_2[0xc];
  FUN_100008184(uVar2,uVar1);
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar1;
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    param_1[0xd] = param_2[0xd];
    uVar2 = param_2[0xe];
    FUN_100008184(uVar2,uVar3);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  else {
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xf] = param_2[0xf];
  }
  uVar3 = param_2[0x12];
  if (uVar3 >> 0x3c < 0xf) {
    param_1[0x10] = param_2[0x10];
    uVar2 = param_2[0x11];
    FUN_100008184(uVar2,uVar3);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  return param_1;
}

