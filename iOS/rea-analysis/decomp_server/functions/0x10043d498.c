// rea decompile_all
// name: FUN_10043d498
// address: 0x10043d498
// body: available
// range: 0x10043d498-0x10043d6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10043d498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar3;
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar3;
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  uVar3 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar3;
  uVar3 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar3;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar3;
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
  uVar3 = param_2[0xb];
  uVar1 = param_2[0xc];
  FUN_100008184(uVar3,uVar1);
  uVar4 = param_1[0xb];
  uVar2 = param_1[0xc];
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar1;
  FUN_100006cdc(uVar4,uVar2);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
      uVar3 = param_2[0xe];
      uVar1 = param_2[0xf];
      FUN_100008184(uVar3,uVar1);
      uVar4 = param_1[0xe];
      uVar2 = param_1[0xf];
      param_1[0xe] = uVar3;
      param_1[0xf] = uVar1;
      FUN_100006cdc(uVar4,uVar2);
    }
    else {
      FUN_10043d6a8(param_1 + 0xd);
      uVar3 = param_2[0xf];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      param_1[0xf] = uVar3;
    }
  }
  else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    FUN_100008184(uVar3,uVar4);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
  }
  else {
    uVar4 = param_2[0xe];
    uVar3 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar3;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)((long)param_2 + 0x84);
      uVar3 = param_2[0x11];
      uVar1 = param_2[0x12];
      FUN_100008184(uVar3,uVar1);
      uVar4 = param_1[0x11];
      uVar2 = param_1[0x12];
      param_1[0x11] = uVar3;
      param_1[0x12] = uVar1;
      FUN_100006cdc(uVar4,uVar2);
    }
    else {
      FUN_10043d6a8(param_1 + 0x10);
      uVar3 = param_2[0x12];
      uVar4 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      param_1[0x12] = uVar3;
    }
  }
  else if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)((long)param_2 + 0x84);
    uVar3 = param_2[0x11];
    uVar4 = param_2[0x12];
    FUN_100008184(uVar3,uVar4);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar4;
  }
  else {
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
  }
  return param_1;
}

